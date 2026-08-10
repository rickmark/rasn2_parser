
SHELL = /bin/sh

# V=0 quiet, V=1 verbose.  other values don't work.
V = 0
V0 = $(V:0=)
Q1 = $(V:1=)
Q = $(Q1:0=@)
ECHO1 = $(V:1=@ :)
ECHO = $(ECHO1:0=@ echo)
NULLCMD = :

#### Start of system configuration section. ####

srcdir = .
topdir = /Users/rickmark/.rbenv/versions/4.0.5/include/ruby-4.0.0
hdrdir = $(topdir)
arch_hdrdir = /Users/rickmark/.rbenv/versions/4.0.5/include/ruby-4.0.0/arm64-darwin25
PATH_SEPARATOR = :
VPATH = $(srcdir):$(arch_hdrdir)/ruby:$(hdrdir)/ruby:.:antlrgen:antlr4-upstream/runtime/Cpp/runtime/src:antlr4-upstream/runtime/Cpp/runtime/src/atn:antlr4-upstream/runtime/Cpp/runtime/src/dfa:antlr4-upstream/runtime/Cpp/runtime/src/misc:antlr4-upstream/runtime/Cpp/runtime/src/support:antlr4-upstream/runtime/Cpp/runtime/src/tree:antlr4-upstream/runtime/Cpp/runtime/src/tree/pattern:antlr4-upstream/runtime/Cpp/runtime/src/tree/xpath
prefix = $(DESTDIR)/Users/rickmark/.rbenv/versions/4.0.5
rubysitearchprefix = $(rubylibprefix)/$(sitearch)
rubyarchprefix = $(rubylibprefix)/$(arch)
rubylibprefix = $(libdir)/$(RUBY_BASE_NAME)
exec_prefix = $(prefix)
vendorarchhdrdir = $(vendorhdrdir)/$(sitearch)
sitearchhdrdir = $(sitehdrdir)/$(sitearch)
rubyarchhdrdir = $(rubyhdrdir)/$(arch)
vendorhdrdir = $(rubyhdrdir)/vendor_ruby
sitehdrdir = $(rubyhdrdir)/site_ruby
rubyhdrdir = $(includedir)/$(RUBY_VERSION_NAME)
vendorarchdir = $(vendorlibdir)/$(sitearch)
vendorlibdir = $(vendordir)/$(ruby_version)
vendordir = $(rubylibprefix)/vendor_ruby
sitearchdir = $(sitelibdir)/$(sitearch)
sitelibdir = $(sitedir)/$(ruby_version)
sitedir = $(rubylibprefix)/site_ruby
rubyarchdir = $(rubylibdir)/$(arch)
rubylibdir = $(rubylibprefix)/$(ruby_version)
sitearchincludedir = $(includedir)/$(sitearch)
archincludedir = $(includedir)/$(arch)
sitearchlibdir = $(libdir)/$(sitearch)
archlibdir = $(libdir)/$(arch)
ridir = $(datarootdir)/$(RI_BASE_NAME)
modular_gc_dir = $(DESTDIR)
mandir = $(datarootdir)/man
localedir = $(datarootdir)/locale
libdir = $(exec_prefix)/lib
psdir = $(docdir)
pdfdir = $(docdir)
dvidir = $(docdir)
htmldir = $(docdir)
infodir = $(datarootdir)/info
docdir = $(datarootdir)/doc/$(PACKAGE)
oldincludedir = $(DESTDIR)/usr/include
includedir = $(SDKROOT)$(prefix)/include
runstatedir = $(localstatedir)/run
localstatedir = $(prefix)/var
sharedstatedir = $(prefix)/com
sysconfdir = $(prefix)/etc
datadir = $(datarootdir)
datarootdir = $(prefix)/share
libexecdir = $(exec_prefix)/libexec
sbindir = $(exec_prefix)/sbin
bindir = $(exec_prefix)/bin
archdir = $(rubyarchdir)


CC_WRAPPER = 
CC = clang
CXX = clang++
LIBRUBY = $(LIBRUBY_SO)
LIBRUBY_A = lib$(RUBY_SO_NAME)-static.a
LIBRUBYARG_SHARED = -l$(RUBY_SO_NAME)
LIBRUBYARG_STATIC = -l$(RUBY_SO_NAME)-static -framework CoreFoundation $(MAINLIBS)
empty =
OUTFLAG = -o $(empty)
COUTFLAG = -o $(empty)
CSRCFLAG = $(empty)

RUBY_EXTCONF_H = 
cflags   = $(hardenflags) -fdeclspec  $(optflags) $(debugflags) $(warnflags)
cxxflags = 
optflags = -O3 -fno-fast-math
debugflags = -ggdb3
warnflags = -Wall -Wextra -Wextra-tokens -Wdeprecated-declarations -Wdivision-by-zero -Wdiv-by-zero -Wimplicit-function-declaration -Wimplicit-int -Wpointer-arith -Wshorten-64-to-32 -Wwrite-strings -Wold-style-definition -Wmissing-noreturn -Wno-cast-function-type -Wno-constant-logical-operand -Wno-long-long -Wno-missing-field-initializers -Wno-overlength-strings -Wno-parentheses-equality -Wno-self-assign -Wno-tautological-compare -Wno-unused-parameter -Wno-unused-value -Wunused-variable -Wmisleading-indentation -Wundef
cppflags = 
CCDLFLAGS = -fno-common
CFLAGS   = $(CCDLFLAGS) $(cflags) -fno-common -pipe -std=c++14 $(ARCH_FLAG)
INCFLAGS = -I. -I$(arch_hdrdir) -I$(hdrdir)/ruby/backward -I$(hdrdir) -I$(srcdir) -I/Users/rickmark/.rbenv/versions/4.0.5/lib/ruby/gems/4.0.0/gems/rice-4.12.0/include -I. -Iantlrgen -Iantlr4-upstream/runtime/Cpp/runtime/src -Iantlr4-upstream/runtime/Cpp/runtime/src/atn -Iantlr4-upstream/runtime/Cpp/runtime/src/dfa -Iantlr4-upstream/runtime/Cpp/runtime/src/misc -Iantlr4-upstream/runtime/Cpp/runtime/src/support -Iantlr4-upstream/runtime/Cpp/runtime/src/tree -Iantlr4-upstream/runtime/Cpp/runtime/src/tree/pattern -Iantlr4-upstream/runtime/Cpp/runtime/src/tree/xpath
DEFS     = 
CPPFLAGS =  -D_XOPEN_SOURCE -D_DARWIN_C_SOURCE -D_DARWIN_UNLIMITED_SELECT -D_REENTRANT $(DEFS) $(cppflags)
CXXFLAGS = $(CCDLFLAGS) -fdeclspec -DRICE_VERSION_MAJOR=4 -DRICE_VERSION_MINOR=12 -DRICE_VERSION_PATCH=0 -std=c++17 -Wno-array-bounds $(ARCH_FLAG)
ldflags  = -L. -fstack-protector-strong -L/opt/homebrew/Cellar/gmp/6.3.0/lib
dldflags = -L/opt/homebrew/Cellar/gmp/6.3.0/lib -Wl,-undefined,dynamic_lookup 
ARCH_FLAG = -arch arm64
DLDFLAGS = $(ldflags) $(dldflags) $(ARCH_FLAG)
LDSHARED = $(CC) -dynamic -bundle
LDSHAREDXX = $(CXX) -dynamic -bundle
POSTLINK = dsymutil $@ 2>/dev/null; { test -z '$(RUBY_CODESIGN)' || codesign -s '$(RUBY_CODESIGN)' $@; }
AR = ar
LD = ld
EXEEXT = 

RUBY_INSTALL_NAME = $(RUBY_BASE_NAME)
RUBY_SO_NAME = ruby.4.0
RUBYW_INSTALL_NAME = 
RUBY_VERSION_NAME = $(RUBY_BASE_NAME)-$(ruby_version)
RUBYW_BASE_NAME = rubyw
RUBY_BASE_NAME = ruby

arch = arm64-darwin25
sitearch = $(arch)
ruby_version = 4.0.0
ruby = $(bindir)/$(RUBY_BASE_NAME)
RUBY = $(ruby)
BUILTRUBY = $(bindir)/$(RUBY_BASE_NAME)
ruby_headers = $(hdrdir)/ruby.h $(hdrdir)/ruby/backward.h $(hdrdir)/ruby/ruby.h $(hdrdir)/ruby/defines.h $(hdrdir)/ruby/missing.h $(hdrdir)/ruby/intern.h $(hdrdir)/ruby/st.h $(hdrdir)/ruby/subst.h $(arch_hdrdir)/ruby/config.h

RM = rm -f
RM_RF = rm -fr
RMDIRS = rmdir -p
MAKEDIRS = mkdir -p
INSTALL = /usr/bin/install -c
INSTALL_PROG = $(INSTALL) -m 0755
INSTALL_DATA = $(INSTALL) -m 644
COPY = cp
TOUCH = exit >

#### End of system configuration section. ####

preload = 
libpath = . $(libdir)
LIBPATH = -L. -L$(libdir)
DEFFILE = 

CLEANFILES = mkmf.log
DISTCLEANFILES = 
DISTCLEANDIRS = 

extout = 
extout_prefix = 
target_prefix = 
LOCAL_LIBS = 
LIBS = $(LIBRUBYARG_SHARED) -lstdc++  -lpthread  
ORIG_SRCS = asn1_parser.cpp
SRCS = $(ORIG_SRCS) ASN1BaseListener.cpp ASN1BaseVisitor.cpp ASN1Lexer.cpp ASN1Listener.cpp ASN1Parser.cpp ASN1Visitor.cpp ANTLRErrorListener.cpp ANTLRErrorStrategy.cpp ANTLRFileStream.cpp ANTLRInputStream.cpp BailErrorStrategy.cpp BaseErrorListener.cpp BufferedTokenStream.cpp CharStream.cpp CommonToken.cpp CommonTokenFactory.cpp CommonTokenStream.cpp ConsoleErrorListener.cpp DefaultErrorStrategy.cpp DiagnosticErrorListener.cpp Exceptions.cpp FailedPredicateException.cpp InputMismatchException.cpp IntStream.cpp InterpreterRuleContext.cpp Lexer.cpp LexerInterpreter.cpp LexerNoViableAltException.cpp ListTokenSource.cpp NoViableAltException.cpp Parser.cpp ParserInterpreter.cpp ParserRuleContext.cpp ProxyErrorListener.cpp RecognitionException.cpp Recognizer.cpp RuleContext.cpp RuleContextWithAltNum.cpp RuntimeMetaData.cpp Token.cpp TokenSource.cpp TokenStream.cpp TokenStreamRewriter.cpp UnbufferedCharStream.cpp UnbufferedTokenStream.cpp Vocabulary.cpp WritableToken.cpp ATN.cpp ATNConfig.cpp ATNConfigSet.cpp ATNDeserializationOptions.cpp ATNDeserializer.cpp ATNSimulator.cpp ATNState.cpp ATNStateType.cpp ActionTransition.cpp AmbiguityInfo.cpp ArrayPredictionContext.cpp AtomTransition.cpp ContextSensitivityInfo.cpp DecisionEventInfo.cpp DecisionInfo.cpp DecisionState.cpp EpsilonTransition.cpp ErrorInfo.cpp LL1Analyzer.cpp LexerATNConfig.cpp LexerATNSimulator.cpp LexerAction.cpp LexerActionExecutor.cpp LexerChannelAction.cpp LexerCustomAction.cpp LexerIndexedCustomAction.cpp LexerModeAction.cpp LexerMoreAction.cpp LexerPopModeAction.cpp LexerPushModeAction.cpp LexerSkipAction.cpp LexerTypeAction.cpp LookaheadEventInfo.cpp NotSetTransition.cpp OrderedATNConfigSet.cpp ParseInfo.cpp ParserATNSimulator.cpp PrecedencePredicateTransition.cpp PredicateEvalInfo.cpp PredicateTransition.cpp PredictionContext.cpp PredictionContextCache.cpp PredictionContextMergeCache.cpp PredictionMode.cpp ProfilingATNSimulator.cpp RangeTransition.cpp RuleTransition.cpp SemanticContext.cpp SetTransition.cpp SingletonPredictionContext.cpp StarLoopbackState.cpp Transition.cpp TransitionType.cpp WildcardTransition.cpp DFA.cpp DFASerializer.cpp DFAState.cpp LexerDFASerializer.cpp InterpreterDataReader.cpp Interval.cpp IntervalSet.cpp MurmurHash.cpp Predicate.cpp Any.cpp Arrays.cpp CPPUtils.cpp StringUtils.cpp Utf8.cpp ErrorNodeImpl.cpp IterativeParseTreeWalker.cpp ParseTree.cpp ParseTreeListener.cpp ParseTreeVisitor.cpp ParseTreeWalker.cpp TerminalNodeImpl.cpp Trees.cpp Chunk.cpp ParseTreeMatch.cpp ParseTreePattern.cpp ParseTreePatternMatcher.cpp RuleTagToken.cpp TagChunk.cpp TextChunk.cpp TokenTagToken.cpp XPath.cpp XPathElement.cpp XPathLexer.cpp XPathLexerErrorListener.cpp XPathRuleAnywhereElement.cpp XPathRuleElement.cpp XPathTokenAnywhereElement.cpp XPathTokenElement.cpp XPathWildcardAnywhereElement.cpp XPathWildcardElement.cpp
OBJS = asn1_parser.o ASN1BaseListener.o ASN1BaseVisitor.o ASN1Lexer.o ASN1Listener.o ASN1Parser.o ASN1Visitor.o ANTLRErrorListener.o ANTLRErrorStrategy.o ANTLRFileStream.o ANTLRInputStream.o BailErrorStrategy.o BaseErrorListener.o BufferedTokenStream.o CharStream.o CommonToken.o CommonTokenFactory.o CommonTokenStream.o ConsoleErrorListener.o DefaultErrorStrategy.o DiagnosticErrorListener.o Exceptions.o FailedPredicateException.o InputMismatchException.o IntStream.o InterpreterRuleContext.o Lexer.o LexerInterpreter.o LexerNoViableAltException.o ListTokenSource.o NoViableAltException.o Parser.o ParserInterpreter.o ParserRuleContext.o ProxyErrorListener.o RecognitionException.o Recognizer.o RuleContext.o RuleContextWithAltNum.o RuntimeMetaData.o Token.o TokenSource.o TokenStream.o TokenStreamRewriter.o UnbufferedCharStream.o UnbufferedTokenStream.o Vocabulary.o WritableToken.o ATN.o ATNConfig.o ATNConfigSet.o ATNDeserializationOptions.o ATNDeserializer.o ATNSimulator.o ATNState.o ATNStateType.o ActionTransition.o AmbiguityInfo.o ArrayPredictionContext.o AtomTransition.o ContextSensitivityInfo.o DecisionEventInfo.o DecisionInfo.o DecisionState.o EpsilonTransition.o ErrorInfo.o LL1Analyzer.o LexerATNConfig.o LexerATNSimulator.o LexerAction.o LexerActionExecutor.o LexerChannelAction.o LexerCustomAction.o LexerIndexedCustomAction.o LexerModeAction.o LexerMoreAction.o LexerPopModeAction.o LexerPushModeAction.o LexerSkipAction.o LexerTypeAction.o LookaheadEventInfo.o NotSetTransition.o OrderedATNConfigSet.o ParseInfo.o ParserATNSimulator.o PrecedencePredicateTransition.o PredicateEvalInfo.o PredicateTransition.o PredictionContext.o PredictionContextCache.o PredictionContextMergeCache.o PredictionMode.o ProfilingATNSimulator.o RangeTransition.o RuleTransition.o SemanticContext.o SetTransition.o SingletonPredictionContext.o StarLoopbackState.o Transition.o TransitionType.o WildcardTransition.o DFA.o DFASerializer.o DFAState.o LexerDFASerializer.o InterpreterDataReader.o Interval.o IntervalSet.o MurmurHash.o Predicate.o Any.o Arrays.o CPPUtils.o StringUtils.o Utf8.o ErrorNodeImpl.o IterativeParseTreeWalker.o ParseTree.o ParseTreeListener.o ParseTreeVisitor.o ParseTreeWalker.o TerminalNodeImpl.o Trees.o Chunk.o ParseTreeMatch.o ParseTreePattern.o ParseTreePatternMatcher.o RuleTagToken.o TagChunk.o TextChunk.o TokenTagToken.o XPath.o XPathElement.o XPathLexer.o XPathLexerErrorListener.o XPathRuleAnywhereElement.o XPathRuleElement.o XPathTokenAnywhereElement.o XPathTokenElement.o XPathWildcardAnywhereElement.o XPathWildcardElement.o
HDRS = 
LOCAL_HDRS = 
TARGET = asn1_parser
TARGET_NAME = asn1_parser
TARGET_ENTRY = Init_$(TARGET_NAME)
DLLIB = $(TARGET).bundle
EXTSTATIC = 
STATIC_LIB = 

TIMESTAMP_DIR = .
BINDIR        = $(bindir)
RUBYCOMMONDIR = $(sitedir)$(target_prefix)
RUBYLIBDIR    = $(sitelibdir)$(target_prefix)
RUBYARCHDIR   = $(sitearchdir)$(target_prefix)
HDRDIR        = $(sitehdrdir)$(target_prefix)
ARCHHDRDIR    = $(sitearchhdrdir)$(target_prefix)
TARGET_SO_DIR =
TARGET_SO     = $(TARGET_SO_DIR)$(DLLIB)
CLEANLIBS     = $(TARGET_SO) $(TARGET_SO:=.dSYM)
CLEANOBJS     = $(OBJS) *.bak
TARGET_SO_DIR_TIMESTAMP = $(TIMESTAMP_DIR)/.sitearchdir.time

all:    $(DLLIB)
static: $(STATIC_LIB)
.PHONY: all install static install-so install-rb
.PHONY: clean clean-so clean-static clean-rb

clean-static::
clean-rb-default::
clean-rb::
clean-so::
clean: clean-so clean-static clean-rb-default clean-rb
		-$(Q)$(RM_RF) $(CLEANLIBS) $(CLEANOBJS) $(CLEANFILES) .*.time

distclean-rb-default::
distclean-rb::
distclean-so::
distclean-static::
distclean: clean distclean-so distclean-static distclean-rb-default distclean-rb
		-$(Q)$(RM) Makefile $(RUBY_EXTCONF_H) conftest.* mkmf.log
		-$(Q)$(RM) core ruby$(EXEEXT) *~ $(DISTCLEANFILES)
		-$(Q)$(RMDIRS) $(DISTCLEANDIRS) 2> /dev/null || true

realclean: distclean
install: install-so install-rb

install-so: $(DLLIB) $(TARGET_SO_DIR_TIMESTAMP)
	$(INSTALL_PROG) $(DLLIB) $(RUBYARCHDIR)
clean-static::
	-$(Q)$(RM) $(STATIC_LIB)
install-rb: pre-install-rb do-install-rb install-rb-default
install-rb-default: pre-install-rb-default do-install-rb-default
pre-install-rb: Makefile
pre-install-rb-default: Makefile
do-install-rb:
do-install-rb-default:
pre-install-rb-default:
	@$(NULLCMD)
$(TARGET_SO_DIR_TIMESTAMP):
	$(Q) $(MAKEDIRS) $(@D) $(RUBYARCHDIR)
	$(Q) $(TOUCH) $@

site-install: site-install-so site-install-rb
site-install-so: install-so
site-install-rb: install-rb

.SUFFIXES: .c .m .cc .mm .cxx .cpp .o .S

.cc.o:
	$(ECHO) compiling $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -c $(CSRCFLAG)$<

.cc.S:
	$(ECHO) translating $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -S $(CSRCFLAG)$<

.mm.o:
	$(ECHO) compiling $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -c $(CSRCFLAG)$<

.mm.S:
	$(ECHO) translating $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -S $(CSRCFLAG)$<

.cxx.o:
	$(ECHO) compiling $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -c $(CSRCFLAG)$<

.cxx.S:
	$(ECHO) translating $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -S $(CSRCFLAG)$<

.cpp.o:
	$(ECHO) compiling $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -c $(CSRCFLAG)$<

.cpp.S:
	$(ECHO) translating $(<)
	$(Q) $(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -S $(CSRCFLAG)$<

.c.o:
	$(ECHO) compiling $(<)
	$(Q) $(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $(CSRCFLAG)$<

.c.S:
	$(ECHO) translating $(<)
	$(Q) $(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -S $(CSRCFLAG)$<

.m.o:
	$(ECHO) compiling $(<)
	$(Q) $(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $(CSRCFLAG)$<

.m.S:
	$(ECHO) translating $(<)
	$(Q) $(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -S $(CSRCFLAG)$<

$(TARGET_SO): $(OBJS) Makefile
	$(ECHO) linking shared-object $(DLLIB)
	-$(Q)$(RM) $(@)
	$(Q) $(LDSHAREDXX) -o $@ $(OBJS) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)
	$(Q) $(POSTLINK)



$(OBJS): $(HDRS) $(ruby_headers)
