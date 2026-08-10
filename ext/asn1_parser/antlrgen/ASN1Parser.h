
#include <regex>


// Generated from ./ASN1.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  ASN1Parser : public antlr4::Parser {
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

  enum {
    RuleModuleDefinition = 0, RuleModuleIdentifier = 1, RuleDefinitiveIdentifier = 2, 
    RuleDefinitiveObjIdComponentList = 3, RuleDefinitiveObjIdComponent = 4, 
    RuleDefinitiveNumberForm = 5, RuleDefinitiveNameAndNumberForm = 6, RuleTagDefault = 7, 
    RuleExtensionDefault = 8, RuleModuleBody = 9, RuleExports = 10, RuleSymbolsExported = 11, 
    RuleImports = 12, RuleSymbolsImported = 13, RuleSymbolsFromModuleList = 14, 
    RuleSymbolsFromModule = 15, RuleGlobalModuleReference = 16, RuleAssignedIdentifier = 17, 
    RuleSymbolList = 18, RuleSymbol = 19, RuleReference = 20, RuleAssignmentList = 21, 
    RuleAssignment = 22, RuleDefinedType = 23, RuleDefinedValue = 24, RuleExternalTypeReference = 25, 
    RuleExternalValueReference = 26, RuleTypeAssignment = 27, RuleValueAssignment = 28, 
    RuleValueSetTypeAssignment = 29, RuleValueSet = 30, RuleType = 31, RuleBuiltinType = 32, 
    RuleReferencedType = 33, RuleNamedType = 34, RuleValue = 35, RuleBuiltinValue = 36, 
    RuleReferencedValue = 37, RuleNamedValue = 38, RuleBooleanType = 39, 
    RuleBooleanValue = 40, RuleIntegerType = 41, RuleNamedNumberList = 42, 
    RuleNamedNumber = 43, RuleSignedNumber = 44, RuleIntegerValue = 45, 
    RuleEnumeratedType = 46, RuleEnumerations = 47, RuleRootEnumeration = 48, 
    RuleAdditionalEnumeration = 49, RuleEnumeration = 50, RuleEnumerationItem = 51, 
    RuleEnumeratedValue = 52, RuleBitStringType = 53, RuleNamedBitList = 54, 
    RuleNamedBit = 55, RuleBitStringValue = 56, RuleIdentifierList = 57, 
    RuleOctetStringType = 58, RuleOctetStringValue = 59, RuleNullType = 60, 
    RuleNullValue = 61, RuleSequenceType = 62, RuleComponentTypeLists = 63, 
    RuleRootComponentTypeList = 64, RuleExtensionEndMarker = 65, RuleExtensionAdditions = 66, 
    RuleExtensionAdditionList = 67, RuleExtensionAddition = 68, RuleExtensionAdditionGroup = 69, 
    RuleVersionNumber = 70, RuleComponentTypeList = 71, RuleComponentType = 72, 
    RuleSequenceValue = 73, RuleComponentValueList = 74, RuleSequenceOfType = 75, 
    RuleSequenceOfValue = 76, RuleValueList = 77, RuleNamedValueList = 78, 
    RuleSetType = 79, RuleSetValue = 80, RuleSetOfType = 81, RuleSetOfValue = 82, 
    RuleChoiceType = 83, RuleAlternativeTypeLists = 84, RuleRootAlternativeTypeList = 85, 
    RuleExtensionAdditionAlternatives = 86, RuleExtensionAdditionAlternativesList = 87, 
    RuleExtensionAdditionAlternative = 88, RuleExtensionAdditionAlternativesGroup = 89, 
    RuleAlternativeTypeList = 90, RuleTaggedType = 91, RuleTag = 92, RuleClassNumber = 93, 
    RuleClassP = 94, RuleObjectIdentifierType = 95, RuleObjectIdentifierValue = 96, 
    RuleObjIdComponentsList = 97, RuleObjIdComponents = 98, RuleNameForm = 99, 
    RuleNumberForm = 100, RuleNameAndNumberForm = 101, RuleExtensionAndException = 102, 
    RuleExceptionSpec = 103, RuleExceptionIdentification = 104, RuleOptionalExtensionMarker = 105, 
    RuleCharacterStringType = 106, RuleCharacterStringValue = 107, RuleRestrictedCharacterStringType = 108, 
    RuleRestrictedCharacterStringValue = 109, RuleCharacterStringList = 110, 
    RuleCharSyms = 111, RuleCharsDefn = 112, RuleQuadruple = 113, RuleGroup = 114, 
    RulePlane = 115, RuleRow = 116, RuleCell = 117, RuleTuple = 118, RuleTableColumn = 119, 
    RuleTableRow = 120, RuleUnrestrictedCharacterStringType = 121, RuleUsefulType = 122, 
    RuleConstrainedType = 123, RuleTypeWithConstraint = 124, RuleConstraint = 125, 
    RuleConstraintSpec = 126, RuleSubtypeConstraint = 127, RuleGeneralConstraint = 128, 
    RuleElementSetSpecs = 129, RuleRootElementSetSpec = 130, RuleAdditionalElementSetSpec = 131, 
    RuleElementSetSpec = 132, RuleUnions = 133, RuleUElems = 134, RuleIntersections = 135, 
    RuleIElems = 136, RuleIntersectionElements = 137, RuleElems = 138, RuleExclusions = 139, 
    RuleUnionMark = 140, RuleIntersectionMark = 141, RuleElements = 142, 
    RuleSubtypeElements = 143, RuleSingleValue = 144, RuleContainedSubtype = 145, 
    RuleIncludes = 146, RuleValueRange = 147, RuleLowerEndpoint = 148, RuleUpperEndpoint = 149, 
    RuleLowerEndValue = 150, RuleUpperEndValue = 151, RuleSizeConstraint = 152, 
    RulePermittedAlphabet = 153, RuleUserDefinedConstraint = 154, RuleUserDefinedConstraintParameter = 155, 
    RuleTableConstraint = 156, RuleSimpleTableConstraint = 157, RuleComponentRelationConstraint = 158, 
    RuleAtNotation = 159, RuleLevel = 160, RuleComponentIdList = 161, RuleContentsConstraint = 162, 
    RuleDefinedObjectClass = 163, RuleDefinedObject = 164, RuleDefinedObjectSet = 165, 
    RuleExternalObjectClassReference = 166, RuleExternalObjectReference = 167, 
    RuleExternalObjectSetReference = 168, RuleUsefulObjectClassReference = 169, 
    RuleObjectClassAssignment = 170, RuleObjectClass = 171, RuleObjectClassDefn = 172, 
    RuleWithSyntaxSpec = 173, RuleFieldSpec = 174, RuleTypeFieldSpec = 175, 
    RuleTypeOptionalitySpec = 176, RuleFixedTypeValueFieldSpec = 177, RuleValueOptionalitySpec = 178, 
    RuleVariableTypeValueFieldSpec = 179, RuleFixedTypeValueSetFieldSpec = 180, 
    RuleValueSetOptionalitySpec = 181, RuleVariableTypeValueSetFieldSpec = 182, 
    RuleObjectFieldSpec = 183, RuleObjectOptionalitySpec = 184, RuleObjectSetFieldSpec = 185, 
    RuleObjectSetOptionalitySpec = 186, RulePrimitiveFieldName = 187, RuleFieldName = 188, 
    RuleSyntaxList = 189, RuleTokenOrGroupSpec = 190, RuleOptionalGroup = 191, 
    RuleRequiredToken = 192, RuleLiteral = 193, RuleObjectAssignment = 194, 
    RuleObject = 195, RuleObjectDefn = 196, RuleDefaultSyntax = 197, RuleFieldSetting = 198, 
    RuleDefinedSyntax = 199, RuleDefinedSyntaxToken = 200, RuleSetting = 201, 
    RuleObjectSetAssignment = 202, RuleObjectSet = 203, RuleObjectSetSpec = 204, 
    RuleObjectSetElements = 205, RuleObjectClassFieldType = 206, RuleObjectClassFieldValue = 207, 
    RuleOpenTypeFieldVal = 208, RuleFixedTypeFieldVal = 209, RuleValueFromObject = 210, 
    RuleValueSetFromObjects = 211, RuleTypeFromObject = 212, RuleObjectFromObject = 213, 
    RuleObjectSetFromObjects = 214, RuleReferencedObjects = 215, RuleAnyType = 216, 
    RuleObjectclassreference = 217, RuleObjectreference = 218, RuleObjectsetreference = 219, 
    RuleTypefieldreference = 220, RuleValuefieldreference = 221, RuleValuesetfieldreference = 222, 
    RuleObjectfieldreference = 223, RuleObjectsetfieldreference = 224, RuleWord = 225, 
    RuleParameterizedAssignment = 226, RuleParameterizedTypeAssignment = 227, 
    RuleParameterizedValueAssignment = 228, RuleParameterizedValueSetTypeAssignment = 229, 
    RuleParameterizedObjectClassAssignment = 230, RuleParameterizedObjectAssignment = 231, 
    RuleParameterizedObjectSetAssignment = 232, RuleParameterList = 233, 
    RuleParameter = 234, RuleParamGovernor = 235, RuleGovernor = 236, RuleDummyGovernor = 237, 
    RuleDummyReference = 238, RuleParameterizedReference = 239, RuleParameterizedType = 240, 
    RuleSimpleDefinedType = 241, RuleParameterizedValue = 242, RuleSimpleDefinedValue = 243, 
    RuleParameterizedValueSetType = 244, RuleParameterizedObjectClass = 245, 
    RuleParameterizedObjectSet = 246, RuleParameterizedObject = 247, RuleActualParameterList = 248, 
    RuleActualParameter = 249, RuleTypereference = 250, RuleIdentifier = 251, 
    RuleValuereference = 252, RuleModulereference = 253, RuleNumber = 254, 
    RuleBstring = 255, RuleHstring = 256, RuleCstring = 257
  };

  explicit ASN1Parser(antlr4::TokenStream *input);

  ASN1Parser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~ASN1Parser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  public:
      static const std::regex word_pattern;


  class ModuleDefinitionContext;
  class ModuleIdentifierContext;
  class DefinitiveIdentifierContext;
  class DefinitiveObjIdComponentListContext;
  class DefinitiveObjIdComponentContext;
  class DefinitiveNumberFormContext;
  class DefinitiveNameAndNumberFormContext;
  class TagDefaultContext;
  class ExtensionDefaultContext;
  class ModuleBodyContext;
  class ExportsContext;
  class SymbolsExportedContext;
  class ImportsContext;
  class SymbolsImportedContext;
  class SymbolsFromModuleListContext;
  class SymbolsFromModuleContext;
  class GlobalModuleReferenceContext;
  class AssignedIdentifierContext;
  class SymbolListContext;
  class SymbolContext;
  class ReferenceContext;
  class AssignmentListContext;
  class AssignmentContext;
  class DefinedTypeContext;
  class DefinedValueContext;
  class ExternalTypeReferenceContext;
  class ExternalValueReferenceContext;
  class TypeAssignmentContext;
  class ValueAssignmentContext;
  class ValueSetTypeAssignmentContext;
  class ValueSetContext;
  class TypeContext;
  class BuiltinTypeContext;
  class ReferencedTypeContext;
  class NamedTypeContext;
  class ValueContext;
  class BuiltinValueContext;
  class ReferencedValueContext;
  class NamedValueContext;
  class BooleanTypeContext;
  class BooleanValueContext;
  class IntegerTypeContext;
  class NamedNumberListContext;
  class NamedNumberContext;
  class SignedNumberContext;
  class IntegerValueContext;
  class EnumeratedTypeContext;
  class EnumerationsContext;
  class RootEnumerationContext;
  class AdditionalEnumerationContext;
  class EnumerationContext;
  class EnumerationItemContext;
  class EnumeratedValueContext;
  class BitStringTypeContext;
  class NamedBitListContext;
  class NamedBitContext;
  class BitStringValueContext;
  class IdentifierListContext;
  class OctetStringTypeContext;
  class OctetStringValueContext;
  class NullTypeContext;
  class NullValueContext;
  class SequenceTypeContext;
  class ComponentTypeListsContext;
  class RootComponentTypeListContext;
  class ExtensionEndMarkerContext;
  class ExtensionAdditionsContext;
  class ExtensionAdditionListContext;
  class ExtensionAdditionContext;
  class ExtensionAdditionGroupContext;
  class VersionNumberContext;
  class ComponentTypeListContext;
  class ComponentTypeContext;
  class SequenceValueContext;
  class ComponentValueListContext;
  class SequenceOfTypeContext;
  class SequenceOfValueContext;
  class ValueListContext;
  class NamedValueListContext;
  class SetTypeContext;
  class SetValueContext;
  class SetOfTypeContext;
  class SetOfValueContext;
  class ChoiceTypeContext;
  class AlternativeTypeListsContext;
  class RootAlternativeTypeListContext;
  class ExtensionAdditionAlternativesContext;
  class ExtensionAdditionAlternativesListContext;
  class ExtensionAdditionAlternativeContext;
  class ExtensionAdditionAlternativesGroupContext;
  class AlternativeTypeListContext;
  class TaggedTypeContext;
  class TagContext;
  class ClassNumberContext;
  class ClassPContext;
  class ObjectIdentifierTypeContext;
  class ObjectIdentifierValueContext;
  class ObjIdComponentsListContext;
  class ObjIdComponentsContext;
  class NameFormContext;
  class NumberFormContext;
  class NameAndNumberFormContext;
  class ExtensionAndExceptionContext;
  class ExceptionSpecContext;
  class ExceptionIdentificationContext;
  class OptionalExtensionMarkerContext;
  class CharacterStringTypeContext;
  class CharacterStringValueContext;
  class RestrictedCharacterStringTypeContext;
  class RestrictedCharacterStringValueContext;
  class CharacterStringListContext;
  class CharSymsContext;
  class CharsDefnContext;
  class QuadrupleContext;
  class GroupContext;
  class PlaneContext;
  class RowContext;
  class CellContext;
  class TupleContext;
  class TableColumnContext;
  class TableRowContext;
  class UnrestrictedCharacterStringTypeContext;
  class UsefulTypeContext;
  class ConstrainedTypeContext;
  class TypeWithConstraintContext;
  class ConstraintContext;
  class ConstraintSpecContext;
  class SubtypeConstraintContext;
  class GeneralConstraintContext;
  class ElementSetSpecsContext;
  class RootElementSetSpecContext;
  class AdditionalElementSetSpecContext;
  class ElementSetSpecContext;
  class UnionsContext;
  class UElemsContext;
  class IntersectionsContext;
  class IElemsContext;
  class IntersectionElementsContext;
  class ElemsContext;
  class ExclusionsContext;
  class UnionMarkContext;
  class IntersectionMarkContext;
  class ElementsContext;
  class SubtypeElementsContext;
  class SingleValueContext;
  class ContainedSubtypeContext;
  class IncludesContext;
  class ValueRangeContext;
  class LowerEndpointContext;
  class UpperEndpointContext;
  class LowerEndValueContext;
  class UpperEndValueContext;
  class SizeConstraintContext;
  class PermittedAlphabetContext;
  class UserDefinedConstraintContext;
  class UserDefinedConstraintParameterContext;
  class TableConstraintContext;
  class SimpleTableConstraintContext;
  class ComponentRelationConstraintContext;
  class AtNotationContext;
  class LevelContext;
  class ComponentIdListContext;
  class ContentsConstraintContext;
  class DefinedObjectClassContext;
  class DefinedObjectContext;
  class DefinedObjectSetContext;
  class ExternalObjectClassReferenceContext;
  class ExternalObjectReferenceContext;
  class ExternalObjectSetReferenceContext;
  class UsefulObjectClassReferenceContext;
  class ObjectClassAssignmentContext;
  class ObjectClassContext;
  class ObjectClassDefnContext;
  class WithSyntaxSpecContext;
  class FieldSpecContext;
  class TypeFieldSpecContext;
  class TypeOptionalitySpecContext;
  class FixedTypeValueFieldSpecContext;
  class ValueOptionalitySpecContext;
  class VariableTypeValueFieldSpecContext;
  class FixedTypeValueSetFieldSpecContext;
  class ValueSetOptionalitySpecContext;
  class VariableTypeValueSetFieldSpecContext;
  class ObjectFieldSpecContext;
  class ObjectOptionalitySpecContext;
  class ObjectSetFieldSpecContext;
  class ObjectSetOptionalitySpecContext;
  class PrimitiveFieldNameContext;
  class FieldNameContext;
  class SyntaxListContext;
  class TokenOrGroupSpecContext;
  class OptionalGroupContext;
  class RequiredTokenContext;
  class LiteralContext;
  class ObjectAssignmentContext;
  class ObjectContext;
  class ObjectDefnContext;
  class DefaultSyntaxContext;
  class FieldSettingContext;
  class DefinedSyntaxContext;
  class DefinedSyntaxTokenContext;
  class SettingContext;
  class ObjectSetAssignmentContext;
  class ObjectSetContext;
  class ObjectSetSpecContext;
  class ObjectSetElementsContext;
  class ObjectClassFieldTypeContext;
  class ObjectClassFieldValueContext;
  class OpenTypeFieldValContext;
  class FixedTypeFieldValContext;
  class ValueFromObjectContext;
  class ValueSetFromObjectsContext;
  class TypeFromObjectContext;
  class ObjectFromObjectContext;
  class ObjectSetFromObjectsContext;
  class ReferencedObjectsContext;
  class AnyTypeContext;
  class ObjectclassreferenceContext;
  class ObjectreferenceContext;
  class ObjectsetreferenceContext;
  class TypefieldreferenceContext;
  class ValuefieldreferenceContext;
  class ValuesetfieldreferenceContext;
  class ObjectfieldreferenceContext;
  class ObjectsetfieldreferenceContext;
  class WordContext;
  class ParameterizedAssignmentContext;
  class ParameterizedTypeAssignmentContext;
  class ParameterizedValueAssignmentContext;
  class ParameterizedValueSetTypeAssignmentContext;
  class ParameterizedObjectClassAssignmentContext;
  class ParameterizedObjectAssignmentContext;
  class ParameterizedObjectSetAssignmentContext;
  class ParameterListContext;
  class ParameterContext;
  class ParamGovernorContext;
  class GovernorContext;
  class DummyGovernorContext;
  class DummyReferenceContext;
  class ParameterizedReferenceContext;
  class ParameterizedTypeContext;
  class SimpleDefinedTypeContext;
  class ParameterizedValueContext;
  class SimpleDefinedValueContext;
  class ParameterizedValueSetTypeContext;
  class ParameterizedObjectClassContext;
  class ParameterizedObjectSetContext;
  class ParameterizedObjectContext;
  class ActualParameterListContext;
  class ActualParameterContext;
  class TypereferenceContext;
  class IdentifierContext;
  class ValuereferenceContext;
  class ModulereferenceContext;
  class NumberContext;
  class BstringContext;
  class HstringContext;
  class CstringContext; 

  class  ModuleDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ModuleDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<ModuleIdentifierContext *> moduleIdentifier();
    ModuleIdentifierContext* moduleIdentifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFINITIONS_WORD();
    antlr4::tree::TerminalNode* DEFINITIONS_WORD(size_t i);
    std::vector<TagDefaultContext *> tagDefault();
    TagDefaultContext* tagDefault(size_t i);
    std::vector<ExtensionDefaultContext *> extensionDefault();
    ExtensionDefaultContext* extensionDefault(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASSIGN();
    antlr4::tree::TerminalNode* ASSIGN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BEGIN_WORD();
    antlr4::tree::TerminalNode* BEGIN_WORD(size_t i);
    std::vector<ModuleBodyContext *> moduleBody();
    ModuleBodyContext* moduleBody(size_t i);
    std::vector<antlr4::tree::TerminalNode *> END_WORD();
    antlr4::tree::TerminalNode* END_WORD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleDefinitionContext* moduleDefinition();

  class  ModuleIdentifierContext : public antlr4::ParserRuleContext {
  public:
    ModuleIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModulereferenceContext *modulereference();
    DefinitiveIdentifierContext *definitiveIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleIdentifierContext* moduleIdentifier();

  class  DefinitiveIdentifierContext : public antlr4::ParserRuleContext {
  public:
    DefinitiveIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    DefinitiveObjIdComponentListContext *definitiveObjIdComponentList();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinitiveIdentifierContext* definitiveIdentifier();

  class  DefinitiveObjIdComponentListContext : public antlr4::ParserRuleContext {
  public:
    DefinitiveObjIdComponentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DefinitiveObjIdComponentContext *> definitiveObjIdComponent();
    DefinitiveObjIdComponentContext* definitiveObjIdComponent(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinitiveObjIdComponentListContext* definitiveObjIdComponentList();

  class  DefinitiveObjIdComponentContext : public antlr4::ParserRuleContext {
  public:
    DefinitiveObjIdComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameFormContext *nameForm();
    DefinitiveNumberFormContext *definitiveNumberForm();
    DefinitiveNameAndNumberFormContext *definitiveNameAndNumberForm();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinitiveObjIdComponentContext* definitiveObjIdComponent();

  class  DefinitiveNumberFormContext : public antlr4::ParserRuleContext {
  public:
    DefinitiveNumberFormContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinitiveNumberFormContext* definitiveNumberForm();

  class  DefinitiveNameAndNumberFormContext : public antlr4::ParserRuleContext {
  public:
    DefinitiveNameAndNumberFormContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *L_PAREN();
    DefinitiveNumberFormContext *definitiveNumberForm();
    antlr4::tree::TerminalNode *R_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinitiveNameAndNumberFormContext* definitiveNameAndNumberForm();

  class  TagDefaultContext : public antlr4::ParserRuleContext {
  public:
    TagDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TAGS_WORD();
    antlr4::tree::TerminalNode *EXPLICIT_WORD();
    antlr4::tree::TerminalNode *IMPLICIT_WORD();
    antlr4::tree::TerminalNode *AUTOMATIC_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TagDefaultContext* tagDefault();

  class  ExtensionDefaultContext : public antlr4::ParserRuleContext {
  public:
    ExtensionDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTENSIBILITY_WORD();
    antlr4::tree::TerminalNode *IMPLIED_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtensionDefaultContext* extensionDefault();

  class  ModuleBodyContext : public antlr4::ParserRuleContext {
  public:
    ModuleBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExportsContext *exports();
    ImportsContext *imports();
    AssignmentListContext *assignmentList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleBodyContext* moduleBody();

  class  ExportsContext : public antlr4::ParserRuleContext {
  public:
    ExportsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPORTS_WORD();
    SymbolsExportedContext *symbolsExported();
    antlr4::tree::TerminalNode *ALL_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExportsContext* exports();

  class  SymbolsExportedContext : public antlr4::ParserRuleContext {
  public:
    SymbolsExportedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolListContext *symbolList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SymbolsExportedContext* symbolsExported();

  class  ImportsContext : public antlr4::ParserRuleContext {
  public:
    ImportsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORTS_WORD();
    SymbolsImportedContext *symbolsImported();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportsContext* imports();

  class  SymbolsImportedContext : public antlr4::ParserRuleContext {
  public:
    SymbolsImportedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolsFromModuleListContext *symbolsFromModuleList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SymbolsImportedContext* symbolsImported();

  class  SymbolsFromModuleListContext : public antlr4::ParserRuleContext {
  public:
    SymbolsFromModuleListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SymbolsFromModuleContext *> symbolsFromModule();
    SymbolsFromModuleContext* symbolsFromModule(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SymbolsFromModuleListContext* symbolsFromModuleList();

  class  SymbolsFromModuleContext : public antlr4::ParserRuleContext {
  public:
    SymbolsFromModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolListContext *symbolList();
    antlr4::tree::TerminalNode *FROM_WORD();
    GlobalModuleReferenceContext *globalModuleReference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SymbolsFromModuleContext* symbolsFromModule();

  class  GlobalModuleReferenceContext : public antlr4::ParserRuleContext {
  public:
    GlobalModuleReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModulereferenceContext *modulereference();
    AssignedIdentifierContext *assignedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GlobalModuleReferenceContext* globalModuleReference();

  class  AssignedIdentifierContext : public antlr4::ParserRuleContext {
  public:
    AssignedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectIdentifierValueContext *objectIdentifierValue();
    DefinedValueContext *definedValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignedIdentifierContext* assignedIdentifier();

  class  SymbolListContext : public antlr4::ParserRuleContext {
  public:
    SymbolListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SymbolContext *> symbol();
    SymbolContext* symbol(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SymbolListContext* symbolList();

  class  SymbolContext : public antlr4::ParserRuleContext {
  public:
    SymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReferenceContext *reference();
    ParameterizedReferenceContext *parameterizedReference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SymbolContext* symbol();

  class  ReferenceContext : public antlr4::ParserRuleContext {
  public:
    ReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypereferenceContext *typereference();
    ValuereferenceContext *valuereference();
    ObjectclassreferenceContext *objectclassreference();
    ObjectreferenceContext *objectreference();
    ObjectsetreferenceContext *objectsetreference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReferenceContext* reference();

  class  AssignmentListContext : public antlr4::ParserRuleContext {
  public:
    AssignmentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentListContext* assignmentList();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeAssignmentContext *typeAssignment();
    ValueAssignmentContext *valueAssignment();
    ValueSetTypeAssignmentContext *valueSetTypeAssignment();
    ObjectClassAssignmentContext *objectClassAssignment();
    ObjectAssignmentContext *objectAssignment();
    ObjectSetAssignmentContext *objectSetAssignment();
    ParameterizedAssignmentContext *parameterizedAssignment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  DefinedTypeContext : public antlr4::ParserRuleContext {
  public:
    DefinedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExternalTypeReferenceContext *externalTypeReference();
    TypereferenceContext *typereference();
    ParameterizedTypeContext *parameterizedType();
    ParameterizedValueSetTypeContext *parameterizedValueSetType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinedTypeContext* definedType();

  class  DefinedValueContext : public antlr4::ParserRuleContext {
  public:
    DefinedValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExternalValueReferenceContext *externalValueReference();
    ValuereferenceContext *valuereference();
    ParameterizedValueContext *parameterizedValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinedValueContext* definedValue();

  class  ExternalTypeReferenceContext : public antlr4::ParserRuleContext {
  public:
    ExternalTypeReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModulereferenceContext *modulereference();
    antlr4::tree::TerminalNode *DOT();
    TypereferenceContext *typereference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExternalTypeReferenceContext* externalTypeReference();

  class  ExternalValueReferenceContext : public antlr4::ParserRuleContext {
  public:
    ExternalValueReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModulereferenceContext *modulereference();
    antlr4::tree::TerminalNode *DOT();
    ValuereferenceContext *valuereference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExternalValueReferenceContext* externalValueReference();

  class  TypeAssignmentContext : public antlr4::ParserRuleContext {
  public:
    TypeAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypereferenceContext *typereference();
    antlr4::tree::TerminalNode *ASSIGN();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeAssignmentContext* typeAssignment();

  class  ValueAssignmentContext : public antlr4::ParserRuleContext {
  public:
    ValueAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValuereferenceContext *valuereference();
    TypeContext *type();
    antlr4::tree::TerminalNode *ASSIGN();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueAssignmentContext* valueAssignment();

  class  ValueSetTypeAssignmentContext : public antlr4::ParserRuleContext {
  public:
    ValueSetTypeAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypereferenceContext *typereference();
    TypeContext *type();
    antlr4::tree::TerminalNode *ASSIGN();
    ValueSetContext *valueSet();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueSetTypeAssignmentContext* valueSetTypeAssignment();

  class  ValueSetContext : public antlr4::ParserRuleContext {
  public:
    ValueSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    ElementSetSpecsContext *elementSetSpecs();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueSetContext* valueSet();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BuiltinTypeContext *builtinType();
    ReferencedTypeContext *referencedType();
    ConstrainedTypeContext *constrainedType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  BuiltinTypeContext : public antlr4::ParserRuleContext {
  public:
    BuiltinTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BitStringTypeContext *bitStringType();
    BooleanTypeContext *booleanType();
    CharacterStringTypeContext *characterStringType();
    ChoiceTypeContext *choiceType();
    EnumeratedTypeContext *enumeratedType();
    IntegerTypeContext *integerType();
    NullTypeContext *nullType();
    ObjectClassFieldTypeContext *objectClassFieldType();
    ObjectIdentifierTypeContext *objectIdentifierType();
    OctetStringTypeContext *octetStringType();
    SequenceTypeContext *sequenceType();
    SequenceOfTypeContext *sequenceOfType();
    SetTypeContext *setType();
    SetOfTypeContext *setOfType();
    TaggedTypeContext *taggedType();
    AnyTypeContext *anyType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BuiltinTypeContext* builtinType();

  class  ReferencedTypeContext : public antlr4::ParserRuleContext {
  public:
    ReferencedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefinedTypeContext *definedType();
    UsefulTypeContext *usefulType();
    TypeFromObjectContext *typeFromObject();
    ValueSetFromObjectsContext *valueSetFromObjects();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReferencedTypeContext* referencedType();

  class  NamedTypeContext : public antlr4::ParserRuleContext {
  public:
    NamedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedTypeContext* namedType();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BuiltinValueContext *builtinValue();
    ReferencedValueContext *referencedValue();
    ObjectClassFieldValueContext *objectClassFieldValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  BuiltinValueContext : public antlr4::ParserRuleContext {
  public:
    BuiltinValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BitStringValueContext *bitStringValue();
    BooleanValueContext *booleanValue();
    CharacterStringValueContext *characterStringValue();
    EnumeratedValueContext *enumeratedValue();
    IntegerValueContext *integerValue();
    NullValueContext *nullValue();
    ObjectIdentifierValueContext *objectIdentifierValue();
    OctetStringValueContext *octetStringValue();
    SequenceValueContext *sequenceValue();
    SequenceOfValueContext *sequenceOfValue();
    SetValueContext *setValue();
    SetOfValueContext *setOfValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BuiltinValueContext* builtinValue();

  class  ReferencedValueContext : public antlr4::ParserRuleContext {
  public:
    ReferencedValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefinedValueContext *definedValue();
    ValueFromObjectContext *valueFromObject();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReferencedValueContext* referencedValue();

  class  NamedValueContext : public antlr4::ParserRuleContext {
  public:
    NamedValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedValueContext* namedValue();

  class  BooleanTypeContext : public antlr4::ParserRuleContext {
  public:
    BooleanTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOLEAN_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanTypeContext* booleanType();

  class  BooleanValueContext : public antlr4::ParserRuleContext {
  public:
    BooleanValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE_WORD();
    antlr4::tree::TerminalNode *FALSE_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanValueContext* booleanValue();

  class  IntegerTypeContext : public antlr4::ParserRuleContext {
  public:
    IntegerTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_WORD();
    antlr4::tree::TerminalNode *L_BRACE();
    NamedNumberListContext *namedNumberList();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerTypeContext* integerType();

  class  NamedNumberListContext : public antlr4::ParserRuleContext {
  public:
    NamedNumberListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NamedNumberContext *> namedNumber();
    NamedNumberContext* namedNumber(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedNumberListContext* namedNumberList();

  class  NamedNumberContext : public antlr4::ParserRuleContext {
  public:
    NamedNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *L_PAREN();
    SignedNumberContext *signedNumber();
    antlr4::tree::TerminalNode *R_PAREN();
    DefinedValueContext *definedValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedNumberContext* namedNumber();

  class  SignedNumberContext : public antlr4::ParserRuleContext {
  public:
    SignedNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignedNumberContext* signedNumber();

  class  IntegerValueContext : public antlr4::ParserRuleContext {
  public:
    IntegerValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignedNumberContext *signedNumber();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerValueContext* integerValue();

  class  EnumeratedTypeContext : public antlr4::ParserRuleContext {
  public:
    EnumeratedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUMERATED_WORD();
    antlr4::tree::TerminalNode *L_BRACE();
    EnumerationsContext *enumerations();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratedTypeContext* enumeratedType();

  class  EnumerationsContext : public antlr4::ParserRuleContext {
  public:
    EnumerationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RootEnumerationContext *rootEnumeration();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ELLIPSIS();
    ExceptionSpecContext *exceptionSpec();
    AdditionalEnumerationContext *additionalEnumeration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumerationsContext* enumerations();

  class  RootEnumerationContext : public antlr4::ParserRuleContext {
  public:
    RootEnumerationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumerationContext *enumeration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RootEnumerationContext* rootEnumeration();

  class  AdditionalEnumerationContext : public antlr4::ParserRuleContext {
  public:
    AdditionalEnumerationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumerationContext *enumeration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdditionalEnumerationContext* additionalEnumeration();

  class  EnumerationContext : public antlr4::ParserRuleContext {
  public:
    EnumerationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EnumerationItemContext *> enumerationItem();
    EnumerationItemContext* enumerationItem(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumerationContext* enumeration();

  class  EnumerationItemContext : public antlr4::ParserRuleContext {
  public:
    EnumerationItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    NamedNumberContext *namedNumber();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumerationItemContext* enumerationItem();

  class  EnumeratedValueContext : public antlr4::ParserRuleContext {
  public:
    EnumeratedValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratedValueContext* enumeratedValue();

  class  BitStringTypeContext : public antlr4::ParserRuleContext {
  public:
    BitStringTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIT_WORD();
    antlr4::tree::TerminalNode *STRING_WORD();
    antlr4::tree::TerminalNode *L_BRACE();
    NamedBitListContext *namedBitList();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitStringTypeContext* bitStringType();

  class  NamedBitListContext : public antlr4::ParserRuleContext {
  public:
    NamedBitListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NamedBitContext *> namedBit();
    NamedBitContext* namedBit(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedBitListContext* namedBitList();

  class  NamedBitContext : public antlr4::ParserRuleContext {
  public:
    NamedBitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *L_PAREN();
    NumberContext *number();
    antlr4::tree::TerminalNode *R_PAREN();
    DefinedValueContext *definedValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedBitContext* namedBit();

  class  BitStringValueContext : public antlr4::ParserRuleContext {
  public:
    BitStringValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BstringContext *bstring();
    HstringContext *hstring();
    antlr4::tree::TerminalNode *L_BRACE();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *R_BRACE();
    antlr4::tree::TerminalNode *CONTAINING_WORD();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitStringValueContext* bitStringValue();

  class  IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierListContext* identifierList();

  class  OctetStringTypeContext : public antlr4::ParserRuleContext {
  public:
    OctetStringTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OCTET_WORD();
    antlr4::tree::TerminalNode *STRING_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OctetStringTypeContext* octetStringType();

  class  OctetStringValueContext : public antlr4::ParserRuleContext {
  public:
    OctetStringValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BstringContext *bstring();
    HstringContext *hstring();
    antlr4::tree::TerminalNode *CONTAINING_WORD();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OctetStringValueContext* octetStringValue();

  class  NullTypeContext : public antlr4::ParserRuleContext {
  public:
    NullTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullTypeContext* nullType();

  class  NullValueContext : public antlr4::ParserRuleContext {
  public:
    NullValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullValueContext* nullValue();

  class  SequenceTypeContext : public antlr4::ParserRuleContext {
  public:
    SequenceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEQUENCE_WORD();
    antlr4::tree::TerminalNode *L_BRACE();
    antlr4::tree::TerminalNode *R_BRACE();
    ExtensionAndExceptionContext *extensionAndException();
    ComponentTypeListsContext *componentTypeLists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SequenceTypeContext* sequenceType();

  class  ComponentTypeListsContext : public antlr4::ParserRuleContext {
  public:
    ComponentTypeListsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RootComponentTypeListContext *> rootComponentTypeList();
    RootComponentTypeListContext* rootComponentTypeList(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    ExtensionAndExceptionContext *extensionAndException();
    ExtensionAdditionsContext *extensionAdditions();
    OptionalExtensionMarkerContext *optionalExtensionMarker();
    ExtensionEndMarkerContext *extensionEndMarker();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComponentTypeListsContext* componentTypeLists();

  class  RootComponentTypeListContext : public antlr4::ParserRuleContext {
  public:
    RootComponentTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ComponentTypeListContext *componentTypeList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RootComponentTypeListContext* rootComponentTypeList();

  class  ExtensionEndMarkerContext : public antlr4::ParserRuleContext {
  public:
    ExtensionEndMarkerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *ELLIPSIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtensionEndMarkerContext* extensionEndMarker();

  class  ExtensionAdditionsContext : public antlr4::ParserRuleContext {
  public:
    ExtensionAdditionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    ExtensionAdditionListContext *extensionAdditionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtensionAdditionsContext* extensionAdditions();

  class  ExtensionAdditionListContext : public antlr4::ParserRuleContext {
  public:
    ExtensionAdditionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExtensionAdditionContext *> extensionAddition();
    ExtensionAdditionContext* extensionAddition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtensionAdditionListContext* extensionAdditionList();

  class  ExtensionAdditionContext : public antlr4::ParserRuleContext {
  public:
    ExtensionAdditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ComponentTypeContext *componentType();
    ExtensionAdditionGroupContext *extensionAdditionGroup();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtensionAdditionContext* extensionAddition();

  class  ExtensionAdditionGroupContext : public antlr4::ParserRuleContext {
  public:
    ExtensionAdditionGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LV_BRACKET();
    VersionNumberContext *versionNumber();
    ComponentTypeListContext *componentTypeList();
    antlr4::tree::TerminalNode *RV_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtensionAdditionGroupContext* extensionAdditionGroup();

  class  VersionNumberContext : public antlr4::ParserRuleContext {
  public:
    VersionNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VersionNumberContext* versionNumber();

  class  ComponentTypeListContext : public antlr4::ParserRuleContext {
  public:
    ComponentTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ComponentTypeContext *> componentType();
    ComponentTypeContext* componentType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComponentTypeListContext* componentTypeList();

  class  ComponentTypeContext : public antlr4::ParserRuleContext {
  public:
    ComponentTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamedTypeContext *namedType();
    antlr4::tree::TerminalNode *OPTIONAL_WORD();
    antlr4::tree::TerminalNode *DEFAULT_WORD();
    ValueContext *value();
    antlr4::tree::TerminalNode *COMPONENTS_WORD();
    antlr4::tree::TerminalNode *OF_WORD();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComponentTypeContext* componentType();

  class  SequenceValueContext : public antlr4::ParserRuleContext {
  public:
    SequenceValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    ComponentValueListContext *componentValueList();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SequenceValueContext* sequenceValue();

  class  ComponentValueListContext : public antlr4::ParserRuleContext {
  public:
    ComponentValueListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NamedValueContext *> namedValue();
    NamedValueContext* namedValue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComponentValueListContext* componentValueList();

  class  SequenceOfTypeContext : public antlr4::ParserRuleContext {
  public:
    SequenceOfTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEQUENCE_WORD();
    antlr4::tree::TerminalNode *OF_WORD();
    TypeContext *type();
    NamedTypeContext *namedType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SequenceOfTypeContext* sequenceOfType();

  class  SequenceOfValueContext : public antlr4::ParserRuleContext {
  public:
    SequenceOfValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    ValueListContext *valueList();
    antlr4::tree::TerminalNode *R_BRACE();
    NamedValueListContext *namedValueList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SequenceOfValueContext* sequenceOfValue();

  class  ValueListContext : public antlr4::ParserRuleContext {
  public:
    ValueListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueListContext* valueList();

  class  NamedValueListContext : public antlr4::ParserRuleContext {
  public:
    NamedValueListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NamedValueContext *> namedValue();
    NamedValueContext* namedValue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedValueListContext* namedValueList();

  class  SetTypeContext : public antlr4::ParserRuleContext {
  public:
    SetTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_WORD();
    antlr4::tree::TerminalNode *L_BRACE();
    antlr4::tree::TerminalNode *R_BRACE();
    ExtensionAndExceptionContext *extensionAndException();
    OptionalExtensionMarkerContext *optionalExtensionMarker();
    ComponentTypeListsContext *componentTypeLists();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetTypeContext* setType();

  class  SetValueContext : public antlr4::ParserRuleContext {
  public:
    SetValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    ComponentValueListContext *componentValueList();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetValueContext* setValue();

  class  SetOfTypeContext : public antlr4::ParserRuleContext {
  public:
    SetOfTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_WORD();
    antlr4::tree::TerminalNode *OF_WORD();
    TypeContext *type();
    NamedTypeContext *namedType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetOfTypeContext* setOfType();

  class  SetOfValueContext : public antlr4::ParserRuleContext {
  public:
    SetOfValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    ValueListContext *valueList();
    antlr4::tree::TerminalNode *R_BRACE();
    NamedValueListContext *namedValueList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetOfValueContext* setOfValue();

  class  ChoiceTypeContext : public antlr4::ParserRuleContext {
  public:
    ChoiceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHOICE_WORD();
    antlr4::tree::TerminalNode *L_BRACE();
    AlternativeTypeListsContext *alternativeTypeLists();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChoiceTypeContext* choiceType();

  class  AlternativeTypeListsContext : public antlr4::ParserRuleContext {
  public:
    AlternativeTypeListsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RootAlternativeTypeListContext *rootAlternativeTypeList();
    antlr4::tree::TerminalNode *COMMA();
    ExtensionAndExceptionContext *extensionAndException();
    ExtensionAdditionAlternativesContext *extensionAdditionAlternatives();
    OptionalExtensionMarkerContext *optionalExtensionMarker();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlternativeTypeListsContext* alternativeTypeLists();

  class  RootAlternativeTypeListContext : public antlr4::ParserRuleContext {
  public:
    RootAlternativeTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlternativeTypeListContext *alternativeTypeList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RootAlternativeTypeListContext* rootAlternativeTypeList();

  class  ExtensionAdditionAlternativesContext : public antlr4::ParserRuleContext {
  public:
    ExtensionAdditionAlternativesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExtensionAdditionAlternativesListContext *> extensionAdditionAlternativesList();
    ExtensionAdditionAlternativesListContext* extensionAdditionAlternativesList(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtensionAdditionAlternativesContext* extensionAdditionAlternatives();

  class  ExtensionAdditionAlternativesListContext : public antlr4::ParserRuleContext {
  public:
    ExtensionAdditionAlternativesListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExtensionAdditionAlternativeContext *extensionAdditionAlternative();
    ExtensionAdditionAlternativesListContext *extensionAdditionAlternativesList();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtensionAdditionAlternativesListContext* extensionAdditionAlternativesList();
  ExtensionAdditionAlternativesListContext* extensionAdditionAlternativesList(int precedence);
  class  ExtensionAdditionAlternativeContext : public antlr4::ParserRuleContext {
  public:
    ExtensionAdditionAlternativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExtensionAdditionAlternativesGroupContext *extensionAdditionAlternativesGroup();
    NamedTypeContext *namedType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtensionAdditionAlternativeContext* extensionAdditionAlternative();

  class  ExtensionAdditionAlternativesGroupContext : public antlr4::ParserRuleContext {
  public:
    ExtensionAdditionAlternativesGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LV_BRACKET();
    VersionNumberContext *versionNumber();
    AlternativeTypeListContext *alternativeTypeList();
    antlr4::tree::TerminalNode *RV_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtensionAdditionAlternativesGroupContext* extensionAdditionAlternativesGroup();

  class  AlternativeTypeListContext : public antlr4::ParserRuleContext {
  public:
    AlternativeTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NamedTypeContext *> namedType();
    NamedTypeContext* namedType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlternativeTypeListContext* alternativeTypeList();

  class  TaggedTypeContext : public antlr4::ParserRuleContext {
  public:
    TaggedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TagContext *tag();
    TypeContext *type();
    antlr4::tree::TerminalNode *IMPLICIT_WORD();
    antlr4::tree::TerminalNode *EXPLICIT_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TaggedTypeContext* taggedType();

  class  TagContext : public antlr4::ParserRuleContext {
  public:
    TagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassPContext *classP();
    ClassNumberContext *classNumber();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TagContext* tag();

  class  ClassNumberContext : public antlr4::ParserRuleContext {
  public:
    ClassNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    DefinedValueContext *definedValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassNumberContext* classNumber();

  class  ClassPContext : public antlr4::ParserRuleContext {
  public:
    ClassPContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNIVERSAL_WORD();
    antlr4::tree::TerminalNode *APPLICATION_WORD();
    antlr4::tree::TerminalNode *PRIVATE_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassPContext* classP();

  class  ObjectIdentifierTypeContext : public antlr4::ParserRuleContext {
  public:
    ObjectIdentifierTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBJECT_WORD();
    antlr4::tree::TerminalNode *IDENTIFIER_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectIdentifierTypeContext* objectIdentifierType();

  class  ObjectIdentifierValueContext : public antlr4::ParserRuleContext {
  public:
    ObjectIdentifierValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    ObjIdComponentsListContext *objIdComponentsList();
    antlr4::tree::TerminalNode *R_BRACE();
    DefinedValueContext *definedValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectIdentifierValueContext* objectIdentifierValue();

  class  ObjIdComponentsListContext : public antlr4::ParserRuleContext {
  public:
    ASN1Parser::ObjIdComponentsContext *objIdComponentsContext = nullptr;
    std::vector<ObjIdComponentsContext *> values;
    ObjIdComponentsListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ObjIdComponentsContext *> objIdComponents();
    ObjIdComponentsContext* objIdComponents(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjIdComponentsListContext* objIdComponentsList();

  class  ObjIdComponentsContext : public antlr4::ParserRuleContext {
  public:
    ObjIdComponentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameFormContext *nameForm();
    NumberFormContext *numberForm();
    NameAndNumberFormContext *nameAndNumberForm();
    DefinedValueContext *definedValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjIdComponentsContext* objIdComponents();

  class  NameFormContext : public antlr4::ParserRuleContext {
  public:
    NameFormContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameFormContext* nameForm();

  class  NumberFormContext : public antlr4::ParserRuleContext {
  public:
    NumberFormContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    DefinedValueContext *definedValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberFormContext* numberForm();

  class  NameAndNumberFormContext : public antlr4::ParserRuleContext {
  public:
    NameAndNumberFormContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *L_PAREN();
    NumberFormContext *numberForm();
    antlr4::tree::TerminalNode *R_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameAndNumberFormContext* nameAndNumberForm();

  class  ExtensionAndExceptionContext : public antlr4::ParserRuleContext {
  public:
    ExtensionAndExceptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELLIPSIS();
    ExceptionSpecContext *exceptionSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtensionAndExceptionContext* extensionAndException();

  class  ExceptionSpecContext : public antlr4::ParserRuleContext {
  public:
    ExceptionSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExceptionIdentificationContext *exceptionIdentification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptionSpecContext* exceptionSpec();

  class  ExceptionIdentificationContext : public antlr4::ParserRuleContext {
  public:
    ExceptionIdentificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignedNumberContext *signedNumber();
    DefinedValueContext *definedValue();
    TypeContext *type();
    antlr4::tree::TerminalNode *COLON();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptionIdentificationContext* exceptionIdentification();

  class  OptionalExtensionMarkerContext : public antlr4::ParserRuleContext {
  public:
    OptionalExtensionMarkerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *ELLIPSIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionalExtensionMarkerContext* optionalExtensionMarker();

  class  CharacterStringTypeContext : public antlr4::ParserRuleContext {
  public:
    CharacterStringTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RestrictedCharacterStringTypeContext *restrictedCharacterStringType();
    UnrestrictedCharacterStringTypeContext *unrestrictedCharacterStringType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharacterStringTypeContext* characterStringType();

  class  CharacterStringValueContext : public antlr4::ParserRuleContext {
  public:
    CharacterStringValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RestrictedCharacterStringValueContext *restrictedCharacterStringValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharacterStringValueContext* characterStringValue();

  class  RestrictedCharacterStringTypeContext : public antlr4::ParserRuleContext {
  public:
    RestrictedCharacterStringTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BMPString_WORD();
    antlr4::tree::TerminalNode *GeneralString_WORD();
    antlr4::tree::TerminalNode *GraphicString_WORD();
    antlr4::tree::TerminalNode *IA5String_WORD();
    antlr4::tree::TerminalNode *ISO646String_WORD();
    antlr4::tree::TerminalNode *NumericString_WORD();
    antlr4::tree::TerminalNode *PrintableString_WORD();
    antlr4::tree::TerminalNode *TeletexString_WORD();
    antlr4::tree::TerminalNode *T61String_WORD();
    antlr4::tree::TerminalNode *UniversalString_WORD();
    antlr4::tree::TerminalNode *UTF8String_WORD();
    antlr4::tree::TerminalNode *VideotexString_WORD();
    antlr4::tree::TerminalNode *VisibleString_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RestrictedCharacterStringTypeContext* restrictedCharacterStringType();

  class  RestrictedCharacterStringValueContext : public antlr4::ParserRuleContext {
  public:
    RestrictedCharacterStringValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CstringContext *cstring();
    CharacterStringListContext *characterStringList();
    QuadrupleContext *quadruple();
    TupleContext *tuple();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RestrictedCharacterStringValueContext* restrictedCharacterStringValue();

  class  CharacterStringListContext : public antlr4::ParserRuleContext {
  public:
    CharacterStringListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    CharSymsContext *charSyms();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharacterStringListContext* characterStringList();

  class  CharSymsContext : public antlr4::ParserRuleContext {
  public:
    CharSymsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CharsDefnContext *> charsDefn();
    CharsDefnContext* charsDefn(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharSymsContext* charSyms();

  class  CharsDefnContext : public antlr4::ParserRuleContext {
  public:
    CharsDefnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CstringContext *cstring();
    QuadrupleContext *quadruple();
    TupleContext *tuple();
    DefinedValueContext *definedValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharsDefnContext* charsDefn();

  class  QuadrupleContext : public antlr4::ParserRuleContext {
  public:
    QuadrupleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    GroupContext *group();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    PlaneContext *plane();
    RowContext *row();
    CellContext *cell();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuadrupleContext* quadruple();

  class  GroupContext : public antlr4::ParserRuleContext {
  public:
    GroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupContext* group();

  class  PlaneContext : public antlr4::ParserRuleContext {
  public:
    PlaneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlaneContext* plane();

  class  RowContext : public antlr4::ParserRuleContext {
  public:
    RowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RowContext* row();

  class  CellContext : public antlr4::ParserRuleContext {
  public:
    CellContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CellContext* cell();

  class  TupleContext : public antlr4::ParserRuleContext {
  public:
    TupleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    TableColumnContext *tableColumn();
    antlr4::tree::TerminalNode *COMMA();
    TableRowContext *tableRow();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TupleContext* tuple();

  class  TableColumnContext : public antlr4::ParserRuleContext {
  public:
    TableColumnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableColumnContext* tableColumn();

  class  TableRowContext : public antlr4::ParserRuleContext {
  public:
    TableRowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableRowContext* tableRow();

  class  UnrestrictedCharacterStringTypeContext : public antlr4::ParserRuleContext {
  public:
    UnrestrictedCharacterStringTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER_WORD();
    antlr4::tree::TerminalNode *STRING_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnrestrictedCharacterStringTypeContext* unrestrictedCharacterStringType();

  class  UsefulTypeContext : public antlr4::ParserRuleContext {
  public:
    UsefulTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    UsefulTypeContext() = default;
    void copyFrom(UsefulTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UTCTimeTypeContext : public UsefulTypeContext {
  public:
    UTCTimeTypeContext(UsefulTypeContext *ctx);

    antlr4::tree::TerminalNode *UTCTime_WORD();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GeneralizedTimeTypeContext : public UsefulTypeContext {
  public:
    GeneralizedTimeTypeContext(UsefulTypeContext *ctx);

    antlr4::tree::TerminalNode *GeneralizedTime_WORD();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  UsefulTypeContext* usefulType();

  class  ConstrainedTypeContext : public antlr4::ParserRuleContext {
  public:
    ConstrainedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstraintContext *constraint();
    BuiltinTypeContext *builtinType();
    ReferencedTypeContext *referencedType();
    TypeWithConstraintContext *typeWithConstraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstrainedTypeContext* constrainedType();

  class  TypeWithConstraintContext : public antlr4::ParserRuleContext {
  public:
    TypeWithConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET_WORD();
    ConstraintContext *constraint();
    antlr4::tree::TerminalNode *OF_WORD();
    TypeContext *type();
    SizeConstraintContext *sizeConstraint();
    antlr4::tree::TerminalNode *SEQUENCE_WORD();
    NamedTypeContext *namedType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeWithConstraintContext* typeWithConstraint();

  class  ConstraintContext : public antlr4::ParserRuleContext {
  public:
    ConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_PAREN();
    ConstraintSpecContext *constraintSpec();
    ExceptionSpecContext *exceptionSpec();
    antlr4::tree::TerminalNode *R_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstraintContext* constraint();

  class  ConstraintSpecContext : public antlr4::ParserRuleContext {
  public:
    ConstraintSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtypeConstraintContext *subtypeConstraint();
    GeneralConstraintContext *generalConstraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstraintSpecContext* constraintSpec();

  class  SubtypeConstraintContext : public antlr4::ParserRuleContext {
  public:
    SubtypeConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElementSetSpecsContext *elementSetSpecs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubtypeConstraintContext* subtypeConstraint();

  class  GeneralConstraintContext : public antlr4::ParserRuleContext {
  public:
    GeneralConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UserDefinedConstraintContext *userDefinedConstraint();
    TableConstraintContext *tableConstraint();
    ContentsConstraintContext *contentsConstraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeneralConstraintContext* generalConstraint();

  class  ElementSetSpecsContext : public antlr4::ParserRuleContext {
  public:
    ElementSetSpecsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RootElementSetSpecContext *rootElementSetSpec();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ELLIPSIS();
    AdditionalElementSetSpecContext *additionalElementSetSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementSetSpecsContext* elementSetSpecs();

  class  RootElementSetSpecContext : public antlr4::ParserRuleContext {
  public:
    RootElementSetSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElementSetSpecContext *elementSetSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RootElementSetSpecContext* rootElementSetSpec();

  class  AdditionalElementSetSpecContext : public antlr4::ParserRuleContext {
  public:
    AdditionalElementSetSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElementSetSpecContext *elementSetSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdditionalElementSetSpecContext* additionalElementSetSpec();

  class  ElementSetSpecContext : public antlr4::ParserRuleContext {
  public:
    ElementSetSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnionsContext *unions();
    antlr4::tree::TerminalNode *ALL_WORD();
    ExclusionsContext *exclusions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementSetSpecContext* elementSetSpec();

  class  UnionsContext : public antlr4::ParserRuleContext {
  public:
    UnionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntersectionsContext *intersections();
    UnionsContext *unions();
    UnionMarkContext *unionMark();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionsContext* unions();
  UnionsContext* unions(int precedence);
  class  UElemsContext : public antlr4::ParserRuleContext {
  public:
    UElemsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnionsContext *unions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UElemsContext* uElems();

  class  IntersectionsContext : public antlr4::ParserRuleContext {
  public:
    IntersectionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntersectionElementsContext *intersectionElements();
    IntersectionsContext *intersections();
    IntersectionMarkContext *intersectionMark();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntersectionsContext* intersections();
  IntersectionsContext* intersections(int precedence);
  class  IElemsContext : public antlr4::ParserRuleContext {
  public:
    IElemsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntersectionsContext *intersections();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IElemsContext* iElems();

  class  IntersectionElementsContext : public antlr4::ParserRuleContext {
  public:
    IntersectionElementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElementsContext *elements();
    ElemsContext *elems();
    ExclusionsContext *exclusions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntersectionElementsContext* intersectionElements();

  class  ElemsContext : public antlr4::ParserRuleContext {
  public:
    ElemsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElementsContext *elements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElemsContext* elems();

  class  ExclusionsContext : public antlr4::ParserRuleContext {
  public:
    ExclusionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCEPT_WORD();
    ElementsContext *elements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExclusionsContext* exclusions();

  class  UnionMarkContext : public antlr4::ParserRuleContext {
  public:
    UnionMarkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNION_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionMarkContext* unionMark();

  class  IntersectionMarkContext : public antlr4::ParserRuleContext {
  public:
    IntersectionMarkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERSECTION_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntersectionMarkContext* intersectionMark();

  class  ElementsContext : public antlr4::ParserRuleContext {
  public:
    ElementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubtypeElementsContext *subtypeElements();
    ObjectSetElementsContext *objectSetElements();
    antlr4::tree::TerminalNode *L_PAREN();
    ElementSetSpecContext *elementSetSpec();
    antlr4::tree::TerminalNode *R_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementsContext* elements();

  class  SubtypeElementsContext : public antlr4::ParserRuleContext {
  public:
    SubtypeElementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleValueContext *singleValue();
    ContainedSubtypeContext *containedSubtype();
    ValueRangeContext *valueRange();
    PermittedAlphabetContext *permittedAlphabet();
    SizeConstraintContext *sizeConstraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubtypeElementsContext* subtypeElements();

  class  SingleValueContext : public antlr4::ParserRuleContext {
  public:
    SingleValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleValueContext* singleValue();

  class  ContainedSubtypeContext : public antlr4::ParserRuleContext {
  public:
    ContainedSubtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IncludesContext *includes();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContainedSubtypeContext* containedSubtype();

  class  IncludesContext : public antlr4::ParserRuleContext {
  public:
    IncludesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCLUDES_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncludesContext* includes();

  class  ValueRangeContext : public antlr4::ParserRuleContext {
  public:
    ValueRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LowerEndpointContext *lowerEndpoint();
    antlr4::tree::TerminalNode *RANGE();
    UpperEndpointContext *upperEndpoint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueRangeContext* valueRange();

  class  LowerEndpointContext : public antlr4::ParserRuleContext {
  public:
    LowerEndpointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LowerEndValueContext *lowerEndValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LowerEndpointContext* lowerEndpoint();

  class  UpperEndpointContext : public antlr4::ParserRuleContext {
  public:
    UpperEndpointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UpperEndValueContext *upperEndValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpperEndpointContext* upperEndpoint();

  class  LowerEndValueContext : public antlr4::ParserRuleContext {
  public:
    LowerEndValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();
    antlr4::tree::TerminalNode *MIN_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LowerEndValueContext* lowerEndValue();

  class  UpperEndValueContext : public antlr4::ParserRuleContext {
  public:
    UpperEndValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();
    antlr4::tree::TerminalNode *MAX_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpperEndValueContext* upperEndValue();

  class  SizeConstraintContext : public antlr4::ParserRuleContext {
  public:
    SizeConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIZE_WORD();
    ConstraintContext *constraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SizeConstraintContext* sizeConstraint();

  class  PermittedAlphabetContext : public antlr4::ParserRuleContext {
  public:
    PermittedAlphabetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM_WORD();
    ConstraintContext *constraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PermittedAlphabetContext* permittedAlphabet();

  class  UserDefinedConstraintContext : public antlr4::ParserRuleContext {
  public:
    UserDefinedConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRAINED_WORD();
    antlr4::tree::TerminalNode *BY_WORD();
    antlr4::tree::TerminalNode *L_BRACE();
    antlr4::tree::TerminalNode *R_BRACE();
    std::vector<UserDefinedConstraintParameterContext *> userDefinedConstraintParameter();
    UserDefinedConstraintParameterContext* userDefinedConstraintParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserDefinedConstraintContext* userDefinedConstraint();

  class  UserDefinedConstraintParameterContext : public antlr4::ParserRuleContext {
  public:
    UserDefinedConstraintParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GovernorContext *governor();
    antlr4::tree::TerminalNode *COLON();
    ValueContext *value();
    ValueSetContext *valueSet();
    ObjectContext *object();
    ObjectSetContext *objectSet();
    TypeContext *type();
    DefinedObjectClassContext *definedObjectClass();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserDefinedConstraintParameterContext* userDefinedConstraintParameter();

  class  TableConstraintContext : public antlr4::ParserRuleContext {
  public:
    TableConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleTableConstraintContext *simpleTableConstraint();
    ComponentRelationConstraintContext *componentRelationConstraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableConstraintContext* tableConstraint();

  class  SimpleTableConstraintContext : public antlr4::ParserRuleContext {
  public:
    SimpleTableConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectSetContext *objectSet();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleTableConstraintContext* simpleTableConstraint();

  class  ComponentRelationConstraintContext : public antlr4::ParserRuleContext {
  public:
    ComponentRelationConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> L_BRACE();
    antlr4::tree::TerminalNode* L_BRACE(size_t i);
    DefinedObjectSetContext *definedObjectSet();
    std::vector<antlr4::tree::TerminalNode *> R_BRACE();
    antlr4::tree::TerminalNode* R_BRACE(size_t i);
    std::vector<AtNotationContext *> atNotation();
    AtNotationContext* atNotation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComponentRelationConstraintContext* componentRelationConstraint();

  class  AtNotationContext : public antlr4::ParserRuleContext {
  public:
    AtNotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ComponentIdListContext *componentIdList();
    LevelContext *level();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtNotationContext* atNotation();

  class  LevelContext : public antlr4::ParserRuleContext {
  public:
    LevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    LevelContext *level();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LevelContext* level();

  class  ComponentIdListContext : public antlr4::ParserRuleContext {
  public:
    ComponentIdListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComponentIdListContext* componentIdList();

  class  ContentsConstraintContext : public antlr4::ParserRuleContext {
  public:
    ContentsConstraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTAINING_WORD();
    TypeContext *type();
    antlr4::tree::TerminalNode *ENCODED_WORD();
    antlr4::tree::TerminalNode *BY_WORD();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContentsConstraintContext* contentsConstraint();

  class  DefinedObjectClassContext : public antlr4::ParserRuleContext {
  public:
    DefinedObjectClassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExternalObjectClassReferenceContext *externalObjectClassReference();
    ObjectclassreferenceContext *objectclassreference();
    UsefulObjectClassReferenceContext *usefulObjectClassReference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinedObjectClassContext* definedObjectClass();

  class  DefinedObjectContext : public antlr4::ParserRuleContext {
  public:
    DefinedObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExternalObjectReferenceContext *externalObjectReference();
    ObjectreferenceContext *objectreference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinedObjectContext* definedObject();

  class  DefinedObjectSetContext : public antlr4::ParserRuleContext {
  public:
    DefinedObjectSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExternalObjectSetReferenceContext *externalObjectSetReference();
    ObjectsetreferenceContext *objectsetreference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinedObjectSetContext* definedObjectSet();

  class  ExternalObjectClassReferenceContext : public antlr4::ParserRuleContext {
  public:
    ExternalObjectClassReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModulereferenceContext *modulereference();
    antlr4::tree::TerminalNode *DOT();
    ObjectclassreferenceContext *objectclassreference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExternalObjectClassReferenceContext* externalObjectClassReference();

  class  ExternalObjectReferenceContext : public antlr4::ParserRuleContext {
  public:
    ExternalObjectReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModulereferenceContext *modulereference();
    antlr4::tree::TerminalNode *DOT();
    ObjectreferenceContext *objectreference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExternalObjectReferenceContext* externalObjectReference();

  class  ExternalObjectSetReferenceContext : public antlr4::ParserRuleContext {
  public:
    ExternalObjectSetReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModulereferenceContext *modulereference();
    antlr4::tree::TerminalNode *DOT();
    ObjectsetreferenceContext *objectsetreference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExternalObjectSetReferenceContext* externalObjectSetReference();

  class  UsefulObjectClassReferenceContext : public antlr4::ParserRuleContext {
  public:
    UsefulObjectClassReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE_IDENTIFIER_WORD();
    antlr4::tree::TerminalNode *ABSTRACT_SYNTAX_WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsefulObjectClassReferenceContext* usefulObjectClassReference();

  class  ObjectClassAssignmentContext : public antlr4::ParserRuleContext {
  public:
    ObjectClassAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectclassreferenceContext *objectclassreference();
    antlr4::tree::TerminalNode *ASSIGN();
    ObjectClassContext *objectClass();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectClassAssignmentContext* objectClassAssignment();

  class  ObjectClassContext : public antlr4::ParserRuleContext {
  public:
    ObjectClassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefinedObjectClassContext *definedObjectClass();
    ObjectClassDefnContext *objectClassDefn();
    ParameterizedObjectClassContext *parameterizedObjectClass();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectClassContext* objectClass();

  class  ObjectClassDefnContext : public antlr4::ParserRuleContext {
  public:
    ObjectClassDefnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS_WORD();
    antlr4::tree::TerminalNode *L_BRACE();
    std::vector<FieldSpecContext *> fieldSpec();
    FieldSpecContext* fieldSpec(size_t i);
    antlr4::tree::TerminalNode *R_BRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    WithSyntaxSpecContext *withSyntaxSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectClassDefnContext* objectClassDefn();

  class  WithSyntaxSpecContext : public antlr4::ParserRuleContext {
  public:
    WithSyntaxSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH_WORD();
    antlr4::tree::TerminalNode *SYNTAX_WORD();
    SyntaxListContext *syntaxList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WithSyntaxSpecContext* withSyntaxSpec();

  class  FieldSpecContext : public antlr4::ParserRuleContext {
  public:
    FieldSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeFieldSpecContext *typeFieldSpec();
    FixedTypeValueFieldSpecContext *fixedTypeValueFieldSpec();
    VariableTypeValueFieldSpecContext *variableTypeValueFieldSpec();
    FixedTypeValueSetFieldSpecContext *fixedTypeValueSetFieldSpec();
    VariableTypeValueSetFieldSpecContext *variableTypeValueSetFieldSpec();
    ObjectFieldSpecContext *objectFieldSpec();
    ObjectSetFieldSpecContext *objectSetFieldSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldSpecContext* fieldSpec();

  class  TypeFieldSpecContext : public antlr4::ParserRuleContext {
  public:
    TypeFieldSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypefieldreferenceContext *typefieldreference();
    TypeOptionalitySpecContext *typeOptionalitySpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeFieldSpecContext* typeFieldSpec();

  class  TypeOptionalitySpecContext : public antlr4::ParserRuleContext {
  public:
    TypeOptionalitySpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIONAL_WORD();
    antlr4::tree::TerminalNode *DEFAULT_WORD();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeOptionalitySpecContext* typeOptionalitySpec();

  class  FixedTypeValueFieldSpecContext : public antlr4::ParserRuleContext {
  public:
    FixedTypeValueFieldSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValuefieldreferenceContext *valuefieldreference();
    TypeContext *type();
    antlr4::tree::TerminalNode *UNIQUE_WORD();
    ValueOptionalitySpecContext *valueOptionalitySpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FixedTypeValueFieldSpecContext* fixedTypeValueFieldSpec();

  class  ValueOptionalitySpecContext : public antlr4::ParserRuleContext {
  public:
    ValueOptionalitySpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIONAL_WORD();
    antlr4::tree::TerminalNode *DEFAULT_WORD();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueOptionalitySpecContext* valueOptionalitySpec();

  class  VariableTypeValueFieldSpecContext : public antlr4::ParserRuleContext {
  public:
    VariableTypeValueFieldSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValuefieldreferenceContext *valuefieldreference();
    FieldNameContext *fieldName();
    ValueOptionalitySpecContext *valueOptionalitySpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableTypeValueFieldSpecContext* variableTypeValueFieldSpec();

  class  FixedTypeValueSetFieldSpecContext : public antlr4::ParserRuleContext {
  public:
    FixedTypeValueSetFieldSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValuesetfieldreferenceContext *valuesetfieldreference();
    TypeContext *type();
    ValueSetOptionalitySpecContext *valueSetOptionalitySpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FixedTypeValueSetFieldSpecContext* fixedTypeValueSetFieldSpec();

  class  ValueSetOptionalitySpecContext : public antlr4::ParserRuleContext {
  public:
    ValueSetOptionalitySpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIONAL_WORD();
    antlr4::tree::TerminalNode *DEFAULT_WORD();
    ValueSetContext *valueSet();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueSetOptionalitySpecContext* valueSetOptionalitySpec();

  class  VariableTypeValueSetFieldSpecContext : public antlr4::ParserRuleContext {
  public:
    VariableTypeValueSetFieldSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValuesetfieldreferenceContext *valuesetfieldreference();
    FieldNameContext *fieldName();
    ValueSetOptionalitySpecContext *valueSetOptionalitySpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableTypeValueSetFieldSpecContext* variableTypeValueSetFieldSpec();

  class  ObjectFieldSpecContext : public antlr4::ParserRuleContext {
  public:
    ObjectFieldSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectfieldreferenceContext *objectfieldreference();
    DefinedObjectClassContext *definedObjectClass();
    ObjectOptionalitySpecContext *objectOptionalitySpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectFieldSpecContext* objectFieldSpec();

  class  ObjectOptionalitySpecContext : public antlr4::ParserRuleContext {
  public:
    ObjectOptionalitySpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIONAL_WORD();
    antlr4::tree::TerminalNode *DEFAULT_WORD();
    ObjectContext *object();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectOptionalitySpecContext* objectOptionalitySpec();

  class  ObjectSetFieldSpecContext : public antlr4::ParserRuleContext {
  public:
    ObjectSetFieldSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectsetfieldreferenceContext *objectsetfieldreference();
    DefinedObjectClassContext *definedObjectClass();
    ObjectSetOptionalitySpecContext *objectSetOptionalitySpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectSetFieldSpecContext* objectSetFieldSpec();

  class  ObjectSetOptionalitySpecContext : public antlr4::ParserRuleContext {
  public:
    ObjectSetOptionalitySpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIONAL_WORD();
    antlr4::tree::TerminalNode *DEFAULT_WORD();
    ObjectSetContext *objectSet();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectSetOptionalitySpecContext* objectSetOptionalitySpec();

  class  PrimitiveFieldNameContext : public antlr4::ParserRuleContext {
  public:
    PrimitiveFieldNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypefieldreferenceContext *typefieldreference();
    ValuefieldreferenceContext *valuefieldreference();
    ValuesetfieldreferenceContext *valuesetfieldreference();
    ObjectfieldreferenceContext *objectfieldreference();
    ObjectsetfieldreferenceContext *objectsetfieldreference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimitiveFieldNameContext* primitiveFieldName();

  class  FieldNameContext : public antlr4::ParserRuleContext {
  public:
    FieldNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrimitiveFieldNameContext *> primitiveFieldName();
    PrimitiveFieldNameContext* primitiveFieldName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldNameContext* fieldName();

  class  SyntaxListContext : public antlr4::ParserRuleContext {
  public:
    SyntaxListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    std::vector<TokenOrGroupSpecContext *> tokenOrGroupSpec();
    TokenOrGroupSpecContext* tokenOrGroupSpec(size_t i);
    antlr4::tree::TerminalNode *R_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SyntaxListContext* syntaxList();

  class  TokenOrGroupSpecContext : public antlr4::ParserRuleContext {
  public:
    TokenOrGroupSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RequiredTokenContext *requiredToken();
    OptionalGroupContext *optionalGroup();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TokenOrGroupSpecContext* tokenOrGroupSpec();

  class  OptionalGroupContext : public antlr4::ParserRuleContext {
  public:
    OptionalGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TokenOrGroupSpecContext *> tokenOrGroupSpec();
    TokenOrGroupSpecContext* tokenOrGroupSpec(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionalGroupContext* optionalGroup();

  class  RequiredTokenContext : public antlr4::ParserRuleContext {
  public:
    RequiredTokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    PrimitiveFieldNameContext *primitiveFieldName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RequiredTokenContext* requiredToken();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WordContext *word();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  ObjectAssignmentContext : public antlr4::ParserRuleContext {
  public:
    ObjectAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectreferenceContext *objectreference();
    DefinedObjectClassContext *definedObjectClass();
    antlr4::tree::TerminalNode *ASSIGN();
    ObjectContext *object();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectAssignmentContext* objectAssignment();

  class  ObjectContext : public antlr4::ParserRuleContext {
  public:
    ObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefinedObjectContext *definedObject();
    ObjectDefnContext *objectDefn();
    ObjectFromObjectContext *objectFromObject();
    ParameterizedObjectContext *parameterizedObject();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectContext* object();

  class  ObjectDefnContext : public antlr4::ParserRuleContext {
  public:
    ObjectDefnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefaultSyntaxContext *defaultSyntax();
    DefinedSyntaxContext *definedSyntax();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectDefnContext* objectDefn();

  class  DefaultSyntaxContext : public antlr4::ParserRuleContext {
  public:
    DefaultSyntaxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    antlr4::tree::TerminalNode *R_BRACE();
    std::vector<FieldSettingContext *> fieldSetting();
    FieldSettingContext* fieldSetting(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultSyntaxContext* defaultSyntax();

  class  FieldSettingContext : public antlr4::ParserRuleContext {
  public:
    FieldSettingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimitiveFieldNameContext *primitiveFieldName();
    SettingContext *setting();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldSettingContext* fieldSetting();

  class  DefinedSyntaxContext : public antlr4::ParserRuleContext {
  public:
    DefinedSyntaxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    antlr4::tree::TerminalNode *R_BRACE();
    std::vector<DefinedSyntaxTokenContext *> definedSyntaxToken();
    DefinedSyntaxTokenContext* definedSyntaxToken(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinedSyntaxContext* definedSyntax();

  class  DefinedSyntaxTokenContext : public antlr4::ParserRuleContext {
  public:
    DefinedSyntaxTokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    SettingContext *setting();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinedSyntaxTokenContext* definedSyntaxToken();

  class  SettingContext : public antlr4::ParserRuleContext {
  public:
    SettingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    ValueContext *value();
    ValueSetContext *valueSet();
    ObjectContext *object();
    ObjectSetContext *objectSet();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SettingContext* setting();

  class  ObjectSetAssignmentContext : public antlr4::ParserRuleContext {
  public:
    ObjectSetAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectsetreferenceContext *objectsetreference();
    DefinedObjectClassContext *definedObjectClass();
    antlr4::tree::TerminalNode *ASSIGN();
    ObjectSetContext *objectSet();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectSetAssignmentContext* objectSetAssignment();

  class  ObjectSetContext : public antlr4::ParserRuleContext {
  public:
    ObjectSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    ObjectSetSpecContext *objectSetSpec();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectSetContext* objectSet();

  class  ObjectSetSpecContext : public antlr4::ParserRuleContext {
  public:
    ObjectSetSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RootElementSetSpecContext *rootElementSetSpec();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ELLIPSIS();
    AdditionalElementSetSpecContext *additionalElementSetSpec();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectSetSpecContext* objectSetSpec();

  class  ObjectSetElementsContext : public antlr4::ParserRuleContext {
  public:
    ObjectSetElementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectContext *object();
    DefinedObjectSetContext *definedObjectSet();
    ObjectSetFromObjectsContext *objectSetFromObjects();
    ParameterizedObjectSetContext *parameterizedObjectSet();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectSetElementsContext* objectSetElements();

  class  ObjectClassFieldTypeContext : public antlr4::ParserRuleContext {
  public:
    ObjectClassFieldTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefinedObjectClassContext *definedObjectClass();
    antlr4::tree::TerminalNode *DOT();
    FieldNameContext *fieldName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectClassFieldTypeContext* objectClassFieldType();

  class  ObjectClassFieldValueContext : public antlr4::ParserRuleContext {
  public:
    ObjectClassFieldValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OpenTypeFieldValContext *openTypeFieldVal();
    FixedTypeFieldValContext *fixedTypeFieldVal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectClassFieldValueContext* objectClassFieldValue();

  class  OpenTypeFieldValContext : public antlr4::ParserRuleContext {
  public:
    OpenTypeFieldValContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *COLON();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpenTypeFieldValContext* openTypeFieldVal();

  class  FixedTypeFieldValContext : public antlr4::ParserRuleContext {
  public:
    FixedTypeFieldValContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BuiltinValueContext *builtinValue();
    ReferencedValueContext *referencedValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FixedTypeFieldValContext* fixedTypeFieldVal();

  class  ValueFromObjectContext : public antlr4::ParserRuleContext {
  public:
    ValueFromObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReferencedObjectsContext *referencedObjects();
    antlr4::tree::TerminalNode *DOT();
    FieldNameContext *fieldName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueFromObjectContext* valueFromObject();

  class  ValueSetFromObjectsContext : public antlr4::ParserRuleContext {
  public:
    ValueSetFromObjectsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReferencedObjectsContext *referencedObjects();
    antlr4::tree::TerminalNode *DOT();
    FieldNameContext *fieldName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueSetFromObjectsContext* valueSetFromObjects();

  class  TypeFromObjectContext : public antlr4::ParserRuleContext {
  public:
    TypeFromObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReferencedObjectsContext *referencedObjects();
    antlr4::tree::TerminalNode *DOT();
    FieldNameContext *fieldName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeFromObjectContext* typeFromObject();

  class  ObjectFromObjectContext : public antlr4::ParserRuleContext {
  public:
    ObjectFromObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReferencedObjectsContext *referencedObjects();
    antlr4::tree::TerminalNode *DOT();
    FieldNameContext *fieldName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectFromObjectContext* objectFromObject();

  class  ObjectSetFromObjectsContext : public antlr4::ParserRuleContext {
  public:
    ObjectSetFromObjectsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReferencedObjectsContext *referencedObjects();
    antlr4::tree::TerminalNode *DOT();
    FieldNameContext *fieldName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectSetFromObjectsContext* objectSetFromObjects();

  class  ReferencedObjectsContext : public antlr4::ParserRuleContext {
  public:
    ReferencedObjectsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefinedObjectContext *definedObject();
    ParameterizedObjectContext *parameterizedObject();
    DefinedObjectSetContext *definedObjectSet();
    ParameterizedObjectSetContext *parameterizedObjectSet();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReferencedObjectsContext* referencedObjects();

  class  AnyTypeContext : public antlr4::ParserRuleContext {
  public:
    AnyTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANY_WORD();
    antlr4::tree::TerminalNode *DEFINED_WORD();
    antlr4::tree::TerminalNode *BY_WORD();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnyTypeContext* anyType();

  class  ObjectclassreferenceContext : public antlr4::ParserRuleContext {
  public:
    ObjectclassreferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ReferenceItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectclassreferenceContext* objectclassreference();

  class  ObjectreferenceContext : public antlr4::ParserRuleContext {
  public:
    ObjectreferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IdentifierOrValueItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectreferenceContext* objectreference();

  class  ObjectsetreferenceContext : public antlr4::ParserRuleContext {
  public:
    ObjectsetreferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ReferenceItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectsetreferenceContext* objectsetreference();

  class  TypefieldreferenceContext : public antlr4::ParserRuleContext {
  public:
    TypefieldreferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ReferenceItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypefieldreferenceContext* typefieldreference();

  class  ValuefieldreferenceContext : public antlr4::ParserRuleContext {
  public:
    ValuefieldreferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IdentifierOrValueItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValuefieldreferenceContext* valuefieldreference();

  class  ValuesetfieldreferenceContext : public antlr4::ParserRuleContext {
  public:
    ValuesetfieldreferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ReferenceItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValuesetfieldreferenceContext* valuesetfieldreference();

  class  ObjectfieldreferenceContext : public antlr4::ParserRuleContext {
  public:
    ObjectfieldreferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IdentifierOrValueItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectfieldreferenceContext* objectfieldreference();

  class  ObjectsetfieldreferenceContext : public antlr4::ParserRuleContext {
  public:
    ObjectsetfieldreferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ReferenceItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectsetfieldreferenceContext* objectsetfieldreference();

  class  WordContext : public antlr4::ParserRuleContext {
  public:
    WordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ReferenceItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WordContext* word();

  class  ParameterizedAssignmentContext : public antlr4::ParserRuleContext {
  public:
    ParameterizedAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterizedTypeAssignmentContext *parameterizedTypeAssignment();
    ParameterizedValueAssignmentContext *parameterizedValueAssignment();
    ParameterizedValueSetTypeAssignmentContext *parameterizedValueSetTypeAssignment();
    ParameterizedObjectClassAssignmentContext *parameterizedObjectClassAssignment();
    ParameterizedObjectAssignmentContext *parameterizedObjectAssignment();
    ParameterizedObjectSetAssignmentContext *parameterizedObjectSetAssignment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterizedAssignmentContext* parameterizedAssignment();

  class  ParameterizedTypeAssignmentContext : public antlr4::ParserRuleContext {
  public:
    ParameterizedTypeAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypereferenceContext *typereference();
    ParameterListContext *parameterList();
    antlr4::tree::TerminalNode *ASSIGN();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterizedTypeAssignmentContext* parameterizedTypeAssignment();

  class  ParameterizedValueAssignmentContext : public antlr4::ParserRuleContext {
  public:
    ParameterizedValueAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValuereferenceContext *valuereference();
    ParameterListContext *parameterList();
    TypeContext *type();
    antlr4::tree::TerminalNode *ASSIGN();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterizedValueAssignmentContext* parameterizedValueAssignment();

  class  ParameterizedValueSetTypeAssignmentContext : public antlr4::ParserRuleContext {
  public:
    ParameterizedValueSetTypeAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypereferenceContext *typereference();
    ParameterListContext *parameterList();
    TypeContext *type();
    antlr4::tree::TerminalNode *ASSIGN();
    ValueSetContext *valueSet();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterizedValueSetTypeAssignmentContext* parameterizedValueSetTypeAssignment();

  class  ParameterizedObjectClassAssignmentContext : public antlr4::ParserRuleContext {
  public:
    ParameterizedObjectClassAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectclassreferenceContext *objectclassreference();
    ParameterListContext *parameterList();
    antlr4::tree::TerminalNode *ASSIGN();
    ObjectClassContext *objectClass();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterizedObjectClassAssignmentContext* parameterizedObjectClassAssignment();

  class  ParameterizedObjectAssignmentContext : public antlr4::ParserRuleContext {
  public:
    ParameterizedObjectAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectreferenceContext *objectreference();
    ParameterListContext *parameterList();
    DefinedObjectClassContext *definedObjectClass();
    antlr4::tree::TerminalNode *ASSIGN();
    ObjectContext *object();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterizedObjectAssignmentContext* parameterizedObjectAssignment();

  class  ParameterizedObjectSetAssignmentContext : public antlr4::ParserRuleContext {
  public:
    ParameterizedObjectSetAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectsetreferenceContext *objectsetreference();
    ParameterListContext *parameterList();
    DefinedObjectClassContext *definedObjectClass();
    antlr4::tree::TerminalNode *ASSIGN();
    ObjectSetContext *objectSet();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterizedObjectSetAssignmentContext* parameterizedObjectSetAssignment();

  class  ParameterListContext : public antlr4::ParserRuleContext {
  public:
    ParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    antlr4::tree::TerminalNode *R_BRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterListContext* parameterList();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParamGovernorContext *paramGovernor();
    antlr4::tree::TerminalNode *COLON();
    DummyReferenceContext *dummyReference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  ParamGovernorContext : public antlr4::ParserRuleContext {
  public:
    ParamGovernorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GovernorContext *governor();
    DummyGovernorContext *dummyGovernor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamGovernorContext* paramGovernor();

  class  GovernorContext : public antlr4::ParserRuleContext {
  public:
    GovernorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    DefinedObjectClassContext *definedObjectClass();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GovernorContext* governor();

  class  DummyGovernorContext : public antlr4::ParserRuleContext {
  public:
    DummyGovernorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DummyReferenceContext *dummyReference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DummyGovernorContext* dummyGovernor();

  class  DummyReferenceContext : public antlr4::ParserRuleContext {
  public:
    DummyReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReferenceContext *reference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DummyReferenceContext* dummyReference();

  class  ParameterizedReferenceContext : public antlr4::ParserRuleContext {
  public:
    ParameterizedReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReferenceContext *reference();
    antlr4::tree::TerminalNode *L_BRACE();
    antlr4::tree::TerminalNode *R_BRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterizedReferenceContext* parameterizedReference();

  class  ParameterizedTypeContext : public antlr4::ParserRuleContext {
  public:
    ParameterizedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleDefinedTypeContext *simpleDefinedType();
    ActualParameterListContext *actualParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterizedTypeContext* parameterizedType();

  class  SimpleDefinedTypeContext : public antlr4::ParserRuleContext {
  public:
    SimpleDefinedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExternalTypeReferenceContext *externalTypeReference();
    TypereferenceContext *typereference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleDefinedTypeContext* simpleDefinedType();

  class  ParameterizedValueContext : public antlr4::ParserRuleContext {
  public:
    ParameterizedValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleDefinedValueContext *simpleDefinedValue();
    ActualParameterListContext *actualParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterizedValueContext* parameterizedValue();

  class  SimpleDefinedValueContext : public antlr4::ParserRuleContext {
  public:
    SimpleDefinedValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExternalValueReferenceContext *externalValueReference();
    ValuereferenceContext *valuereference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleDefinedValueContext* simpleDefinedValue();

  class  ParameterizedValueSetTypeContext : public antlr4::ParserRuleContext {
  public:
    ParameterizedValueSetTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleDefinedTypeContext *simpleDefinedType();
    ActualParameterListContext *actualParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterizedValueSetTypeContext* parameterizedValueSetType();

  class  ParameterizedObjectClassContext : public antlr4::ParserRuleContext {
  public:
    ParameterizedObjectClassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefinedObjectClassContext *definedObjectClass();
    ActualParameterListContext *actualParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterizedObjectClassContext* parameterizedObjectClass();

  class  ParameterizedObjectSetContext : public antlr4::ParserRuleContext {
  public:
    ParameterizedObjectSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefinedObjectSetContext *definedObjectSet();
    ActualParameterListContext *actualParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterizedObjectSetContext* parameterizedObjectSet();

  class  ParameterizedObjectContext : public antlr4::ParserRuleContext {
  public:
    ParameterizedObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefinedObjectContext *definedObject();
    ActualParameterListContext *actualParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterizedObjectContext* parameterizedObject();

  class  ActualParameterListContext : public antlr4::ParserRuleContext {
  public:
    ActualParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *L_BRACE();
    std::vector<ActualParameterContext *> actualParameter();
    ActualParameterContext* actualParameter(size_t i);
    antlr4::tree::TerminalNode *R_BRACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActualParameterListContext* actualParameterList();

  class  ActualParameterContext : public antlr4::ParserRuleContext {
  public:
    ActualParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    ValueContext *value();
    ValueSetContext *valueSet();
    DefinedObjectClassContext *definedObjectClass();
    ObjectContext *object();
    ObjectSetContext *objectSet();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActualParameterContext* actualParameter();

  class  TypereferenceContext : public antlr4::ParserRuleContext {
  public:
    TypereferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ReferenceItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypereferenceContext* typereference();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IdentifierOrValueItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  ValuereferenceContext : public antlr4::ParserRuleContext {
  public:
    ValuereferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IdentifierOrValueItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValuereferenceContext* valuereference();

  class  ModulereferenceContext : public antlr4::ParserRuleContext {
  public:
    ModulereferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ReferenceItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModulereferenceContext* modulereference();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NumberItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  BstringContext : public antlr4::ParserRuleContext {
  public:
    BstringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BStringItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BstringContext* bstring();

  class  HstringContext : public antlr4::ParserRuleContext {
  public:
    HstringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HStringItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HstringContext* hstring();

  class  CstringContext : public antlr4::ParserRuleContext {
  public:
    CstringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CStringItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CstringContext* cstring();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool extensionAdditionAlternativesListSempred(ExtensionAdditionAlternativesListContext *_localctx, size_t predicateIndex);
  bool unionsSempred(UnionsContext *_localctx, size_t predicateIndex);
  bool intersectionsSempred(IntersectionsContext *_localctx, size_t predicateIndex);
  bool objectclassreferenceSempred(ObjectclassreferenceContext *_localctx, size_t predicateIndex);
  bool wordSempred(WordContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

