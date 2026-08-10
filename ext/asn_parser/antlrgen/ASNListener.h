
// Generated from ./ASN.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "ASNParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ASNParser.
 */
class  ASNListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterModules(ASNParser::ModulesContext *ctx) = 0;
  virtual void exitModules(ASNParser::ModulesContext *ctx) = 0;

  virtual void enterModuleDefinition(ASNParser::ModuleDefinitionContext *ctx) = 0;
  virtual void exitModuleDefinition(ASNParser::ModuleDefinitionContext *ctx) = 0;

  virtual void enterTagDefault(ASNParser::TagDefaultContext *ctx) = 0;
  virtual void exitTagDefault(ASNParser::TagDefaultContext *ctx) = 0;

  virtual void enterExtensionDefault(ASNParser::ExtensionDefaultContext *ctx) = 0;
  virtual void exitExtensionDefault(ASNParser::ExtensionDefaultContext *ctx) = 0;

  virtual void enterModuleBody(ASNParser::ModuleBodyContext *ctx) = 0;
  virtual void exitModuleBody(ASNParser::ModuleBodyContext *ctx) = 0;

  virtual void enterExports(ASNParser::ExportsContext *ctx) = 0;
  virtual void exitExports(ASNParser::ExportsContext *ctx) = 0;

  virtual void enterSymbolsExported(ASNParser::SymbolsExportedContext *ctx) = 0;
  virtual void exitSymbolsExported(ASNParser::SymbolsExportedContext *ctx) = 0;

  virtual void enterImports(ASNParser::ImportsContext *ctx) = 0;
  virtual void exitImports(ASNParser::ImportsContext *ctx) = 0;

  virtual void enterSymbolsImported(ASNParser::SymbolsImportedContext *ctx) = 0;
  virtual void exitSymbolsImported(ASNParser::SymbolsImportedContext *ctx) = 0;

  virtual void enterSymbolsFromModuleList(ASNParser::SymbolsFromModuleListContext *ctx) = 0;
  virtual void exitSymbolsFromModuleList(ASNParser::SymbolsFromModuleListContext *ctx) = 0;

  virtual void enterSymbolsFromModule(ASNParser::SymbolsFromModuleContext *ctx) = 0;
  virtual void exitSymbolsFromModule(ASNParser::SymbolsFromModuleContext *ctx) = 0;

  virtual void enterGlobalModuleReference(ASNParser::GlobalModuleReferenceContext *ctx) = 0;
  virtual void exitGlobalModuleReference(ASNParser::GlobalModuleReferenceContext *ctx) = 0;

  virtual void enterAssignedIdentifier(ASNParser::AssignedIdentifierContext *ctx) = 0;
  virtual void exitAssignedIdentifier(ASNParser::AssignedIdentifierContext *ctx) = 0;

  virtual void enterSymbolList(ASNParser::SymbolListContext *ctx) = 0;
  virtual void exitSymbolList(ASNParser::SymbolListContext *ctx) = 0;

  virtual void enterSymbol(ASNParser::SymbolContext *ctx) = 0;
  virtual void exitSymbol(ASNParser::SymbolContext *ctx) = 0;

  virtual void enterAssignmentList(ASNParser::AssignmentListContext *ctx) = 0;
  virtual void exitAssignmentList(ASNParser::AssignmentListContext *ctx) = 0;

  virtual void enterAssignment(ASNParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(ASNParser::AssignmentContext *ctx) = 0;

  virtual void enterSequenceType(ASNParser::SequenceTypeContext *ctx) = 0;
  virtual void exitSequenceType(ASNParser::SequenceTypeContext *ctx) = 0;

  virtual void enterExtensionAndException(ASNParser::ExtensionAndExceptionContext *ctx) = 0;
  virtual void exitExtensionAndException(ASNParser::ExtensionAndExceptionContext *ctx) = 0;

  virtual void enterOptionalExtensionMarker(ASNParser::OptionalExtensionMarkerContext *ctx) = 0;
  virtual void exitOptionalExtensionMarker(ASNParser::OptionalExtensionMarkerContext *ctx) = 0;

  virtual void enterComponentTypeLists(ASNParser::ComponentTypeListsContext *ctx) = 0;
  virtual void exitComponentTypeLists(ASNParser::ComponentTypeListsContext *ctx) = 0;

  virtual void enterRootComponentTypeList(ASNParser::RootComponentTypeListContext *ctx) = 0;
  virtual void exitRootComponentTypeList(ASNParser::RootComponentTypeListContext *ctx) = 0;

  virtual void enterComponentTypeList(ASNParser::ComponentTypeListContext *ctx) = 0;
  virtual void exitComponentTypeList(ASNParser::ComponentTypeListContext *ctx) = 0;

  virtual void enterComponentType(ASNParser::ComponentTypeContext *ctx) = 0;
  virtual void exitComponentType(ASNParser::ComponentTypeContext *ctx) = 0;

  virtual void enterExtensionAdditions(ASNParser::ExtensionAdditionsContext *ctx) = 0;
  virtual void exitExtensionAdditions(ASNParser::ExtensionAdditionsContext *ctx) = 0;

  virtual void enterExtensionAdditionList(ASNParser::ExtensionAdditionListContext *ctx) = 0;
  virtual void exitExtensionAdditionList(ASNParser::ExtensionAdditionListContext *ctx) = 0;

  virtual void enterExtensionAddition(ASNParser::ExtensionAdditionContext *ctx) = 0;
  virtual void exitExtensionAddition(ASNParser::ExtensionAdditionContext *ctx) = 0;

  virtual void enterExtensionAdditionGroup(ASNParser::ExtensionAdditionGroupContext *ctx) = 0;
  virtual void exitExtensionAdditionGroup(ASNParser::ExtensionAdditionGroupContext *ctx) = 0;

  virtual void enterVersionNumber(ASNParser::VersionNumberContext *ctx) = 0;
  virtual void exitVersionNumber(ASNParser::VersionNumberContext *ctx) = 0;

  virtual void enterSequenceOfType(ASNParser::SequenceOfTypeContext *ctx) = 0;
  virtual void exitSequenceOfType(ASNParser::SequenceOfTypeContext *ctx) = 0;

  virtual void enterSizeConstraint(ASNParser::SizeConstraintContext *ctx) = 0;
  virtual void exitSizeConstraint(ASNParser::SizeConstraintContext *ctx) = 0;

  virtual void enterParameterizedAssignment(ASNParser::ParameterizedAssignmentContext *ctx) = 0;
  virtual void exitParameterizedAssignment(ASNParser::ParameterizedAssignmentContext *ctx) = 0;

  virtual void enterParameterList(ASNParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(ASNParser::ParameterListContext *ctx) = 0;

  virtual void enterParameter(ASNParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(ASNParser::ParameterContext *ctx) = 0;

  virtual void enterParamGovernor(ASNParser::ParamGovernorContext *ctx) = 0;
  virtual void exitParamGovernor(ASNParser::ParamGovernorContext *ctx) = 0;

  virtual void enterGovernor(ASNParser::GovernorContext *ctx) = 0;
  virtual void exitGovernor(ASNParser::GovernorContext *ctx) = 0;

  virtual void enterObjectClassAssignment(ASNParser::ObjectClassAssignmentContext *ctx) = 0;
  virtual void exitObjectClassAssignment(ASNParser::ObjectClassAssignmentContext *ctx) = 0;

  virtual void enterObjectClass(ASNParser::ObjectClassContext *ctx) = 0;
  virtual void exitObjectClass(ASNParser::ObjectClassContext *ctx) = 0;

  virtual void enterDefinedObjectClass(ASNParser::DefinedObjectClassContext *ctx) = 0;
  virtual void exitDefinedObjectClass(ASNParser::DefinedObjectClassContext *ctx) = 0;

  virtual void enterUsefulObjectClassReference(ASNParser::UsefulObjectClassReferenceContext *ctx) = 0;
  virtual void exitUsefulObjectClassReference(ASNParser::UsefulObjectClassReferenceContext *ctx) = 0;

  virtual void enterExternalObjectClassReference(ASNParser::ExternalObjectClassReferenceContext *ctx) = 0;
  virtual void exitExternalObjectClassReference(ASNParser::ExternalObjectClassReferenceContext *ctx) = 0;

  virtual void enterObjectClassDefn(ASNParser::ObjectClassDefnContext *ctx) = 0;
  virtual void exitObjectClassDefn(ASNParser::ObjectClassDefnContext *ctx) = 0;

  virtual void enterWithSyntaxSpec(ASNParser::WithSyntaxSpecContext *ctx) = 0;
  virtual void exitWithSyntaxSpec(ASNParser::WithSyntaxSpecContext *ctx) = 0;

  virtual void enterSyntaxList(ASNParser::SyntaxListContext *ctx) = 0;
  virtual void exitSyntaxList(ASNParser::SyntaxListContext *ctx) = 0;

  virtual void enterTokenOrGroupSpec(ASNParser::TokenOrGroupSpecContext *ctx) = 0;
  virtual void exitTokenOrGroupSpec(ASNParser::TokenOrGroupSpecContext *ctx) = 0;

  virtual void enterOptionalGroup(ASNParser::OptionalGroupContext *ctx) = 0;
  virtual void exitOptionalGroup(ASNParser::OptionalGroupContext *ctx) = 0;

  virtual void enterRequiredToken(ASNParser::RequiredTokenContext *ctx) = 0;
  virtual void exitRequiredToken(ASNParser::RequiredTokenContext *ctx) = 0;

  virtual void enterLiteral(ASNParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(ASNParser::LiteralContext *ctx) = 0;

  virtual void enterPrimitiveFieldName(ASNParser::PrimitiveFieldNameContext *ctx) = 0;
  virtual void exitPrimitiveFieldName(ASNParser::PrimitiveFieldNameContext *ctx) = 0;

  virtual void enterFieldSpec(ASNParser::FieldSpecContext *ctx) = 0;
  virtual void exitFieldSpec(ASNParser::FieldSpecContext *ctx) = 0;

  virtual void enterTypeFieldSpec(ASNParser::TypeFieldSpecContext *ctx) = 0;
  virtual void exitTypeFieldSpec(ASNParser::TypeFieldSpecContext *ctx) = 0;

  virtual void enterTypeOptionalitySpec(ASNParser::TypeOptionalitySpecContext *ctx) = 0;
  virtual void exitTypeOptionalitySpec(ASNParser::TypeOptionalitySpecContext *ctx) = 0;

  virtual void enterFixedTypeValueFieldSpec(ASNParser::FixedTypeValueFieldSpecContext *ctx) = 0;
  virtual void exitFixedTypeValueFieldSpec(ASNParser::FixedTypeValueFieldSpecContext *ctx) = 0;

  virtual void enterValueOptionalitySpec(ASNParser::ValueOptionalitySpecContext *ctx) = 0;
  virtual void exitValueOptionalitySpec(ASNParser::ValueOptionalitySpecContext *ctx) = 0;

  virtual void enterVariableTypeValueFieldSpec(ASNParser::VariableTypeValueFieldSpecContext *ctx) = 0;
  virtual void exitVariableTypeValueFieldSpec(ASNParser::VariableTypeValueFieldSpecContext *ctx) = 0;

  virtual void enterFixedTypeValueSetFieldSpec(ASNParser::FixedTypeValueSetFieldSpecContext *ctx) = 0;
  virtual void exitFixedTypeValueSetFieldSpec(ASNParser::FixedTypeValueSetFieldSpecContext *ctx) = 0;

  virtual void enterValueSetOptionalitySpec(ASNParser::ValueSetOptionalitySpecContext *ctx) = 0;
  virtual void exitValueSetOptionalitySpec(ASNParser::ValueSetOptionalitySpecContext *ctx) = 0;

  virtual void enterObject_(ASNParser::Object_Context *ctx) = 0;
  virtual void exitObject_(ASNParser::Object_Context *ctx) = 0;

  virtual void enterParameterizedObject(ASNParser::ParameterizedObjectContext *ctx) = 0;
  virtual void exitParameterizedObject(ASNParser::ParameterizedObjectContext *ctx) = 0;

  virtual void enterDefinedObject(ASNParser::DefinedObjectContext *ctx) = 0;
  virtual void exitDefinedObject(ASNParser::DefinedObjectContext *ctx) = 0;

  virtual void enterObjectSet(ASNParser::ObjectSetContext *ctx) = 0;
  virtual void exitObjectSet(ASNParser::ObjectSetContext *ctx) = 0;

  virtual void enterObjectSetSpec(ASNParser::ObjectSetSpecContext *ctx) = 0;
  virtual void exitObjectSetSpec(ASNParser::ObjectSetSpecContext *ctx) = 0;

  virtual void enterFieldName(ASNParser::FieldNameContext *ctx) = 0;
  virtual void exitFieldName(ASNParser::FieldNameContext *ctx) = 0;

  virtual void enterValueSet(ASNParser::ValueSetContext *ctx) = 0;
  virtual void exitValueSet(ASNParser::ValueSetContext *ctx) = 0;

  virtual void enterElementSetSpecs(ASNParser::ElementSetSpecsContext *ctx) = 0;
  virtual void exitElementSetSpecs(ASNParser::ElementSetSpecsContext *ctx) = 0;

  virtual void enterRootElementSetSpec(ASNParser::RootElementSetSpecContext *ctx) = 0;
  virtual void exitRootElementSetSpec(ASNParser::RootElementSetSpecContext *ctx) = 0;

  virtual void enterAdditionalElementSetSpec(ASNParser::AdditionalElementSetSpecContext *ctx) = 0;
  virtual void exitAdditionalElementSetSpec(ASNParser::AdditionalElementSetSpecContext *ctx) = 0;

  virtual void enterElementSetSpec(ASNParser::ElementSetSpecContext *ctx) = 0;
  virtual void exitElementSetSpec(ASNParser::ElementSetSpecContext *ctx) = 0;

  virtual void enterUnions(ASNParser::UnionsContext *ctx) = 0;
  virtual void exitUnions(ASNParser::UnionsContext *ctx) = 0;

  virtual void enterExclusions(ASNParser::ExclusionsContext *ctx) = 0;
  virtual void exitExclusions(ASNParser::ExclusionsContext *ctx) = 0;

  virtual void enterIntersections(ASNParser::IntersectionsContext *ctx) = 0;
  virtual void exitIntersections(ASNParser::IntersectionsContext *ctx) = 0;

  virtual void enterUnionMark(ASNParser::UnionMarkContext *ctx) = 0;
  virtual void exitUnionMark(ASNParser::UnionMarkContext *ctx) = 0;

  virtual void enterIntersectionMark(ASNParser::IntersectionMarkContext *ctx) = 0;
  virtual void exitIntersectionMark(ASNParser::IntersectionMarkContext *ctx) = 0;

  virtual void enterElements(ASNParser::ElementsContext *ctx) = 0;
  virtual void exitElements(ASNParser::ElementsContext *ctx) = 0;

  virtual void enterObjectSetElements(ASNParser::ObjectSetElementsContext *ctx) = 0;
  virtual void exitObjectSetElements(ASNParser::ObjectSetElementsContext *ctx) = 0;

  virtual void enterIntersectionElements(ASNParser::IntersectionElementsContext *ctx) = 0;
  virtual void exitIntersectionElements(ASNParser::IntersectionElementsContext *ctx) = 0;

  virtual void enterSubtypeElements(ASNParser::SubtypeElementsContext *ctx) = 0;
  virtual void exitSubtypeElements(ASNParser::SubtypeElementsContext *ctx) = 0;

  virtual void enterVariableTypeValueSetFieldSpec(ASNParser::VariableTypeValueSetFieldSpecContext *ctx) = 0;
  virtual void exitVariableTypeValueSetFieldSpec(ASNParser::VariableTypeValueSetFieldSpecContext *ctx) = 0;

  virtual void enterObjectFieldSpec(ASNParser::ObjectFieldSpecContext *ctx) = 0;
  virtual void exitObjectFieldSpec(ASNParser::ObjectFieldSpecContext *ctx) = 0;

  virtual void enterObjectOptionalitySpec(ASNParser::ObjectOptionalitySpecContext *ctx) = 0;
  virtual void exitObjectOptionalitySpec(ASNParser::ObjectOptionalitySpecContext *ctx) = 0;

  virtual void enterObjectSetFieldSpec(ASNParser::ObjectSetFieldSpecContext *ctx) = 0;
  virtual void exitObjectSetFieldSpec(ASNParser::ObjectSetFieldSpecContext *ctx) = 0;

  virtual void enterObjectSetOptionalitySpec(ASNParser::ObjectSetOptionalitySpecContext *ctx) = 0;
  virtual void exitObjectSetOptionalitySpec(ASNParser::ObjectSetOptionalitySpecContext *ctx) = 0;

  virtual void enterTypeAssignment(ASNParser::TypeAssignmentContext *ctx) = 0;
  virtual void exitTypeAssignment(ASNParser::TypeAssignmentContext *ctx) = 0;

  virtual void enterValueAssignment(ASNParser::ValueAssignmentContext *ctx) = 0;
  virtual void exitValueAssignment(ASNParser::ValueAssignmentContext *ctx) = 0;

  virtual void enterAsnType(ASNParser::AsnTypeContext *ctx) = 0;
  virtual void exitAsnType(ASNParser::AsnTypeContext *ctx) = 0;

  virtual void enterBuiltinType(ASNParser::BuiltinTypeContext *ctx) = 0;
  virtual void exitBuiltinType(ASNParser::BuiltinTypeContext *ctx) = 0;

  virtual void enterObjectClassFieldType(ASNParser::ObjectClassFieldTypeContext *ctx) = 0;
  virtual void exitObjectClassFieldType(ASNParser::ObjectClassFieldTypeContext *ctx) = 0;

  virtual void enterSetType(ASNParser::SetTypeContext *ctx) = 0;
  virtual void exitSetType(ASNParser::SetTypeContext *ctx) = 0;

  virtual void enterSetOfType(ASNParser::SetOfTypeContext *ctx) = 0;
  virtual void exitSetOfType(ASNParser::SetOfTypeContext *ctx) = 0;

  virtual void enterReferencedType(ASNParser::ReferencedTypeContext *ctx) = 0;
  virtual void exitReferencedType(ASNParser::ReferencedTypeContext *ctx) = 0;

  virtual void enterDefinedType(ASNParser::DefinedTypeContext *ctx) = 0;
  virtual void exitDefinedType(ASNParser::DefinedTypeContext *ctx) = 0;

  virtual void enterConstraint(ASNParser::ConstraintContext *ctx) = 0;
  virtual void exitConstraint(ASNParser::ConstraintContext *ctx) = 0;

  virtual void enterConstraintSpec(ASNParser::ConstraintSpecContext *ctx) = 0;
  virtual void exitConstraintSpec(ASNParser::ConstraintSpecContext *ctx) = 0;

  virtual void enterUserDefinedConstraint(ASNParser::UserDefinedConstraintContext *ctx) = 0;
  virtual void exitUserDefinedConstraint(ASNParser::UserDefinedConstraintContext *ctx) = 0;

  virtual void enterGeneralConstraint(ASNParser::GeneralConstraintContext *ctx) = 0;
  virtual void exitGeneralConstraint(ASNParser::GeneralConstraintContext *ctx) = 0;

  virtual void enterUserDefinedConstraintParameter(ASNParser::UserDefinedConstraintParameterContext *ctx) = 0;
  virtual void exitUserDefinedConstraintParameter(ASNParser::UserDefinedConstraintParameterContext *ctx) = 0;

  virtual void enterTableConstraint(ASNParser::TableConstraintContext *ctx) = 0;
  virtual void exitTableConstraint(ASNParser::TableConstraintContext *ctx) = 0;

  virtual void enterSimpleTableConstraint(ASNParser::SimpleTableConstraintContext *ctx) = 0;
  virtual void exitSimpleTableConstraint(ASNParser::SimpleTableConstraintContext *ctx) = 0;

  virtual void enterContentsConstraint(ASNParser::ContentsConstraintContext *ctx) = 0;
  virtual void exitContentsConstraint(ASNParser::ContentsConstraintContext *ctx) = 0;

  virtual void enterComponentPresenceLists(ASNParser::ComponentPresenceListsContext *ctx) = 0;
  virtual void exitComponentPresenceLists(ASNParser::ComponentPresenceListsContext *ctx) = 0;

  virtual void enterComponentPresenceList(ASNParser::ComponentPresenceListContext *ctx) = 0;
  virtual void exitComponentPresenceList(ASNParser::ComponentPresenceListContext *ctx) = 0;

  virtual void enterComponentPresence(ASNParser::ComponentPresenceContext *ctx) = 0;
  virtual void exitComponentPresence(ASNParser::ComponentPresenceContext *ctx) = 0;

  virtual void enterSubtypeConstraint(ASNParser::SubtypeConstraintContext *ctx) = 0;
  virtual void exitSubtypeConstraint(ASNParser::SubtypeConstraintContext *ctx) = 0;

  virtual void enterValue(ASNParser::ValueContext *ctx) = 0;
  virtual void exitValue(ASNParser::ValueContext *ctx) = 0;

  virtual void enterBuiltinValue(ASNParser::BuiltinValueContext *ctx) = 0;
  virtual void exitBuiltinValue(ASNParser::BuiltinValueContext *ctx) = 0;

  virtual void enterObjectIdentifierValue(ASNParser::ObjectIdentifierValueContext *ctx) = 0;
  virtual void exitObjectIdentifierValue(ASNParser::ObjectIdentifierValueContext *ctx) = 0;

  virtual void enterObjIdComponentsList(ASNParser::ObjIdComponentsListContext *ctx) = 0;
  virtual void exitObjIdComponentsList(ASNParser::ObjIdComponentsListContext *ctx) = 0;

  virtual void enterObjIdComponents(ASNParser::ObjIdComponentsContext *ctx) = 0;
  virtual void exitObjIdComponents(ASNParser::ObjIdComponentsContext *ctx) = 0;

  virtual void enterIntegerValue(ASNParser::IntegerValueContext *ctx) = 0;
  virtual void exitIntegerValue(ASNParser::IntegerValueContext *ctx) = 0;

  virtual void enterChoiceValue(ASNParser::ChoiceValueContext *ctx) = 0;
  virtual void exitChoiceValue(ASNParser::ChoiceValueContext *ctx) = 0;

  virtual void enterEnumeratedValue(ASNParser::EnumeratedValueContext *ctx) = 0;
  virtual void exitEnumeratedValue(ASNParser::EnumeratedValueContext *ctx) = 0;

  virtual void enterSignedNumber(ASNParser::SignedNumberContext *ctx) = 0;
  virtual void exitSignedNumber(ASNParser::SignedNumberContext *ctx) = 0;

  virtual void enterChoiceType(ASNParser::ChoiceTypeContext *ctx) = 0;
  virtual void exitChoiceType(ASNParser::ChoiceTypeContext *ctx) = 0;

  virtual void enterAlternativeTypeLists(ASNParser::AlternativeTypeListsContext *ctx) = 0;
  virtual void exitAlternativeTypeLists(ASNParser::AlternativeTypeListsContext *ctx) = 0;

  virtual void enterExtensionAdditionAlternatives(ASNParser::ExtensionAdditionAlternativesContext *ctx) = 0;
  virtual void exitExtensionAdditionAlternatives(ASNParser::ExtensionAdditionAlternativesContext *ctx) = 0;

  virtual void enterExtensionAdditionAlternativesList(ASNParser::ExtensionAdditionAlternativesListContext *ctx) = 0;
  virtual void exitExtensionAdditionAlternativesList(ASNParser::ExtensionAdditionAlternativesListContext *ctx) = 0;

  virtual void enterExtensionAdditionAlternative(ASNParser::ExtensionAdditionAlternativeContext *ctx) = 0;
  virtual void exitExtensionAdditionAlternative(ASNParser::ExtensionAdditionAlternativeContext *ctx) = 0;

  virtual void enterExtensionAdditionAlternativesGroup(ASNParser::ExtensionAdditionAlternativesGroupContext *ctx) = 0;
  virtual void exitExtensionAdditionAlternativesGroup(ASNParser::ExtensionAdditionAlternativesGroupContext *ctx) = 0;

  virtual void enterRootAlternativeTypeList(ASNParser::RootAlternativeTypeListContext *ctx) = 0;
  virtual void exitRootAlternativeTypeList(ASNParser::RootAlternativeTypeListContext *ctx) = 0;

  virtual void enterAlternativeTypeList(ASNParser::AlternativeTypeListContext *ctx) = 0;
  virtual void exitAlternativeTypeList(ASNParser::AlternativeTypeListContext *ctx) = 0;

  virtual void enterNamedType(ASNParser::NamedTypeContext *ctx) = 0;
  virtual void exitNamedType(ASNParser::NamedTypeContext *ctx) = 0;

  virtual void enterEnumeratedType(ASNParser::EnumeratedTypeContext *ctx) = 0;
  virtual void exitEnumeratedType(ASNParser::EnumeratedTypeContext *ctx) = 0;

  virtual void enterEnumerations(ASNParser::EnumerationsContext *ctx) = 0;
  virtual void exitEnumerations(ASNParser::EnumerationsContext *ctx) = 0;

  virtual void enterRootEnumeration(ASNParser::RootEnumerationContext *ctx) = 0;
  virtual void exitRootEnumeration(ASNParser::RootEnumerationContext *ctx) = 0;

  virtual void enterEnumeration(ASNParser::EnumerationContext *ctx) = 0;
  virtual void exitEnumeration(ASNParser::EnumerationContext *ctx) = 0;

  virtual void enterEnumerationItem(ASNParser::EnumerationItemContext *ctx) = 0;
  virtual void exitEnumerationItem(ASNParser::EnumerationItemContext *ctx) = 0;

  virtual void enterNamedNumber(ASNParser::NamedNumberContext *ctx) = 0;
  virtual void exitNamedNumber(ASNParser::NamedNumberContext *ctx) = 0;

  virtual void enterDefinedValue(ASNParser::DefinedValueContext *ctx) = 0;
  virtual void exitDefinedValue(ASNParser::DefinedValueContext *ctx) = 0;

  virtual void enterParameterizedValue(ASNParser::ParameterizedValueContext *ctx) = 0;
  virtual void exitParameterizedValue(ASNParser::ParameterizedValueContext *ctx) = 0;

  virtual void enterSimpleDefinedValue(ASNParser::SimpleDefinedValueContext *ctx) = 0;
  virtual void exitSimpleDefinedValue(ASNParser::SimpleDefinedValueContext *ctx) = 0;

  virtual void enterActualParameterList(ASNParser::ActualParameterListContext *ctx) = 0;
  virtual void exitActualParameterList(ASNParser::ActualParameterListContext *ctx) = 0;

  virtual void enterActualParameter(ASNParser::ActualParameterContext *ctx) = 0;
  virtual void exitActualParameter(ASNParser::ActualParameterContext *ctx) = 0;

  virtual void enterExceptionSpec(ASNParser::ExceptionSpecContext *ctx) = 0;
  virtual void exitExceptionSpec(ASNParser::ExceptionSpecContext *ctx) = 0;

  virtual void enterExceptionIdentification(ASNParser::ExceptionIdentificationContext *ctx) = 0;
  virtual void exitExceptionIdentification(ASNParser::ExceptionIdentificationContext *ctx) = 0;

  virtual void enterAdditionalEnumeration(ASNParser::AdditionalEnumerationContext *ctx) = 0;
  virtual void exitAdditionalEnumeration(ASNParser::AdditionalEnumerationContext *ctx) = 0;

  virtual void enterIntegerType(ASNParser::IntegerTypeContext *ctx) = 0;
  virtual void exitIntegerType(ASNParser::IntegerTypeContext *ctx) = 0;

  virtual void enterNamedNumberList(ASNParser::NamedNumberListContext *ctx) = 0;
  virtual void exitNamedNumberList(ASNParser::NamedNumberListContext *ctx) = 0;

  virtual void enterObjectidentifiertype(ASNParser::ObjectidentifiertypeContext *ctx) = 0;
  virtual void exitObjectidentifiertype(ASNParser::ObjectidentifiertypeContext *ctx) = 0;

  virtual void enterComponentRelationConstraint(ASNParser::ComponentRelationConstraintContext *ctx) = 0;
  virtual void exitComponentRelationConstraint(ASNParser::ComponentRelationConstraintContext *ctx) = 0;

  virtual void enterAtNotation(ASNParser::AtNotationContext *ctx) = 0;
  virtual void exitAtNotation(ASNParser::AtNotationContext *ctx) = 0;

  virtual void enterLevel(ASNParser::LevelContext *ctx) = 0;
  virtual void exitLevel(ASNParser::LevelContext *ctx) = 0;

  virtual void enterComponentIdList(ASNParser::ComponentIdListContext *ctx) = 0;
  virtual void exitComponentIdList(ASNParser::ComponentIdListContext *ctx) = 0;

  virtual void enterOctetStringType(ASNParser::OctetStringTypeContext *ctx) = 0;
  virtual void exitOctetStringType(ASNParser::OctetStringTypeContext *ctx) = 0;

  virtual void enterBitStringType(ASNParser::BitStringTypeContext *ctx) = 0;
  virtual void exitBitStringType(ASNParser::BitStringTypeContext *ctx) = 0;

  virtual void enterNamedBitList(ASNParser::NamedBitListContext *ctx) = 0;
  virtual void exitNamedBitList(ASNParser::NamedBitListContext *ctx) = 0;

  virtual void enterNamedBit(ASNParser::NamedBitContext *ctx) = 0;
  virtual void exitNamedBit(ASNParser::NamedBitContext *ctx) = 0;

  virtual void enterBooleanValue(ASNParser::BooleanValueContext *ctx) = 0;
  virtual void exitBooleanValue(ASNParser::BooleanValueContext *ctx) = 0;


};

