
// Generated from ./ASN.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "ASNListener.h"


/**
 * This class provides an empty implementation of ASNListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ASNBaseListener : public ASNListener {
public:

  virtual void enterModules(ASNParser::ModulesContext * /*ctx*/) override { }
  virtual void exitModules(ASNParser::ModulesContext * /*ctx*/) override { }

  virtual void enterModuleDefinition(ASNParser::ModuleDefinitionContext * /*ctx*/) override { }
  virtual void exitModuleDefinition(ASNParser::ModuleDefinitionContext * /*ctx*/) override { }

  virtual void enterTagDefault(ASNParser::TagDefaultContext * /*ctx*/) override { }
  virtual void exitTagDefault(ASNParser::TagDefaultContext * /*ctx*/) override { }

  virtual void enterExtensionDefault(ASNParser::ExtensionDefaultContext * /*ctx*/) override { }
  virtual void exitExtensionDefault(ASNParser::ExtensionDefaultContext * /*ctx*/) override { }

  virtual void enterModuleBody(ASNParser::ModuleBodyContext * /*ctx*/) override { }
  virtual void exitModuleBody(ASNParser::ModuleBodyContext * /*ctx*/) override { }

  virtual void enterExports(ASNParser::ExportsContext * /*ctx*/) override { }
  virtual void exitExports(ASNParser::ExportsContext * /*ctx*/) override { }

  virtual void enterSymbolsExported(ASNParser::SymbolsExportedContext * /*ctx*/) override { }
  virtual void exitSymbolsExported(ASNParser::SymbolsExportedContext * /*ctx*/) override { }

  virtual void enterImports(ASNParser::ImportsContext * /*ctx*/) override { }
  virtual void exitImports(ASNParser::ImportsContext * /*ctx*/) override { }

  virtual void enterSymbolsImported(ASNParser::SymbolsImportedContext * /*ctx*/) override { }
  virtual void exitSymbolsImported(ASNParser::SymbolsImportedContext * /*ctx*/) override { }

  virtual void enterSymbolsFromModuleList(ASNParser::SymbolsFromModuleListContext * /*ctx*/) override { }
  virtual void exitSymbolsFromModuleList(ASNParser::SymbolsFromModuleListContext * /*ctx*/) override { }

  virtual void enterSymbolsFromModule(ASNParser::SymbolsFromModuleContext * /*ctx*/) override { }
  virtual void exitSymbolsFromModule(ASNParser::SymbolsFromModuleContext * /*ctx*/) override { }

  virtual void enterGlobalModuleReference(ASNParser::GlobalModuleReferenceContext * /*ctx*/) override { }
  virtual void exitGlobalModuleReference(ASNParser::GlobalModuleReferenceContext * /*ctx*/) override { }

  virtual void enterAssignedIdentifier(ASNParser::AssignedIdentifierContext * /*ctx*/) override { }
  virtual void exitAssignedIdentifier(ASNParser::AssignedIdentifierContext * /*ctx*/) override { }

  virtual void enterSymbolList(ASNParser::SymbolListContext * /*ctx*/) override { }
  virtual void exitSymbolList(ASNParser::SymbolListContext * /*ctx*/) override { }

  virtual void enterSymbol(ASNParser::SymbolContext * /*ctx*/) override { }
  virtual void exitSymbol(ASNParser::SymbolContext * /*ctx*/) override { }

  virtual void enterAssignmentList(ASNParser::AssignmentListContext * /*ctx*/) override { }
  virtual void exitAssignmentList(ASNParser::AssignmentListContext * /*ctx*/) override { }

  virtual void enterAssignment(ASNParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(ASNParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterSequenceType(ASNParser::SequenceTypeContext * /*ctx*/) override { }
  virtual void exitSequenceType(ASNParser::SequenceTypeContext * /*ctx*/) override { }

  virtual void enterExtensionAndException(ASNParser::ExtensionAndExceptionContext * /*ctx*/) override { }
  virtual void exitExtensionAndException(ASNParser::ExtensionAndExceptionContext * /*ctx*/) override { }

  virtual void enterOptionalExtensionMarker(ASNParser::OptionalExtensionMarkerContext * /*ctx*/) override { }
  virtual void exitOptionalExtensionMarker(ASNParser::OptionalExtensionMarkerContext * /*ctx*/) override { }

  virtual void enterComponentTypeLists(ASNParser::ComponentTypeListsContext * /*ctx*/) override { }
  virtual void exitComponentTypeLists(ASNParser::ComponentTypeListsContext * /*ctx*/) override { }

  virtual void enterRootComponentTypeList(ASNParser::RootComponentTypeListContext * /*ctx*/) override { }
  virtual void exitRootComponentTypeList(ASNParser::RootComponentTypeListContext * /*ctx*/) override { }

  virtual void enterComponentTypeList(ASNParser::ComponentTypeListContext * /*ctx*/) override { }
  virtual void exitComponentTypeList(ASNParser::ComponentTypeListContext * /*ctx*/) override { }

  virtual void enterComponentType(ASNParser::ComponentTypeContext * /*ctx*/) override { }
  virtual void exitComponentType(ASNParser::ComponentTypeContext * /*ctx*/) override { }

  virtual void enterExtensionAdditions(ASNParser::ExtensionAdditionsContext * /*ctx*/) override { }
  virtual void exitExtensionAdditions(ASNParser::ExtensionAdditionsContext * /*ctx*/) override { }

  virtual void enterExtensionAdditionList(ASNParser::ExtensionAdditionListContext * /*ctx*/) override { }
  virtual void exitExtensionAdditionList(ASNParser::ExtensionAdditionListContext * /*ctx*/) override { }

  virtual void enterExtensionAddition(ASNParser::ExtensionAdditionContext * /*ctx*/) override { }
  virtual void exitExtensionAddition(ASNParser::ExtensionAdditionContext * /*ctx*/) override { }

  virtual void enterExtensionAdditionGroup(ASNParser::ExtensionAdditionGroupContext * /*ctx*/) override { }
  virtual void exitExtensionAdditionGroup(ASNParser::ExtensionAdditionGroupContext * /*ctx*/) override { }

  virtual void enterVersionNumber(ASNParser::VersionNumberContext * /*ctx*/) override { }
  virtual void exitVersionNumber(ASNParser::VersionNumberContext * /*ctx*/) override { }

  virtual void enterSequenceOfType(ASNParser::SequenceOfTypeContext * /*ctx*/) override { }
  virtual void exitSequenceOfType(ASNParser::SequenceOfTypeContext * /*ctx*/) override { }

  virtual void enterSizeConstraint(ASNParser::SizeConstraintContext * /*ctx*/) override { }
  virtual void exitSizeConstraint(ASNParser::SizeConstraintContext * /*ctx*/) override { }

  virtual void enterParameterizedAssignment(ASNParser::ParameterizedAssignmentContext * /*ctx*/) override { }
  virtual void exitParameterizedAssignment(ASNParser::ParameterizedAssignmentContext * /*ctx*/) override { }

  virtual void enterParameterList(ASNParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(ASNParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterParameter(ASNParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(ASNParser::ParameterContext * /*ctx*/) override { }

  virtual void enterParamGovernor(ASNParser::ParamGovernorContext * /*ctx*/) override { }
  virtual void exitParamGovernor(ASNParser::ParamGovernorContext * /*ctx*/) override { }

  virtual void enterGovernor(ASNParser::GovernorContext * /*ctx*/) override { }
  virtual void exitGovernor(ASNParser::GovernorContext * /*ctx*/) override { }

  virtual void enterObjectClassAssignment(ASNParser::ObjectClassAssignmentContext * /*ctx*/) override { }
  virtual void exitObjectClassAssignment(ASNParser::ObjectClassAssignmentContext * /*ctx*/) override { }

  virtual void enterObjectClass(ASNParser::ObjectClassContext * /*ctx*/) override { }
  virtual void exitObjectClass(ASNParser::ObjectClassContext * /*ctx*/) override { }

  virtual void enterDefinedObjectClass(ASNParser::DefinedObjectClassContext * /*ctx*/) override { }
  virtual void exitDefinedObjectClass(ASNParser::DefinedObjectClassContext * /*ctx*/) override { }

  virtual void enterUsefulObjectClassReference(ASNParser::UsefulObjectClassReferenceContext * /*ctx*/) override { }
  virtual void exitUsefulObjectClassReference(ASNParser::UsefulObjectClassReferenceContext * /*ctx*/) override { }

  virtual void enterExternalObjectClassReference(ASNParser::ExternalObjectClassReferenceContext * /*ctx*/) override { }
  virtual void exitExternalObjectClassReference(ASNParser::ExternalObjectClassReferenceContext * /*ctx*/) override { }

  virtual void enterObjectClassDefn(ASNParser::ObjectClassDefnContext * /*ctx*/) override { }
  virtual void exitObjectClassDefn(ASNParser::ObjectClassDefnContext * /*ctx*/) override { }

  virtual void enterWithSyntaxSpec(ASNParser::WithSyntaxSpecContext * /*ctx*/) override { }
  virtual void exitWithSyntaxSpec(ASNParser::WithSyntaxSpecContext * /*ctx*/) override { }

  virtual void enterSyntaxList(ASNParser::SyntaxListContext * /*ctx*/) override { }
  virtual void exitSyntaxList(ASNParser::SyntaxListContext * /*ctx*/) override { }

  virtual void enterTokenOrGroupSpec(ASNParser::TokenOrGroupSpecContext * /*ctx*/) override { }
  virtual void exitTokenOrGroupSpec(ASNParser::TokenOrGroupSpecContext * /*ctx*/) override { }

  virtual void enterOptionalGroup(ASNParser::OptionalGroupContext * /*ctx*/) override { }
  virtual void exitOptionalGroup(ASNParser::OptionalGroupContext * /*ctx*/) override { }

  virtual void enterRequiredToken(ASNParser::RequiredTokenContext * /*ctx*/) override { }
  virtual void exitRequiredToken(ASNParser::RequiredTokenContext * /*ctx*/) override { }

  virtual void enterLiteral(ASNParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(ASNParser::LiteralContext * /*ctx*/) override { }

  virtual void enterPrimitiveFieldName(ASNParser::PrimitiveFieldNameContext * /*ctx*/) override { }
  virtual void exitPrimitiveFieldName(ASNParser::PrimitiveFieldNameContext * /*ctx*/) override { }

  virtual void enterFieldSpec(ASNParser::FieldSpecContext * /*ctx*/) override { }
  virtual void exitFieldSpec(ASNParser::FieldSpecContext * /*ctx*/) override { }

  virtual void enterTypeFieldSpec(ASNParser::TypeFieldSpecContext * /*ctx*/) override { }
  virtual void exitTypeFieldSpec(ASNParser::TypeFieldSpecContext * /*ctx*/) override { }

  virtual void enterTypeOptionalitySpec(ASNParser::TypeOptionalitySpecContext * /*ctx*/) override { }
  virtual void exitTypeOptionalitySpec(ASNParser::TypeOptionalitySpecContext * /*ctx*/) override { }

  virtual void enterFixedTypeValueFieldSpec(ASNParser::FixedTypeValueFieldSpecContext * /*ctx*/) override { }
  virtual void exitFixedTypeValueFieldSpec(ASNParser::FixedTypeValueFieldSpecContext * /*ctx*/) override { }

  virtual void enterValueOptionalitySpec(ASNParser::ValueOptionalitySpecContext * /*ctx*/) override { }
  virtual void exitValueOptionalitySpec(ASNParser::ValueOptionalitySpecContext * /*ctx*/) override { }

  virtual void enterVariableTypeValueFieldSpec(ASNParser::VariableTypeValueFieldSpecContext * /*ctx*/) override { }
  virtual void exitVariableTypeValueFieldSpec(ASNParser::VariableTypeValueFieldSpecContext * /*ctx*/) override { }

  virtual void enterFixedTypeValueSetFieldSpec(ASNParser::FixedTypeValueSetFieldSpecContext * /*ctx*/) override { }
  virtual void exitFixedTypeValueSetFieldSpec(ASNParser::FixedTypeValueSetFieldSpecContext * /*ctx*/) override { }

  virtual void enterValueSetOptionalitySpec(ASNParser::ValueSetOptionalitySpecContext * /*ctx*/) override { }
  virtual void exitValueSetOptionalitySpec(ASNParser::ValueSetOptionalitySpecContext * /*ctx*/) override { }

  virtual void enterObject_(ASNParser::Object_Context * /*ctx*/) override { }
  virtual void exitObject_(ASNParser::Object_Context * /*ctx*/) override { }

  virtual void enterParameterizedObject(ASNParser::ParameterizedObjectContext * /*ctx*/) override { }
  virtual void exitParameterizedObject(ASNParser::ParameterizedObjectContext * /*ctx*/) override { }

  virtual void enterDefinedObject(ASNParser::DefinedObjectContext * /*ctx*/) override { }
  virtual void exitDefinedObject(ASNParser::DefinedObjectContext * /*ctx*/) override { }

  virtual void enterObjectSet(ASNParser::ObjectSetContext * /*ctx*/) override { }
  virtual void exitObjectSet(ASNParser::ObjectSetContext * /*ctx*/) override { }

  virtual void enterObjectSetSpec(ASNParser::ObjectSetSpecContext * /*ctx*/) override { }
  virtual void exitObjectSetSpec(ASNParser::ObjectSetSpecContext * /*ctx*/) override { }

  virtual void enterFieldName(ASNParser::FieldNameContext * /*ctx*/) override { }
  virtual void exitFieldName(ASNParser::FieldNameContext * /*ctx*/) override { }

  virtual void enterValueSet(ASNParser::ValueSetContext * /*ctx*/) override { }
  virtual void exitValueSet(ASNParser::ValueSetContext * /*ctx*/) override { }

  virtual void enterElementSetSpecs(ASNParser::ElementSetSpecsContext * /*ctx*/) override { }
  virtual void exitElementSetSpecs(ASNParser::ElementSetSpecsContext * /*ctx*/) override { }

  virtual void enterRootElementSetSpec(ASNParser::RootElementSetSpecContext * /*ctx*/) override { }
  virtual void exitRootElementSetSpec(ASNParser::RootElementSetSpecContext * /*ctx*/) override { }

  virtual void enterAdditionalElementSetSpec(ASNParser::AdditionalElementSetSpecContext * /*ctx*/) override { }
  virtual void exitAdditionalElementSetSpec(ASNParser::AdditionalElementSetSpecContext * /*ctx*/) override { }

  virtual void enterElementSetSpec(ASNParser::ElementSetSpecContext * /*ctx*/) override { }
  virtual void exitElementSetSpec(ASNParser::ElementSetSpecContext * /*ctx*/) override { }

  virtual void enterUnions(ASNParser::UnionsContext * /*ctx*/) override { }
  virtual void exitUnions(ASNParser::UnionsContext * /*ctx*/) override { }

  virtual void enterExclusions(ASNParser::ExclusionsContext * /*ctx*/) override { }
  virtual void exitExclusions(ASNParser::ExclusionsContext * /*ctx*/) override { }

  virtual void enterIntersections(ASNParser::IntersectionsContext * /*ctx*/) override { }
  virtual void exitIntersections(ASNParser::IntersectionsContext * /*ctx*/) override { }

  virtual void enterUnionMark(ASNParser::UnionMarkContext * /*ctx*/) override { }
  virtual void exitUnionMark(ASNParser::UnionMarkContext * /*ctx*/) override { }

  virtual void enterIntersectionMark(ASNParser::IntersectionMarkContext * /*ctx*/) override { }
  virtual void exitIntersectionMark(ASNParser::IntersectionMarkContext * /*ctx*/) override { }

  virtual void enterElements(ASNParser::ElementsContext * /*ctx*/) override { }
  virtual void exitElements(ASNParser::ElementsContext * /*ctx*/) override { }

  virtual void enterObjectSetElements(ASNParser::ObjectSetElementsContext * /*ctx*/) override { }
  virtual void exitObjectSetElements(ASNParser::ObjectSetElementsContext * /*ctx*/) override { }

  virtual void enterIntersectionElements(ASNParser::IntersectionElementsContext * /*ctx*/) override { }
  virtual void exitIntersectionElements(ASNParser::IntersectionElementsContext * /*ctx*/) override { }

  virtual void enterSubtypeElements(ASNParser::SubtypeElementsContext * /*ctx*/) override { }
  virtual void exitSubtypeElements(ASNParser::SubtypeElementsContext * /*ctx*/) override { }

  virtual void enterVariableTypeValueSetFieldSpec(ASNParser::VariableTypeValueSetFieldSpecContext * /*ctx*/) override { }
  virtual void exitVariableTypeValueSetFieldSpec(ASNParser::VariableTypeValueSetFieldSpecContext * /*ctx*/) override { }

  virtual void enterObjectFieldSpec(ASNParser::ObjectFieldSpecContext * /*ctx*/) override { }
  virtual void exitObjectFieldSpec(ASNParser::ObjectFieldSpecContext * /*ctx*/) override { }

  virtual void enterObjectOptionalitySpec(ASNParser::ObjectOptionalitySpecContext * /*ctx*/) override { }
  virtual void exitObjectOptionalitySpec(ASNParser::ObjectOptionalitySpecContext * /*ctx*/) override { }

  virtual void enterObjectSetFieldSpec(ASNParser::ObjectSetFieldSpecContext * /*ctx*/) override { }
  virtual void exitObjectSetFieldSpec(ASNParser::ObjectSetFieldSpecContext * /*ctx*/) override { }

  virtual void enterObjectSetOptionalitySpec(ASNParser::ObjectSetOptionalitySpecContext * /*ctx*/) override { }
  virtual void exitObjectSetOptionalitySpec(ASNParser::ObjectSetOptionalitySpecContext * /*ctx*/) override { }

  virtual void enterTypeAssignment(ASNParser::TypeAssignmentContext * /*ctx*/) override { }
  virtual void exitTypeAssignment(ASNParser::TypeAssignmentContext * /*ctx*/) override { }

  virtual void enterValueAssignment(ASNParser::ValueAssignmentContext * /*ctx*/) override { }
  virtual void exitValueAssignment(ASNParser::ValueAssignmentContext * /*ctx*/) override { }

  virtual void enterAsnType(ASNParser::AsnTypeContext * /*ctx*/) override { }
  virtual void exitAsnType(ASNParser::AsnTypeContext * /*ctx*/) override { }

  virtual void enterBuiltinType(ASNParser::BuiltinTypeContext * /*ctx*/) override { }
  virtual void exitBuiltinType(ASNParser::BuiltinTypeContext * /*ctx*/) override { }

  virtual void enterObjectClassFieldType(ASNParser::ObjectClassFieldTypeContext * /*ctx*/) override { }
  virtual void exitObjectClassFieldType(ASNParser::ObjectClassFieldTypeContext * /*ctx*/) override { }

  virtual void enterSetType(ASNParser::SetTypeContext * /*ctx*/) override { }
  virtual void exitSetType(ASNParser::SetTypeContext * /*ctx*/) override { }

  virtual void enterSetOfType(ASNParser::SetOfTypeContext * /*ctx*/) override { }
  virtual void exitSetOfType(ASNParser::SetOfTypeContext * /*ctx*/) override { }

  virtual void enterReferencedType(ASNParser::ReferencedTypeContext * /*ctx*/) override { }
  virtual void exitReferencedType(ASNParser::ReferencedTypeContext * /*ctx*/) override { }

  virtual void enterDefinedType(ASNParser::DefinedTypeContext * /*ctx*/) override { }
  virtual void exitDefinedType(ASNParser::DefinedTypeContext * /*ctx*/) override { }

  virtual void enterConstraint(ASNParser::ConstraintContext * /*ctx*/) override { }
  virtual void exitConstraint(ASNParser::ConstraintContext * /*ctx*/) override { }

  virtual void enterConstraintSpec(ASNParser::ConstraintSpecContext * /*ctx*/) override { }
  virtual void exitConstraintSpec(ASNParser::ConstraintSpecContext * /*ctx*/) override { }

  virtual void enterUserDefinedConstraint(ASNParser::UserDefinedConstraintContext * /*ctx*/) override { }
  virtual void exitUserDefinedConstraint(ASNParser::UserDefinedConstraintContext * /*ctx*/) override { }

  virtual void enterGeneralConstraint(ASNParser::GeneralConstraintContext * /*ctx*/) override { }
  virtual void exitGeneralConstraint(ASNParser::GeneralConstraintContext * /*ctx*/) override { }

  virtual void enterUserDefinedConstraintParameter(ASNParser::UserDefinedConstraintParameterContext * /*ctx*/) override { }
  virtual void exitUserDefinedConstraintParameter(ASNParser::UserDefinedConstraintParameterContext * /*ctx*/) override { }

  virtual void enterTableConstraint(ASNParser::TableConstraintContext * /*ctx*/) override { }
  virtual void exitTableConstraint(ASNParser::TableConstraintContext * /*ctx*/) override { }

  virtual void enterSimpleTableConstraint(ASNParser::SimpleTableConstraintContext * /*ctx*/) override { }
  virtual void exitSimpleTableConstraint(ASNParser::SimpleTableConstraintContext * /*ctx*/) override { }

  virtual void enterContentsConstraint(ASNParser::ContentsConstraintContext * /*ctx*/) override { }
  virtual void exitContentsConstraint(ASNParser::ContentsConstraintContext * /*ctx*/) override { }

  virtual void enterComponentPresenceLists(ASNParser::ComponentPresenceListsContext * /*ctx*/) override { }
  virtual void exitComponentPresenceLists(ASNParser::ComponentPresenceListsContext * /*ctx*/) override { }

  virtual void enterComponentPresenceList(ASNParser::ComponentPresenceListContext * /*ctx*/) override { }
  virtual void exitComponentPresenceList(ASNParser::ComponentPresenceListContext * /*ctx*/) override { }

  virtual void enterComponentPresence(ASNParser::ComponentPresenceContext * /*ctx*/) override { }
  virtual void exitComponentPresence(ASNParser::ComponentPresenceContext * /*ctx*/) override { }

  virtual void enterSubtypeConstraint(ASNParser::SubtypeConstraintContext * /*ctx*/) override { }
  virtual void exitSubtypeConstraint(ASNParser::SubtypeConstraintContext * /*ctx*/) override { }

  virtual void enterValue(ASNParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(ASNParser::ValueContext * /*ctx*/) override { }

  virtual void enterBuiltinValue(ASNParser::BuiltinValueContext * /*ctx*/) override { }
  virtual void exitBuiltinValue(ASNParser::BuiltinValueContext * /*ctx*/) override { }

  virtual void enterObjectIdentifierValue(ASNParser::ObjectIdentifierValueContext * /*ctx*/) override { }
  virtual void exitObjectIdentifierValue(ASNParser::ObjectIdentifierValueContext * /*ctx*/) override { }

  virtual void enterObjIdComponentsList(ASNParser::ObjIdComponentsListContext * /*ctx*/) override { }
  virtual void exitObjIdComponentsList(ASNParser::ObjIdComponentsListContext * /*ctx*/) override { }

  virtual void enterObjIdComponents(ASNParser::ObjIdComponentsContext * /*ctx*/) override { }
  virtual void exitObjIdComponents(ASNParser::ObjIdComponentsContext * /*ctx*/) override { }

  virtual void enterIntegerValue(ASNParser::IntegerValueContext * /*ctx*/) override { }
  virtual void exitIntegerValue(ASNParser::IntegerValueContext * /*ctx*/) override { }

  virtual void enterChoiceValue(ASNParser::ChoiceValueContext * /*ctx*/) override { }
  virtual void exitChoiceValue(ASNParser::ChoiceValueContext * /*ctx*/) override { }

  virtual void enterEnumeratedValue(ASNParser::EnumeratedValueContext * /*ctx*/) override { }
  virtual void exitEnumeratedValue(ASNParser::EnumeratedValueContext * /*ctx*/) override { }

  virtual void enterSignedNumber(ASNParser::SignedNumberContext * /*ctx*/) override { }
  virtual void exitSignedNumber(ASNParser::SignedNumberContext * /*ctx*/) override { }

  virtual void enterChoiceType(ASNParser::ChoiceTypeContext * /*ctx*/) override { }
  virtual void exitChoiceType(ASNParser::ChoiceTypeContext * /*ctx*/) override { }

  virtual void enterAlternativeTypeLists(ASNParser::AlternativeTypeListsContext * /*ctx*/) override { }
  virtual void exitAlternativeTypeLists(ASNParser::AlternativeTypeListsContext * /*ctx*/) override { }

  virtual void enterExtensionAdditionAlternatives(ASNParser::ExtensionAdditionAlternativesContext * /*ctx*/) override { }
  virtual void exitExtensionAdditionAlternatives(ASNParser::ExtensionAdditionAlternativesContext * /*ctx*/) override { }

  virtual void enterExtensionAdditionAlternativesList(ASNParser::ExtensionAdditionAlternativesListContext * /*ctx*/) override { }
  virtual void exitExtensionAdditionAlternativesList(ASNParser::ExtensionAdditionAlternativesListContext * /*ctx*/) override { }

  virtual void enterExtensionAdditionAlternative(ASNParser::ExtensionAdditionAlternativeContext * /*ctx*/) override { }
  virtual void exitExtensionAdditionAlternative(ASNParser::ExtensionAdditionAlternativeContext * /*ctx*/) override { }

  virtual void enterExtensionAdditionAlternativesGroup(ASNParser::ExtensionAdditionAlternativesGroupContext * /*ctx*/) override { }
  virtual void exitExtensionAdditionAlternativesGroup(ASNParser::ExtensionAdditionAlternativesGroupContext * /*ctx*/) override { }

  virtual void enterRootAlternativeTypeList(ASNParser::RootAlternativeTypeListContext * /*ctx*/) override { }
  virtual void exitRootAlternativeTypeList(ASNParser::RootAlternativeTypeListContext * /*ctx*/) override { }

  virtual void enterAlternativeTypeList(ASNParser::AlternativeTypeListContext * /*ctx*/) override { }
  virtual void exitAlternativeTypeList(ASNParser::AlternativeTypeListContext * /*ctx*/) override { }

  virtual void enterNamedType(ASNParser::NamedTypeContext * /*ctx*/) override { }
  virtual void exitNamedType(ASNParser::NamedTypeContext * /*ctx*/) override { }

  virtual void enterEnumeratedType(ASNParser::EnumeratedTypeContext * /*ctx*/) override { }
  virtual void exitEnumeratedType(ASNParser::EnumeratedTypeContext * /*ctx*/) override { }

  virtual void enterEnumerations(ASNParser::EnumerationsContext * /*ctx*/) override { }
  virtual void exitEnumerations(ASNParser::EnumerationsContext * /*ctx*/) override { }

  virtual void enterRootEnumeration(ASNParser::RootEnumerationContext * /*ctx*/) override { }
  virtual void exitRootEnumeration(ASNParser::RootEnumerationContext * /*ctx*/) override { }

  virtual void enterEnumeration(ASNParser::EnumerationContext * /*ctx*/) override { }
  virtual void exitEnumeration(ASNParser::EnumerationContext * /*ctx*/) override { }

  virtual void enterEnumerationItem(ASNParser::EnumerationItemContext * /*ctx*/) override { }
  virtual void exitEnumerationItem(ASNParser::EnumerationItemContext * /*ctx*/) override { }

  virtual void enterNamedNumber(ASNParser::NamedNumberContext * /*ctx*/) override { }
  virtual void exitNamedNumber(ASNParser::NamedNumberContext * /*ctx*/) override { }

  virtual void enterDefinedValue(ASNParser::DefinedValueContext * /*ctx*/) override { }
  virtual void exitDefinedValue(ASNParser::DefinedValueContext * /*ctx*/) override { }

  virtual void enterParameterizedValue(ASNParser::ParameterizedValueContext * /*ctx*/) override { }
  virtual void exitParameterizedValue(ASNParser::ParameterizedValueContext * /*ctx*/) override { }

  virtual void enterSimpleDefinedValue(ASNParser::SimpleDefinedValueContext * /*ctx*/) override { }
  virtual void exitSimpleDefinedValue(ASNParser::SimpleDefinedValueContext * /*ctx*/) override { }

  virtual void enterActualParameterList(ASNParser::ActualParameterListContext * /*ctx*/) override { }
  virtual void exitActualParameterList(ASNParser::ActualParameterListContext * /*ctx*/) override { }

  virtual void enterActualParameter(ASNParser::ActualParameterContext * /*ctx*/) override { }
  virtual void exitActualParameter(ASNParser::ActualParameterContext * /*ctx*/) override { }

  virtual void enterExceptionSpec(ASNParser::ExceptionSpecContext * /*ctx*/) override { }
  virtual void exitExceptionSpec(ASNParser::ExceptionSpecContext * /*ctx*/) override { }

  virtual void enterExceptionIdentification(ASNParser::ExceptionIdentificationContext * /*ctx*/) override { }
  virtual void exitExceptionIdentification(ASNParser::ExceptionIdentificationContext * /*ctx*/) override { }

  virtual void enterAdditionalEnumeration(ASNParser::AdditionalEnumerationContext * /*ctx*/) override { }
  virtual void exitAdditionalEnumeration(ASNParser::AdditionalEnumerationContext * /*ctx*/) override { }

  virtual void enterIntegerType(ASNParser::IntegerTypeContext * /*ctx*/) override { }
  virtual void exitIntegerType(ASNParser::IntegerTypeContext * /*ctx*/) override { }

  virtual void enterNamedNumberList(ASNParser::NamedNumberListContext * /*ctx*/) override { }
  virtual void exitNamedNumberList(ASNParser::NamedNumberListContext * /*ctx*/) override { }

  virtual void enterObjectidentifiertype(ASNParser::ObjectidentifiertypeContext * /*ctx*/) override { }
  virtual void exitObjectidentifiertype(ASNParser::ObjectidentifiertypeContext * /*ctx*/) override { }

  virtual void enterComponentRelationConstraint(ASNParser::ComponentRelationConstraintContext * /*ctx*/) override { }
  virtual void exitComponentRelationConstraint(ASNParser::ComponentRelationConstraintContext * /*ctx*/) override { }

  virtual void enterAtNotation(ASNParser::AtNotationContext * /*ctx*/) override { }
  virtual void exitAtNotation(ASNParser::AtNotationContext * /*ctx*/) override { }

  virtual void enterLevel(ASNParser::LevelContext * /*ctx*/) override { }
  virtual void exitLevel(ASNParser::LevelContext * /*ctx*/) override { }

  virtual void enterComponentIdList(ASNParser::ComponentIdListContext * /*ctx*/) override { }
  virtual void exitComponentIdList(ASNParser::ComponentIdListContext * /*ctx*/) override { }

  virtual void enterOctetStringType(ASNParser::OctetStringTypeContext * /*ctx*/) override { }
  virtual void exitOctetStringType(ASNParser::OctetStringTypeContext * /*ctx*/) override { }

  virtual void enterBitStringType(ASNParser::BitStringTypeContext * /*ctx*/) override { }
  virtual void exitBitStringType(ASNParser::BitStringTypeContext * /*ctx*/) override { }

  virtual void enterNamedBitList(ASNParser::NamedBitListContext * /*ctx*/) override { }
  virtual void exitNamedBitList(ASNParser::NamedBitListContext * /*ctx*/) override { }

  virtual void enterNamedBit(ASNParser::NamedBitContext * /*ctx*/) override { }
  virtual void exitNamedBit(ASNParser::NamedBitContext * /*ctx*/) override { }

  virtual void enterBooleanValue(ASNParser::BooleanValueContext * /*ctx*/) override { }
  virtual void exitBooleanValue(ASNParser::BooleanValueContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

