
#include <regex>


// Generated from ./ASN1.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "ASN1Listener.h"


/**
 * This class provides an empty implementation of ASN1Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ASN1BaseListener : public ASN1Listener {
public:

  virtual void enterModuleDefinition(ASN1Parser::ModuleDefinitionContext * /*ctx*/) override { }
  virtual void exitModuleDefinition(ASN1Parser::ModuleDefinitionContext * /*ctx*/) override { }

  virtual void enterModuleIdentifier(ASN1Parser::ModuleIdentifierContext * /*ctx*/) override { }
  virtual void exitModuleIdentifier(ASN1Parser::ModuleIdentifierContext * /*ctx*/) override { }

  virtual void enterDefinitiveIdentifier(ASN1Parser::DefinitiveIdentifierContext * /*ctx*/) override { }
  virtual void exitDefinitiveIdentifier(ASN1Parser::DefinitiveIdentifierContext * /*ctx*/) override { }

  virtual void enterDefinitiveObjIdComponentList(ASN1Parser::DefinitiveObjIdComponentListContext * /*ctx*/) override { }
  virtual void exitDefinitiveObjIdComponentList(ASN1Parser::DefinitiveObjIdComponentListContext * /*ctx*/) override { }

  virtual void enterDefinitiveObjIdComponent(ASN1Parser::DefinitiveObjIdComponentContext * /*ctx*/) override { }
  virtual void exitDefinitiveObjIdComponent(ASN1Parser::DefinitiveObjIdComponentContext * /*ctx*/) override { }

  virtual void enterDefinitiveNumberForm(ASN1Parser::DefinitiveNumberFormContext * /*ctx*/) override { }
  virtual void exitDefinitiveNumberForm(ASN1Parser::DefinitiveNumberFormContext * /*ctx*/) override { }

  virtual void enterDefinitiveNameAndNumberForm(ASN1Parser::DefinitiveNameAndNumberFormContext * /*ctx*/) override { }
  virtual void exitDefinitiveNameAndNumberForm(ASN1Parser::DefinitiveNameAndNumberFormContext * /*ctx*/) override { }

  virtual void enterTagDefault(ASN1Parser::TagDefaultContext * /*ctx*/) override { }
  virtual void exitTagDefault(ASN1Parser::TagDefaultContext * /*ctx*/) override { }

  virtual void enterExtensionDefault(ASN1Parser::ExtensionDefaultContext * /*ctx*/) override { }
  virtual void exitExtensionDefault(ASN1Parser::ExtensionDefaultContext * /*ctx*/) override { }

  virtual void enterModuleBody(ASN1Parser::ModuleBodyContext * /*ctx*/) override { }
  virtual void exitModuleBody(ASN1Parser::ModuleBodyContext * /*ctx*/) override { }

  virtual void enterExports(ASN1Parser::ExportsContext * /*ctx*/) override { }
  virtual void exitExports(ASN1Parser::ExportsContext * /*ctx*/) override { }

  virtual void enterSymbolsExported(ASN1Parser::SymbolsExportedContext * /*ctx*/) override { }
  virtual void exitSymbolsExported(ASN1Parser::SymbolsExportedContext * /*ctx*/) override { }

  virtual void enterImports(ASN1Parser::ImportsContext * /*ctx*/) override { }
  virtual void exitImports(ASN1Parser::ImportsContext * /*ctx*/) override { }

  virtual void enterSymbolsImported(ASN1Parser::SymbolsImportedContext * /*ctx*/) override { }
  virtual void exitSymbolsImported(ASN1Parser::SymbolsImportedContext * /*ctx*/) override { }

  virtual void enterSymbolsFromModuleList(ASN1Parser::SymbolsFromModuleListContext * /*ctx*/) override { }
  virtual void exitSymbolsFromModuleList(ASN1Parser::SymbolsFromModuleListContext * /*ctx*/) override { }

  virtual void enterSymbolsFromModule(ASN1Parser::SymbolsFromModuleContext * /*ctx*/) override { }
  virtual void exitSymbolsFromModule(ASN1Parser::SymbolsFromModuleContext * /*ctx*/) override { }

  virtual void enterGlobalModuleReference(ASN1Parser::GlobalModuleReferenceContext * /*ctx*/) override { }
  virtual void exitGlobalModuleReference(ASN1Parser::GlobalModuleReferenceContext * /*ctx*/) override { }

  virtual void enterAssignedIdentifier(ASN1Parser::AssignedIdentifierContext * /*ctx*/) override { }
  virtual void exitAssignedIdentifier(ASN1Parser::AssignedIdentifierContext * /*ctx*/) override { }

  virtual void enterSymbolList(ASN1Parser::SymbolListContext * /*ctx*/) override { }
  virtual void exitSymbolList(ASN1Parser::SymbolListContext * /*ctx*/) override { }

  virtual void enterSymbol(ASN1Parser::SymbolContext * /*ctx*/) override { }
  virtual void exitSymbol(ASN1Parser::SymbolContext * /*ctx*/) override { }

  virtual void enterReference(ASN1Parser::ReferenceContext * /*ctx*/) override { }
  virtual void exitReference(ASN1Parser::ReferenceContext * /*ctx*/) override { }

  virtual void enterAssignmentList(ASN1Parser::AssignmentListContext * /*ctx*/) override { }
  virtual void exitAssignmentList(ASN1Parser::AssignmentListContext * /*ctx*/) override { }

  virtual void enterAssignment(ASN1Parser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(ASN1Parser::AssignmentContext * /*ctx*/) override { }

  virtual void enterDefinedType(ASN1Parser::DefinedTypeContext * /*ctx*/) override { }
  virtual void exitDefinedType(ASN1Parser::DefinedTypeContext * /*ctx*/) override { }

  virtual void enterDefinedValue(ASN1Parser::DefinedValueContext * /*ctx*/) override { }
  virtual void exitDefinedValue(ASN1Parser::DefinedValueContext * /*ctx*/) override { }

  virtual void enterExternalTypeReference(ASN1Parser::ExternalTypeReferenceContext * /*ctx*/) override { }
  virtual void exitExternalTypeReference(ASN1Parser::ExternalTypeReferenceContext * /*ctx*/) override { }

  virtual void enterExternalValueReference(ASN1Parser::ExternalValueReferenceContext * /*ctx*/) override { }
  virtual void exitExternalValueReference(ASN1Parser::ExternalValueReferenceContext * /*ctx*/) override { }

  virtual void enterTypeAssignment(ASN1Parser::TypeAssignmentContext * /*ctx*/) override { }
  virtual void exitTypeAssignment(ASN1Parser::TypeAssignmentContext * /*ctx*/) override { }

  virtual void enterValueAssignment(ASN1Parser::ValueAssignmentContext * /*ctx*/) override { }
  virtual void exitValueAssignment(ASN1Parser::ValueAssignmentContext * /*ctx*/) override { }

  virtual void enterValueSetTypeAssignment(ASN1Parser::ValueSetTypeAssignmentContext * /*ctx*/) override { }
  virtual void exitValueSetTypeAssignment(ASN1Parser::ValueSetTypeAssignmentContext * /*ctx*/) override { }

  virtual void enterValueSet(ASN1Parser::ValueSetContext * /*ctx*/) override { }
  virtual void exitValueSet(ASN1Parser::ValueSetContext * /*ctx*/) override { }

  virtual void enterType(ASN1Parser::TypeContext * /*ctx*/) override { }
  virtual void exitType(ASN1Parser::TypeContext * /*ctx*/) override { }

  virtual void enterBuiltinType(ASN1Parser::BuiltinTypeContext * /*ctx*/) override { }
  virtual void exitBuiltinType(ASN1Parser::BuiltinTypeContext * /*ctx*/) override { }

  virtual void enterReferencedType(ASN1Parser::ReferencedTypeContext * /*ctx*/) override { }
  virtual void exitReferencedType(ASN1Parser::ReferencedTypeContext * /*ctx*/) override { }

  virtual void enterNamedType(ASN1Parser::NamedTypeContext * /*ctx*/) override { }
  virtual void exitNamedType(ASN1Parser::NamedTypeContext * /*ctx*/) override { }

  virtual void enterValue(ASN1Parser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(ASN1Parser::ValueContext * /*ctx*/) override { }

  virtual void enterBuiltinValue(ASN1Parser::BuiltinValueContext * /*ctx*/) override { }
  virtual void exitBuiltinValue(ASN1Parser::BuiltinValueContext * /*ctx*/) override { }

  virtual void enterReferencedValue(ASN1Parser::ReferencedValueContext * /*ctx*/) override { }
  virtual void exitReferencedValue(ASN1Parser::ReferencedValueContext * /*ctx*/) override { }

  virtual void enterNamedValue(ASN1Parser::NamedValueContext * /*ctx*/) override { }
  virtual void exitNamedValue(ASN1Parser::NamedValueContext * /*ctx*/) override { }

  virtual void enterBooleanType(ASN1Parser::BooleanTypeContext * /*ctx*/) override { }
  virtual void exitBooleanType(ASN1Parser::BooleanTypeContext * /*ctx*/) override { }

  virtual void enterBooleanValue(ASN1Parser::BooleanValueContext * /*ctx*/) override { }
  virtual void exitBooleanValue(ASN1Parser::BooleanValueContext * /*ctx*/) override { }

  virtual void enterIntegerType(ASN1Parser::IntegerTypeContext * /*ctx*/) override { }
  virtual void exitIntegerType(ASN1Parser::IntegerTypeContext * /*ctx*/) override { }

  virtual void enterNamedNumberList(ASN1Parser::NamedNumberListContext * /*ctx*/) override { }
  virtual void exitNamedNumberList(ASN1Parser::NamedNumberListContext * /*ctx*/) override { }

  virtual void enterNamedNumber(ASN1Parser::NamedNumberContext * /*ctx*/) override { }
  virtual void exitNamedNumber(ASN1Parser::NamedNumberContext * /*ctx*/) override { }

  virtual void enterSignedNumber(ASN1Parser::SignedNumberContext * /*ctx*/) override { }
  virtual void exitSignedNumber(ASN1Parser::SignedNumberContext * /*ctx*/) override { }

  virtual void enterIntegerValue(ASN1Parser::IntegerValueContext * /*ctx*/) override { }
  virtual void exitIntegerValue(ASN1Parser::IntegerValueContext * /*ctx*/) override { }

  virtual void enterEnumeratedType(ASN1Parser::EnumeratedTypeContext * /*ctx*/) override { }
  virtual void exitEnumeratedType(ASN1Parser::EnumeratedTypeContext * /*ctx*/) override { }

  virtual void enterEnumerations(ASN1Parser::EnumerationsContext * /*ctx*/) override { }
  virtual void exitEnumerations(ASN1Parser::EnumerationsContext * /*ctx*/) override { }

  virtual void enterRootEnumeration(ASN1Parser::RootEnumerationContext * /*ctx*/) override { }
  virtual void exitRootEnumeration(ASN1Parser::RootEnumerationContext * /*ctx*/) override { }

  virtual void enterAdditionalEnumeration(ASN1Parser::AdditionalEnumerationContext * /*ctx*/) override { }
  virtual void exitAdditionalEnumeration(ASN1Parser::AdditionalEnumerationContext * /*ctx*/) override { }

  virtual void enterEnumeration(ASN1Parser::EnumerationContext * /*ctx*/) override { }
  virtual void exitEnumeration(ASN1Parser::EnumerationContext * /*ctx*/) override { }

  virtual void enterEnumerationItem(ASN1Parser::EnumerationItemContext * /*ctx*/) override { }
  virtual void exitEnumerationItem(ASN1Parser::EnumerationItemContext * /*ctx*/) override { }

  virtual void enterEnumeratedValue(ASN1Parser::EnumeratedValueContext * /*ctx*/) override { }
  virtual void exitEnumeratedValue(ASN1Parser::EnumeratedValueContext * /*ctx*/) override { }

  virtual void enterBitStringType(ASN1Parser::BitStringTypeContext * /*ctx*/) override { }
  virtual void exitBitStringType(ASN1Parser::BitStringTypeContext * /*ctx*/) override { }

  virtual void enterNamedBitList(ASN1Parser::NamedBitListContext * /*ctx*/) override { }
  virtual void exitNamedBitList(ASN1Parser::NamedBitListContext * /*ctx*/) override { }

  virtual void enterNamedBit(ASN1Parser::NamedBitContext * /*ctx*/) override { }
  virtual void exitNamedBit(ASN1Parser::NamedBitContext * /*ctx*/) override { }

  virtual void enterBitStringValue(ASN1Parser::BitStringValueContext * /*ctx*/) override { }
  virtual void exitBitStringValue(ASN1Parser::BitStringValueContext * /*ctx*/) override { }

  virtual void enterIdentifierList(ASN1Parser::IdentifierListContext * /*ctx*/) override { }
  virtual void exitIdentifierList(ASN1Parser::IdentifierListContext * /*ctx*/) override { }

  virtual void enterOctetStringType(ASN1Parser::OctetStringTypeContext * /*ctx*/) override { }
  virtual void exitOctetStringType(ASN1Parser::OctetStringTypeContext * /*ctx*/) override { }

  virtual void enterOctetStringValue(ASN1Parser::OctetStringValueContext * /*ctx*/) override { }
  virtual void exitOctetStringValue(ASN1Parser::OctetStringValueContext * /*ctx*/) override { }

  virtual void enterNullType(ASN1Parser::NullTypeContext * /*ctx*/) override { }
  virtual void exitNullType(ASN1Parser::NullTypeContext * /*ctx*/) override { }

  virtual void enterNullValue(ASN1Parser::NullValueContext * /*ctx*/) override { }
  virtual void exitNullValue(ASN1Parser::NullValueContext * /*ctx*/) override { }

  virtual void enterSequenceType(ASN1Parser::SequenceTypeContext * /*ctx*/) override { }
  virtual void exitSequenceType(ASN1Parser::SequenceTypeContext * /*ctx*/) override { }

  virtual void enterComponentTypeLists(ASN1Parser::ComponentTypeListsContext * /*ctx*/) override { }
  virtual void exitComponentTypeLists(ASN1Parser::ComponentTypeListsContext * /*ctx*/) override { }

  virtual void enterRootComponentTypeList(ASN1Parser::RootComponentTypeListContext * /*ctx*/) override { }
  virtual void exitRootComponentTypeList(ASN1Parser::RootComponentTypeListContext * /*ctx*/) override { }

  virtual void enterExtensionEndMarker(ASN1Parser::ExtensionEndMarkerContext * /*ctx*/) override { }
  virtual void exitExtensionEndMarker(ASN1Parser::ExtensionEndMarkerContext * /*ctx*/) override { }

  virtual void enterExtensionAdditions(ASN1Parser::ExtensionAdditionsContext * /*ctx*/) override { }
  virtual void exitExtensionAdditions(ASN1Parser::ExtensionAdditionsContext * /*ctx*/) override { }

  virtual void enterExtensionAdditionList(ASN1Parser::ExtensionAdditionListContext * /*ctx*/) override { }
  virtual void exitExtensionAdditionList(ASN1Parser::ExtensionAdditionListContext * /*ctx*/) override { }

  virtual void enterExtensionAddition(ASN1Parser::ExtensionAdditionContext * /*ctx*/) override { }
  virtual void exitExtensionAddition(ASN1Parser::ExtensionAdditionContext * /*ctx*/) override { }

  virtual void enterExtensionAdditionGroup(ASN1Parser::ExtensionAdditionGroupContext * /*ctx*/) override { }
  virtual void exitExtensionAdditionGroup(ASN1Parser::ExtensionAdditionGroupContext * /*ctx*/) override { }

  virtual void enterVersionNumber(ASN1Parser::VersionNumberContext * /*ctx*/) override { }
  virtual void exitVersionNumber(ASN1Parser::VersionNumberContext * /*ctx*/) override { }

  virtual void enterComponentTypeList(ASN1Parser::ComponentTypeListContext * /*ctx*/) override { }
  virtual void exitComponentTypeList(ASN1Parser::ComponentTypeListContext * /*ctx*/) override { }

  virtual void enterComponentType(ASN1Parser::ComponentTypeContext * /*ctx*/) override { }
  virtual void exitComponentType(ASN1Parser::ComponentTypeContext * /*ctx*/) override { }

  virtual void enterSequenceValue(ASN1Parser::SequenceValueContext * /*ctx*/) override { }
  virtual void exitSequenceValue(ASN1Parser::SequenceValueContext * /*ctx*/) override { }

  virtual void enterComponentValueList(ASN1Parser::ComponentValueListContext * /*ctx*/) override { }
  virtual void exitComponentValueList(ASN1Parser::ComponentValueListContext * /*ctx*/) override { }

  virtual void enterSequenceOfType(ASN1Parser::SequenceOfTypeContext * /*ctx*/) override { }
  virtual void exitSequenceOfType(ASN1Parser::SequenceOfTypeContext * /*ctx*/) override { }

  virtual void enterSequenceOfValue(ASN1Parser::SequenceOfValueContext * /*ctx*/) override { }
  virtual void exitSequenceOfValue(ASN1Parser::SequenceOfValueContext * /*ctx*/) override { }

  virtual void enterValueList(ASN1Parser::ValueListContext * /*ctx*/) override { }
  virtual void exitValueList(ASN1Parser::ValueListContext * /*ctx*/) override { }

  virtual void enterNamedValueList(ASN1Parser::NamedValueListContext * /*ctx*/) override { }
  virtual void exitNamedValueList(ASN1Parser::NamedValueListContext * /*ctx*/) override { }

  virtual void enterSetType(ASN1Parser::SetTypeContext * /*ctx*/) override { }
  virtual void exitSetType(ASN1Parser::SetTypeContext * /*ctx*/) override { }

  virtual void enterSetValue(ASN1Parser::SetValueContext * /*ctx*/) override { }
  virtual void exitSetValue(ASN1Parser::SetValueContext * /*ctx*/) override { }

  virtual void enterSetOfType(ASN1Parser::SetOfTypeContext * /*ctx*/) override { }
  virtual void exitSetOfType(ASN1Parser::SetOfTypeContext * /*ctx*/) override { }

  virtual void enterSetOfValue(ASN1Parser::SetOfValueContext * /*ctx*/) override { }
  virtual void exitSetOfValue(ASN1Parser::SetOfValueContext * /*ctx*/) override { }

  virtual void enterChoiceType(ASN1Parser::ChoiceTypeContext * /*ctx*/) override { }
  virtual void exitChoiceType(ASN1Parser::ChoiceTypeContext * /*ctx*/) override { }

  virtual void enterAlternativeTypeLists(ASN1Parser::AlternativeTypeListsContext * /*ctx*/) override { }
  virtual void exitAlternativeTypeLists(ASN1Parser::AlternativeTypeListsContext * /*ctx*/) override { }

  virtual void enterRootAlternativeTypeList(ASN1Parser::RootAlternativeTypeListContext * /*ctx*/) override { }
  virtual void exitRootAlternativeTypeList(ASN1Parser::RootAlternativeTypeListContext * /*ctx*/) override { }

  virtual void enterExtensionAdditionAlternatives(ASN1Parser::ExtensionAdditionAlternativesContext * /*ctx*/) override { }
  virtual void exitExtensionAdditionAlternatives(ASN1Parser::ExtensionAdditionAlternativesContext * /*ctx*/) override { }

  virtual void enterExtensionAdditionAlternativesList(ASN1Parser::ExtensionAdditionAlternativesListContext * /*ctx*/) override { }
  virtual void exitExtensionAdditionAlternativesList(ASN1Parser::ExtensionAdditionAlternativesListContext * /*ctx*/) override { }

  virtual void enterExtensionAdditionAlternative(ASN1Parser::ExtensionAdditionAlternativeContext * /*ctx*/) override { }
  virtual void exitExtensionAdditionAlternative(ASN1Parser::ExtensionAdditionAlternativeContext * /*ctx*/) override { }

  virtual void enterExtensionAdditionAlternativesGroup(ASN1Parser::ExtensionAdditionAlternativesGroupContext * /*ctx*/) override { }
  virtual void exitExtensionAdditionAlternativesGroup(ASN1Parser::ExtensionAdditionAlternativesGroupContext * /*ctx*/) override { }

  virtual void enterAlternativeTypeList(ASN1Parser::AlternativeTypeListContext * /*ctx*/) override { }
  virtual void exitAlternativeTypeList(ASN1Parser::AlternativeTypeListContext * /*ctx*/) override { }

  virtual void enterTaggedType(ASN1Parser::TaggedTypeContext * /*ctx*/) override { }
  virtual void exitTaggedType(ASN1Parser::TaggedTypeContext * /*ctx*/) override { }

  virtual void enterTag(ASN1Parser::TagContext * /*ctx*/) override { }
  virtual void exitTag(ASN1Parser::TagContext * /*ctx*/) override { }

  virtual void enterClassNumber(ASN1Parser::ClassNumberContext * /*ctx*/) override { }
  virtual void exitClassNumber(ASN1Parser::ClassNumberContext * /*ctx*/) override { }

  virtual void enterClassP(ASN1Parser::ClassPContext * /*ctx*/) override { }
  virtual void exitClassP(ASN1Parser::ClassPContext * /*ctx*/) override { }

  virtual void enterObjectIdentifierType(ASN1Parser::ObjectIdentifierTypeContext * /*ctx*/) override { }
  virtual void exitObjectIdentifierType(ASN1Parser::ObjectIdentifierTypeContext * /*ctx*/) override { }

  virtual void enterObjectIdentifierValue(ASN1Parser::ObjectIdentifierValueContext * /*ctx*/) override { }
  virtual void exitObjectIdentifierValue(ASN1Parser::ObjectIdentifierValueContext * /*ctx*/) override { }

  virtual void enterObjIdComponentsList(ASN1Parser::ObjIdComponentsListContext * /*ctx*/) override { }
  virtual void exitObjIdComponentsList(ASN1Parser::ObjIdComponentsListContext * /*ctx*/) override { }

  virtual void enterObjIdComponents(ASN1Parser::ObjIdComponentsContext * /*ctx*/) override { }
  virtual void exitObjIdComponents(ASN1Parser::ObjIdComponentsContext * /*ctx*/) override { }

  virtual void enterNameForm(ASN1Parser::NameFormContext * /*ctx*/) override { }
  virtual void exitNameForm(ASN1Parser::NameFormContext * /*ctx*/) override { }

  virtual void enterNumberForm(ASN1Parser::NumberFormContext * /*ctx*/) override { }
  virtual void exitNumberForm(ASN1Parser::NumberFormContext * /*ctx*/) override { }

  virtual void enterNameAndNumberForm(ASN1Parser::NameAndNumberFormContext * /*ctx*/) override { }
  virtual void exitNameAndNumberForm(ASN1Parser::NameAndNumberFormContext * /*ctx*/) override { }

  virtual void enterExtensionAndException(ASN1Parser::ExtensionAndExceptionContext * /*ctx*/) override { }
  virtual void exitExtensionAndException(ASN1Parser::ExtensionAndExceptionContext * /*ctx*/) override { }

  virtual void enterExceptionSpec(ASN1Parser::ExceptionSpecContext * /*ctx*/) override { }
  virtual void exitExceptionSpec(ASN1Parser::ExceptionSpecContext * /*ctx*/) override { }

  virtual void enterExceptionIdentification(ASN1Parser::ExceptionIdentificationContext * /*ctx*/) override { }
  virtual void exitExceptionIdentification(ASN1Parser::ExceptionIdentificationContext * /*ctx*/) override { }

  virtual void enterOptionalExtensionMarker(ASN1Parser::OptionalExtensionMarkerContext * /*ctx*/) override { }
  virtual void exitOptionalExtensionMarker(ASN1Parser::OptionalExtensionMarkerContext * /*ctx*/) override { }

  virtual void enterCharacterStringType(ASN1Parser::CharacterStringTypeContext * /*ctx*/) override { }
  virtual void exitCharacterStringType(ASN1Parser::CharacterStringTypeContext * /*ctx*/) override { }

  virtual void enterCharacterStringValue(ASN1Parser::CharacterStringValueContext * /*ctx*/) override { }
  virtual void exitCharacterStringValue(ASN1Parser::CharacterStringValueContext * /*ctx*/) override { }

  virtual void enterRestrictedCharacterStringType(ASN1Parser::RestrictedCharacterStringTypeContext * /*ctx*/) override { }
  virtual void exitRestrictedCharacterStringType(ASN1Parser::RestrictedCharacterStringTypeContext * /*ctx*/) override { }

  virtual void enterRestrictedCharacterStringValue(ASN1Parser::RestrictedCharacterStringValueContext * /*ctx*/) override { }
  virtual void exitRestrictedCharacterStringValue(ASN1Parser::RestrictedCharacterStringValueContext * /*ctx*/) override { }

  virtual void enterCharacterStringList(ASN1Parser::CharacterStringListContext * /*ctx*/) override { }
  virtual void exitCharacterStringList(ASN1Parser::CharacterStringListContext * /*ctx*/) override { }

  virtual void enterCharSyms(ASN1Parser::CharSymsContext * /*ctx*/) override { }
  virtual void exitCharSyms(ASN1Parser::CharSymsContext * /*ctx*/) override { }

  virtual void enterCharsDefn(ASN1Parser::CharsDefnContext * /*ctx*/) override { }
  virtual void exitCharsDefn(ASN1Parser::CharsDefnContext * /*ctx*/) override { }

  virtual void enterQuadruple(ASN1Parser::QuadrupleContext * /*ctx*/) override { }
  virtual void exitQuadruple(ASN1Parser::QuadrupleContext * /*ctx*/) override { }

  virtual void enterGroup(ASN1Parser::GroupContext * /*ctx*/) override { }
  virtual void exitGroup(ASN1Parser::GroupContext * /*ctx*/) override { }

  virtual void enterPlane(ASN1Parser::PlaneContext * /*ctx*/) override { }
  virtual void exitPlane(ASN1Parser::PlaneContext * /*ctx*/) override { }

  virtual void enterRow(ASN1Parser::RowContext * /*ctx*/) override { }
  virtual void exitRow(ASN1Parser::RowContext * /*ctx*/) override { }

  virtual void enterCell(ASN1Parser::CellContext * /*ctx*/) override { }
  virtual void exitCell(ASN1Parser::CellContext * /*ctx*/) override { }

  virtual void enterTuple(ASN1Parser::TupleContext * /*ctx*/) override { }
  virtual void exitTuple(ASN1Parser::TupleContext * /*ctx*/) override { }

  virtual void enterTableColumn(ASN1Parser::TableColumnContext * /*ctx*/) override { }
  virtual void exitTableColumn(ASN1Parser::TableColumnContext * /*ctx*/) override { }

  virtual void enterTableRow(ASN1Parser::TableRowContext * /*ctx*/) override { }
  virtual void exitTableRow(ASN1Parser::TableRowContext * /*ctx*/) override { }

  virtual void enterUnrestrictedCharacterStringType(ASN1Parser::UnrestrictedCharacterStringTypeContext * /*ctx*/) override { }
  virtual void exitUnrestrictedCharacterStringType(ASN1Parser::UnrestrictedCharacterStringTypeContext * /*ctx*/) override { }

  virtual void enterGeneralizedTimeType(ASN1Parser::GeneralizedTimeTypeContext * /*ctx*/) override { }
  virtual void exitGeneralizedTimeType(ASN1Parser::GeneralizedTimeTypeContext * /*ctx*/) override { }

  virtual void enterUTCTimeType(ASN1Parser::UTCTimeTypeContext * /*ctx*/) override { }
  virtual void exitUTCTimeType(ASN1Parser::UTCTimeTypeContext * /*ctx*/) override { }

  virtual void enterConstrainedType(ASN1Parser::ConstrainedTypeContext * /*ctx*/) override { }
  virtual void exitConstrainedType(ASN1Parser::ConstrainedTypeContext * /*ctx*/) override { }

  virtual void enterTypeWithConstraint(ASN1Parser::TypeWithConstraintContext * /*ctx*/) override { }
  virtual void exitTypeWithConstraint(ASN1Parser::TypeWithConstraintContext * /*ctx*/) override { }

  virtual void enterConstraint(ASN1Parser::ConstraintContext * /*ctx*/) override { }
  virtual void exitConstraint(ASN1Parser::ConstraintContext * /*ctx*/) override { }

  virtual void enterConstraintSpec(ASN1Parser::ConstraintSpecContext * /*ctx*/) override { }
  virtual void exitConstraintSpec(ASN1Parser::ConstraintSpecContext * /*ctx*/) override { }

  virtual void enterSubtypeConstraint(ASN1Parser::SubtypeConstraintContext * /*ctx*/) override { }
  virtual void exitSubtypeConstraint(ASN1Parser::SubtypeConstraintContext * /*ctx*/) override { }

  virtual void enterGeneralConstraint(ASN1Parser::GeneralConstraintContext * /*ctx*/) override { }
  virtual void exitGeneralConstraint(ASN1Parser::GeneralConstraintContext * /*ctx*/) override { }

  virtual void enterElementSetSpecs(ASN1Parser::ElementSetSpecsContext * /*ctx*/) override { }
  virtual void exitElementSetSpecs(ASN1Parser::ElementSetSpecsContext * /*ctx*/) override { }

  virtual void enterRootElementSetSpec(ASN1Parser::RootElementSetSpecContext * /*ctx*/) override { }
  virtual void exitRootElementSetSpec(ASN1Parser::RootElementSetSpecContext * /*ctx*/) override { }

  virtual void enterAdditionalElementSetSpec(ASN1Parser::AdditionalElementSetSpecContext * /*ctx*/) override { }
  virtual void exitAdditionalElementSetSpec(ASN1Parser::AdditionalElementSetSpecContext * /*ctx*/) override { }

  virtual void enterElementSetSpec(ASN1Parser::ElementSetSpecContext * /*ctx*/) override { }
  virtual void exitElementSetSpec(ASN1Parser::ElementSetSpecContext * /*ctx*/) override { }

  virtual void enterUnions(ASN1Parser::UnionsContext * /*ctx*/) override { }
  virtual void exitUnions(ASN1Parser::UnionsContext * /*ctx*/) override { }

  virtual void enterUElems(ASN1Parser::UElemsContext * /*ctx*/) override { }
  virtual void exitUElems(ASN1Parser::UElemsContext * /*ctx*/) override { }

  virtual void enterIntersections(ASN1Parser::IntersectionsContext * /*ctx*/) override { }
  virtual void exitIntersections(ASN1Parser::IntersectionsContext * /*ctx*/) override { }

  virtual void enterIElems(ASN1Parser::IElemsContext * /*ctx*/) override { }
  virtual void exitIElems(ASN1Parser::IElemsContext * /*ctx*/) override { }

  virtual void enterIntersectionElements(ASN1Parser::IntersectionElementsContext * /*ctx*/) override { }
  virtual void exitIntersectionElements(ASN1Parser::IntersectionElementsContext * /*ctx*/) override { }

  virtual void enterElems(ASN1Parser::ElemsContext * /*ctx*/) override { }
  virtual void exitElems(ASN1Parser::ElemsContext * /*ctx*/) override { }

  virtual void enterExclusions(ASN1Parser::ExclusionsContext * /*ctx*/) override { }
  virtual void exitExclusions(ASN1Parser::ExclusionsContext * /*ctx*/) override { }

  virtual void enterUnionMark(ASN1Parser::UnionMarkContext * /*ctx*/) override { }
  virtual void exitUnionMark(ASN1Parser::UnionMarkContext * /*ctx*/) override { }

  virtual void enterIntersectionMark(ASN1Parser::IntersectionMarkContext * /*ctx*/) override { }
  virtual void exitIntersectionMark(ASN1Parser::IntersectionMarkContext * /*ctx*/) override { }

  virtual void enterElements(ASN1Parser::ElementsContext * /*ctx*/) override { }
  virtual void exitElements(ASN1Parser::ElementsContext * /*ctx*/) override { }

  virtual void enterSubtypeElements(ASN1Parser::SubtypeElementsContext * /*ctx*/) override { }
  virtual void exitSubtypeElements(ASN1Parser::SubtypeElementsContext * /*ctx*/) override { }

  virtual void enterSingleValue(ASN1Parser::SingleValueContext * /*ctx*/) override { }
  virtual void exitSingleValue(ASN1Parser::SingleValueContext * /*ctx*/) override { }

  virtual void enterContainedSubtype(ASN1Parser::ContainedSubtypeContext * /*ctx*/) override { }
  virtual void exitContainedSubtype(ASN1Parser::ContainedSubtypeContext * /*ctx*/) override { }

  virtual void enterIncludes(ASN1Parser::IncludesContext * /*ctx*/) override { }
  virtual void exitIncludes(ASN1Parser::IncludesContext * /*ctx*/) override { }

  virtual void enterValueRange(ASN1Parser::ValueRangeContext * /*ctx*/) override { }
  virtual void exitValueRange(ASN1Parser::ValueRangeContext * /*ctx*/) override { }

  virtual void enterLowerEndpoint(ASN1Parser::LowerEndpointContext * /*ctx*/) override { }
  virtual void exitLowerEndpoint(ASN1Parser::LowerEndpointContext * /*ctx*/) override { }

  virtual void enterUpperEndpoint(ASN1Parser::UpperEndpointContext * /*ctx*/) override { }
  virtual void exitUpperEndpoint(ASN1Parser::UpperEndpointContext * /*ctx*/) override { }

  virtual void enterLowerEndValue(ASN1Parser::LowerEndValueContext * /*ctx*/) override { }
  virtual void exitLowerEndValue(ASN1Parser::LowerEndValueContext * /*ctx*/) override { }

  virtual void enterUpperEndValue(ASN1Parser::UpperEndValueContext * /*ctx*/) override { }
  virtual void exitUpperEndValue(ASN1Parser::UpperEndValueContext * /*ctx*/) override { }

  virtual void enterSizeConstraint(ASN1Parser::SizeConstraintContext * /*ctx*/) override { }
  virtual void exitSizeConstraint(ASN1Parser::SizeConstraintContext * /*ctx*/) override { }

  virtual void enterPermittedAlphabet(ASN1Parser::PermittedAlphabetContext * /*ctx*/) override { }
  virtual void exitPermittedAlphabet(ASN1Parser::PermittedAlphabetContext * /*ctx*/) override { }

  virtual void enterUserDefinedConstraint(ASN1Parser::UserDefinedConstraintContext * /*ctx*/) override { }
  virtual void exitUserDefinedConstraint(ASN1Parser::UserDefinedConstraintContext * /*ctx*/) override { }

  virtual void enterUserDefinedConstraintParameter(ASN1Parser::UserDefinedConstraintParameterContext * /*ctx*/) override { }
  virtual void exitUserDefinedConstraintParameter(ASN1Parser::UserDefinedConstraintParameterContext * /*ctx*/) override { }

  virtual void enterTableConstraint(ASN1Parser::TableConstraintContext * /*ctx*/) override { }
  virtual void exitTableConstraint(ASN1Parser::TableConstraintContext * /*ctx*/) override { }

  virtual void enterSimpleTableConstraint(ASN1Parser::SimpleTableConstraintContext * /*ctx*/) override { }
  virtual void exitSimpleTableConstraint(ASN1Parser::SimpleTableConstraintContext * /*ctx*/) override { }

  virtual void enterComponentRelationConstraint(ASN1Parser::ComponentRelationConstraintContext * /*ctx*/) override { }
  virtual void exitComponentRelationConstraint(ASN1Parser::ComponentRelationConstraintContext * /*ctx*/) override { }

  virtual void enterAtNotation(ASN1Parser::AtNotationContext * /*ctx*/) override { }
  virtual void exitAtNotation(ASN1Parser::AtNotationContext * /*ctx*/) override { }

  virtual void enterLevel(ASN1Parser::LevelContext * /*ctx*/) override { }
  virtual void exitLevel(ASN1Parser::LevelContext * /*ctx*/) override { }

  virtual void enterComponentIdList(ASN1Parser::ComponentIdListContext * /*ctx*/) override { }
  virtual void exitComponentIdList(ASN1Parser::ComponentIdListContext * /*ctx*/) override { }

  virtual void enterContentsConstraint(ASN1Parser::ContentsConstraintContext * /*ctx*/) override { }
  virtual void exitContentsConstraint(ASN1Parser::ContentsConstraintContext * /*ctx*/) override { }

  virtual void enterDefinedObjectClass(ASN1Parser::DefinedObjectClassContext * /*ctx*/) override { }
  virtual void exitDefinedObjectClass(ASN1Parser::DefinedObjectClassContext * /*ctx*/) override { }

  virtual void enterDefinedObject(ASN1Parser::DefinedObjectContext * /*ctx*/) override { }
  virtual void exitDefinedObject(ASN1Parser::DefinedObjectContext * /*ctx*/) override { }

  virtual void enterDefinedObjectSet(ASN1Parser::DefinedObjectSetContext * /*ctx*/) override { }
  virtual void exitDefinedObjectSet(ASN1Parser::DefinedObjectSetContext * /*ctx*/) override { }

  virtual void enterExternalObjectClassReference(ASN1Parser::ExternalObjectClassReferenceContext * /*ctx*/) override { }
  virtual void exitExternalObjectClassReference(ASN1Parser::ExternalObjectClassReferenceContext * /*ctx*/) override { }

  virtual void enterExternalObjectReference(ASN1Parser::ExternalObjectReferenceContext * /*ctx*/) override { }
  virtual void exitExternalObjectReference(ASN1Parser::ExternalObjectReferenceContext * /*ctx*/) override { }

  virtual void enterExternalObjectSetReference(ASN1Parser::ExternalObjectSetReferenceContext * /*ctx*/) override { }
  virtual void exitExternalObjectSetReference(ASN1Parser::ExternalObjectSetReferenceContext * /*ctx*/) override { }

  virtual void enterUsefulObjectClassReference(ASN1Parser::UsefulObjectClassReferenceContext * /*ctx*/) override { }
  virtual void exitUsefulObjectClassReference(ASN1Parser::UsefulObjectClassReferenceContext * /*ctx*/) override { }

  virtual void enterObjectClassAssignment(ASN1Parser::ObjectClassAssignmentContext * /*ctx*/) override { }
  virtual void exitObjectClassAssignment(ASN1Parser::ObjectClassAssignmentContext * /*ctx*/) override { }

  virtual void enterObjectClass(ASN1Parser::ObjectClassContext * /*ctx*/) override { }
  virtual void exitObjectClass(ASN1Parser::ObjectClassContext * /*ctx*/) override { }

  virtual void enterObjectClassDefn(ASN1Parser::ObjectClassDefnContext * /*ctx*/) override { }
  virtual void exitObjectClassDefn(ASN1Parser::ObjectClassDefnContext * /*ctx*/) override { }

  virtual void enterWithSyntaxSpec(ASN1Parser::WithSyntaxSpecContext * /*ctx*/) override { }
  virtual void exitWithSyntaxSpec(ASN1Parser::WithSyntaxSpecContext * /*ctx*/) override { }

  virtual void enterFieldSpec(ASN1Parser::FieldSpecContext * /*ctx*/) override { }
  virtual void exitFieldSpec(ASN1Parser::FieldSpecContext * /*ctx*/) override { }

  virtual void enterTypeFieldSpec(ASN1Parser::TypeFieldSpecContext * /*ctx*/) override { }
  virtual void exitTypeFieldSpec(ASN1Parser::TypeFieldSpecContext * /*ctx*/) override { }

  virtual void enterTypeOptionalitySpec(ASN1Parser::TypeOptionalitySpecContext * /*ctx*/) override { }
  virtual void exitTypeOptionalitySpec(ASN1Parser::TypeOptionalitySpecContext * /*ctx*/) override { }

  virtual void enterFixedTypeValueFieldSpec(ASN1Parser::FixedTypeValueFieldSpecContext * /*ctx*/) override { }
  virtual void exitFixedTypeValueFieldSpec(ASN1Parser::FixedTypeValueFieldSpecContext * /*ctx*/) override { }

  virtual void enterValueOptionalitySpec(ASN1Parser::ValueOptionalitySpecContext * /*ctx*/) override { }
  virtual void exitValueOptionalitySpec(ASN1Parser::ValueOptionalitySpecContext * /*ctx*/) override { }

  virtual void enterVariableTypeValueFieldSpec(ASN1Parser::VariableTypeValueFieldSpecContext * /*ctx*/) override { }
  virtual void exitVariableTypeValueFieldSpec(ASN1Parser::VariableTypeValueFieldSpecContext * /*ctx*/) override { }

  virtual void enterFixedTypeValueSetFieldSpec(ASN1Parser::FixedTypeValueSetFieldSpecContext * /*ctx*/) override { }
  virtual void exitFixedTypeValueSetFieldSpec(ASN1Parser::FixedTypeValueSetFieldSpecContext * /*ctx*/) override { }

  virtual void enterValueSetOptionalitySpec(ASN1Parser::ValueSetOptionalitySpecContext * /*ctx*/) override { }
  virtual void exitValueSetOptionalitySpec(ASN1Parser::ValueSetOptionalitySpecContext * /*ctx*/) override { }

  virtual void enterVariableTypeValueSetFieldSpec(ASN1Parser::VariableTypeValueSetFieldSpecContext * /*ctx*/) override { }
  virtual void exitVariableTypeValueSetFieldSpec(ASN1Parser::VariableTypeValueSetFieldSpecContext * /*ctx*/) override { }

  virtual void enterObjectFieldSpec(ASN1Parser::ObjectFieldSpecContext * /*ctx*/) override { }
  virtual void exitObjectFieldSpec(ASN1Parser::ObjectFieldSpecContext * /*ctx*/) override { }

  virtual void enterObjectOptionalitySpec(ASN1Parser::ObjectOptionalitySpecContext * /*ctx*/) override { }
  virtual void exitObjectOptionalitySpec(ASN1Parser::ObjectOptionalitySpecContext * /*ctx*/) override { }

  virtual void enterObjectSetFieldSpec(ASN1Parser::ObjectSetFieldSpecContext * /*ctx*/) override { }
  virtual void exitObjectSetFieldSpec(ASN1Parser::ObjectSetFieldSpecContext * /*ctx*/) override { }

  virtual void enterObjectSetOptionalitySpec(ASN1Parser::ObjectSetOptionalitySpecContext * /*ctx*/) override { }
  virtual void exitObjectSetOptionalitySpec(ASN1Parser::ObjectSetOptionalitySpecContext * /*ctx*/) override { }

  virtual void enterPrimitiveFieldName(ASN1Parser::PrimitiveFieldNameContext * /*ctx*/) override { }
  virtual void exitPrimitiveFieldName(ASN1Parser::PrimitiveFieldNameContext * /*ctx*/) override { }

  virtual void enterFieldName(ASN1Parser::FieldNameContext * /*ctx*/) override { }
  virtual void exitFieldName(ASN1Parser::FieldNameContext * /*ctx*/) override { }

  virtual void enterSyntaxList(ASN1Parser::SyntaxListContext * /*ctx*/) override { }
  virtual void exitSyntaxList(ASN1Parser::SyntaxListContext * /*ctx*/) override { }

  virtual void enterTokenOrGroupSpec(ASN1Parser::TokenOrGroupSpecContext * /*ctx*/) override { }
  virtual void exitTokenOrGroupSpec(ASN1Parser::TokenOrGroupSpecContext * /*ctx*/) override { }

  virtual void enterOptionalGroup(ASN1Parser::OptionalGroupContext * /*ctx*/) override { }
  virtual void exitOptionalGroup(ASN1Parser::OptionalGroupContext * /*ctx*/) override { }

  virtual void enterRequiredToken(ASN1Parser::RequiredTokenContext * /*ctx*/) override { }
  virtual void exitRequiredToken(ASN1Parser::RequiredTokenContext * /*ctx*/) override { }

  virtual void enterLiteral(ASN1Parser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(ASN1Parser::LiteralContext * /*ctx*/) override { }

  virtual void enterObjectAssignment(ASN1Parser::ObjectAssignmentContext * /*ctx*/) override { }
  virtual void exitObjectAssignment(ASN1Parser::ObjectAssignmentContext * /*ctx*/) override { }

  virtual void enterObject(ASN1Parser::ObjectContext * /*ctx*/) override { }
  virtual void exitObject(ASN1Parser::ObjectContext * /*ctx*/) override { }

  virtual void enterObjectDefn(ASN1Parser::ObjectDefnContext * /*ctx*/) override { }
  virtual void exitObjectDefn(ASN1Parser::ObjectDefnContext * /*ctx*/) override { }

  virtual void enterDefaultSyntax(ASN1Parser::DefaultSyntaxContext * /*ctx*/) override { }
  virtual void exitDefaultSyntax(ASN1Parser::DefaultSyntaxContext * /*ctx*/) override { }

  virtual void enterFieldSetting(ASN1Parser::FieldSettingContext * /*ctx*/) override { }
  virtual void exitFieldSetting(ASN1Parser::FieldSettingContext * /*ctx*/) override { }

  virtual void enterDefinedSyntax(ASN1Parser::DefinedSyntaxContext * /*ctx*/) override { }
  virtual void exitDefinedSyntax(ASN1Parser::DefinedSyntaxContext * /*ctx*/) override { }

  virtual void enterDefinedSyntaxToken(ASN1Parser::DefinedSyntaxTokenContext * /*ctx*/) override { }
  virtual void exitDefinedSyntaxToken(ASN1Parser::DefinedSyntaxTokenContext * /*ctx*/) override { }

  virtual void enterSetting(ASN1Parser::SettingContext * /*ctx*/) override { }
  virtual void exitSetting(ASN1Parser::SettingContext * /*ctx*/) override { }

  virtual void enterObjectSetAssignment(ASN1Parser::ObjectSetAssignmentContext * /*ctx*/) override { }
  virtual void exitObjectSetAssignment(ASN1Parser::ObjectSetAssignmentContext * /*ctx*/) override { }

  virtual void enterObjectSet(ASN1Parser::ObjectSetContext * /*ctx*/) override { }
  virtual void exitObjectSet(ASN1Parser::ObjectSetContext * /*ctx*/) override { }

  virtual void enterObjectSetSpec(ASN1Parser::ObjectSetSpecContext * /*ctx*/) override { }
  virtual void exitObjectSetSpec(ASN1Parser::ObjectSetSpecContext * /*ctx*/) override { }

  virtual void enterObjectSetElements(ASN1Parser::ObjectSetElementsContext * /*ctx*/) override { }
  virtual void exitObjectSetElements(ASN1Parser::ObjectSetElementsContext * /*ctx*/) override { }

  virtual void enterObjectClassFieldType(ASN1Parser::ObjectClassFieldTypeContext * /*ctx*/) override { }
  virtual void exitObjectClassFieldType(ASN1Parser::ObjectClassFieldTypeContext * /*ctx*/) override { }

  virtual void enterObjectClassFieldValue(ASN1Parser::ObjectClassFieldValueContext * /*ctx*/) override { }
  virtual void exitObjectClassFieldValue(ASN1Parser::ObjectClassFieldValueContext * /*ctx*/) override { }

  virtual void enterOpenTypeFieldVal(ASN1Parser::OpenTypeFieldValContext * /*ctx*/) override { }
  virtual void exitOpenTypeFieldVal(ASN1Parser::OpenTypeFieldValContext * /*ctx*/) override { }

  virtual void enterFixedTypeFieldVal(ASN1Parser::FixedTypeFieldValContext * /*ctx*/) override { }
  virtual void exitFixedTypeFieldVal(ASN1Parser::FixedTypeFieldValContext * /*ctx*/) override { }

  virtual void enterValueFromObject(ASN1Parser::ValueFromObjectContext * /*ctx*/) override { }
  virtual void exitValueFromObject(ASN1Parser::ValueFromObjectContext * /*ctx*/) override { }

  virtual void enterValueSetFromObjects(ASN1Parser::ValueSetFromObjectsContext * /*ctx*/) override { }
  virtual void exitValueSetFromObjects(ASN1Parser::ValueSetFromObjectsContext * /*ctx*/) override { }

  virtual void enterTypeFromObject(ASN1Parser::TypeFromObjectContext * /*ctx*/) override { }
  virtual void exitTypeFromObject(ASN1Parser::TypeFromObjectContext * /*ctx*/) override { }

  virtual void enterObjectFromObject(ASN1Parser::ObjectFromObjectContext * /*ctx*/) override { }
  virtual void exitObjectFromObject(ASN1Parser::ObjectFromObjectContext * /*ctx*/) override { }

  virtual void enterObjectSetFromObjects(ASN1Parser::ObjectSetFromObjectsContext * /*ctx*/) override { }
  virtual void exitObjectSetFromObjects(ASN1Parser::ObjectSetFromObjectsContext * /*ctx*/) override { }

  virtual void enterReferencedObjects(ASN1Parser::ReferencedObjectsContext * /*ctx*/) override { }
  virtual void exitReferencedObjects(ASN1Parser::ReferencedObjectsContext * /*ctx*/) override { }

  virtual void enterAnyType(ASN1Parser::AnyTypeContext * /*ctx*/) override { }
  virtual void exitAnyType(ASN1Parser::AnyTypeContext * /*ctx*/) override { }

  virtual void enterObjectclassreference(ASN1Parser::ObjectclassreferenceContext * /*ctx*/) override { }
  virtual void exitObjectclassreference(ASN1Parser::ObjectclassreferenceContext * /*ctx*/) override { }

  virtual void enterObjectreference(ASN1Parser::ObjectreferenceContext * /*ctx*/) override { }
  virtual void exitObjectreference(ASN1Parser::ObjectreferenceContext * /*ctx*/) override { }

  virtual void enterObjectsetreference(ASN1Parser::ObjectsetreferenceContext * /*ctx*/) override { }
  virtual void exitObjectsetreference(ASN1Parser::ObjectsetreferenceContext * /*ctx*/) override { }

  virtual void enterTypefieldreference(ASN1Parser::TypefieldreferenceContext * /*ctx*/) override { }
  virtual void exitTypefieldreference(ASN1Parser::TypefieldreferenceContext * /*ctx*/) override { }

  virtual void enterValuefieldreference(ASN1Parser::ValuefieldreferenceContext * /*ctx*/) override { }
  virtual void exitValuefieldreference(ASN1Parser::ValuefieldreferenceContext * /*ctx*/) override { }

  virtual void enterValuesetfieldreference(ASN1Parser::ValuesetfieldreferenceContext * /*ctx*/) override { }
  virtual void exitValuesetfieldreference(ASN1Parser::ValuesetfieldreferenceContext * /*ctx*/) override { }

  virtual void enterObjectfieldreference(ASN1Parser::ObjectfieldreferenceContext * /*ctx*/) override { }
  virtual void exitObjectfieldreference(ASN1Parser::ObjectfieldreferenceContext * /*ctx*/) override { }

  virtual void enterObjectsetfieldreference(ASN1Parser::ObjectsetfieldreferenceContext * /*ctx*/) override { }
  virtual void exitObjectsetfieldreference(ASN1Parser::ObjectsetfieldreferenceContext * /*ctx*/) override { }

  virtual void enterWord(ASN1Parser::WordContext * /*ctx*/) override { }
  virtual void exitWord(ASN1Parser::WordContext * /*ctx*/) override { }

  virtual void enterParameterizedAssignment(ASN1Parser::ParameterizedAssignmentContext * /*ctx*/) override { }
  virtual void exitParameterizedAssignment(ASN1Parser::ParameterizedAssignmentContext * /*ctx*/) override { }

  virtual void enterParameterizedTypeAssignment(ASN1Parser::ParameterizedTypeAssignmentContext * /*ctx*/) override { }
  virtual void exitParameterizedTypeAssignment(ASN1Parser::ParameterizedTypeAssignmentContext * /*ctx*/) override { }

  virtual void enterParameterizedValueAssignment(ASN1Parser::ParameterizedValueAssignmentContext * /*ctx*/) override { }
  virtual void exitParameterizedValueAssignment(ASN1Parser::ParameterizedValueAssignmentContext * /*ctx*/) override { }

  virtual void enterParameterizedValueSetTypeAssignment(ASN1Parser::ParameterizedValueSetTypeAssignmentContext * /*ctx*/) override { }
  virtual void exitParameterizedValueSetTypeAssignment(ASN1Parser::ParameterizedValueSetTypeAssignmentContext * /*ctx*/) override { }

  virtual void enterParameterizedObjectClassAssignment(ASN1Parser::ParameterizedObjectClassAssignmentContext * /*ctx*/) override { }
  virtual void exitParameterizedObjectClassAssignment(ASN1Parser::ParameterizedObjectClassAssignmentContext * /*ctx*/) override { }

  virtual void enterParameterizedObjectAssignment(ASN1Parser::ParameterizedObjectAssignmentContext * /*ctx*/) override { }
  virtual void exitParameterizedObjectAssignment(ASN1Parser::ParameterizedObjectAssignmentContext * /*ctx*/) override { }

  virtual void enterParameterizedObjectSetAssignment(ASN1Parser::ParameterizedObjectSetAssignmentContext * /*ctx*/) override { }
  virtual void exitParameterizedObjectSetAssignment(ASN1Parser::ParameterizedObjectSetAssignmentContext * /*ctx*/) override { }

  virtual void enterParameterList(ASN1Parser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(ASN1Parser::ParameterListContext * /*ctx*/) override { }

  virtual void enterParameter(ASN1Parser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(ASN1Parser::ParameterContext * /*ctx*/) override { }

  virtual void enterParamGovernor(ASN1Parser::ParamGovernorContext * /*ctx*/) override { }
  virtual void exitParamGovernor(ASN1Parser::ParamGovernorContext * /*ctx*/) override { }

  virtual void enterGovernor(ASN1Parser::GovernorContext * /*ctx*/) override { }
  virtual void exitGovernor(ASN1Parser::GovernorContext * /*ctx*/) override { }

  virtual void enterDummyGovernor(ASN1Parser::DummyGovernorContext * /*ctx*/) override { }
  virtual void exitDummyGovernor(ASN1Parser::DummyGovernorContext * /*ctx*/) override { }

  virtual void enterDummyReference(ASN1Parser::DummyReferenceContext * /*ctx*/) override { }
  virtual void exitDummyReference(ASN1Parser::DummyReferenceContext * /*ctx*/) override { }

  virtual void enterParameterizedReference(ASN1Parser::ParameterizedReferenceContext * /*ctx*/) override { }
  virtual void exitParameterizedReference(ASN1Parser::ParameterizedReferenceContext * /*ctx*/) override { }

  virtual void enterParameterizedType(ASN1Parser::ParameterizedTypeContext * /*ctx*/) override { }
  virtual void exitParameterizedType(ASN1Parser::ParameterizedTypeContext * /*ctx*/) override { }

  virtual void enterSimpleDefinedType(ASN1Parser::SimpleDefinedTypeContext * /*ctx*/) override { }
  virtual void exitSimpleDefinedType(ASN1Parser::SimpleDefinedTypeContext * /*ctx*/) override { }

  virtual void enterParameterizedValue(ASN1Parser::ParameterizedValueContext * /*ctx*/) override { }
  virtual void exitParameterizedValue(ASN1Parser::ParameterizedValueContext * /*ctx*/) override { }

  virtual void enterSimpleDefinedValue(ASN1Parser::SimpleDefinedValueContext * /*ctx*/) override { }
  virtual void exitSimpleDefinedValue(ASN1Parser::SimpleDefinedValueContext * /*ctx*/) override { }

  virtual void enterParameterizedValueSetType(ASN1Parser::ParameterizedValueSetTypeContext * /*ctx*/) override { }
  virtual void exitParameterizedValueSetType(ASN1Parser::ParameterizedValueSetTypeContext * /*ctx*/) override { }

  virtual void enterParameterizedObjectClass(ASN1Parser::ParameterizedObjectClassContext * /*ctx*/) override { }
  virtual void exitParameterizedObjectClass(ASN1Parser::ParameterizedObjectClassContext * /*ctx*/) override { }

  virtual void enterParameterizedObjectSet(ASN1Parser::ParameterizedObjectSetContext * /*ctx*/) override { }
  virtual void exitParameterizedObjectSet(ASN1Parser::ParameterizedObjectSetContext * /*ctx*/) override { }

  virtual void enterParameterizedObject(ASN1Parser::ParameterizedObjectContext * /*ctx*/) override { }
  virtual void exitParameterizedObject(ASN1Parser::ParameterizedObjectContext * /*ctx*/) override { }

  virtual void enterActualParameterList(ASN1Parser::ActualParameterListContext * /*ctx*/) override { }
  virtual void exitActualParameterList(ASN1Parser::ActualParameterListContext * /*ctx*/) override { }

  virtual void enterActualParameter(ASN1Parser::ActualParameterContext * /*ctx*/) override { }
  virtual void exitActualParameter(ASN1Parser::ActualParameterContext * /*ctx*/) override { }

  virtual void enterTypereference(ASN1Parser::TypereferenceContext * /*ctx*/) override { }
  virtual void exitTypereference(ASN1Parser::TypereferenceContext * /*ctx*/) override { }

  virtual void enterIdentifier(ASN1Parser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(ASN1Parser::IdentifierContext * /*ctx*/) override { }

  virtual void enterValuereference(ASN1Parser::ValuereferenceContext * /*ctx*/) override { }
  virtual void exitValuereference(ASN1Parser::ValuereferenceContext * /*ctx*/) override { }

  virtual void enterModulereference(ASN1Parser::ModulereferenceContext * /*ctx*/) override { }
  virtual void exitModulereference(ASN1Parser::ModulereferenceContext * /*ctx*/) override { }

  virtual void enterNumber(ASN1Parser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(ASN1Parser::NumberContext * /*ctx*/) override { }

  virtual void enterBstring(ASN1Parser::BstringContext * /*ctx*/) override { }
  virtual void exitBstring(ASN1Parser::BstringContext * /*ctx*/) override { }

  virtual void enterHstring(ASN1Parser::HstringContext * /*ctx*/) override { }
  virtual void exitHstring(ASN1Parser::HstringContext * /*ctx*/) override { }

  virtual void enterCstring(ASN1Parser::CstringContext * /*ctx*/) override { }
  virtual void exitCstring(ASN1Parser::CstringContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

