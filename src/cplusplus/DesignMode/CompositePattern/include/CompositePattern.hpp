/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 16:00:23
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 16:00:24
 * @FilePath: /cplusplus/src/DesignMode/CompositePattern/include/CompositePattern.hpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by 谢瑶 on 2023/3/6.
//

#ifndef DEV_SRC_DESIGNMODE_COMPOSITEPATTERN_INCLUDE_COMPOSITEPATTERN_HPP_
#define DEV_SRC_DESIGNMODE_COMPOSITEPATTERN_INCLUDE_COMPOSITEPATTERN_HPP_
#include <Log.h>

#include <algorithm>
#include <list>
#include <memory>

class ICompany {
 public:
  ICompany(const std::string &name) : mName(name) {}

  virtual ~ICompany() = default;
  virtual void add(std::shared_ptr<ICompany> company) = 0;
  virtual void remove(std::shared_ptr<ICompany> company) = 0;
  virtual void show() = 0;
  std::string mName;
};

class Company : public ICompany {
 public:
  using ICompany::ICompany;

  void add(std::shared_ptr<ICompany> company) override {
    auto res = std::find(mCompanyList.begin(), mCompanyList.end(), company);
    if (res != mCompanyList.end()) {
      SLOG(INFO) << "repate " << company->mName;
      return;
    }
    mCompanyList.emplace_back(company);
  }

  void remove(std::shared_ptr<ICompany> company) override {
    mCompanyList.remove(company);
  }

  void show() override {
    SLOG(INFO) << "company name : " << mName;
    for (auto &c : mCompanyList) {
      c->show();
    }
  }

  std::list<std::shared_ptr<ICompany>> mCompanyList;
};

class FinanceDepartment : public ICompany {
 public:
  using ICompany::ICompany;

  void add(std::shared_ptr<ICompany> company) override {}

  void remove(std::shared_ptr<ICompany> company) override {}

  void show() override {
    SLOG(INFO) << mName;
  }
};

class PeronalDepartment : public ICompany {
 public:
  using ICompany::ICompany;

  void add(std::shared_ptr<ICompany> company) override {}

  void remove(std::shared_ptr<ICompany> company) override {}

  void show() override {
    SLOG(INFO) << mName;
  }
};

#endif  // DEV_SRC_DESIGNMODE_COMPOSITEPATTERN_INCLUDE_COMPOSITEPATTERN_HPP_
