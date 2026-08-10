
// Generated from ./ASN.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "ASNParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ASNParser.
 */
class  ASNVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ASNParser.
   */
    virtual std::any visitModules(ASNParser::ModulesContext *context) = 0;

    virtual std::any visitModuleDefinition(ASNParser::ModuleDefinitionContext *context) = 0;

    virtual std::any visitTagDefault(ASNParser::TagDefaultContext *context) = 0;

    virtual std::any visitExtensionDefault(ASNParser::ExtensionDefaultContext *context) = 0;

    virtual std::any visitModuleBody(ASNParser::ModuleBodyContext *context) = 0;

    virtual std::any visitExports(ASNParser::ExportsContext *context) = 0;

    virtual std::any visitSymbolsExported(ASNParser::SymbolsExportedContext *context) = 0;

    virtual std::any visitImports(ASNParser::ImportsContext *context) = 0;

    virtual std::any visitSymbolsImported(ASNParser::SymbolsImportedContext *context) = 0;

    virtual std::any visitSymbolsFromModuleList(ASNParser::SymbolsFromModuleListContext *context) = 0;

    virtual std::any visitSymbolsFromModule(ASNParser::SymbolsFromModuleContext *context) = 0;

    virtual std::any visitGlobalModuleReference(ASNParser::GlobalModuleReferenceContext *context) = 0;

    virtual std::any visitAssignedIdentifier(ASNParser::AssignedIdentifierContext *context) = 0;

    virtual std::any visitSymbolList(ASNParser::SymbolListContext *context) = 0;

    virtual std::any visitSymbol(ASNParser::SymbolContext *context) = 0;

    virtual std::any visitAssignmentList(ASNParser::AssignmentListContext *context) = 0;

    virtual std::any visitAssignment(ASNParser::AssignmentContext *context) = 0;

    virtual std::any visitSequenceType(ASNParser::SequenceTypeContext *context) = 0;

    virtual std::any visitExtensionAndException(ASNParser::ExtensionAndExceptionContext *context) = 0;

    virtual std::any visitOptionalExtensionMarker(ASNParser::OptionalExtensionMarkerContext *context) = 0;

    virtual std::any visitComponentTypeLists(ASNParser::ComponentTypeListsContext *context) = 0;

    virtual std::any visitRootComponentTypeList(ASNParser::RootComponentTypeListContext *context) = 0;

    virtual std::any visitComponentTypeList(ASNParser::ComponentTypeListContext *context) = 0;

    virtual std::any visitComponentType(ASNParser::ComponentTypeContext *context) = 0;

    virtual std::any visitExtensionAdditions(ASNParser::ExtensionAdditionsContext *context) = 0;

    virtual std::any visitExtensionAdditionList(ASNParser::ExtensionAdditionListContext *context) = 0;

    virtual std::any visitExtensionAddition(ASNParser::ExtensionAdditionContext *context) = 0;

    virtual std::any visitExtensionAdditionGroup(ASNParser::ExtensionAdditionGroupContext *context) = 0;

    virtual std::any visitVersionNumber(ASNParser::VersionNumberContext *context) = 0;

    virtual std::any visitSequenceOfType(ASNParser::SequenceOfTypeContext *context) = 0;

    virtual std::any visitSizeConstraint(ASNParser::SizeConstraintContext *context) = 0;

    virtual std::any visitParameterizedAssignment(ASNParser::ParameterizedAssignmentContext *context) = 0;

    virtual std::any visitParameterList(ASNParser::ParameterListContext *context) = 0;

    virtual std::any visitParameter(ASNParser::ParameterContext *context) = 0;

    virtual std::any visitParamGovernor(ASNParser::ParamGovernorContext *context) = 0;

    virtual std::any visitGovernor(ASNParser::GovernorContext *context) = 0;

    virtual std::any visitObjectClassAssignment(ASNParser::ObjectClassAssignmentContext *context) = 0;

    virtual std::any visitObjectClass(ASNParser::ObjectClassContext *context) = 0;

    virtual std::any visitDefinedObjectClass(ASNParser::DefinedObjectClassContext *context) = 0;

    virtual std::any visitUsefulObjectClassReference(ASNParser::UsefulObjectClassReferenceContext *context) = 0;

    virtual std::any visitExternalObjectClassReference(ASNParser::ExternalObjectClassReferenceContext *context) = 0;

    virtual std::any visitObjectClassDefn(ASNParser::ObjectClassDefnContext *context) = 0;

    virtual std::any visitWithSyntaxSpec(ASNParser::WithSyntaxSpecContext *context) = 0;

    virtual std::any visitSyntaxList(ASNParser::SyntaxListContext *context) = 0;

    virtual std::any visitTokenOrGroupSpec(ASNParser::TokenOrGroupSpecContext *context) = 0;

    virtual std::any visitOptionalGroup(ASNParser::OptionalGroupContext *context) = 0;

    virtual std::any visitRequiredToken(ASNParser::RequiredTokenContext *context) = 0;

    virtual std::any visitLiteral(ASNParser::LiteralContext *context) = 0;

    virtual std::any visitPrimitiveFieldName(ASNParser::PrimitiveFieldNameContext *context) = 0;

    virtual std::any visitFieldSpec(ASNParser::FieldSpecContext *context) = 0;

    virtual std::any visitTypeFieldSpec(ASNParser::TypeFieldSpecContext *context) = 0;

    virtual std::any visitTypeOptionalitySpec(ASNParser::TypeOptionalitySpecContext *context) = 0;

    virtual std::any visitFixedTypeValueFieldSpec(ASNParser::FixedTypeValueFieldSpecContext *context) = 0;

    virtual std::any visitValueOptionalitySpec(ASNParser::ValueOptionalitySpecContext *context) = 0;

    virtual std::any visitVariableTypeValueFieldSpec(ASNParser::VariableTypeValueFieldSpecContext *context) = 0;

    virtual std::any visitFixedTypeValueSetFieldSpec(ASNParser::FixedTypeValueSetFieldSpecContext *context) = 0;

    virtual std::any visitValueSetOptionalitySpec(ASNParser::ValueSetOptionalitySpecContext *context) = 0;

    virtual std::any visitObject_(ASNParser::Object_Context *context) = 0;

    virtual std::any visitParameterizedObject(ASNParser::ParameterizedObjectContext *context) = 0;

    virtual std::any visitDefinedObject(ASNParser::DefinedObjectContext *context) = 0;

    virtual std::any visitObjectSet(ASNParser::ObjectSetContext *context) = 0;

    virtual std::any visitObjectSetSpec(ASNParser::ObjectSetSpecContext *context) = 0;

    virtual std::any visitFieldName(ASNParser::FieldNameContext *context) = 0;

    virtual std::any visitValueSet(ASNParser::ValueSetContext *context) = 0;

    virtual std::any visitElementSetSpecs(ASNParser::ElementSetSpecsContext *context) = 0;

    virtual std::any visitRootElementSetSpec(ASNParser::RootElementSetSpecContext *context) = 0;

    virtual std::any visitAdditionalElementSetSpec(ASNParser::AdditionalElementSetSpecContext *context) = 0;

    virtual std::any visitElementSetSpec(ASNParser::ElementSetSpecContext *context) = 0;

    virtual std::any visitUnions(ASNParser::UnionsContext *context) = 0;

    virtual std::any visitExclusions(ASNParser::ExclusionsContext *context) = 0;

    virtual std::any visitIntersections(ASNParser::IntersectionsContext *context) = 0;

    virtual std::any visitUnionMark(ASNParser::UnionMarkContext *context) = 0;

    virtual std::any visitIntersectionMark(ASNParser::IntersectionMarkContext *context) = 0;

    virtual std::any visitElements(ASNParser::ElementsContext *context) = 0;

    virtual std::any visitObjectSetElements(ASNParser::ObjectSetElementsContext *context) = 0;

    virtual std::any visitIntersectionElements(ASNParser::IntersectionElementsContext *context) = 0;

    virtual std::any visitSubtypeElements(ASNParser::SubtypeElementsContext *context) = 0;

    virtual std::any visitVariableTypeValueSetFieldSpec(ASNParser::VariableTypeValueSetFieldSpecContext *context) = 0;

    virtual std::any visitObjectFieldSpec(ASNParser::ObjectFieldSpecContext *context) = 0;

    virtual std::any visitObjectOptionalitySpec(ASNParser::ObjectOptionalitySpecContext *context) = 0;

    virtual std::any visitObjectSetFieldSpec(ASNParser::ObjectSetFieldSpecContext *context) = 0;

    virtual std::any visitObjectSetOptionalitySpec(ASNParser::ObjectSetOptionalitySpecContext *context) = 0;

    virtual std::any visitTypeAssignment(ASNParser::TypeAssignmentContext *context) = 0;

    virtual std::any visitValueAssignment(ASNParser::ValueAssignmentContext *context) = 0;

    virtual std::any visitAsnType(ASNParser::AsnTypeContext *context) = 0;

    virtual std::any visitBuiltinType(ASNParser::BuiltinTypeContext *context) = 0;

    virtual std::any visitObjectClassFieldType(ASNParser::ObjectClassFieldTypeContext *context) = 0;

    virtual std::any visitSetType(ASNParser::SetTypeContext *context) = 0;

    virtual std::any visitSetOfType(ASNParser::SetOfTypeContext *context) = 0;

    virtual std::any visitReferencedType(ASNParser::ReferencedTypeContext *context) = 0;

    virtual std::any visitDefinedType(ASNParser::DefinedTypeContext *context) = 0;

    virtual std::any visitConstraint(ASNParser::ConstraintContext *context) = 0;

    virtual std::any visitConstraintSpec(ASNParser::ConstraintSpecContext *context) = 0;

    virtual std::any visitUserDefinedConstraint(ASNParser::UserDefinedConstraintContext *context) = 0;

    virtual std::any visitGeneralConstraint(ASNParser::GeneralConstraintContext *context) = 0;

    virtual std::any visitUserDefinedConstraintParameter(ASNParser::UserDefinedConstraintParameterContext *context) = 0;

    virtual std::any visitTableConstraint(ASNParser::TableConstraintContext *context) = 0;

    virtual std::any visitSimpleTableConstraint(ASNParser::SimpleTableConstraintContext *context) = 0;

    virtual std::any visitContentsConstraint(ASNParser::ContentsConstraintContext *context) = 0;

    virtual std::any visitComponentPresenceLists(ASNParser::ComponentPresenceListsContext *context) = 0;

    virtual std::any visitComponentPresenceList(ASNParser::ComponentPresenceListContext *context) = 0;

    virtual std::any visitComponentPresence(ASNParser::ComponentPresenceContext *context) = 0;

    virtual std::any visitSubtypeConstraint(ASNParser::SubtypeConstraintContext *context) = 0;

    virtual std::any visitValue(ASNParser::ValueContext *context) = 0;

    virtual std::any visitBuiltinValue(ASNParser::BuiltinValueContext *context) = 0;

    virtual std::any visitObjectIdentifierValue(ASNParser::ObjectIdentifierValueContext *context) = 0;

    virtual std::any visitObjIdComponentsList(ASNParser::ObjIdComponentsListContext *context) = 0;

    virtual std::any visitObjIdComponents(ASNParser::ObjIdComponentsContext *context) = 0;

    virtual std::any visitIntegerValue(ASNParser::IntegerValueContext *context) = 0;

    virtual std::any visitChoiceValue(ASNParser::ChoiceValueContext *context) = 0;

    virtual std::any visitEnumeratedValue(ASNParser::EnumeratedValueContext *context) = 0;

    virtual std::any visitSignedNumber(ASNParser::SignedNumberContext *context) = 0;

    virtual std::any visitChoiceType(ASNParser::ChoiceTypeContext *context) = 0;

    virtual std::any visitAlternativeTypeLists(ASNParser::AlternativeTypeListsContext *context) = 0;

    virtual std::any visitExtensionAdditionAlternatives(ASNParser::ExtensionAdditionAlternativesContext *context) = 0;

    virtual std::any visitExtensionAdditionAlternativesList(ASNParser::ExtensionAdditionAlternativesListContext *context) = 0;

    virtual std::any visitExtensionAdditionAlternative(ASNParser::ExtensionAdditionAlternativeContext *context) = 0;

    virtual std::any visitExtensionAdditionAlternativesGroup(ASNParser::ExtensionAdditionAlternativesGroupContext *context) = 0;

    virtual std::any visitRootAlternativeTypeList(ASNParser::RootAlternativeTypeListContext *context) = 0;

    virtual std::any visitAlternativeTypeList(ASNParser::AlternativeTypeListContext *context) = 0;

    virtual std::any visitNamedType(ASNParser::NamedTypeContext *context) = 0;

    virtual std::any visitEnumeratedType(ASNParser::EnumeratedTypeContext *context) = 0;

    virtual std::any visitEnumerations(ASNParser::EnumerationsContext *context) = 0;

    virtual std::any visitRootEnumeration(ASNParser::RootEnumerationContext *context) = 0;

    virtual std::any visitEnumeration(ASNParser::EnumerationContext *context) = 0;

    virtual std::any visitEnumerationItem(ASNParser::EnumerationItemContext *context) = 0;

    virtual std::any visitNamedNumber(ASNParser::NamedNumberContext *context) = 0;

    virtual std::any visitDefinedValue(ASNParser::DefinedValueContext *context) = 0;

    virtual std::any visitParameterizedValue(ASNParser::ParameterizedValueContext *context) = 0;

    virtual std::any visitSimpleDefinedValue(ASNParser::SimpleDefinedValueContext *context) = 0;

    virtual std::any visitActualParameterList(ASNParser::ActualParameterListContext *context) = 0;

    virtual std::any visitActualParameter(ASNParser::ActualParameterContext *context) = 0;

    virtual std::any visitExceptionSpec(ASNParser::ExceptionSpecContext *context) = 0;

    virtual std::any visitExceptionIdentification(ASNParser::ExceptionIdentificationContext *context) = 0;

    virtual std::any visitAdditionalEnumeration(ASNParser::AdditionalEnumerationContext *context) = 0;

    virtual std::any visitIntegerType(ASNParser::IntegerTypeContext *context) = 0;

    virtual std::any visitNamedNumberList(ASNParser::NamedNumberListContext *context) = 0;

    virtual std::any visitObjectidentifiertype(ASNParser::ObjectidentifiertypeContext *context) = 0;

    virtual std::any visitComponentRelationConstraint(ASNParser::ComponentRelationConstraintContext *context) = 0;

    virtual std::any visitAtNotation(ASNParser::AtNotationContext *context) = 0;

    virtual std::any visitLevel(ASNParser::LevelContext *context) = 0;

    virtual std::any visitComponentIdList(ASNParser::ComponentIdListContext *context) = 0;

    virtual std::any visitOctetStringType(ASNParser::OctetStringTypeContext *context) = 0;

    virtual std::any visitBitStringType(ASNParser::BitStringTypeContext *context) = 0;

    virtual std::any visitNamedBitList(ASNParser::NamedBitListContext *context) = 0;

    virtual std::any visitNamedBit(ASNParser::NamedBitContext *context) = 0;

    virtual std::any visitBooleanValue(ASNParser::BooleanValueContext *context) = 0;


};

