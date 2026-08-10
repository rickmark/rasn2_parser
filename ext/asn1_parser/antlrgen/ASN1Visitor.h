
#include <regex>


// Generated from ./ASN1.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "ASN1Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ASN1Parser.
 */
class  ASN1Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ASN1Parser.
   */
    virtual std::any visitModuleDefinition(ASN1Parser::ModuleDefinitionContext *context) = 0;

    virtual std::any visitModuleIdentifier(ASN1Parser::ModuleIdentifierContext *context) = 0;

    virtual std::any visitDefinitiveIdentifier(ASN1Parser::DefinitiveIdentifierContext *context) = 0;

    virtual std::any visitDefinitiveObjIdComponentList(ASN1Parser::DefinitiveObjIdComponentListContext *context) = 0;

    virtual std::any visitDefinitiveObjIdComponent(ASN1Parser::DefinitiveObjIdComponentContext *context) = 0;

    virtual std::any visitDefinitiveNumberForm(ASN1Parser::DefinitiveNumberFormContext *context) = 0;

    virtual std::any visitDefinitiveNameAndNumberForm(ASN1Parser::DefinitiveNameAndNumberFormContext *context) = 0;

    virtual std::any visitTagDefault(ASN1Parser::TagDefaultContext *context) = 0;

    virtual std::any visitExtensionDefault(ASN1Parser::ExtensionDefaultContext *context) = 0;

    virtual std::any visitModuleBody(ASN1Parser::ModuleBodyContext *context) = 0;

    virtual std::any visitExports(ASN1Parser::ExportsContext *context) = 0;

    virtual std::any visitSymbolsExported(ASN1Parser::SymbolsExportedContext *context) = 0;

    virtual std::any visitImports(ASN1Parser::ImportsContext *context) = 0;

    virtual std::any visitSymbolsImported(ASN1Parser::SymbolsImportedContext *context) = 0;

    virtual std::any visitSymbolsFromModuleList(ASN1Parser::SymbolsFromModuleListContext *context) = 0;

    virtual std::any visitSymbolsFromModule(ASN1Parser::SymbolsFromModuleContext *context) = 0;

    virtual std::any visitGlobalModuleReference(ASN1Parser::GlobalModuleReferenceContext *context) = 0;

    virtual std::any visitAssignedIdentifier(ASN1Parser::AssignedIdentifierContext *context) = 0;

    virtual std::any visitSymbolList(ASN1Parser::SymbolListContext *context) = 0;

    virtual std::any visitSymbol(ASN1Parser::SymbolContext *context) = 0;

    virtual std::any visitReference(ASN1Parser::ReferenceContext *context) = 0;

    virtual std::any visitAssignmentList(ASN1Parser::AssignmentListContext *context) = 0;

    virtual std::any visitAssignment(ASN1Parser::AssignmentContext *context) = 0;

    virtual std::any visitDefinedType(ASN1Parser::DefinedTypeContext *context) = 0;

    virtual std::any visitDefinedValue(ASN1Parser::DefinedValueContext *context) = 0;

    virtual std::any visitExternalTypeReference(ASN1Parser::ExternalTypeReferenceContext *context) = 0;

    virtual std::any visitExternalValueReference(ASN1Parser::ExternalValueReferenceContext *context) = 0;

    virtual std::any visitTypeAssignment(ASN1Parser::TypeAssignmentContext *context) = 0;

    virtual std::any visitValueAssignment(ASN1Parser::ValueAssignmentContext *context) = 0;

    virtual std::any visitValueSetTypeAssignment(ASN1Parser::ValueSetTypeAssignmentContext *context) = 0;

    virtual std::any visitValueSet(ASN1Parser::ValueSetContext *context) = 0;

    virtual std::any visitType(ASN1Parser::TypeContext *context) = 0;

    virtual std::any visitBuiltinType(ASN1Parser::BuiltinTypeContext *context) = 0;

    virtual std::any visitReferencedType(ASN1Parser::ReferencedTypeContext *context) = 0;

    virtual std::any visitNamedType(ASN1Parser::NamedTypeContext *context) = 0;

    virtual std::any visitValue(ASN1Parser::ValueContext *context) = 0;

    virtual std::any visitBuiltinValue(ASN1Parser::BuiltinValueContext *context) = 0;

    virtual std::any visitReferencedValue(ASN1Parser::ReferencedValueContext *context) = 0;

    virtual std::any visitNamedValue(ASN1Parser::NamedValueContext *context) = 0;

    virtual std::any visitBooleanType(ASN1Parser::BooleanTypeContext *context) = 0;

    virtual std::any visitBooleanValue(ASN1Parser::BooleanValueContext *context) = 0;

    virtual std::any visitIntegerType(ASN1Parser::IntegerTypeContext *context) = 0;

    virtual std::any visitNamedNumberList(ASN1Parser::NamedNumberListContext *context) = 0;

    virtual std::any visitNamedNumber(ASN1Parser::NamedNumberContext *context) = 0;

    virtual std::any visitSignedNumber(ASN1Parser::SignedNumberContext *context) = 0;

    virtual std::any visitIntegerValue(ASN1Parser::IntegerValueContext *context) = 0;

    virtual std::any visitEnumeratedType(ASN1Parser::EnumeratedTypeContext *context) = 0;

    virtual std::any visitEnumerations(ASN1Parser::EnumerationsContext *context) = 0;

    virtual std::any visitRootEnumeration(ASN1Parser::RootEnumerationContext *context) = 0;

    virtual std::any visitAdditionalEnumeration(ASN1Parser::AdditionalEnumerationContext *context) = 0;

    virtual std::any visitEnumeration(ASN1Parser::EnumerationContext *context) = 0;

    virtual std::any visitEnumerationItem(ASN1Parser::EnumerationItemContext *context) = 0;

    virtual std::any visitEnumeratedValue(ASN1Parser::EnumeratedValueContext *context) = 0;

    virtual std::any visitBitStringType(ASN1Parser::BitStringTypeContext *context) = 0;

    virtual std::any visitNamedBitList(ASN1Parser::NamedBitListContext *context) = 0;

    virtual std::any visitNamedBit(ASN1Parser::NamedBitContext *context) = 0;

    virtual std::any visitBitStringValue(ASN1Parser::BitStringValueContext *context) = 0;

    virtual std::any visitIdentifierList(ASN1Parser::IdentifierListContext *context) = 0;

    virtual std::any visitOctetStringType(ASN1Parser::OctetStringTypeContext *context) = 0;

    virtual std::any visitOctetStringValue(ASN1Parser::OctetStringValueContext *context) = 0;

    virtual std::any visitNullType(ASN1Parser::NullTypeContext *context) = 0;

    virtual std::any visitNullValue(ASN1Parser::NullValueContext *context) = 0;

    virtual std::any visitSequenceType(ASN1Parser::SequenceTypeContext *context) = 0;

    virtual std::any visitComponentTypeLists(ASN1Parser::ComponentTypeListsContext *context) = 0;

    virtual std::any visitRootComponentTypeList(ASN1Parser::RootComponentTypeListContext *context) = 0;

    virtual std::any visitExtensionEndMarker(ASN1Parser::ExtensionEndMarkerContext *context) = 0;

    virtual std::any visitExtensionAdditions(ASN1Parser::ExtensionAdditionsContext *context) = 0;

    virtual std::any visitExtensionAdditionList(ASN1Parser::ExtensionAdditionListContext *context) = 0;

    virtual std::any visitExtensionAddition(ASN1Parser::ExtensionAdditionContext *context) = 0;

    virtual std::any visitExtensionAdditionGroup(ASN1Parser::ExtensionAdditionGroupContext *context) = 0;

    virtual std::any visitVersionNumber(ASN1Parser::VersionNumberContext *context) = 0;

    virtual std::any visitComponentTypeList(ASN1Parser::ComponentTypeListContext *context) = 0;

    virtual std::any visitComponentType(ASN1Parser::ComponentTypeContext *context) = 0;

    virtual std::any visitSequenceValue(ASN1Parser::SequenceValueContext *context) = 0;

    virtual std::any visitComponentValueList(ASN1Parser::ComponentValueListContext *context) = 0;

    virtual std::any visitSequenceOfType(ASN1Parser::SequenceOfTypeContext *context) = 0;

    virtual std::any visitSequenceOfValue(ASN1Parser::SequenceOfValueContext *context) = 0;

    virtual std::any visitValueList(ASN1Parser::ValueListContext *context) = 0;

    virtual std::any visitNamedValueList(ASN1Parser::NamedValueListContext *context) = 0;

    virtual std::any visitSetType(ASN1Parser::SetTypeContext *context) = 0;

    virtual std::any visitSetValue(ASN1Parser::SetValueContext *context) = 0;

    virtual std::any visitSetOfType(ASN1Parser::SetOfTypeContext *context) = 0;

    virtual std::any visitSetOfValue(ASN1Parser::SetOfValueContext *context) = 0;

    virtual std::any visitChoiceType(ASN1Parser::ChoiceTypeContext *context) = 0;

    virtual std::any visitAlternativeTypeLists(ASN1Parser::AlternativeTypeListsContext *context) = 0;

    virtual std::any visitRootAlternativeTypeList(ASN1Parser::RootAlternativeTypeListContext *context) = 0;

    virtual std::any visitExtensionAdditionAlternatives(ASN1Parser::ExtensionAdditionAlternativesContext *context) = 0;

    virtual std::any visitExtensionAdditionAlternativesList(ASN1Parser::ExtensionAdditionAlternativesListContext *context) = 0;

    virtual std::any visitExtensionAdditionAlternative(ASN1Parser::ExtensionAdditionAlternativeContext *context) = 0;

    virtual std::any visitExtensionAdditionAlternativesGroup(ASN1Parser::ExtensionAdditionAlternativesGroupContext *context) = 0;

    virtual std::any visitAlternativeTypeList(ASN1Parser::AlternativeTypeListContext *context) = 0;

    virtual std::any visitTaggedType(ASN1Parser::TaggedTypeContext *context) = 0;

    virtual std::any visitTag(ASN1Parser::TagContext *context) = 0;

    virtual std::any visitClassNumber(ASN1Parser::ClassNumberContext *context) = 0;

    virtual std::any visitClassP(ASN1Parser::ClassPContext *context) = 0;

    virtual std::any visitObjectIdentifierType(ASN1Parser::ObjectIdentifierTypeContext *context) = 0;

    virtual std::any visitObjectIdentifierValue(ASN1Parser::ObjectIdentifierValueContext *context) = 0;

    virtual std::any visitObjIdComponentsList(ASN1Parser::ObjIdComponentsListContext *context) = 0;

    virtual std::any visitObjIdComponents(ASN1Parser::ObjIdComponentsContext *context) = 0;

    virtual std::any visitNameForm(ASN1Parser::NameFormContext *context) = 0;

    virtual std::any visitNumberForm(ASN1Parser::NumberFormContext *context) = 0;

    virtual std::any visitNameAndNumberForm(ASN1Parser::NameAndNumberFormContext *context) = 0;

    virtual std::any visitExtensionAndException(ASN1Parser::ExtensionAndExceptionContext *context) = 0;

    virtual std::any visitExceptionSpec(ASN1Parser::ExceptionSpecContext *context) = 0;

    virtual std::any visitExceptionIdentification(ASN1Parser::ExceptionIdentificationContext *context) = 0;

    virtual std::any visitOptionalExtensionMarker(ASN1Parser::OptionalExtensionMarkerContext *context) = 0;

    virtual std::any visitCharacterStringType(ASN1Parser::CharacterStringTypeContext *context) = 0;

    virtual std::any visitCharacterStringValue(ASN1Parser::CharacterStringValueContext *context) = 0;

    virtual std::any visitRestrictedCharacterStringType(ASN1Parser::RestrictedCharacterStringTypeContext *context) = 0;

    virtual std::any visitRestrictedCharacterStringValue(ASN1Parser::RestrictedCharacterStringValueContext *context) = 0;

    virtual std::any visitCharacterStringList(ASN1Parser::CharacterStringListContext *context) = 0;

    virtual std::any visitCharSyms(ASN1Parser::CharSymsContext *context) = 0;

    virtual std::any visitCharsDefn(ASN1Parser::CharsDefnContext *context) = 0;

    virtual std::any visitQuadruple(ASN1Parser::QuadrupleContext *context) = 0;

    virtual std::any visitGroup(ASN1Parser::GroupContext *context) = 0;

    virtual std::any visitPlane(ASN1Parser::PlaneContext *context) = 0;

    virtual std::any visitRow(ASN1Parser::RowContext *context) = 0;

    virtual std::any visitCell(ASN1Parser::CellContext *context) = 0;

    virtual std::any visitTuple(ASN1Parser::TupleContext *context) = 0;

    virtual std::any visitTableColumn(ASN1Parser::TableColumnContext *context) = 0;

    virtual std::any visitTableRow(ASN1Parser::TableRowContext *context) = 0;

    virtual std::any visitUnrestrictedCharacterStringType(ASN1Parser::UnrestrictedCharacterStringTypeContext *context) = 0;

    virtual std::any visitGeneralizedTimeType(ASN1Parser::GeneralizedTimeTypeContext *context) = 0;

    virtual std::any visitUTCTimeType(ASN1Parser::UTCTimeTypeContext *context) = 0;

    virtual std::any visitConstrainedType(ASN1Parser::ConstrainedTypeContext *context) = 0;

    virtual std::any visitTypeWithConstraint(ASN1Parser::TypeWithConstraintContext *context) = 0;

    virtual std::any visitConstraint(ASN1Parser::ConstraintContext *context) = 0;

    virtual std::any visitConstraintSpec(ASN1Parser::ConstraintSpecContext *context) = 0;

    virtual std::any visitSubtypeConstraint(ASN1Parser::SubtypeConstraintContext *context) = 0;

    virtual std::any visitGeneralConstraint(ASN1Parser::GeneralConstraintContext *context) = 0;

    virtual std::any visitElementSetSpecs(ASN1Parser::ElementSetSpecsContext *context) = 0;

    virtual std::any visitRootElementSetSpec(ASN1Parser::RootElementSetSpecContext *context) = 0;

    virtual std::any visitAdditionalElementSetSpec(ASN1Parser::AdditionalElementSetSpecContext *context) = 0;

    virtual std::any visitElementSetSpec(ASN1Parser::ElementSetSpecContext *context) = 0;

    virtual std::any visitUnions(ASN1Parser::UnionsContext *context) = 0;

    virtual std::any visitUElems(ASN1Parser::UElemsContext *context) = 0;

    virtual std::any visitIntersections(ASN1Parser::IntersectionsContext *context) = 0;

    virtual std::any visitIElems(ASN1Parser::IElemsContext *context) = 0;

    virtual std::any visitIntersectionElements(ASN1Parser::IntersectionElementsContext *context) = 0;

    virtual std::any visitElems(ASN1Parser::ElemsContext *context) = 0;

    virtual std::any visitExclusions(ASN1Parser::ExclusionsContext *context) = 0;

    virtual std::any visitUnionMark(ASN1Parser::UnionMarkContext *context) = 0;

    virtual std::any visitIntersectionMark(ASN1Parser::IntersectionMarkContext *context) = 0;

    virtual std::any visitElements(ASN1Parser::ElementsContext *context) = 0;

    virtual std::any visitSubtypeElements(ASN1Parser::SubtypeElementsContext *context) = 0;

    virtual std::any visitSingleValue(ASN1Parser::SingleValueContext *context) = 0;

    virtual std::any visitContainedSubtype(ASN1Parser::ContainedSubtypeContext *context) = 0;

    virtual std::any visitIncludes(ASN1Parser::IncludesContext *context) = 0;

    virtual std::any visitValueRange(ASN1Parser::ValueRangeContext *context) = 0;

    virtual std::any visitLowerEndpoint(ASN1Parser::LowerEndpointContext *context) = 0;

    virtual std::any visitUpperEndpoint(ASN1Parser::UpperEndpointContext *context) = 0;

    virtual std::any visitLowerEndValue(ASN1Parser::LowerEndValueContext *context) = 0;

    virtual std::any visitUpperEndValue(ASN1Parser::UpperEndValueContext *context) = 0;

    virtual std::any visitSizeConstraint(ASN1Parser::SizeConstraintContext *context) = 0;

    virtual std::any visitPermittedAlphabet(ASN1Parser::PermittedAlphabetContext *context) = 0;

    virtual std::any visitUserDefinedConstraint(ASN1Parser::UserDefinedConstraintContext *context) = 0;

    virtual std::any visitUserDefinedConstraintParameter(ASN1Parser::UserDefinedConstraintParameterContext *context) = 0;

    virtual std::any visitTableConstraint(ASN1Parser::TableConstraintContext *context) = 0;

    virtual std::any visitSimpleTableConstraint(ASN1Parser::SimpleTableConstraintContext *context) = 0;

    virtual std::any visitComponentRelationConstraint(ASN1Parser::ComponentRelationConstraintContext *context) = 0;

    virtual std::any visitAtNotation(ASN1Parser::AtNotationContext *context) = 0;

    virtual std::any visitLevel(ASN1Parser::LevelContext *context) = 0;

    virtual std::any visitComponentIdList(ASN1Parser::ComponentIdListContext *context) = 0;

    virtual std::any visitContentsConstraint(ASN1Parser::ContentsConstraintContext *context) = 0;

    virtual std::any visitDefinedObjectClass(ASN1Parser::DefinedObjectClassContext *context) = 0;

    virtual std::any visitDefinedObject(ASN1Parser::DefinedObjectContext *context) = 0;

    virtual std::any visitDefinedObjectSet(ASN1Parser::DefinedObjectSetContext *context) = 0;

    virtual std::any visitExternalObjectClassReference(ASN1Parser::ExternalObjectClassReferenceContext *context) = 0;

    virtual std::any visitExternalObjectReference(ASN1Parser::ExternalObjectReferenceContext *context) = 0;

    virtual std::any visitExternalObjectSetReference(ASN1Parser::ExternalObjectSetReferenceContext *context) = 0;

    virtual std::any visitUsefulObjectClassReference(ASN1Parser::UsefulObjectClassReferenceContext *context) = 0;

    virtual std::any visitObjectClassAssignment(ASN1Parser::ObjectClassAssignmentContext *context) = 0;

    virtual std::any visitObjectClass(ASN1Parser::ObjectClassContext *context) = 0;

    virtual std::any visitObjectClassDefn(ASN1Parser::ObjectClassDefnContext *context) = 0;

    virtual std::any visitWithSyntaxSpec(ASN1Parser::WithSyntaxSpecContext *context) = 0;

    virtual std::any visitFieldSpec(ASN1Parser::FieldSpecContext *context) = 0;

    virtual std::any visitTypeFieldSpec(ASN1Parser::TypeFieldSpecContext *context) = 0;

    virtual std::any visitTypeOptionalitySpec(ASN1Parser::TypeOptionalitySpecContext *context) = 0;

    virtual std::any visitFixedTypeValueFieldSpec(ASN1Parser::FixedTypeValueFieldSpecContext *context) = 0;

    virtual std::any visitValueOptionalitySpec(ASN1Parser::ValueOptionalitySpecContext *context) = 0;

    virtual std::any visitVariableTypeValueFieldSpec(ASN1Parser::VariableTypeValueFieldSpecContext *context) = 0;

    virtual std::any visitFixedTypeValueSetFieldSpec(ASN1Parser::FixedTypeValueSetFieldSpecContext *context) = 0;

    virtual std::any visitValueSetOptionalitySpec(ASN1Parser::ValueSetOptionalitySpecContext *context) = 0;

    virtual std::any visitVariableTypeValueSetFieldSpec(ASN1Parser::VariableTypeValueSetFieldSpecContext *context) = 0;

    virtual std::any visitObjectFieldSpec(ASN1Parser::ObjectFieldSpecContext *context) = 0;

    virtual std::any visitObjectOptionalitySpec(ASN1Parser::ObjectOptionalitySpecContext *context) = 0;

    virtual std::any visitObjectSetFieldSpec(ASN1Parser::ObjectSetFieldSpecContext *context) = 0;

    virtual std::any visitObjectSetOptionalitySpec(ASN1Parser::ObjectSetOptionalitySpecContext *context) = 0;

    virtual std::any visitPrimitiveFieldName(ASN1Parser::PrimitiveFieldNameContext *context) = 0;

    virtual std::any visitFieldName(ASN1Parser::FieldNameContext *context) = 0;

    virtual std::any visitSyntaxList(ASN1Parser::SyntaxListContext *context) = 0;

    virtual std::any visitTokenOrGroupSpec(ASN1Parser::TokenOrGroupSpecContext *context) = 0;

    virtual std::any visitOptionalGroup(ASN1Parser::OptionalGroupContext *context) = 0;

    virtual std::any visitRequiredToken(ASN1Parser::RequiredTokenContext *context) = 0;

    virtual std::any visitLiteral(ASN1Parser::LiteralContext *context) = 0;

    virtual std::any visitObjectAssignment(ASN1Parser::ObjectAssignmentContext *context) = 0;

    virtual std::any visitObject(ASN1Parser::ObjectContext *context) = 0;

    virtual std::any visitObjectDefn(ASN1Parser::ObjectDefnContext *context) = 0;

    virtual std::any visitDefaultSyntax(ASN1Parser::DefaultSyntaxContext *context) = 0;

    virtual std::any visitFieldSetting(ASN1Parser::FieldSettingContext *context) = 0;

    virtual std::any visitDefinedSyntax(ASN1Parser::DefinedSyntaxContext *context) = 0;

    virtual std::any visitDefinedSyntaxToken(ASN1Parser::DefinedSyntaxTokenContext *context) = 0;

    virtual std::any visitSetting(ASN1Parser::SettingContext *context) = 0;

    virtual std::any visitObjectSetAssignment(ASN1Parser::ObjectSetAssignmentContext *context) = 0;

    virtual std::any visitObjectSet(ASN1Parser::ObjectSetContext *context) = 0;

    virtual std::any visitObjectSetSpec(ASN1Parser::ObjectSetSpecContext *context) = 0;

    virtual std::any visitObjectSetElements(ASN1Parser::ObjectSetElementsContext *context) = 0;

    virtual std::any visitObjectClassFieldType(ASN1Parser::ObjectClassFieldTypeContext *context) = 0;

    virtual std::any visitObjectClassFieldValue(ASN1Parser::ObjectClassFieldValueContext *context) = 0;

    virtual std::any visitOpenTypeFieldVal(ASN1Parser::OpenTypeFieldValContext *context) = 0;

    virtual std::any visitFixedTypeFieldVal(ASN1Parser::FixedTypeFieldValContext *context) = 0;

    virtual std::any visitValueFromObject(ASN1Parser::ValueFromObjectContext *context) = 0;

    virtual std::any visitValueSetFromObjects(ASN1Parser::ValueSetFromObjectsContext *context) = 0;

    virtual std::any visitTypeFromObject(ASN1Parser::TypeFromObjectContext *context) = 0;

    virtual std::any visitObjectFromObject(ASN1Parser::ObjectFromObjectContext *context) = 0;

    virtual std::any visitObjectSetFromObjects(ASN1Parser::ObjectSetFromObjectsContext *context) = 0;

    virtual std::any visitReferencedObjects(ASN1Parser::ReferencedObjectsContext *context) = 0;

    virtual std::any visitAnyType(ASN1Parser::AnyTypeContext *context) = 0;

    virtual std::any visitObjectclassreference(ASN1Parser::ObjectclassreferenceContext *context) = 0;

    virtual std::any visitObjectreference(ASN1Parser::ObjectreferenceContext *context) = 0;

    virtual std::any visitObjectsetreference(ASN1Parser::ObjectsetreferenceContext *context) = 0;

    virtual std::any visitTypefieldreference(ASN1Parser::TypefieldreferenceContext *context) = 0;

    virtual std::any visitValuefieldreference(ASN1Parser::ValuefieldreferenceContext *context) = 0;

    virtual std::any visitValuesetfieldreference(ASN1Parser::ValuesetfieldreferenceContext *context) = 0;

    virtual std::any visitObjectfieldreference(ASN1Parser::ObjectfieldreferenceContext *context) = 0;

    virtual std::any visitObjectsetfieldreference(ASN1Parser::ObjectsetfieldreferenceContext *context) = 0;

    virtual std::any visitWord(ASN1Parser::WordContext *context) = 0;

    virtual std::any visitParameterizedAssignment(ASN1Parser::ParameterizedAssignmentContext *context) = 0;

    virtual std::any visitParameterizedTypeAssignment(ASN1Parser::ParameterizedTypeAssignmentContext *context) = 0;

    virtual std::any visitParameterizedValueAssignment(ASN1Parser::ParameterizedValueAssignmentContext *context) = 0;

    virtual std::any visitParameterizedValueSetTypeAssignment(ASN1Parser::ParameterizedValueSetTypeAssignmentContext *context) = 0;

    virtual std::any visitParameterizedObjectClassAssignment(ASN1Parser::ParameterizedObjectClassAssignmentContext *context) = 0;

    virtual std::any visitParameterizedObjectAssignment(ASN1Parser::ParameterizedObjectAssignmentContext *context) = 0;

    virtual std::any visitParameterizedObjectSetAssignment(ASN1Parser::ParameterizedObjectSetAssignmentContext *context) = 0;

    virtual std::any visitParameterList(ASN1Parser::ParameterListContext *context) = 0;

    virtual std::any visitParameter(ASN1Parser::ParameterContext *context) = 0;

    virtual std::any visitParamGovernor(ASN1Parser::ParamGovernorContext *context) = 0;

    virtual std::any visitGovernor(ASN1Parser::GovernorContext *context) = 0;

    virtual std::any visitDummyGovernor(ASN1Parser::DummyGovernorContext *context) = 0;

    virtual std::any visitDummyReference(ASN1Parser::DummyReferenceContext *context) = 0;

    virtual std::any visitParameterizedReference(ASN1Parser::ParameterizedReferenceContext *context) = 0;

    virtual std::any visitParameterizedType(ASN1Parser::ParameterizedTypeContext *context) = 0;

    virtual std::any visitSimpleDefinedType(ASN1Parser::SimpleDefinedTypeContext *context) = 0;

    virtual std::any visitParameterizedValue(ASN1Parser::ParameterizedValueContext *context) = 0;

    virtual std::any visitSimpleDefinedValue(ASN1Parser::SimpleDefinedValueContext *context) = 0;

    virtual std::any visitParameterizedValueSetType(ASN1Parser::ParameterizedValueSetTypeContext *context) = 0;

    virtual std::any visitParameterizedObjectClass(ASN1Parser::ParameterizedObjectClassContext *context) = 0;

    virtual std::any visitParameterizedObjectSet(ASN1Parser::ParameterizedObjectSetContext *context) = 0;

    virtual std::any visitParameterizedObject(ASN1Parser::ParameterizedObjectContext *context) = 0;

    virtual std::any visitActualParameterList(ASN1Parser::ActualParameterListContext *context) = 0;

    virtual std::any visitActualParameter(ASN1Parser::ActualParameterContext *context) = 0;

    virtual std::any visitTypereference(ASN1Parser::TypereferenceContext *context) = 0;

    virtual std::any visitIdentifier(ASN1Parser::IdentifierContext *context) = 0;

    virtual std::any visitValuereference(ASN1Parser::ValuereferenceContext *context) = 0;

    virtual std::any visitModulereference(ASN1Parser::ModulereferenceContext *context) = 0;

    virtual std::any visitNumber(ASN1Parser::NumberContext *context) = 0;

    virtual std::any visitBstring(ASN1Parser::BstringContext *context) = 0;

    virtual std::any visitHstring(ASN1Parser::HstringContext *context) = 0;

    virtual std::any visitCstring(ASN1Parser::CstringContext *context) = 0;


};

