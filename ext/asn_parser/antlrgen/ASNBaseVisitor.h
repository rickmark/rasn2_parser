
// Generated from ./ASN.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "ASNVisitor.h"


/**
 * This class provides an empty implementation of ASNVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ASNBaseVisitor : public ASNVisitor {
public:

  virtual std::any visitModules(ASNParser::ModulesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleDefinition(ASNParser::ModuleDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTagDefault(ASNParser::TagDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionDefault(ASNParser::ExtensionDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleBody(ASNParser::ModuleBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExports(ASNParser::ExportsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSymbolsExported(ASNParser::SymbolsExportedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImports(ASNParser::ImportsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSymbolsImported(ASNParser::SymbolsImportedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSymbolsFromModuleList(ASNParser::SymbolsFromModuleListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSymbolsFromModule(ASNParser::SymbolsFromModuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGlobalModuleReference(ASNParser::GlobalModuleReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignedIdentifier(ASNParser::AssignedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSymbolList(ASNParser::SymbolListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSymbol(ASNParser::SymbolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentList(ASNParser::AssignmentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(ASNParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSequenceType(ASNParser::SequenceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionAndException(ASNParser::ExtensionAndExceptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionalExtensionMarker(ASNParser::OptionalExtensionMarkerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentTypeLists(ASNParser::ComponentTypeListsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRootComponentTypeList(ASNParser::RootComponentTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentTypeList(ASNParser::ComponentTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentType(ASNParser::ComponentTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionAdditions(ASNParser::ExtensionAdditionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionAdditionList(ASNParser::ExtensionAdditionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionAddition(ASNParser::ExtensionAdditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionAdditionGroup(ASNParser::ExtensionAdditionGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVersionNumber(ASNParser::VersionNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSequenceOfType(ASNParser::SequenceOfTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSizeConstraint(ASNParser::SizeConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterizedAssignment(ASNParser::ParameterizedAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterList(ASNParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(ASNParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamGovernor(ASNParser::ParamGovernorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGovernor(ASNParser::GovernorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectClassAssignment(ASNParser::ObjectClassAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectClass(ASNParser::ObjectClassContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinedObjectClass(ASNParser::DefinedObjectClassContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUsefulObjectClassReference(ASNParser::UsefulObjectClassReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternalObjectClassReference(ASNParser::ExternalObjectClassReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectClassDefn(ASNParser::ObjectClassDefnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWithSyntaxSpec(ASNParser::WithSyntaxSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSyntaxList(ASNParser::SyntaxListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTokenOrGroupSpec(ASNParser::TokenOrGroupSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionalGroup(ASNParser::OptionalGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRequiredToken(ASNParser::RequiredTokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(ASNParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitiveFieldName(ASNParser::PrimitiveFieldNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFieldSpec(ASNParser::FieldSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeFieldSpec(ASNParser::TypeFieldSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeOptionalitySpec(ASNParser::TypeOptionalitySpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFixedTypeValueFieldSpec(ASNParser::FixedTypeValueFieldSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueOptionalitySpec(ASNParser::ValueOptionalitySpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableTypeValueFieldSpec(ASNParser::VariableTypeValueFieldSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFixedTypeValueSetFieldSpec(ASNParser::FixedTypeValueSetFieldSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueSetOptionalitySpec(ASNParser::ValueSetOptionalitySpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObject_(ASNParser::Object_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterizedObject(ASNParser::ParameterizedObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinedObject(ASNParser::DefinedObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectSet(ASNParser::ObjectSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectSetSpec(ASNParser::ObjectSetSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFieldName(ASNParser::FieldNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueSet(ASNParser::ValueSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElementSetSpecs(ASNParser::ElementSetSpecsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRootElementSetSpec(ASNParser::RootElementSetSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditionalElementSetSpec(ASNParser::AdditionalElementSetSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElementSetSpec(ASNParser::ElementSetSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnions(ASNParser::UnionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExclusions(ASNParser::ExclusionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntersections(ASNParser::IntersectionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnionMark(ASNParser::UnionMarkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntersectionMark(ASNParser::IntersectionMarkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElements(ASNParser::ElementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectSetElements(ASNParser::ObjectSetElementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntersectionElements(ASNParser::IntersectionElementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubtypeElements(ASNParser::SubtypeElementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableTypeValueSetFieldSpec(ASNParser::VariableTypeValueSetFieldSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectFieldSpec(ASNParser::ObjectFieldSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectOptionalitySpec(ASNParser::ObjectOptionalitySpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectSetFieldSpec(ASNParser::ObjectSetFieldSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectSetOptionalitySpec(ASNParser::ObjectSetOptionalitySpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeAssignment(ASNParser::TypeAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueAssignment(ASNParser::ValueAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAsnType(ASNParser::AsnTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBuiltinType(ASNParser::BuiltinTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectClassFieldType(ASNParser::ObjectClassFieldTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetType(ASNParser::SetTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetOfType(ASNParser::SetOfTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReferencedType(ASNParser::ReferencedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinedType(ASNParser::DefinedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraint(ASNParser::ConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraintSpec(ASNParser::ConstraintSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUserDefinedConstraint(ASNParser::UserDefinedConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneralConstraint(ASNParser::GeneralConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUserDefinedConstraintParameter(ASNParser::UserDefinedConstraintParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableConstraint(ASNParser::TableConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleTableConstraint(ASNParser::SimpleTableConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContentsConstraint(ASNParser::ContentsConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentPresenceLists(ASNParser::ComponentPresenceListsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentPresenceList(ASNParser::ComponentPresenceListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentPresence(ASNParser::ComponentPresenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubtypeConstraint(ASNParser::SubtypeConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue(ASNParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBuiltinValue(ASNParser::BuiltinValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectIdentifierValue(ASNParser::ObjectIdentifierValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjIdComponentsList(ASNParser::ObjIdComponentsListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjIdComponents(ASNParser::ObjIdComponentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegerValue(ASNParser::IntegerValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChoiceValue(ASNParser::ChoiceValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumeratedValue(ASNParser::EnumeratedValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSignedNumber(ASNParser::SignedNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChoiceType(ASNParser::ChoiceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlternativeTypeLists(ASNParser::AlternativeTypeListsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionAdditionAlternatives(ASNParser::ExtensionAdditionAlternativesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionAdditionAlternativesList(ASNParser::ExtensionAdditionAlternativesListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionAdditionAlternative(ASNParser::ExtensionAdditionAlternativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionAdditionAlternativesGroup(ASNParser::ExtensionAdditionAlternativesGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRootAlternativeTypeList(ASNParser::RootAlternativeTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlternativeTypeList(ASNParser::AlternativeTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedType(ASNParser::NamedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumeratedType(ASNParser::EnumeratedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumerations(ASNParser::EnumerationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRootEnumeration(ASNParser::RootEnumerationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumeration(ASNParser::EnumerationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumerationItem(ASNParser::EnumerationItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedNumber(ASNParser::NamedNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinedValue(ASNParser::DefinedValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterizedValue(ASNParser::ParameterizedValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleDefinedValue(ASNParser::SimpleDefinedValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActualParameterList(ASNParser::ActualParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActualParameter(ASNParser::ActualParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExceptionSpec(ASNParser::ExceptionSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExceptionIdentification(ASNParser::ExceptionIdentificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditionalEnumeration(ASNParser::AdditionalEnumerationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegerType(ASNParser::IntegerTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedNumberList(ASNParser::NamedNumberListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectidentifiertype(ASNParser::ObjectidentifiertypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentRelationConstraint(ASNParser::ComponentRelationConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtNotation(ASNParser::AtNotationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLevel(ASNParser::LevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentIdList(ASNParser::ComponentIdListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOctetStringType(ASNParser::OctetStringTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitStringType(ASNParser::BitStringTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedBitList(ASNParser::NamedBitListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedBit(ASNParser::NamedBitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanValue(ASNParser::BooleanValueContext *ctx) override {
    return visitChildren(ctx);
  }


};

