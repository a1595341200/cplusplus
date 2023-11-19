#include <iostream>
#include <memory>
//利用模版
//在c++标准中，模板的显式实例化定义忽略成员访问说明符，因此可以利用这一特性使用模板来实现访问其他任何类的私有成员变量
template <typename Member>
class TPrivateAccess {
 public:
  inline static typename Member::Type MemberPtr;
};

template <typename Member, typename Member::Type Ptr>
struct TStaticPtrInit {
  struct FConstructPrivateAccess {
    FConstructPrivateAccess() {
      TPrivateAccess<Member>::MemberPtr = Ptr;
    }
  };

  inline static FConstructPrivateAccess TriggerConstruct;
};

class FTest {
 public:
  FTest() : VarA(0), VarB(0) {}

 private:
  int VarA;
  int VarB;
};

// ----------------------- 普通声明 -----------------------
struct FTestAccessVarA {
  using Type = int FTest::*;
};
template struct TStaticPtrInit<FTestAccessVarA, &FTest::VarA>;

// ----------------------- 宏声明 -----------------------
#define DECLARE_PRIVATE_ACCESS(Typename, MemberType, MemberName) \
  struct Typename##MemberName##Access {                          \
    using Type = MemberType Typename::*;                         \
  };                                                             \
  template struct TStaticPtrInit<Typename##MemberName##Access, &Typename::MemberName>;

#define PRIVATE_ACCESS(Typename, MemberName) TPrivateAccess<Typename##MemberName##Access>::MemberPtr

// ----------------------- 宏注册 -----------------------
DECLARE_PRIVATE_ACCESS(FTest, int, VarB)

int main() {
  FTest Test;
  FTest* TestPtr = new FTest;

  // ----------------------- 普通写法 -----------------------
  std::cout << "------FTest::VarA------" << std::endl;
  std::cout << Test.*TPrivateAccess<FTestAccessVarA>::MemberPtr << std::endl;
  Test.*TPrivateAccess<FTestAccessVarA>::MemberPtr = 666;
  std::cout << Test.*TPrivateAccess<FTestAccessVarA>::MemberPtr << std::endl;

  // ----------------------- 宏访问 -----------------------
  std::cout << "------FTest::VarB------" << std::endl;
  std::cout << Test.*PRIVATE_ACCESS(FTest, VarB) << std::endl;
  Test.*PRIVATE_ACCESS(FTest, VarB) = 888;
  std::cout << Test.*PRIVATE_ACCESS(FTest, VarB) << std::endl;

  return 0;
}
