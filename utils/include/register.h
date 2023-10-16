#include <functional>
#include <iostream>
#include <map>
#include <memory>
#include <vector>

#include "utils/log.h"

//clang-format off

#define PERCEPTION_REGISTER_REGISTERER(base_class)                                               \
  class base_class##Factory {                                                                    \
   public:                                                                                       \
    base_class##Factory(){};                                                                     \
    virtual ~base_class##Factory() { AINFO; };                                                   \
    base_class##Factory(const base_class##Factory &) = delete;                                   \
    base_class##Factory &operator=(const base_class##Factory &) = delete;                        \
    virtual std::unique_ptr<base_class> GetNewInstance() = 0;                                    \
  };                                                                                             \
  class base_class##Registerer {                                                                 \
    typedef std::map<std::string, std::function<std::unique_ptr<base_class>()>> ClassFactoryMap; \
                                                                                                 \
   private:                                                                                      \
    static ClassFactoryMap &GetClassFactoryMap() {                                               \
      static ClassFactoryMap class_factory_map;                                                  \
      return class_factory_map;                                                                  \
    }                                                                                            \
                                                                                                 \
   public:                                                                                       \
    static bool RegistFactory(const std::string &name,                                           \
                              const std::function<std::unique_ptr<base_class>()> &func) {        \
      ClassFactoryMap &map = GetClassFactoryMap();                                               \
      auto iter = map.find(name);                                                                \
      if (iter == map.end()) {                                                                   \
        map[name] = func;                                                                        \
        return true;                                                                             \
      }                                                                                          \
      AERROR << "Instance " << name << " has been registed";                                     \
      return false;                                                                              \
    }                                                                                            \
    static std::unique_ptr<base_class> GetInstanceByName(const std::string &name) {              \
      ClassFactoryMap &map = GetClassFactoryMap();                                               \
      auto iter = map.find(name);                                                                \
      if (iter == map.end()) {                                                                   \
        for (const auto &c : map) {                                                              \
          AERROR << "Instance:" << c.first;                                                      \
        }                                                                                        \
        AERROR << "Get instance " << name << " failed.";                                         \
        return nullptr;                                                                          \
      }                                                                                          \
      return iter->second();                                                                     \
    }                                                                                            \
    static bool IsValid(const std::string &name) {                                               \
      ClassFactoryMap &map = GetClassFactoryMap();                                               \
      return map.find(name) != map.end();                                                        \
    }                                                                                            \
  };

#define PERCEPTION_REGISTER_CLASS(base_class, derived_class)                                    \
  __attribute__((constructor)) void RegisterFactory##derived_class() {                          \
    base_class##Registerer::RegistFactory(#derived_class, []() -> std::unique_ptr<base_class> { \
      std::unique_ptr<base_class> ptr(new derived_class);                                       \
      return ptr;                                                                               \
    });                                                                                         \
  }

//clang-format on