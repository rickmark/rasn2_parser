
// Generated from ./ASN1.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "ASN1Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ASN1Parser.
 */
class  ASN1Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterModuleDefinition(ASN1Parser::ModuleDefinitionContext *ctx) = 0;
  virtual void exitModuleDefinition(ASN1Parser::ModuleDefinitionContext *ctx) = 0;

  virtual void enterModuleIdentifier(ASN1Parser::ModuleIdentifierContext *ctx) = 0;
  virtual void exitModuleIdentifier(ASN1Parser::ModuleIdentifierContext *ctx) = 0;

  virtual void enterDefinitiveIdentifier(ASN1Parser::DefinitiveIdentifierContext *ctx) = 0;
  virtual void exitDefinitiveIdentifier(ASN1Parser::DefinitiveIdentifierContext *ctx) = 0;

  virtual void enterDefinitiveObjIdComponentList(ASN1Parser::DefinitiveObjIdComponentListContext *ctx) = 0;
  virtual void exitDefinitiveObjIdComponentList(ASN1Parser::DefinitiveObjIdComponentListContext *ctx) = 0;

  virtual void enterDefinitiveObjIdComponent(ASN1Parser::DefinitiveObjIdComponentContext *ctx) = 0;
  virtual void exitDefinitiveObjIdComponent(ASN1Parser::DefinitiveObjIdComponentContext *ctx) = 0;

  virtual void enterDefinitiveNumberForm(ASN1Parser::DefinitiveNumberFormContext *ctx) = 0;
  virtual void exitDefinitiveNumberForm(ASN1Parser::DefinitiveNumberFormContext *ctx) = 0;

  virtual void enterDefinitiveNameAndNumberForm(ASN1Parser::DefinitiveNameAndNumberFormContext *ctx) = 0;
  virtual void exitDefinitiveNameAndNumberForm(ASN1Parser::DefinitiveNameAndNumberFormContext *ctx) = 0;

  virtual void enterTagDefault(ASN1Parser::TagDefaultContext *ctx) = 0;
  virtual void exitTagDefault(ASN1Parser::TagDefaultContext *ctx) = 0;

  virtual void enterExtensionDefault(ASN1Parser::ExtensionDefaultContext *ctx) = 0;
  virtual void exitExtensionDefault(ASN1Parser::ExtensionDefaultContext *ctx) = 0;

  virtual void enterModuleBody(ASN1Parser::ModuleBodyContext *ctx) = 0;
  virtual void exitModuleBody(ASN1Parser::ModuleBodyContext *ctx) = 0;

  virtual void enterExports(ASN1Parser::ExportsContext *ctx) = 0;
  virtual void exitExports(ASN1Parser::ExportsContext *ctx) = 0;

  virtual void enterSymbolsExported(ASN1Parser::SymbolsExportedContext *ctx) = 0;
  virtual void exitSymbolsExported(ASN1Parser::SymbolsExportedContext *ctx) = 0;

  virtual void enterImports(ASN1Parser::ImportsContext *ctx) = 0;
  virtual void exitImports(ASN1Parser::ImportsContext *ctx) = 0;

  virtual void enterSymbolsImported(ASN1Parser::SymbolsImportedContext *ctx) = 0;
  virtual void exitSymbolsImported(ASN1Parser::SymbolsImportedContext *ctx) = 0;

  virtual void enterSymbolsFromModuleList(ASN1Parser::SymbolsFromModuleListContext *ctx) = 0;
  virtual void exitSymbolsFromModuleList(ASN1Parser::SymbolsFromModuleListContext *ctx) = 0;

  virtual void enterSymbolsFromModule(ASN1Parser::SymbolsFromModuleContext *ctx) = 0;
  virtual void exitSymbolsFromModule(ASN1Parser::SymbolsFromModuleContext *ctx) = 0;

  virtual void enterGlobalModuleReference(ASN1Parser::GlobalModuleReferenceContext *ctx) = 0;
  virtual void exitGlobalModuleReference(ASN1Parser::GlobalModuleReferenceContext *ctx) = 0;

  virtual void enterAssignedIdentifier(ASN1Parser::AssignedIdentifierContext *ctx) = 0;
  virtual void exitAssignedIdentifier(ASN1Parser::AssignedIdentifierContext *ctx) = 0;

  virtual void enterSymbolList(ASN1Parser::SymbolListContext *ctx) = 0;
  virtual void exitSymbolList(ASN1Parser::SymbolListContext *ctx) = 0;

  virtual void enterSymbol(ASN1Parser::SymbolContext *ctx) = 0;
  virtual void exitSymbol(ASN1Parser::SymbolContext *ctx) = 0;

  virtual void enterReference(ASN1Parser::ReferenceContext *ctx) = 0;
  virtual void exitReference(ASN1Parser::ReferenceContext *ctx) = 0;

  virtual void enterAssignmentList(ASN1Parser::AssignmentListContext *ctx) = 0;
  virtual void exitAssignmentList(ASN1Parser::AssignmentListContext *ctx) = 0;

  virtual void enterAssignment(ASN1Parser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(ASN1Parser::AssignmentContext *ctx) = 0;

  virtual void enterDefinedType(ASN1Parser::DefinedTypeContext *ctx) = 0;
  virtual void exitDefinedType(ASN1Parser::DefinedTypeContext *ctx) = 0;

  virtual void enterDefinedValue(ASN1Parser::DefinedValueContext *ctx) = 0;
  virtual void exitDefinedValue(ASN1Parser::DefinedValueContext *ctx) = 0;

  virtual void enterExternalTypeReference(ASN1Parser::ExternalTypeReferenceContext *ctx) = 0;
  virtual void exitExternalTypeReference(ASN1Parser::ExternalTypeReferenceContext *ctx) = 0;

  virtual void enterExternalValueReference(ASN1Parser::ExternalValueReferenceContext *ctx) = 0;
  virtual void exitExternalValueReference(ASN1Parser::ExternalValueReferenceContext *ctx) = 0;

  virtual void enterTypeAssignment(ASN1Parser::TypeAssignmentContext *ctx) = 0;
  virtual void exitTypeAssignment(ASN1Parser::TypeAssignmentContext *ctx) = 0;

  virtual void enterValueAssignment(ASN1Parser::ValueAssignmentContext *ctx) = 0;
  virtual void exitValueAssignment(ASN1Parser::ValueAssignmentContext *ctx) = 0;

  virtual void enterValueSetTypeAssignment(ASN1Parser::ValueSetTypeAssignmentContext *ctx) = 0;
  virtual void exitValueSetTypeAssignment(ASN1Parser::ValueSetTypeAssignmentContext *ctx) = 0;

  virtual void enterValueSet(ASN1Parser::ValueSetContext *ctx) = 0;
  virtual void exitValueSet(ASN1Parser::ValueSetContext *ctx) = 0;

  virtual void enterType(ASN1Parser::TypeContext *ctx) = 0;
  virtual void exitType(ASN1Parser::TypeContext *ctx) = 0;

  virtual void enterBuiltinType(ASN1Parser::BuiltinTypeContext *ctx) = 0;
  virtual void exitBuiltinType(ASN1Parser::BuiltinTypeContext *ctx) = 0;

  virtual void enterReferencedType(ASN1Parser::ReferencedTypeContext *ctx) = 0;
  virtual void exitReferencedType(ASN1Parser::ReferencedTypeContext *ctx) = 0;

  virtual void enterNamedType(ASN1Parser::NamedTypeContext *ctx) = 0;
  virtual void exitNamedType(ASN1Parser::NamedTypeContext *ctx) = 0;

  virtual void enterValue(ASN1Parser::ValueContext *ctx) = 0;
  virtual void exitValue(ASN1Parser::ValueContext *ctx) = 0;

  virtual void enterBuiltinValue(ASN1Parser::BuiltinValueContext *ctx) = 0;
  virtual void exitBuiltinValue(ASN1Parser::BuiltinValueContext *ctx) = 0;

  virtual void enterReferencedValue(ASN1Parser::ReferencedValueContext *ctx) = 0;
  virtual void exitReferencedValue(ASN1Parser::ReferencedValueContext *ctx) = 0;

  virtual void enterNamedValue(ASN1Parser::NamedValueContext *ctx) = 0;
  virtual void exitNamedValue(ASN1Parser::NamedValueContext *ctx) = 0;

  virtual void enterBooleanType(ASN1Parser::BooleanTypeContext *ctx) = 0;
  virtual void exitBooleanType(ASN1Parser::BooleanTypeContext *ctx) = 0;

  virtual void enterBooleanValue(ASN1Parser::BooleanValueContext *ctx) = 0;
  virtual void exitBooleanValue(ASN1Parser::BooleanValueContext *ctx) = 0;

  virtual void enterIntegerType(ASN1Parser::IntegerTypeContext *ctx) = 0;
  virtual void exitIntegerType(ASN1Parser::IntegerTypeContext *ctx) = 0;

  virtual void enterNamedNumberList(ASN1Parser::NamedNumberListContext *ctx) = 0;
  virtual void exitNamedNumberList(ASN1Parser::NamedNumberListContext *ctx) = 0;

  virtual void enterNamedNumber(ASN1Parser::NamedNumberContext *ctx) = 0;
  virtual void exitNamedNumber(ASN1Parser::NamedNumberContext *ctx) = 0;

  virtual void enterSignedNumber(ASN1Parser::SignedNumberContext *ctx) = 0;
  virtual void exitSignedNumber(ASN1Parser::SignedNumberContext *ctx) = 0;

  virtual void enterIntegerValue(ASN1Parser::IntegerValueContext *ctx) = 0;
  virtual void exitIntegerValue(ASN1Parser::IntegerValueContext *ctx) = 0;

  virtual void enterEnumeratedType(ASN1Parser::EnumeratedTypeContext *ctx) = 0;
  virtual void exitEnumeratedType(ASN1Parser::EnumeratedTypeContext *ctx) = 0;

  virtual void enterEnumerations(ASN1Parser::EnumerationsContext *ctx) = 0;
  virtual void exitEnumerations(ASN1Parser::EnumerationsContext *ctx) = 0;

  virtual void enterRootEnumeration(ASN1Parser::RootEnumerationContext *ctx) = 0;
  virtual void exitRootEnumeration(ASN1Parser::RootEnumerationContext *ctx) = 0;

  virtual void enterAdditionalEnumeration(ASN1Parser::AdditionalEnumerationContext *ctx) = 0;
  virtual void exitAdditionalEnumeration(ASN1Parser::AdditionalEnumerationContext *ctx) = 0;

  virtual void enterEnumeration(ASN1Parser::EnumerationContext *ctx) = 0;
  virtual void exitEnumeration(ASN1Parser::EnumerationContext *ctx) = 0;

  virtual void enterEnumerationItem(ASN1Parser::EnumerationItemContext *ctx) = 0;
  virtual void exitEnumerationItem(ASN1Parser::EnumerationItemContext *ctx) = 0;

  virtual void enterEnumeratedValue(ASN1Parser::EnumeratedValueContext *ctx) = 0;
  virtual void exitEnumeratedValue(ASN1Parser::EnumeratedValueContext *ctx) = 0;

  virtual void enterBitStringType(ASN1Parser::BitStringTypeContext *ctx) = 0;
  virtual void exitBitStringType(ASN1Parser::BitStringTypeContext *ctx) = 0;

  virtual void enterNamedBitList(ASN1Parser::NamedBitListContext *ctx) = 0;
  virtual void exitNamedBitList(ASN1Parser::NamedBitListContext *ctx) = 0;

  virtual void enterNamedBit(ASN1Parser::NamedBitContext *ctx) = 0;
  virtual void exitNamedBit(ASN1Parser::NamedBitContext *ctx) = 0;

  virtual void enterBitStringValue(ASN1Parser::BitStringValueContext *ctx) = 0;
  virtual void exitBitStringValue(ASN1Parser::BitStringValueContext *ctx) = 0;

  virtual void enterIdentifierList(ASN1Parser::IdentifierListContext *ctx) = 0;
  virtual void exitIdentifierList(ASN1Parser::IdentifierListContext *ctx) = 0;

  virtual void enterOctetStringType(ASN1Parser::OctetStringTypeContext *ctx) = 0;
  virtual void exitOctetStringType(ASN1Parser::OctetStringTypeContext *ctx) = 0;

  virtual void enterOctetStringValue(ASN1Parser::OctetStringValueContext *ctx) = 0;
  virtual void exitOctetStringValue(ASN1Parser::OctetStringValueContext *ctx) = 0;

  virtual void enterNullType(ASN1Parser::NullTypeContext *ctx) = 0;
  virtual void exitNullType(ASN1Parser::NullTypeContext *ctx) = 0;

  virtual void enterNullValue(ASN1Parser::NullValueContext *ctx) = 0;
  virtual void exitNullValue(ASN1Parser::NullValueContext *ctx) = 0;

  virtual void enterSequenceType(ASN1Parser::SequenceTypeContext *ctx) = 0;
  virtual void exitSequenceType(ASN1Parser::SequenceTypeContext *ctx) = 0;

  virtual void enterComponentTypeLists(ASN1Parser::ComponentTypeListsContext *ctx) = 0;
  virtual void exitComponentTypeLists(ASN1Parser::ComponentTypeListsContext *ctx) = 0;

  virtual void enterRootComponentTypeList(ASN1Parser::RootComponentTypeListContext *ctx) = 0;
  virtual void exitRootComponentTypeList(ASN1Parser::RootComponentTypeListContext *ctx) = 0;

  virtual void enterExtensionEndMarker(ASN1Parser::ExtensionEndMarkerContext *ctx) = 0;
  virtual void exitExtensionEndMarker(ASN1Parser::ExtensionEndMarkerContext *ctx) = 0;

  virtual void enterExtensionAdditions(ASN1Parser::ExtensionAdditionsContext *ctx) = 0;
  virtual void exitExtensionAdditions(ASN1Parser::ExtensionAdditionsContext *ctx) = 0;

  virtual void enterExtensionAdditionList(ASN1Parser::ExtensionAdditionListContext *ctx) = 0;
  virtual void exitExtensionAdditionList(ASN1Parser::ExtensionAdditionListContext *ctx) = 0;

  virtual void enterExtensionAddition(ASN1Parser::ExtensionAdditionContext *ctx) = 0;
  virtual void exitExtensionAddition(ASN1Parser::ExtensionAdditionContext *ctx) = 0;

  virtual void enterExtensionAdditionGroup(ASN1Parser::ExtensionAdditionGroupContext *ctx) = 0;
  virtual void exitExtensionAdditionGroup(ASN1Parser::ExtensionAdditionGroupContext *ctx) = 0;

  virtual void enterVersionNumber(ASN1Parser::VersionNumberContext *ctx) = 0;
  virtual void exitVersionNumber(ASN1Parser::VersionNumberContext *ctx) = 0;

  virtual void enterComponentTypeList(ASN1Parser::ComponentTypeListContext *ctx) = 0;
  virtual void exitComponentTypeList(ASN1Parser::ComponentTypeListContext *ctx) = 0;

  virtual void enterComponentType(ASN1Parser::ComponentTypeContext *ctx) = 0;
  virtual void exitComponentType(ASN1Parser::ComponentTypeContext *ctx) = 0;

  virtual void enterSequenceValue(ASN1Parser::SequenceValueContext *ctx) = 0;
  virtual void exitSequenceValue(ASN1Parser::SequenceValueContext *ctx) = 0;

  virtual void enterComponentValueList(ASN1Parser::ComponentValueListContext *ctx) = 0;
  virtual void exitComponentValueList(ASN1Parser::ComponentValueListContext *ctx) = 0;

  virtual void enterSequenceOfType(ASN1Parser::SequenceOfTypeContext *ctx) = 0;
  virtual void exitSequenceOfType(ASN1Parser::SequenceOfTypeContext *ctx) = 0;

  virtual void enterSequenceOfValue(ASN1Parser::SequenceOfValueContext *ctx) = 0;
  virtual void exitSequenceOfValue(ASN1Parser::SequenceOfValueContext *ctx) = 0;

  virtual void enterValueList(ASN1Parser::ValueListContext *ctx) = 0;
  virtual void exitValueList(ASN1Parser::ValueListContext *ctx) = 0;

  virtual void enterNamedValueList(ASN1Parser::NamedValueListContext *ctx) = 0;
  virtual void exitNamedValueList(ASN1Parser::NamedValueListContext *ctx) = 0;

  virtual void enterSetType(ASN1Parser::SetTypeContext *ctx) = 0;
  virtual void exitSetType(ASN1Parser::SetTypeContext *ctx) = 0;

  virtual void enterSetValue(ASN1Parser::SetValueContext *ctx) = 0;
  virtual void exitSetValue(ASN1Parser::SetValueContext *ctx) = 0;

  virtual void enterSetOfType(ASN1Parser::SetOfTypeContext *ctx) = 0;
  virtual void exitSetOfType(ASN1Parser::SetOfTypeContext *ctx) = 0;

  virtual void enterSetOfValue(ASN1Parser::SetOfValueContext *ctx) = 0;
  virtual void exitSetOfValue(ASN1Parser::SetOfValueContext *ctx) = 0;

  virtual void enterChoiceType(ASN1Parser::ChoiceTypeContext *ctx) = 0;
  virtual void exitChoiceType(ASN1Parser::ChoiceTypeContext *ctx) = 0;

  virtual void enterAlternativeTypeLists(ASN1Parser::AlternativeTypeListsContext *ctx) = 0;
  virtual void exitAlternativeTypeLists(ASN1Parser::AlternativeTypeListsContext *ctx) = 0;

  virtual void enterRootAlternativeTypeList(ASN1Parser::RootAlternativeTypeListContext *ctx) = 0;
  virtual void exitRootAlternativeTypeList(ASN1Parser::RootAlternativeTypeListContext *ctx) = 0;

  virtual void enterExtensionAdditionAlternatives(ASN1Parser::ExtensionAdditionAlternativesContext *ctx) = 0;
  virtual void exitExtensionAdditionAlternatives(ASN1Parser::ExtensionAdditionAlternativesContext *ctx) = 0;

  virtual void enterExtensionAdditionAlternativesList(ASN1Parser::ExtensionAdditionAlternativesListContext *ctx) = 0;
  virtual void exitExtensionAdditionAlternativesList(ASN1Parser::ExtensionAdditionAlternativesListContext *ctx) = 0;

  virtual void enterExtensionAdditionAlternative(ASN1Parser::ExtensionAdditionAlternativeContext *ctx) = 0;
  virtual void exitExtensionAdditionAlternative(ASN1Parser::ExtensionAdditionAlternativeContext *ctx) = 0;

  virtual void enterExtensionAdditionAlternativesGroup(ASN1Parser::ExtensionAdditionAlternativesGroupContext *ctx) = 0;
  virtual void exitExtensionAdditionAlternativesGroup(ASN1Parser::ExtensionAdditionAlternativesGroupContext *ctx) = 0;

  virtual void enterAlternativeTypeList(ASN1Parser::AlternativeTypeListContext *ctx) = 0;
  virtual void exitAlternativeTypeList(ASN1Parser::AlternativeTypeListContext *ctx) = 0;

  virtual void enterTaggedType(ASN1Parser::TaggedTypeContext *ctx) = 0;
  virtual void exitTaggedType(ASN1Parser::TaggedTypeContext *ctx) = 0;

  virtual void enterTag(ASN1Parser::TagContext *ctx) = 0;
  virtual void exitTag(ASN1Parser::TagContext *ctx) = 0;

  virtual void enterClassNumber(ASN1Parser::ClassNumberContext *ctx) = 0;
  virtual void exitClassNumber(ASN1Parser::ClassNumberContext *ctx) = 0;

  virtual void enterClassP(ASN1Parser::ClassPContext *ctx) = 0;
  virtual void exitClassP(ASN1Parser::ClassPContext *ctx) = 0;

  virtual void enterObjectIdentifierType(ASN1Parser::ObjectIdentifierTypeContext *ctx) = 0;
  virtual void exitObjectIdentifierType(ASN1Parser::ObjectIdentifierTypeContext *ctx) = 0;

  virtual void enterObjectIdentifierValue(ASN1Parser::ObjectIdentifierValueContext *ctx) = 0;
  virtual void exitObjectIdentifierValue(ASN1Parser::ObjectIdentifierValueContext *ctx) = 0;

  virtual void enterObjIdComponentsList(ASN1Parser::ObjIdComponentsListContext *ctx) = 0;
  virtual void exitObjIdComponentsList(ASN1Parser::ObjIdComponentsListContext *ctx) = 0;

  virtual void enterObjIdComponents(ASN1Parser::ObjIdComponentsContext *ctx) = 0;
  virtual void exitObjIdComponents(ASN1Parser::ObjIdComponentsContext *ctx) = 0;

  virtual void enterNameForm(ASN1Parser::NameFormContext *ctx) = 0;
  virtual void exitNameForm(ASN1Parser::NameFormContext *ctx) = 0;

  virtual void enterNumberForm(ASN1Parser::NumberFormContext *ctx) = 0;
  virtual void exitNumberForm(ASN1Parser::NumberFormContext *ctx) = 0;

  virtual void enterNameAndNumberForm(ASN1Parser::NameAndNumberFormContext *ctx) = 0;
  virtual void exitNameAndNumberForm(ASN1Parser::NameAndNumberFormContext *ctx) = 0;

  virtual void enterExtensionAndException(ASN1Parser::ExtensionAndExceptionContext *ctx) = 0;
  virtual void exitExtensionAndException(ASN1Parser::ExtensionAndExceptionContext *ctx) = 0;

  virtual void enterExceptionSpec(ASN1Parser::ExceptionSpecContext *ctx) = 0;
  virtual void exitExceptionSpec(ASN1Parser::ExceptionSpecContext *ctx) = 0;

  virtual void enterExceptionIdentification(ASN1Parser::ExceptionIdentificationContext *ctx) = 0;
  virtual void exitExceptionIdentification(ASN1Parser::ExceptionIdentificationContext *ctx) = 0;

  virtual void enterOptionalExtensionMarker(ASN1Parser::OptionalExtensionMarkerContext *ctx) = 0;
  virtual void exitOptionalExtensionMarker(ASN1Parser::OptionalExtensionMarkerContext *ctx) = 0;

  virtual void enterCharacterStringType(ASN1Parser::CharacterStringTypeContext *ctx) = 0;
  virtual void exitCharacterStringType(ASN1Parser::CharacterStringTypeContext *ctx) = 0;

  virtual void enterCharacterStringValue(ASN1Parser::CharacterStringValueContext *ctx) = 0;
  virtual void exitCharacterStringValue(ASN1Parser::CharacterStringValueContext *ctx) = 0;

  virtual void enterRestrictedCharacterStringType(ASN1Parser::RestrictedCharacterStringTypeContext *ctx) = 0;
  virtual void exitRestrictedCharacterStringType(ASN1Parser::RestrictedCharacterStringTypeContext *ctx) = 0;

  virtual void enterRestrictedCharacterStringValue(ASN1Parser::RestrictedCharacterStringValueContext *ctx) = 0;
  virtual void exitRestrictedCharacterStringValue(ASN1Parser::RestrictedCharacterStringValueContext *ctx) = 0;

  virtual void enterCharacterStringList(ASN1Parser::CharacterStringListContext *ctx) = 0;
  virtual void exitCharacterStringList(ASN1Parser::CharacterStringListContext *ctx) = 0;

  virtual void enterCharSyms(ASN1Parser::CharSymsContext *ctx) = 0;
  virtual void exitCharSyms(ASN1Parser::CharSymsContext *ctx) = 0;

  virtual void enterCharsDefn(ASN1Parser::CharsDefnContext *ctx) = 0;
  virtual void exitCharsDefn(ASN1Parser::CharsDefnContext *ctx) = 0;

  virtual void enterQuadruple(ASN1Parser::QuadrupleContext *ctx) = 0;
  virtual void exitQuadruple(ASN1Parser::QuadrupleContext *ctx) = 0;

  virtual void enterGroup(ASN1Parser::GroupContext *ctx) = 0;
  virtual void exitGroup(ASN1Parser::GroupContext *ctx) = 0;

  virtual void enterPlane(ASN1Parser::PlaneContext *ctx) = 0;
  virtual void exitPlane(ASN1Parser::PlaneContext *ctx) = 0;

  virtual void enterRow(ASN1Parser::RowContext *ctx) = 0;
  virtual void exitRow(ASN1Parser::RowContext *ctx) = 0;

  virtual void enterCell(ASN1Parser::CellContext *ctx) = 0;
  virtual void exitCell(ASN1Parser::CellContext *ctx) = 0;

  virtual void enterTuple(ASN1Parser::TupleContext *ctx) = 0;
  virtual void exitTuple(ASN1Parser::TupleContext *ctx) = 0;

  virtual void enterTableColumn(ASN1Parser::TableColumnContext *ctx) = 0;
  virtual void exitTableColumn(ASN1Parser::TableColumnContext *ctx) = 0;

  virtual void enterTableRow(ASN1Parser::TableRowContext *ctx) = 0;
  virtual void exitTableRow(ASN1Parser::TableRowContext *ctx) = 0;

  virtual void enterUnrestrictedCharacterStringType(ASN1Parser::UnrestrictedCharacterStringTypeContext *ctx) = 0;
  virtual void exitUnrestrictedCharacterStringType(ASN1Parser::UnrestrictedCharacterStringTypeContext *ctx) = 0;

  virtual void enterGeneralizedTimeType(ASN1Parser::GeneralizedTimeTypeContext *ctx) = 0;
  virtual void exitGeneralizedTimeType(ASN1Parser::GeneralizedTimeTypeContext *ctx) = 0;

  virtual void enterUTCTimeType(ASN1Parser::UTCTimeTypeContext *ctx) = 0;
  virtual void exitUTCTimeType(ASN1Parser::UTCTimeTypeContext *ctx) = 0;

  virtual void enterConstrainedType(ASN1Parser::ConstrainedTypeContext *ctx) = 0;
  virtual void exitConstrainedType(ASN1Parser::ConstrainedTypeContext *ctx) = 0;

  virtual void enterTypeWithConstraint(ASN1Parser::TypeWithConstraintContext *ctx) = 0;
  virtual void exitTypeWithConstraint(ASN1Parser::TypeWithConstraintContext *ctx) = 0;

  virtual void enterConstraint(ASN1Parser::ConstraintContext *ctx) = 0;
  virtual void exitConstraint(ASN1Parser::ConstraintContext *ctx) = 0;

  virtual void enterConstraintSpec(ASN1Parser::ConstraintSpecContext *ctx) = 0;
  virtual void exitConstraintSpec(ASN1Parser::ConstraintSpecContext *ctx) = 0;

  virtual void enterSubtypeConstraint(ASN1Parser::SubtypeConstraintContext *ctx) = 0;
  virtual void exitSubtypeConstraint(ASN1Parser::SubtypeConstraintContext *ctx) = 0;

  virtual void enterGeneralConstraint(ASN1Parser::GeneralConstraintContext *ctx) = 0;
  virtual void exitGeneralConstraint(ASN1Parser::GeneralConstraintContext *ctx) = 0;

  virtual void enterElementSetSpecs(ASN1Parser::ElementSetSpecsContext *ctx) = 0;
  virtual void exitElementSetSpecs(ASN1Parser::ElementSetSpecsContext *ctx) = 0;

  virtual void enterRootElementSetSpec(ASN1Parser::RootElementSetSpecContext *ctx) = 0;
  virtual void exitRootElementSetSpec(ASN1Parser::RootElementSetSpecContext *ctx) = 0;

  virtual void enterAdditionalElementSetSpec(ASN1Parser::AdditionalElementSetSpecContext *ctx) = 0;
  virtual void exitAdditionalElementSetSpec(ASN1Parser::AdditionalElementSetSpecContext *ctx) = 0;

  virtual void enterElementSetSpec(ASN1Parser::ElementSetSpecContext *ctx) = 0;
  virtual void exitElementSetSpec(ASN1Parser::ElementSetSpecContext *ctx) = 0;

  virtual void enterUnions(ASN1Parser::UnionsContext *ctx) = 0;
  virtual void exitUnions(ASN1Parser::UnionsContext *ctx) = 0;

  virtual void enterUElems(ASN1Parser::UElemsContext *ctx) = 0;
  virtual void exitUElems(ASN1Parser::UElemsContext *ctx) = 0;

  virtual void enterIntersections(ASN1Parser::IntersectionsContext *ctx) = 0;
  virtual void exitIntersections(ASN1Parser::IntersectionsContext *ctx) = 0;

  virtual void enterIElems(ASN1Parser::IElemsContext *ctx) = 0;
  virtual void exitIElems(ASN1Parser::IElemsContext *ctx) = 0;

  virtual void enterIntersectionElements(ASN1Parser::IntersectionElementsContext *ctx) = 0;
  virtual void exitIntersectionElements(ASN1Parser::IntersectionElementsContext *ctx) = 0;

  virtual void enterElems(ASN1Parser::ElemsContext *ctx) = 0;
  virtual void exitElems(ASN1Parser::ElemsContext *ctx) = 0;

  virtual void enterExclusions(ASN1Parser::ExclusionsContext *ctx) = 0;
  virtual void exitExclusions(ASN1Parser::ExclusionsContext *ctx) = 0;

  virtual void enterUnionMark(ASN1Parser::UnionMarkContext *ctx) = 0;
  virtual void exitUnionMark(ASN1Parser::UnionMarkContext *ctx) = 0;

  virtual void enterIntersectionMark(ASN1Parser::IntersectionMarkContext *ctx) = 0;
  virtual void exitIntersectionMark(ASN1Parser::IntersectionMarkContext *ctx) = 0;

  virtual void enterElements(ASN1Parser::ElementsContext *ctx) = 0;
  virtual void exitElements(ASN1Parser::ElementsContext *ctx) = 0;

  virtual void enterSubtypeElements(ASN1Parser::SubtypeElementsContext *ctx) = 0;
  virtual void exitSubtypeElements(ASN1Parser::SubtypeElementsContext *ctx) = 0;

  virtual void enterSingleValue(ASN1Parser::SingleValueContext *ctx) = 0;
  virtual void exitSingleValue(ASN1Parser::SingleValueContext *ctx) = 0;

  virtual void enterContainedSubtype(ASN1Parser::ContainedSubtypeContext *ctx) = 0;
  virtual void exitContainedSubtype(ASN1Parser::ContainedSubtypeContext *ctx) = 0;

  virtual void enterIncludes(ASN1Parser::IncludesContext *ctx) = 0;
  virtual void exitIncludes(ASN1Parser::IncludesContext *ctx) = 0;

  virtual void enterValueRange(ASN1Parser::ValueRangeContext *ctx) = 0;
  virtual void exitValueRange(ASN1Parser::ValueRangeContext *ctx) = 0;

  virtual void enterLowerEndpoint(ASN1Parser::LowerEndpointContext *ctx) = 0;
  virtual void exitLowerEndpoint(ASN1Parser::LowerEndpointContext *ctx) = 0;

  virtual void enterUpperEndpoint(ASN1Parser::UpperEndpointContext *ctx) = 0;
  virtual void exitUpperEndpoint(ASN1Parser::UpperEndpointContext *ctx) = 0;

  virtual void enterLowerEndValue(ASN1Parser::LowerEndValueContext *ctx) = 0;
  virtual void exitLowerEndValue(ASN1Parser::LowerEndValueContext *ctx) = 0;

  virtual void enterUpperEndValue(ASN1Parser::UpperEndValueContext *ctx) = 0;
  virtual void exitUpperEndValue(ASN1Parser::UpperEndValueContext *ctx) = 0;

  virtual void enterSizeConstraint(ASN1Parser::SizeConstraintContext *ctx) = 0;
  virtual void exitSizeConstraint(ASN1Parser::SizeConstraintContext *ctx) = 0;

  virtual void enterPermittedAlphabet(ASN1Parser::PermittedAlphabetContext *ctx) = 0;
  virtual void exitPermittedAlphabet(ASN1Parser::PermittedAlphabetContext *ctx) = 0;

  virtual void enterUserDefinedConstraint(ASN1Parser::UserDefinedConstraintContext *ctx) = 0;
  virtual void exitUserDefinedConstraint(ASN1Parser::UserDefinedConstraintContext *ctx) = 0;

  virtual void enterUserDefinedConstraintParameter(ASN1Parser::UserDefinedConstraintParameterContext *ctx) = 0;
  virtual void exitUserDefinedConstraintParameter(ASN1Parser::UserDefinedConstraintParameterContext *ctx) = 0;

  virtual void enterTableConstraint(ASN1Parser::TableConstraintContext *ctx) = 0;
  virtual void exitTableConstraint(ASN1Parser::TableConstraintContext *ctx) = 0;

  virtual void enterSimpleTableConstraint(ASN1Parser::SimpleTableConstraintContext *ctx) = 0;
  virtual void exitSimpleTableConstraint(ASN1Parser::SimpleTableConstraintContext *ctx) = 0;

  virtual void enterComponentRelationConstraint(ASN1Parser::ComponentRelationConstraintContext *ctx) = 0;
  virtual void exitComponentRelationConstraint(ASN1Parser::ComponentRelationConstraintContext *ctx) = 0;

  virtual void enterAtNotation(ASN1Parser::AtNotationContext *ctx) = 0;
  virtual void exitAtNotation(ASN1Parser::AtNotationContext *ctx) = 0;

  virtual void enterLevel(ASN1Parser::LevelContext *ctx) = 0;
  virtual void exitLevel(ASN1Parser::LevelContext *ctx) = 0;

  virtual void enterComponentIdList(ASN1Parser::ComponentIdListContext *ctx) = 0;
  virtual void exitComponentIdList(ASN1Parser::ComponentIdListContext *ctx) = 0;

  virtual void enterContentsConstraint(ASN1Parser::ContentsConstraintContext *ctx) = 0;
  virtual void exitContentsConstraint(ASN1Parser::ContentsConstraintContext *ctx) = 0;

  virtual void enterDefinedObjectClass(ASN1Parser::DefinedObjectClassContext *ctx) = 0;
  virtual void exitDefinedObjectClass(ASN1Parser::DefinedObjectClassContext *ctx) = 0;

  virtual void enterDefinedObject(ASN1Parser::DefinedObjectContext *ctx) = 0;
  virtual void exitDefinedObject(ASN1Parser::DefinedObjectContext *ctx) = 0;

  virtual void enterDefinedObjectSet(ASN1Parser::DefinedObjectSetContext *ctx) = 0;
  virtual void exitDefinedObjectSet(ASN1Parser::DefinedObjectSetContext *ctx) = 0;

  virtual void enterExternalObjectClassReference(ASN1Parser::ExternalObjectClassReferenceContext *ctx) = 0;
  virtual void exitExternalObjectClassReference(ASN1Parser::ExternalObjectClassReferenceContext *ctx) = 0;

  virtual void enterExternalObjectReference(ASN1Parser::ExternalObjectReferenceContext *ctx) = 0;
  virtual void exitExternalObjectReference(ASN1Parser::ExternalObjectReferenceContext *ctx) = 0;

  virtual void enterExternalObjectSetReference(ASN1Parser::ExternalObjectSetReferenceContext *ctx) = 0;
  virtual void exitExternalObjectSetReference(ASN1Parser::ExternalObjectSetReferenceContext *ctx) = 0;

  virtual void enterUsefulObjectClassReference(ASN1Parser::UsefulObjectClassReferenceContext *ctx) = 0;
  virtual void exitUsefulObjectClassReference(ASN1Parser::UsefulObjectClassReferenceContext *ctx) = 0;

  virtual void enterObjectClassAssignment(ASN1Parser::ObjectClassAssignmentContext *ctx) = 0;
  virtual void exitObjectClassAssignment(ASN1Parser::ObjectClassAssignmentContext *ctx) = 0;

  virtual void enterObjectClass(ASN1Parser::ObjectClassContext *ctx) = 0;
  virtual void exitObjectClass(ASN1Parser::ObjectClassContext *ctx) = 0;

  virtual void enterObjectClassDefn(ASN1Parser::ObjectClassDefnContext *ctx) = 0;
  virtual void exitObjectClassDefn(ASN1Parser::ObjectClassDefnContext *ctx) = 0;

  virtual void enterWithSyntaxSpec(ASN1Parser::WithSyntaxSpecContext *ctx) = 0;
  virtual void exitWithSyntaxSpec(ASN1Parser::WithSyntaxSpecContext *ctx) = 0;

  virtual void enterFieldSpec(ASN1Parser::FieldSpecContext *ctx) = 0;
  virtual void exitFieldSpec(ASN1Parser::FieldSpecContext *ctx) = 0;

  virtual void enterTypeFieldSpec(ASN1Parser::TypeFieldSpecContext *ctx) = 0;
  virtual void exitTypeFieldSpec(ASN1Parser::TypeFieldSpecContext *ctx) = 0;

  virtual void enterTypeOptionalitySpec(ASN1Parser::TypeOptionalitySpecContext *ctx) = 0;
  virtual void exitTypeOptionalitySpec(ASN1Parser::TypeOptionalitySpecContext *ctx) = 0;

  virtual void enterFixedTypeValueFieldSpec(ASN1Parser::FixedTypeValueFieldSpecContext *ctx) = 0;
  virtual void exitFixedTypeValueFieldSpec(ASN1Parser::FixedTypeValueFieldSpecContext *ctx) = 0;

  virtual void enterValueOptionalitySpec(ASN1Parser::ValueOptionalitySpecContext *ctx) = 0;
  virtual void exitValueOptionalitySpec(ASN1Parser::ValueOptionalitySpecContext *ctx) = 0;

  virtual void enterVariableTypeValueFieldSpec(ASN1Parser::VariableTypeValueFieldSpecContext *ctx) = 0;
  virtual void exitVariableTypeValueFieldSpec(ASN1Parser::VariableTypeValueFieldSpecContext *ctx) = 0;

  virtual void enterFixedTypeValueSetFieldSpec(ASN1Parser::FixedTypeValueSetFieldSpecContext *ctx) = 0;
  virtual void exitFixedTypeValueSetFieldSpec(ASN1Parser::FixedTypeValueSetFieldSpecContext *ctx) = 0;

  virtual void enterValueSetOptionalitySpec(ASN1Parser::ValueSetOptionalitySpecContext *ctx) = 0;
  virtual void exitValueSetOptionalitySpec(ASN1Parser::ValueSetOptionalitySpecContext *ctx) = 0;

  virtual void enterVariableTypeValueSetFieldSpec(ASN1Parser::VariableTypeValueSetFieldSpecContext *ctx) = 0;
  virtual void exitVariableTypeValueSetFieldSpec(ASN1Parser::VariableTypeValueSetFieldSpecContext *ctx) = 0;

  virtual void enterObjectFieldSpec(ASN1Parser::ObjectFieldSpecContext *ctx) = 0;
  virtual void exitObjectFieldSpec(ASN1Parser::ObjectFieldSpecContext *ctx) = 0;

  virtual void enterObjectOptionalitySpec(ASN1Parser::ObjectOptionalitySpecContext *ctx) = 0;
  virtual void exitObjectOptionalitySpec(ASN1Parser::ObjectOptionalitySpecContext *ctx) = 0;

  virtual void enterObjectSetFieldSpec(ASN1Parser::ObjectSetFieldSpecContext *ctx) = 0;
  virtual void exitObjectSetFieldSpec(ASN1Parser::ObjectSetFieldSpecContext *ctx) = 0;

  virtual void enterObjectSetOptionalitySpec(ASN1Parser::ObjectSetOptionalitySpecContext *ctx) = 0;
  virtual void exitObjectSetOptionalitySpec(ASN1Parser::ObjectSetOptionalitySpecContext *ctx) = 0;

  virtual void enterPrimitiveFieldName(ASN1Parser::PrimitiveFieldNameContext *ctx) = 0;
  virtual void exitPrimitiveFieldName(ASN1Parser::PrimitiveFieldNameContext *ctx) = 0;

  virtual void enterFieldName(ASN1Parser::FieldNameContext *ctx) = 0;
  virtual void exitFieldName(ASN1Parser::FieldNameContext *ctx) = 0;

  virtual void enterSyntaxList(ASN1Parser::SyntaxListContext *ctx) = 0;
  virtual void exitSyntaxList(ASN1Parser::SyntaxListContext *ctx) = 0;

  virtual void enterTokenOrGroupSpec(ASN1Parser::TokenOrGroupSpecContext *ctx) = 0;
  virtual void exitTokenOrGroupSpec(ASN1Parser::TokenOrGroupSpecContext *ctx) = 0;

  virtual void enterOptionalGroup(ASN1Parser::OptionalGroupContext *ctx) = 0;
  virtual void exitOptionalGroup(ASN1Parser::OptionalGroupContext *ctx) = 0;

  virtual void enterRequiredToken(ASN1Parser::RequiredTokenContext *ctx) = 0;
  virtual void exitRequiredToken(ASN1Parser::RequiredTokenContext *ctx) = 0;

  virtual void enterLiteral(ASN1Parser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(ASN1Parser::LiteralContext *ctx) = 0;

  virtual void enterObjectAssignment(ASN1Parser::ObjectAssignmentContext *ctx) = 0;
  virtual void exitObjectAssignment(ASN1Parser::ObjectAssignmentContext *ctx) = 0;

  virtual void enterObject(ASN1Parser::ObjectContext *ctx) = 0;
  virtual void exitObject(ASN1Parser::ObjectContext *ctx) = 0;

  virtual void enterObjectDefn(ASN1Parser::ObjectDefnContext *ctx) = 0;
  virtual void exitObjectDefn(ASN1Parser::ObjectDefnContext *ctx) = 0;

  virtual void enterDefaultSyntax(ASN1Parser::DefaultSyntaxContext *ctx) = 0;
  virtual void exitDefaultSyntax(ASN1Parser::DefaultSyntaxContext *ctx) = 0;

  virtual void enterFieldSetting(ASN1Parser::FieldSettingContext *ctx) = 0;
  virtual void exitFieldSetting(ASN1Parser::FieldSettingContext *ctx) = 0;

  virtual void enterDefinedSyntax(ASN1Parser::DefinedSyntaxContext *ctx) = 0;
  virtual void exitDefinedSyntax(ASN1Parser::DefinedSyntaxContext *ctx) = 0;

  virtual void enterDefinedSyntaxToken(ASN1Parser::DefinedSyntaxTokenContext *ctx) = 0;
  virtual void exitDefinedSyntaxToken(ASN1Parser::DefinedSyntaxTokenContext *ctx) = 0;

  virtual void enterSetting(ASN1Parser::SettingContext *ctx) = 0;
  virtual void exitSetting(ASN1Parser::SettingContext *ctx) = 0;

  virtual void enterObjectSetAssignment(ASN1Parser::ObjectSetAssignmentContext *ctx) = 0;
  virtual void exitObjectSetAssignment(ASN1Parser::ObjectSetAssignmentContext *ctx) = 0;

  virtual void enterObjectSet(ASN1Parser::ObjectSetContext *ctx) = 0;
  virtual void exitObjectSet(ASN1Parser::ObjectSetContext *ctx) = 0;

  virtual void enterObjectSetSpec(ASN1Parser::ObjectSetSpecContext *ctx) = 0;
  virtual void exitObjectSetSpec(ASN1Parser::ObjectSetSpecContext *ctx) = 0;

  virtual void enterObjectSetElements(ASN1Parser::ObjectSetElementsContext *ctx) = 0;
  virtual void exitObjectSetElements(ASN1Parser::ObjectSetElementsContext *ctx) = 0;

  virtual void enterObjectClassFieldType(ASN1Parser::ObjectClassFieldTypeContext *ctx) = 0;
  virtual void exitObjectClassFieldType(ASN1Parser::ObjectClassFieldTypeContext *ctx) = 0;

  virtual void enterObjectClassFieldValue(ASN1Parser::ObjectClassFieldValueContext *ctx) = 0;
  virtual void exitObjectClassFieldValue(ASN1Parser::ObjectClassFieldValueContext *ctx) = 0;

  virtual void enterOpenTypeFieldVal(ASN1Parser::OpenTypeFieldValContext *ctx) = 0;
  virtual void exitOpenTypeFieldVal(ASN1Parser::OpenTypeFieldValContext *ctx) = 0;

  virtual void enterFixedTypeFieldVal(ASN1Parser::FixedTypeFieldValContext *ctx) = 0;
  virtual void exitFixedTypeFieldVal(ASN1Parser::FixedTypeFieldValContext *ctx) = 0;

  virtual void enterValueFromObject(ASN1Parser::ValueFromObjectContext *ctx) = 0;
  virtual void exitValueFromObject(ASN1Parser::ValueFromObjectContext *ctx) = 0;

  virtual void enterValueSetFromObjects(ASN1Parser::ValueSetFromObjectsContext *ctx) = 0;
  virtual void exitValueSetFromObjects(ASN1Parser::ValueSetFromObjectsContext *ctx) = 0;

  virtual void enterTypeFromObject(ASN1Parser::TypeFromObjectContext *ctx) = 0;
  virtual void exitTypeFromObject(ASN1Parser::TypeFromObjectContext *ctx) = 0;

  virtual void enterObjectFromObject(ASN1Parser::ObjectFromObjectContext *ctx) = 0;
  virtual void exitObjectFromObject(ASN1Parser::ObjectFromObjectContext *ctx) = 0;

  virtual void enterObjectSetFromObjects(ASN1Parser::ObjectSetFromObjectsContext *ctx) = 0;
  virtual void exitObjectSetFromObjects(ASN1Parser::ObjectSetFromObjectsContext *ctx) = 0;

  virtual void enterReferencedObjects(ASN1Parser::ReferencedObjectsContext *ctx) = 0;
  virtual void exitReferencedObjects(ASN1Parser::ReferencedObjectsContext *ctx) = 0;

  virtual void enterAnyType(ASN1Parser::AnyTypeContext *ctx) = 0;
  virtual void exitAnyType(ASN1Parser::AnyTypeContext *ctx) = 0;

  virtual void enterObjectclassreference(ASN1Parser::ObjectclassreferenceContext *ctx) = 0;
  virtual void exitObjectclassreference(ASN1Parser::ObjectclassreferenceContext *ctx) = 0;

  virtual void enterObjectreference(ASN1Parser::ObjectreferenceContext *ctx) = 0;
  virtual void exitObjectreference(ASN1Parser::ObjectreferenceContext *ctx) = 0;

  virtual void enterObjectsetreference(ASN1Parser::ObjectsetreferenceContext *ctx) = 0;
  virtual void exitObjectsetreference(ASN1Parser::ObjectsetreferenceContext *ctx) = 0;

  virtual void enterTypefieldreference(ASN1Parser::TypefieldreferenceContext *ctx) = 0;
  virtual void exitTypefieldreference(ASN1Parser::TypefieldreferenceContext *ctx) = 0;

  virtual void enterValuefieldreference(ASN1Parser::ValuefieldreferenceContext *ctx) = 0;
  virtual void exitValuefieldreference(ASN1Parser::ValuefieldreferenceContext *ctx) = 0;

  virtual void enterValuesetfieldreference(ASN1Parser::ValuesetfieldreferenceContext *ctx) = 0;
  virtual void exitValuesetfieldreference(ASN1Parser::ValuesetfieldreferenceContext *ctx) = 0;

  virtual void enterObjectfieldreference(ASN1Parser::ObjectfieldreferenceContext *ctx) = 0;
  virtual void exitObjectfieldreference(ASN1Parser::ObjectfieldreferenceContext *ctx) = 0;

  virtual void enterObjectsetfieldreference(ASN1Parser::ObjectsetfieldreferenceContext *ctx) = 0;
  virtual void exitObjectsetfieldreference(ASN1Parser::ObjectsetfieldreferenceContext *ctx) = 0;

  virtual void enterWord(ASN1Parser::WordContext *ctx) = 0;
  virtual void exitWord(ASN1Parser::WordContext *ctx) = 0;

  virtual void enterParameterizedAssignment(ASN1Parser::ParameterizedAssignmentContext *ctx) = 0;
  virtual void exitParameterizedAssignment(ASN1Parser::ParameterizedAssignmentContext *ctx) = 0;

  virtual void enterParameterizedTypeAssignment(ASN1Parser::ParameterizedTypeAssignmentContext *ctx) = 0;
  virtual void exitParameterizedTypeAssignment(ASN1Parser::ParameterizedTypeAssignmentContext *ctx) = 0;

  virtual void enterParameterizedValueAssignment(ASN1Parser::ParameterizedValueAssignmentContext *ctx) = 0;
  virtual void exitParameterizedValueAssignment(ASN1Parser::ParameterizedValueAssignmentContext *ctx) = 0;

  virtual void enterParameterizedValueSetTypeAssignment(ASN1Parser::ParameterizedValueSetTypeAssignmentContext *ctx) = 0;
  virtual void exitParameterizedValueSetTypeAssignment(ASN1Parser::ParameterizedValueSetTypeAssignmentContext *ctx) = 0;

  virtual void enterParameterizedObjectClassAssignment(ASN1Parser::ParameterizedObjectClassAssignmentContext *ctx) = 0;
  virtual void exitParameterizedObjectClassAssignment(ASN1Parser::ParameterizedObjectClassAssignmentContext *ctx) = 0;

  virtual void enterParameterizedObjectAssignment(ASN1Parser::ParameterizedObjectAssignmentContext *ctx) = 0;
  virtual void exitParameterizedObjectAssignment(ASN1Parser::ParameterizedObjectAssignmentContext *ctx) = 0;

  virtual void enterParameterizedObjectSetAssignment(ASN1Parser::ParameterizedObjectSetAssignmentContext *ctx) = 0;
  virtual void exitParameterizedObjectSetAssignment(ASN1Parser::ParameterizedObjectSetAssignmentContext *ctx) = 0;

  virtual void enterParameterList(ASN1Parser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(ASN1Parser::ParameterListContext *ctx) = 0;

  virtual void enterParameter(ASN1Parser::ParameterContext *ctx) = 0;
  virtual void exitParameter(ASN1Parser::ParameterContext *ctx) = 0;

  virtual void enterParamGovernor(ASN1Parser::ParamGovernorContext *ctx) = 0;
  virtual void exitParamGovernor(ASN1Parser::ParamGovernorContext *ctx) = 0;

  virtual void enterGovernor(ASN1Parser::GovernorContext *ctx) = 0;
  virtual void exitGovernor(ASN1Parser::GovernorContext *ctx) = 0;

  virtual void enterDummyGovernor(ASN1Parser::DummyGovernorContext *ctx) = 0;
  virtual void exitDummyGovernor(ASN1Parser::DummyGovernorContext *ctx) = 0;

  virtual void enterDummyReference(ASN1Parser::DummyReferenceContext *ctx) = 0;
  virtual void exitDummyReference(ASN1Parser::DummyReferenceContext *ctx) = 0;

  virtual void enterParameterizedReference(ASN1Parser::ParameterizedReferenceContext *ctx) = 0;
  virtual void exitParameterizedReference(ASN1Parser::ParameterizedReferenceContext *ctx) = 0;

  virtual void enterParameterizedType(ASN1Parser::ParameterizedTypeContext *ctx) = 0;
  virtual void exitParameterizedType(ASN1Parser::ParameterizedTypeContext *ctx) = 0;

  virtual void enterSimpleDefinedType(ASN1Parser::SimpleDefinedTypeContext *ctx) = 0;
  virtual void exitSimpleDefinedType(ASN1Parser::SimpleDefinedTypeContext *ctx) = 0;

  virtual void enterParameterizedValue(ASN1Parser::ParameterizedValueContext *ctx) = 0;
  virtual void exitParameterizedValue(ASN1Parser::ParameterizedValueContext *ctx) = 0;

  virtual void enterSimpleDefinedValue(ASN1Parser::SimpleDefinedValueContext *ctx) = 0;
  virtual void exitSimpleDefinedValue(ASN1Parser::SimpleDefinedValueContext *ctx) = 0;

  virtual void enterParameterizedValueSetType(ASN1Parser::ParameterizedValueSetTypeContext *ctx) = 0;
  virtual void exitParameterizedValueSetType(ASN1Parser::ParameterizedValueSetTypeContext *ctx) = 0;

  virtual void enterParameterizedObjectClass(ASN1Parser::ParameterizedObjectClassContext *ctx) = 0;
  virtual void exitParameterizedObjectClass(ASN1Parser::ParameterizedObjectClassContext *ctx) = 0;

  virtual void enterParameterizedObjectSet(ASN1Parser::ParameterizedObjectSetContext *ctx) = 0;
  virtual void exitParameterizedObjectSet(ASN1Parser::ParameterizedObjectSetContext *ctx) = 0;

  virtual void enterParameterizedObject(ASN1Parser::ParameterizedObjectContext *ctx) = 0;
  virtual void exitParameterizedObject(ASN1Parser::ParameterizedObjectContext *ctx) = 0;

  virtual void enterActualParameterList(ASN1Parser::ActualParameterListContext *ctx) = 0;
  virtual void exitActualParameterList(ASN1Parser::ActualParameterListContext *ctx) = 0;

  virtual void enterActualParameter(ASN1Parser::ActualParameterContext *ctx) = 0;
  virtual void exitActualParameter(ASN1Parser::ActualParameterContext *ctx) = 0;

  virtual void enterTypereference(ASN1Parser::TypereferenceContext *ctx) = 0;
  virtual void exitTypereference(ASN1Parser::TypereferenceContext *ctx) = 0;

  virtual void enterIdentifier(ASN1Parser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(ASN1Parser::IdentifierContext *ctx) = 0;

  virtual void enterValuereference(ASN1Parser::ValuereferenceContext *ctx) = 0;
  virtual void exitValuereference(ASN1Parser::ValuereferenceContext *ctx) = 0;

  virtual void enterModulereference(ASN1Parser::ModulereferenceContext *ctx) = 0;
  virtual void exitModulereference(ASN1Parser::ModulereferenceContext *ctx) = 0;

  virtual void enterNumber(ASN1Parser::NumberContext *ctx) = 0;
  virtual void exitNumber(ASN1Parser::NumberContext *ctx) = 0;

  virtual void enterBstring(ASN1Parser::BstringContext *ctx) = 0;
  virtual void exitBstring(ASN1Parser::BstringContext *ctx) = 0;

  virtual void enterHstring(ASN1Parser::HstringContext *ctx) = 0;
  virtual void exitHstring(ASN1Parser::HstringContext *ctx) = 0;

  virtual void enterCstring(ASN1Parser::CstringContext *ctx) = 0;
  virtual void exitCstring(ASN1Parser::CstringContext *ctx) = 0;


};

