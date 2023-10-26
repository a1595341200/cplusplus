#include <Log.h>

#include <deque>
#include <forward_list>
#include <list>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <valarray>

#include <gtest/gtest.h>
#include <nlohmann/json.hpp>

TEST(nlohmann, accept) {  // a valid JSON text
  auto valid_text = R"(
    {
        "numbers": [1, 2, 3]
    }
    )";

  // an invalid JSON text
  auto invalid_text = R"(
    {
        "strings": ["extra", "comma", ]
    }
    )";

  SLOG(INFO) << std::boolalpha << nlohmann::json::accept(valid_text) << ' '
             << nlohmann::json::accept(invalid_text) << '\n';
}

TEST(nlohmann, array) {
  using json = nlohmann::json;

  // create JSON arrays
  json j_no_init_list = json::array();
  json j_empty_init_list = json::array({});
  json j_nonempty_init_list = json::array({1, 2, 3, 4});
  json j_list_of_pairs = json::array({{"one", 1}, {"two", 2}});

  // serialize the JSON arrays
  SLOG(INFO) << j_no_init_list << '\n';
  SLOG(INFO) << j_empty_init_list << '\n';
  SLOG(INFO) << j_nonempty_init_list << '\n';
  SLOG(INFO) << j_list_of_pairs << '\n';
}

TEST(nlohmann, at__json_pointer_const) {
  using json = nlohmann::json;

  // create a JSON value
  const json j = {{"number", 1}, {"string", "foo"}, {"array", {1, 2}}};

  // read-only access

  // output element with JSON pointer "/number"
  SLOG(INFO) << j.at("/number"_json_pointer) << '\n';
  // output element with JSON pointer "/string"
  SLOG(INFO) << j.at("/string"_json_pointer) << '\n';
  // output element with JSON pointer "/array"
  SLOG(INFO) << j.at("/array"_json_pointer) << '\n';
  // output element with JSON pointer "/array/1"
  SLOG(INFO) << j.at("/array/1"_json_pointer) << '\n';

  // out_of_range.109
  try {
    // try to use an array index that is not a number
    json::const_reference ref = j.at("/array/one"_json_pointer);
  } catch (json::parse_error& e) {
    SLOG(INFO) << e.what() << '\n';
  }

  // out_of_range.401
  try {
    // try to use an invalid array index
    json::const_reference ref = j.at("/array/4"_json_pointer);
  } catch (json::out_of_range& e) {
    SLOG(INFO) << e.what() << '\n';
  }

  // out_of_range.402
  try {
    // try to use the array index '-'
    json::const_reference ref = j.at("/array/-"_json_pointer);
  } catch (json::out_of_range& e) {
    SLOG(INFO) << e.what() << '\n';
  }

  // out_of_range.403
  try {
    // try to use a JSON pointer to a nonexistent object key
    json::const_reference ref = j.at("/foo"_json_pointer);
  } catch (json::out_of_range& e) {
    SLOG(INFO) << e.what() << '\n';
  }

  // out_of_range.404
  try {
    // try to use a JSON pointer that cannot be resolved
    json::const_reference ref = j.at("/number/foo"_json_pointer);
  } catch (json::out_of_range& e) {
    SLOG(INFO) << e.what() << '\n';
  }
}

TEST(nlohmann, at__json_pointer) {
  using json = nlohmann::json;
  using namespace nlohmann::literals;

  // create a JSON value
  json j = {{"number", 1}, {"string", "foo"}, {"array", {1, 2}}};

  // read-only access

  // output element with JSON pointer "/number"
  SLOG(INFO) << j.at("/number"_json_pointer) << '\n';
  // output element with JSON pointer "/string"
  SLOG(INFO) << j.at("/string"_json_pointer) << '\n';
  // output element with JSON pointer "/array"
  SLOG(INFO) << j.at("/array"_json_pointer) << '\n';
  // output element with JSON pointer "/array/1"
  SLOG(INFO) << j.at("/array/1"_json_pointer) << '\n';

  // writing access

  // change the string
  j.at("/string"_json_pointer) = "bar";
  // output the changed string
  SLOG(INFO) << j["string"] << '\n';

  // change an array element
  j.at("/array/1"_json_pointer) = 21;
  // output the changed array
  SLOG(INFO) << j["array"] << '\n';

  // out_of_range.106
  try {
    // try to use an array index with leading '0'
    json::reference ref = j.at("/array/01"_json_pointer);
  } catch (json::parse_error& e) {
    SLOG(INFO) << e.what() << '\n';
  }

  // out_of_range.109
  try {
    // try to use an array index that is not a number
    json::reference ref = j.at("/array/one"_json_pointer);
  } catch (json::parse_error& e) {
    SLOG(INFO) << e.what() << '\n';
  }

  // out_of_range.401
  try {
    // try to use an invalid array index
    json::reference ref = j.at("/array/4"_json_pointer);
  } catch (json::out_of_range& e) {
    SLOG(INFO) << e.what() << '\n';
  }

  // out_of_range.402
  try {
    // try to use the array index '-'
    json::reference ref = j.at("/array/-"_json_pointer);
  } catch (json::out_of_range& e) {
    SLOG(INFO) << e.what() << '\n';
  }

  // out_of_range.403
  try {
    // try to use a JSON pointer to a nonexistent object key
    json::const_reference ref = j.at("/foo"_json_pointer);
  } catch (json::out_of_range& e) {
    SLOG(INFO) << e.what() << '\n';
  }

  // out_of_range.404
  try {
    // try to use a JSON pointer that cannot be resolved
    json::reference ref = j.at("/number/foo"_json_pointer);
  } catch (json::out_of_range& e) {
    SLOG(INFO) << e.what() << '\n';
  }
}

TEST(nlohmann, back) {
  using json = nlohmann::json;
  // create JSON values
  json j_boolean = true;
  json j_number_integer = 17;
  json j_number_float = 23.42;
  json j_object = {{"one", 1}, {"two", 2}};
  json j_object_empty(json::value_t::object);
  json j_array = {1, 2, 4, 8, 16};
  json j_array_empty(json::value_t::array);
  json j_string = "Hello, world";

  // call back()
  SLOG(INFO) << j_boolean.back() << '\n';
  SLOG(INFO) << j_number_integer.back() << '\n';
  SLOG(INFO) << j_number_float.back() << '\n';
  SLOG(INFO) << j_object.back() << '\n';
  // SLOG(INFO) << j_object_empty.back() << '\n';  // undefined behavior
  SLOG(INFO) << j_array.back() << '\n';
  // SLOG(INFO) << j_array_empty.back() << '\n';   // undefined behavior
  SLOG(INFO) << j_string.back() << '\n';

  // back() called on a null value
  try {
    json j_null;
    j_null.back();
  } catch (json::invalid_iterator& e) {
    SLOG(INFO) << e.what() << '\n';
  }
}

TEST(nlohmann, basic_json__basic_json) {  // create a JSON array
  using json = nlohmann::json;

  json j1 = {"one", "two", 3, 4.5, false};

  // create a copy
  json j2(j1);

  // serialize the JSON array
  SLOG(INFO) << j1 << " = " << j2 << '\n';
  SLOG(INFO) << std::boolalpha << (j1 == j2) << '\n';
}

TEST(nlohmann, basic_json__CompatibleType) {
  using json = nlohmann::json;

  // ============
  // object types
  // ============

  // create an object from an object_t value
  json::object_t object_value = {{"one", 1}, {"two", 2}};
  json j_object_t(object_value);

  // create an object from std::map
  std::map<std::string, int> c_map{{"one", 1}, {"two", 2}, {"three", 3}};
  json j_map(c_map);

  // create an object from std::unordered_map
  std::unordered_map<const char*, double> c_umap{{"one", 1.2}, {"two", 2.3}, {"three", 3.4}};
  json j_umap(c_umap);

  // create an object from std::multimap
  std::multimap<std::string, bool> c_mmap{
      {"one", true}, {"two", true}, {"three", false}, {"three", true}};
  json j_mmap(c_mmap);  // only one entry for key "three" is used

  // create an object from std::unordered_multimap
  std::unordered_multimap<std::string, bool> c_ummap{
      {"one", true}, {"two", true}, {"three", false}, {"three", true}};
  json j_ummap(c_ummap);  // only one entry for key "three" is used

  // serialize the JSON objects
  SLOG(INFO) << j_object_t << '\n';
  SLOG(INFO) << j_map << '\n';
  SLOG(INFO) << j_umap << '\n';
  SLOG(INFO) << j_mmap << '\n';
  SLOG(INFO) << j_ummap << "\n\n";

  // ===========
  // array types
  // ===========

  // create an array from an array_t value
  json::array_t array_value = {"one", "two", 3, 4.5, false};
  json j_array_t(array_value);

  // create an array from std::vector
  std::vector<int> c_vector{1, 2, 3, 4};
  json j_vec(c_vector);

  // create an array from std::valarray
  std::valarray<short> c_valarray{10, 9, 8, 7};
  json j_valarray(c_valarray);

  // create an array from std::deque
  std::deque<double> c_deque{1.2, 2.3, 3.4, 5.6};
  json j_deque(c_deque);

  // create an array from std::list
  std::list<bool> c_list{true, true, false, true};
  json j_list(c_list);

  // create an array from std::forward_list
  std::forward_list<std::int64_t> c_flist{12345678909876, 23456789098765, 34567890987654,
                                          45678909876543};
  json j_flist(c_flist);

  // create an array from std::array
  std::array<unsigned long, 4> c_array{{1, 2, 3, 4}};
  json j_array(c_array);

  // create an array from std::set
  std::set<std::string> c_set{"one", "two", "three", "four", "one"};
  json j_set(c_set);  // only one entry for "one" is used

  // create an array from std::unordered_set
  std::unordered_set<std::string> c_uset{"one", "two", "three", "four", "one"};
  json j_uset(c_uset);  // only one entry for "one" is used

  // create an array from std::multiset
  std::multiset<std::string> c_mset{"one", "two", "one", "four"};
  json j_mset(c_mset);  // both entries for "one" are used

  // create an array from std::unordered_multiset
  std::unordered_multiset<std::string> c_umset{"one", "two", "one", "four"};
  json j_umset(c_umset);  // both entries for "one" are used

  // serialize the JSON arrays
  SLOG(INFO) << j_array_t << '\n';
  SLOG(INFO) << j_vec << '\n';
  SLOG(INFO) << j_valarray << '\n';
  SLOG(INFO) << j_deque << '\n';
  SLOG(INFO) << j_list << '\n';
  SLOG(INFO) << j_flist << '\n';
  SLOG(INFO) << j_array << '\n';
  SLOG(INFO) << j_set << '\n';
  SLOG(INFO) << j_uset << '\n';
  SLOG(INFO) << j_mset << '\n';
  SLOG(INFO) << j_umset << "\n\n";

  // ============
  // string types
  // ============

  // create string from a string_t value
  json::string_t string_value = "The quick brown fox jumps over the lazy dog.";
  json j_string_t(string_value);

  // create a JSON string directly from a string literal
  json j_string_literal("The quick brown fox jumps over the lazy dog.");

  // create string from std::string
  std::string s_stdstring = "The quick brown fox jumps over the lazy dog.";
  json j_stdstring(s_stdstring);

  // serialize the JSON strings
  SLOG(INFO) << j_string_t << '\n';
  SLOG(INFO) << j_string_literal << '\n';
  SLOG(INFO) << j_stdstring << "\n\n";

  // ============
  // number types
  // ============

  // create a JSON number from number_integer_t
  json::number_integer_t value_integer_t = -42;
  json j_integer_t(value_integer_t);

  // create a JSON number from number_unsigned_t
  json::number_integer_t value_unsigned_t = 17;
  json j_unsigned_t(value_unsigned_t);

  // create a JSON number from an anonymous enum
  enum { enum_value = 17 };
  json j_enum(enum_value);

  // create values of different integer types
  short n_short = 42;
  int n_int = -23;
  long n_long = 1024;
  int_least32_t n_int_least32_t = -17;
  uint8_t n_uint8_t = 8;

  // create (integer) JSON numbers
  json j_short(n_short);
  json j_int(n_int);
  json j_long(n_long);
  json j_int_least32_t(n_int_least32_t);
  json j_uint8_t(n_uint8_t);

  // create values of different floating-point types
  json::number_float_t v_ok = 3.141592653589793;
  json::number_float_t v_nan = NAN;
  json::number_float_t v_infinity = INFINITY;

  // create values of different floating-point types
  float n_float = 42.23;
  float n_float_nan = 1.0f / 0.0f;
  double n_double = 23.42;

  // create (floating point) JSON numbers
  json j_ok(v_ok);
  json j_nan(v_nan);
  json j_infinity(v_infinity);
  json j_float(n_float);
  json j_float_nan(n_float_nan);
  json j_double(n_double);

  // serialize the JSON numbers
  SLOG(INFO) << j_integer_t << '\n';
  SLOG(INFO) << j_unsigned_t << '\n';
  SLOG(INFO) << j_enum << '\n';
  SLOG(INFO) << j_short << '\n';
  SLOG(INFO) << j_int << '\n';
  SLOG(INFO) << j_long << '\n';
  SLOG(INFO) << j_int_least32_t << '\n';
  SLOG(INFO) << j_uint8_t << '\n';
  SLOG(INFO) << j_ok << '\n';
  SLOG(INFO) << j_nan << '\n';
  SLOG(INFO) << j_infinity << '\n';
  SLOG(INFO) << j_float << '\n';
  SLOG(INFO) << j_float_nan << '\n';
  SLOG(INFO) << j_double << "\n\n";

  // =============
  // boolean types
  // =============

  // create boolean values
  json j_truth = true;
  json j_falsity = false;

  // serialize the JSON booleans
  SLOG(INFO) << j_truth << '\n';
  SLOG(INFO) << j_falsity << '\n';
}

TEST(nlohmann, basic_json__InputIt_InputIt) {
  using json = nlohmann::json;

  // create JSON values
  json j_array = {"alpha", "bravo", "charly", "delta", "easy"};
  json j_number = 42;
  json j_object = {{"one", "eins"}, {"two", "zwei"}};

  // create copies using iterators
  json j_array_range(j_array.begin() + 1, j_array.end() - 2);
  json j_number_range(j_number.begin(), j_number.end());
  json j_object_range(j_object.begin(), j_object.find("two"));

  // serialize the values
  SLOG(INFO) << j_array_range << '\n';
  SLOG(INFO) << j_number_range << '\n';
  SLOG(INFO) << j_object_range << '\n';

  // example for an exception
  try {
    json j_invalid(j_number.begin() + 1, j_number.end());
  } catch (json::invalid_iterator& e) {
    SLOG(INFO) << e.what() << '\n';
  }
}

using json = nlohmann::json;
TEST(nlohmann, binary) {  // create a binary vector
  std::vector<std::uint8_t> vec = {0xCA, 0xFE, 0xBA, 0xBE};

  // create a binary JSON value with subtype 42
  json j = json::binary(vec, 42);

  // output type and subtype
  std::cout << "type: " << j.type_name() << ", subtype: " << j.get_binary().subtype() << std::endl;
}

TEST(nlohmann, byte_container_with_subtype__byte_container_with_subtype) {
  using json = nlohmann::json;

  using byte_container_with_subtype =
      nlohmann::byte_container_with_subtype<std::vector<std::uint8_t>>;

  // (1) create empty container
  auto c1 = byte_container_with_subtype();

  std::vector<std::uint8_t> bytes = {{0xca, 0xfe, 0xba, 0xbe}};

  // (2) create container
  auto c2 = byte_container_with_subtype(bytes);

  // (3) create container with subtype
  auto c3 = byte_container_with_subtype(bytes, 42);

  std::cout << json(c1) << "\n" << json(c2) << "\n" << json(c3) << std::endl;
}

TEST(nlohmann, contains__json_pointer) {
  using json = nlohmann::json;
  using namespace nlohmann::literals;
  // create a JSON value
  json j = {{"number", 1}, {"string", "foo"}, {"array", {1, 2}}};

  std::cout << std::boolalpha << j.contains("/number"_json_pointer) << '\n'
            << j.contains("/string"_json_pointer) << '\n'
            << j.contains("/array"_json_pointer) << '\n'
            << j.contains("/array/1"_json_pointer) << '\n'
            << j.contains("/array/-"_json_pointer) << '\n'
            << j.contains("/array/4"_json_pointer) << '\n'
            << j.contains("/baz"_json_pointer) << std::endl;

  try {
    // try to use an array index with leading '0'
    j.contains("/array/01"_json_pointer);
  } catch (json::parse_error& e) {
    std::cout << e.what() << '\n';
  }

  try {
    // try to use an array index that is not a number
    j.contains("/array/one"_json_pointer);
  } catch (json::parse_error& e) {
    std::cout << e.what() << '\n';
  }
}

TEST(nlohmann, diff) {
  using json = nlohmann::json;
  using namespace nlohmann::literals;
  // the source document
  json source = R"(
        {
            "baz": "qux",
            "foo": "bar"
        }
    )"_json;

  // the target document
  json target = R"(
        {
            "baz": "boo",
            "hello": [
                "world"
            ]
        }
    )"_json;

  // create the patch
  json patch = json::diff(source, target);

  // roundtrip
  json patched_source = source.patch(patch);

  // output patch and roundtrip result
  std::cout << std::setw(4) << patch << "\n\n" << std::setw(4) << patched_source << std::endl;
}

TEST(nlohmann, dump) {
  using json = nlohmann::json;
  // create JSON values
  json j_object = {{"one", 1}, {"two", 2}};
  json j_array = {1, 2, 4, 8, 16};
  json j_string = "Hellö 😀!";

  // call dump()
  std::cout << "objects:" << '\n'
            << j_object.dump() << "\n\n"
            << j_object.dump(-1) << "\n\n"
            << j_object.dump(0) << "\n\n"
            << j_object.dump(4) << "\n\n"
            << j_object.dump(1, '\t') << "\n\n";

  std::cout << "arrays:" << '\n'
            << j_array.dump() << "\n\n"
            << j_array.dump(-1) << "\n\n"
            << j_array.dump(0) << "\n\n"
            << j_array.dump(4) << "\n\n"
            << j_array.dump(1, '\t') << "\n\n";

  std::cout << "strings:" << '\n'
            << j_string.dump() << '\n'
            << j_string.dump(-1, ' ', true) << '\n';

  // create JSON value with invalid UTF-8 byte sequence
  json j_invalid = "ä\xA9ü";
  try {
    std::cout << j_invalid.dump() << std::endl;
  } catch (json::type_error& e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << "string with replaced invalid characters: "
            << j_invalid.dump(-1, ' ', false, json::error_handler_t::replace)
            << "\nstring with ignored invalid characters: "
            << j_invalid.dump(-1, ' ', false, json::error_handler_t::ignore) << '\n';
}

namespace ns {
// a simple struct to model a person
struct person {
  std::string name;
  std::string address;
  int age;
};
}  // namespace ns.

namespace ns {
void from_json(const json& j, person& p) {
  j.at("name").get_to(p.name);
  j.at("address").get_to(p.address);
  j.at("age").get_to(p.age);
}
}  // namespace ns

TEST(nlohmann, from_json__default_constructible) {
  using json = nlohmann::json;
  json j;
  j["name"] = "Ned Flanders";
  j["address"] = "744 Evergreen Terrace";
  j["age"] = 60;

  auto p = j.template get<ns::person>();

  std::cout << p.name << " (" << p.age << ") lives in " << p.address << std::endl;
}

TEST(nlohmann, json_lines) {
  using json = nlohmann::json;
  // JSON Lines (see https://jsonlines.org)
  std::stringstream input;
  input << R"({"name": "Gilbert", "wins": [["straight", "7♣"], ["one pair", "10♥"]]}
{"name": "Alexa", "wins": [["two pair", "4♠"], ["two pair", "9♠"]]}
{"name": "May", "wins": []}
{"name": "Deloise", "wins": [["three of a kind", "5♣"]]}
)";

  std::string line;
  while (std::getline(input, line)) {
    std::cout << json::parse(line) << std::endl;
  }
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);  //将命令行参数传递给gtest
  return RUN_ALL_TESTS();                // RUN_ALL_TESTS()运行所有测试案例
}
