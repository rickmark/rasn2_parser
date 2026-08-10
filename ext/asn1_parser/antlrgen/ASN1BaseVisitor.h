
#include <regex>


// Generated from ./ASN1.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "ASN1Visitor.h"


/**
 * This class provides an empty implementation of ASN1Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ASN1BaseVisitor : public ASN1Visitor {
public:

  virtual std::any visitModuleDefinition(ASN1Parser::ModuleDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleIdentifier(ASN1Parser::ModuleIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinitiveIdentifier(ASN1Parser::DefinitiveIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinitiveObjIdComponentList(ASN1Parser::DefinitiveObjIdComponentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinitiveObjIdComponent(ASN1Parser::DefinitiveObjIdComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinitiveNumberForm(ASN1Parser::DefinitiveNumberFormContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinitiveNameAndNumberForm(ASN1Parser::DefinitiveNameAndNumberFormContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTagDefault(ASN1Parser::TagDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionDefault(ASN1Parser::ExtensionDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleBody(ASN1Parser::ModuleBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExports(ASN1Parser::ExportsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSymbolsExported(ASN1Parser::SymbolsExportedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImports(ASN1Parser::ImportsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSymbolsImported(ASN1Parser::SymbolsImportedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSymbolsFromModuleList(ASN1Parser::SymbolsFromModuleListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSymbolsFromModule(ASN1Parser::SymbolsFromModuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGlobalModuleReference(ASN1Parser::GlobalModuleReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignedIdentifier(ASN1Parser::AssignedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSymbolList(ASN1Parser::SymbolListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSymbol(ASN1Parser::SymbolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReference(ASN1Parser::ReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentList(ASN1Parser::AssignmentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(ASN1Parser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinedType(ASN1Parser::DefinedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinedValue(ASN1Parser::DefinedValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternalTypeReference(ASN1Parser::ExternalTypeReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternalValueReference(ASN1Parser::ExternalValueReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeAssignment(ASN1Parser::TypeAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueAssignment(ASN1Parser::ValueAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueSetTypeAssignment(ASN1Parser::ValueSetTypeAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueSet(ASN1Parser::ValueSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(ASN1Parser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBuiltinType(ASN1Parser::BuiltinTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReferencedType(ASN1Parser::ReferencedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedType(ASN1Parser::NamedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue(ASN1Parser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBuiltinValue(ASN1Parser::BuiltinValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReferencedValue(ASN1Parser::ReferencedValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedValue(ASN1Parser::NamedValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanType(ASN1Parser::BooleanTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanValue(ASN1Parser::BooleanValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegerType(ASN1Parser::IntegerTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedNumberList(ASN1Parser::NamedNumberListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedNumber(ASN1Parser::NamedNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSignedNumber(ASN1Parser::SignedNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegerValue(ASN1Parser::IntegerValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumeratedType(ASN1Parser::EnumeratedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumerations(ASN1Parser::EnumerationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRootEnumeration(ASN1Parser::RootEnumerationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditionalEnumeration(ASN1Parser::AdditionalEnumerationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumeration(ASN1Parser::EnumerationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumerationItem(ASN1Parser::EnumerationItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumeratedValue(ASN1Parser::EnumeratedValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitStringType(ASN1Parser::BitStringTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedBitList(ASN1Parser::NamedBitListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedBit(ASN1Parser::NamedBitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitStringValue(ASN1Parser::BitStringValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierList(ASN1Parser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOctetStringType(ASN1Parser::OctetStringTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOctetStringValue(ASN1Parser::OctetStringValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullType(ASN1Parser::NullTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullValue(ASN1Parser::NullValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSequenceType(ASN1Parser::SequenceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentTypeLists(ASN1Parser::ComponentTypeListsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRootComponentTypeList(ASN1Parser::RootComponentTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionEndMarker(ASN1Parser::ExtensionEndMarkerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionAdditions(ASN1Parser::ExtensionAdditionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionAdditionList(ASN1Parser::ExtensionAdditionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionAddition(ASN1Parser::ExtensionAdditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionAdditionGroup(ASN1Parser::ExtensionAdditionGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVersionNumber(ASN1Parser::VersionNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentTypeList(ASN1Parser::ComponentTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentType(ASN1Parser::ComponentTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSequenceValue(ASN1Parser::SequenceValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentValueList(ASN1Parser::ComponentValueListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSequenceOfType(ASN1Parser::SequenceOfTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSequenceOfValue(ASN1Parser::SequenceOfValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueList(ASN1Parser::ValueListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedValueList(ASN1Parser::NamedValueListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetType(ASN1Parser::SetTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetValue(ASN1Parser::SetValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetOfType(ASN1Parser::SetOfTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetOfValue(ASN1Parser::SetOfValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChoiceType(ASN1Parser::ChoiceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlternativeTypeLists(ASN1Parser::AlternativeTypeListsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRootAlternativeTypeList(ASN1Parser::RootAlternativeTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionAdditionAlternatives(ASN1Parser::ExtensionAdditionAlternativesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionAdditionAlternativesList(ASN1Parser::ExtensionAdditionAlternativesListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionAdditionAlternative(ASN1Parser::ExtensionAdditionAlternativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionAdditionAlternativesGroup(ASN1Parser::ExtensionAdditionAlternativesGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlternativeTypeList(ASN1Parser::AlternativeTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTaggedType(ASN1Parser::TaggedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTag(ASN1Parser::TagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassNumber(ASN1Parser::ClassNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassP(ASN1Parser::ClassPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectIdentifierType(ASN1Parser::ObjectIdentifierTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectIdentifierValue(ASN1Parser::ObjectIdentifierValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjIdComponentsList(ASN1Parser::ObjIdComponentsListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjIdComponents(ASN1Parser::ObjIdComponentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNameForm(ASN1Parser::NameFormContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumberForm(ASN1Parser::NumberFormContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNameAndNumberForm(ASN1Parser::NameAndNumberFormContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionAndException(ASN1Parser::ExtensionAndExceptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExceptionSpec(ASN1Parser::ExceptionSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExceptionIdentification(ASN1Parser::ExceptionIdentificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionalExtensionMarker(ASN1Parser::OptionalExtensionMarkerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharacterStringType(ASN1Parser::CharacterStringTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharacterStringValue(ASN1Parser::CharacterStringValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRestrictedCharacterStringType(ASN1Parser::RestrictedCharacterStringTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRestrictedCharacterStringValue(ASN1Parser::RestrictedCharacterStringValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharacterStringList(ASN1Parser::CharacterStringListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharSyms(ASN1Parser::CharSymsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharsDefn(ASN1Parser::CharsDefnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuadruple(ASN1Parser::QuadrupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroup(ASN1Parser::GroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlane(ASN1Parser::PlaneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRow(ASN1Parser::RowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCell(ASN1Parser::CellContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTuple(ASN1Parser::TupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableColumn(ASN1Parser::TableColumnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableRow(ASN1Parser::TableRowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnrestrictedCharacterStringType(ASN1Parser::UnrestrictedCharacterStringTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneralizedTimeType(ASN1Parser::GeneralizedTimeTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUTCTimeType(ASN1Parser::UTCTimeTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstrainedType(ASN1Parser::ConstrainedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeWithConstraint(ASN1Parser::TypeWithConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraint(ASN1Parser::ConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraintSpec(ASN1Parser::ConstraintSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubtypeConstraint(ASN1Parser::SubtypeConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneralConstraint(ASN1Parser::GeneralConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElementSetSpecs(ASN1Parser::ElementSetSpecsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRootElementSetSpec(ASN1Parser::RootElementSetSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditionalElementSetSpec(ASN1Parser::AdditionalElementSetSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElementSetSpec(ASN1Parser::ElementSetSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnions(ASN1Parser::UnionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUElems(ASN1Parser::UElemsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntersections(ASN1Parser::IntersectionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIElems(ASN1Parser::IElemsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntersectionElements(ASN1Parser::IntersectionElementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElems(ASN1Parser::ElemsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExclusions(ASN1Parser::ExclusionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnionMark(ASN1Parser::UnionMarkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntersectionMark(ASN1Parser::IntersectionMarkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElements(ASN1Parser::ElementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubtypeElements(ASN1Parser::SubtypeElementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleValue(ASN1Parser::SingleValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContainedSubtype(ASN1Parser::ContainedSubtypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIncludes(ASN1Parser::IncludesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueRange(ASN1Parser::ValueRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLowerEndpoint(ASN1Parser::LowerEndpointContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpperEndpoint(ASN1Parser::UpperEndpointContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLowerEndValue(ASN1Parser::LowerEndValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpperEndValue(ASN1Parser::UpperEndValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSizeConstraint(ASN1Parser::SizeConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPermittedAlphabet(ASN1Parser::PermittedAlphabetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUserDefinedConstraint(ASN1Parser::UserDefinedConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUserDefinedConstraintParameter(ASN1Parser::UserDefinedConstraintParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableConstraint(ASN1Parser::TableConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleTableConstraint(ASN1Parser::SimpleTableConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentRelationConstraint(ASN1Parser::ComponentRelationConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtNotation(ASN1Parser::AtNotationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLevel(ASN1Parser::LevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponentIdList(ASN1Parser::ComponentIdListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContentsConstraint(ASN1Parser::ContentsConstraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinedObjectClass(ASN1Parser::DefinedObjectClassContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinedObject(ASN1Parser::DefinedObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinedObjectSet(ASN1Parser::DefinedObjectSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternalObjectClassReference(ASN1Parser::ExternalObjectClassReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternalObjectReference(ASN1Parser::ExternalObjectReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternalObjectSetReference(ASN1Parser::ExternalObjectSetReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUsefulObjectClassReference(ASN1Parser::UsefulObjectClassReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectClassAssignment(ASN1Parser::ObjectClassAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectClass(ASN1Parser::ObjectClassContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectClassDefn(ASN1Parser::ObjectClassDefnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWithSyntaxSpec(ASN1Parser::WithSyntaxSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFieldSpec(ASN1Parser::FieldSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeFieldSpec(ASN1Parser::TypeFieldSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeOptionalitySpec(ASN1Parser::TypeOptionalitySpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFixedTypeValueFieldSpec(ASN1Parser::FixedTypeValueFieldSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueOptionalitySpec(ASN1Parser::ValueOptionalitySpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableTypeValueFieldSpec(ASN1Parser::VariableTypeValueFieldSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFixedTypeValueSetFieldSpec(ASN1Parser::FixedTypeValueSetFieldSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueSetOptionalitySpec(ASN1Parser::ValueSetOptionalitySpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableTypeValueSetFieldSpec(ASN1Parser::VariableTypeValueSetFieldSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectFieldSpec(ASN1Parser::ObjectFieldSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectOptionalitySpec(ASN1Parser::ObjectOptionalitySpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectSetFieldSpec(ASN1Parser::ObjectSetFieldSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectSetOptionalitySpec(ASN1Parser::ObjectSetOptionalitySpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitiveFieldName(ASN1Parser::PrimitiveFieldNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFieldName(ASN1Parser::FieldNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSyntaxList(ASN1Parser::SyntaxListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTokenOrGroupSpec(ASN1Parser::TokenOrGroupSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionalGroup(ASN1Parser::OptionalGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRequiredToken(ASN1Parser::RequiredTokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(ASN1Parser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectAssignment(ASN1Parser::ObjectAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObject(ASN1Parser::ObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectDefn(ASN1Parser::ObjectDefnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefaultSyntax(ASN1Parser::DefaultSyntaxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFieldSetting(ASN1Parser::FieldSettingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinedSyntax(ASN1Parser::DefinedSyntaxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinedSyntaxToken(ASN1Parser::DefinedSyntaxTokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetting(ASN1Parser::SettingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectSetAssignment(ASN1Parser::ObjectSetAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectSet(ASN1Parser::ObjectSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectSetSpec(ASN1Parser::ObjectSetSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectSetElements(ASN1Parser::ObjectSetElementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectClassFieldType(ASN1Parser::ObjectClassFieldTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectClassFieldValue(ASN1Parser::ObjectClassFieldValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpenTypeFieldVal(ASN1Parser::OpenTypeFieldValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFixedTypeFieldVal(ASN1Parser::FixedTypeFieldValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueFromObject(ASN1Parser::ValueFromObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueSetFromObjects(ASN1Parser::ValueSetFromObjectsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeFromObject(ASN1Parser::TypeFromObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectFromObject(ASN1Parser::ObjectFromObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectSetFromObjects(ASN1Parser::ObjectSetFromObjectsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReferencedObjects(ASN1Parser::ReferencedObjectsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnyType(ASN1Parser::AnyTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectclassreference(ASN1Parser::ObjectclassreferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectreference(ASN1Parser::ObjectreferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectsetreference(ASN1Parser::ObjectsetreferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypefieldreference(ASN1Parser::TypefieldreferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValuefieldreference(ASN1Parser::ValuefieldreferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValuesetfieldreference(ASN1Parser::ValuesetfieldreferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectfieldreference(ASN1Parser::ObjectfieldreferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectsetfieldreference(ASN1Parser::ObjectsetfieldreferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWord(ASN1Parser::WordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterizedAssignment(ASN1Parser::ParameterizedAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterizedTypeAssignment(ASN1Parser::ParameterizedTypeAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterizedValueAssignment(ASN1Parser::ParameterizedValueAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterizedValueSetTypeAssignment(ASN1Parser::ParameterizedValueSetTypeAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterizedObjectClassAssignment(ASN1Parser::ParameterizedObjectClassAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterizedObjectAssignment(ASN1Parser::ParameterizedObjectAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterizedObjectSetAssignment(ASN1Parser::ParameterizedObjectSetAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterList(ASN1Parser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(ASN1Parser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamGovernor(ASN1Parser::ParamGovernorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGovernor(ASN1Parser::GovernorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDummyGovernor(ASN1Parser::DummyGovernorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDummyReference(ASN1Parser::DummyReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterizedReference(ASN1Parser::ParameterizedReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterizedType(ASN1Parser::ParameterizedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleDefinedType(ASN1Parser::SimpleDefinedTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterizedValue(ASN1Parser::ParameterizedValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleDefinedValue(ASN1Parser::SimpleDefinedValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterizedValueSetType(ASN1Parser::ParameterizedValueSetTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterizedObjectClass(ASN1Parser::ParameterizedObjectClassContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterizedObjectSet(ASN1Parser::ParameterizedObjectSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterizedObject(ASN1Parser::ParameterizedObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActualParameterList(ASN1Parser::ActualParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActualParameter(ASN1Parser::ActualParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypereference(ASN1Parser::TypereferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(ASN1Parser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValuereference(ASN1Parser::ValuereferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModulereference(ASN1Parser::ModulereferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(ASN1Parser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBstring(ASN1Parser::BstringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHstring(ASN1Parser::HstringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCstring(ASN1Parser::CstringContext *ctx) override {
    return visitChildren(ctx);
  }


};

