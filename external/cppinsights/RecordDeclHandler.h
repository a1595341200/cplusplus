/******************************************************************************
 *
 * C++ Insights, copyright (C) by Andreas Fertig
 * Distributed under an MIT license. See LICENSE for details
 *
 ****************************************************************************/

#ifndef INSIGHTS_COMPILER_GENERATED_HANDLER_H
#define INSIGHTS_COMPILER_GENERATED_HANDLER_H

#include "InsightsBase.h"                      // for InsightsBase
#include "clang/ASTMatchers/ASTMatchFinder.h"  // for MatchFinder, MatchFind...
namespace clang {
class Rewriter;
}
//-----------------------------------------------------------------------------

namespace clang::insights {

/// \brief Show a struct or class with the special members the compiler generates.
///
/// Conveniently the compiler generates special member for us. Like the default constructor, copy or move operators.
/// Under certain circumstances it stops generating. This handler rewrites an entire class and shows all the pieces the
/// compiler adds for us.
class RecordDeclHandler final : public ast_matchers::MatchFinder::MatchCallback, public InsightsBase
{
public:
    RecordDeclHandler(Rewriter& rewrite, ast_matchers::MatchFinder& Matcher);
    void run(const ast_matchers::MatchFinder::MatchResult& result) override;
};
//-----------------------------------------------------------------------------

}  // namespace clang::insights

#endif /* INSIGHTS_COMPILER_GENERATED_HANDLER_H */
