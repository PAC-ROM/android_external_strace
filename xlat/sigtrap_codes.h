/* Generated by ./xlat/gen.sh from ./xlat/sigtrap_codes.in; do not edit. */

static const struct xlat sigtrap_codes[] = {
#if !(defined(TRAP_BRKPT) || (defined(HAVE_DECL_TRAP_BRKPT) && HAVE_DECL_TRAP_BRKPT))
# define TRAP_BRKPT 1
#endif
 XLAT(TRAP_BRKPT),
#if !(defined(TRAP_TRACE) || (defined(HAVE_DECL_TRAP_TRACE) && HAVE_DECL_TRAP_TRACE))
# define TRAP_TRACE 2
#endif
 XLAT(TRAP_TRACE),
#if !(defined(TRAP_BRANCH) || (defined(HAVE_DECL_TRAP_BRANCH) && HAVE_DECL_TRAP_BRANCH))
# define TRAP_BRANCH 3
#endif
 XLAT(TRAP_BRANCH),
#if !(defined(TRAP_HWBKPT) || (defined(HAVE_DECL_TRAP_HWBKPT) && HAVE_DECL_TRAP_HWBKPT))
# define TRAP_HWBKPT 4
#endif
 XLAT(TRAP_HWBKPT),
 XLAT_END
};
