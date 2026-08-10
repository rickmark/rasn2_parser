
#include <regex>


// Generated from ./ASN1.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  ASN1Lexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, ABSENT_WORD = 11, ENCODED_WORD = 12, 
    INTEGER_WORD = 13, RELATIVE_OID_WORD = 14, ABSTRACT_SYNTAX_WORD = 15, 
    END_WORD = 16, INTERSECTION_WORD = 17, SEQUENCE_WORD = 18, ALL_WORD = 19, 
    ENUMERATED_WORD = 20, ISO646String_WORD = 21, SET_WORD = 22, APPLICATION_WORD = 23, 
    EXCEPT_WORD = 24, MAX_WORD = 25, SIZE_WORD = 26, AUTOMATIC_WORD = 27, 
    EXPLICIT_WORD = 28, MIN_WORD = 29, STRING_WORD = 30, BEGIN_WORD = 31, 
    EXPORTS_WORD = 32, MINUS_INFINITY_WORD = 33, SYNTAX_WORD = 34, BIT_WORD = 35, 
    EXTENSIBILITY_WORD = 36, NULL_WORD = 37, T61String_WORD = 38, BMPString_WORD = 39, 
    EXTERNAL_WORD = 40, NumericString_WORD = 41, TAGS_WORD = 42, BOOLEAN_WORD = 43, 
    FALSE_WORD = 44, OBJECT_WORD = 45, TeletexString_WORD = 46, BY_WORD = 47, 
    FROM_WORD = 48, ObjectDescriptor_WORD = 49, TRUE_WORD = 50, CHARACTER_WORD = 51, 
    GeneralizedTime_WORD = 52, OCTET_WORD = 53, TYPE_IDENTIFIER_WORD = 54, 
    CHOICE_WORD = 55, GeneralString_WORD = 56, OF_WORD = 57, UNION_WORD = 58, 
    CLASS_WORD = 59, GraphicString_WORD = 60, OPTIONAL_WORD = 61, UNIQUE_WORD = 62, 
    COMPONENT_WORD = 63, IA5String_WORD = 64, PATTERN_WORD = 65, UNIVERSAL_WORD = 66, 
    COMPONENTS_WORD = 67, IDENTIFIER_WORD = 68, PDV_WORD = 69, UniversalString_WORD = 70, 
    CONSTRAINED_WORD = 71, IMPLICIT_WORD = 72, PLUS_INFINITY_WORD = 73, 
    UTCTime_WORD = 74, CONTAINING_WORD = 75, IMPLIED_WORD = 76, PRESENT_WORD = 77, 
    UTF8String_WORD = 78, DEFAULT_WORD = 79, IMPORTS_WORD = 80, PrintableString_WORD = 81, 
    VideotexString_WORD = 82, DEFINITIONS_WORD = 83, INCLUDES_WORD = 84, 
    PRIVATE_WORD = 85, VisibleString_WORD = 86, EMBEDDED_WORD = 87, INSTANCE_WORD = 88, 
    REAL_WORD = 89, WITH_WORD = 90, ANY_WORD = 91, DEFINED_WORD = 92, L_BRACE = 93, 
    R_BRACE = 94, L_PAREN = 95, R_PAREN = 96, ASSIGN = 97, RANGE = 98, ELLIPSIS = 99, 
    LV_BRACKET = 100, RV_BRACKET = 101, COLON = 102, DOT = 103, COMMA = 104, 
    MINUS = 105, NumberItem = 106, BStringItem = 107, HStringItem = 108, 
    CStringItem = 109, IdentifierOrValueItem = 110, ReferenceItem = 111, 
    WHITESPACE = 112, HYPHENS_COMMENT = 113, BLOCK_COMMENT = 114
  };

  explicit ASN1Lexer(antlr4::CharStream *input);

  ~ASN1Lexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

