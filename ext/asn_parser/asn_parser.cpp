#include <iostream>

#include <antlr4-runtime.h>

#include "antlrgen/ASNParser.h"
#include "antlrgen/ASNBaseVisitor.h"
#include "antlrgen/ASNLexer.h"

#include <rice/rice.hpp>
#include <rice/stl.hpp>

#ifdef _WIN32
#undef OPTIONAL
#undef IN
#undef OUT
#endif

#undef FALSE
#undef TRUE

#undef TYPE

using namespace std;
using namespace Rice;
using namespace antlr4;

Class rb_cModulesContext;
Class rb_cModuleDefinitionContext;
Class rb_cTagDefaultContext;
Class rb_cExtensionDefaultContext;
Class rb_cModuleBodyContext;
Class rb_cExportsContext;
Class rb_cImportsContext;
Class rb_cAssignmentListContext;
Class rb_cSymbolsExportedContext;
Class rb_cSymbolListContext;
Class rb_cSymbolsImportedContext;
Class rb_cSymbolsFromModuleListContext;
Class rb_cSymbolsFromModuleContext;
Class rb_cGlobalModuleReferenceContext;
Class rb_cAssignedIdentifierContext;
Class rb_cSymbolContext;
Class rb_cAssignmentContext;
Class rb_cValueAssignmentContext;
Class rb_cTypeAssignmentContext;
Class rb_cParameterizedAssignmentContext;
Class rb_cObjectClassAssignmentContext;
Class rb_cSequenceTypeContext;
Class rb_cExtensionAndExceptionContext;
Class rb_cOptionalExtensionMarkerContext;
Class rb_cComponentTypeListsContext;
Class rb_cExceptionSpecContext;
Class rb_cRootComponentTypeListContext;
Class rb_cExtensionAdditionsContext;
Class rb_cComponentTypeListContext;
Class rb_cComponentTypeContext;
Class rb_cNamedTypeContext;
Class rb_cValueContext;
Class rb_cAsnTypeContext;
Class rb_cExtensionAdditionListContext;
Class rb_cExtensionAdditionContext;
Class rb_cExtensionAdditionGroupContext;
Class rb_cVersionNumberContext;
Class rb_cSequenceOfTypeContext;
Class rb_cConstraintContext;
Class rb_cSizeConstraintContext;
Class rb_cParameterListContext;
Class rb_cValueSetContext;
Class rb_cDefinedObjectClassContext;
Class rb_cObject_Context;
Class rb_cObjectClassContext;
Class rb_cObjectSetContext;
Class rb_cParameterContext;
Class rb_cParamGovernorContext;
Class rb_cGovernorContext;
Class rb_cObjectClassDefnContext;
Class rb_cUsefulObjectClassReferenceContext;
Class rb_cExternalObjectClassReferenceContext;
Class rb_cFieldSpecContext;
Class rb_cWithSyntaxSpecContext;
Class rb_cSyntaxListContext;
Class rb_cTokenOrGroupSpecContext;
Class rb_cRequiredTokenContext;
Class rb_cOptionalGroupContext;
Class rb_cLiteralContext;
Class rb_cPrimitiveFieldNameContext;
Class rb_cFieldNameContext;
Class rb_cTypeOptionalitySpecContext;
Class rb_cValueSetOptionalitySpecContext;
Class rb_cValueOptionalitySpecContext;
Class rb_cTypeFieldSpecContext;
Class rb_cFixedTypeValueFieldSpecContext;
Class rb_cVariableTypeValueFieldSpecContext;
Class rb_cFixedTypeValueSetFieldSpecContext;
Class rb_cDefinedObjectContext;
Class rb_cParameterizedObjectContext;
Class rb_cActualParameterListContext;
Class rb_cObjectSetSpecContext;
Class rb_cRootElementSetSpecContext;
Class rb_cAdditionalElementSetSpecContext;
Class rb_cElementSetSpecsContext;
Class rb_cElementSetSpecContext;
Class rb_cUnionsContext;
Class rb_cExclusionsContext;
Class rb_cIntersectionsContext;
Class rb_cUnionMarkContext;
Class rb_cElementsContext;
Class rb_cIntersectionElementsContext;
Class rb_cIntersectionMarkContext;
Class rb_cSubtypeElementsContext;
Class rb_cObjectSetElementsContext;
Class rb_cVariableTypeValueSetFieldSpecContext;
Class rb_cObjectFieldSpecContext;
Class rb_cObjectOptionalitySpecContext;
Class rb_cObjectSetFieldSpecContext;
Class rb_cObjectSetOptionalitySpecContext;
Class rb_cBuiltinTypeContext;
Class rb_cReferencedTypeContext;
Class rb_cOctetStringTypeContext;
Class rb_cBitStringTypeContext;
Class rb_cChoiceTypeContext;
Class rb_cEnumeratedTypeContext;
Class rb_cIntegerTypeContext;
Class rb_cSetTypeContext;
Class rb_cSetOfTypeContext;
Class rb_cObjectidentifiertypeContext;
Class rb_cObjectClassFieldTypeContext;
Class rb_cDefinedTypeContext;
Class rb_cConstraintSpecContext;
Class rb_cGeneralConstraintContext;
Class rb_cSubtypeConstraintContext;
Class rb_cUserDefinedConstraintContext;
Class rb_cUserDefinedConstraintParameterContext;
Class rb_cTableConstraintContext;
Class rb_cContentsConstraintContext;
Class rb_cComponentRelationConstraintContext;
Class rb_cSimpleTableConstraintContext;
Class rb_cComponentPresenceListsContext;
Class rb_cComponentPresenceListContext;
Class rb_cComponentPresenceContext;
Class rb_cBuiltinValueContext;
Class rb_cEnumeratedValueContext;
Class rb_cIntegerValueContext;
Class rb_cChoiceValueContext;
Class rb_cObjectIdentifierValueContext;
Class rb_cBooleanValueContext;
Class rb_cObjIdComponentsListContext;
Class rb_cObjIdComponentsContext;
Class rb_cDefinedValueContext;
Class rb_cSignedNumberContext;
Class rb_cAlternativeTypeListsContext;
Class rb_cRootAlternativeTypeListContext;
Class rb_cExtensionAdditionAlternativesContext;
Class rb_cExtensionAdditionAlternativesListContext;
Class rb_cExtensionAdditionAlternativeContext;
Class rb_cExtensionAdditionAlternativesGroupContext;
Class rb_cAlternativeTypeListContext;
Class rb_cEnumerationsContext;
Class rb_cRootEnumerationContext;
Class rb_cAdditionalEnumerationContext;
Class rb_cEnumerationContext;
Class rb_cEnumerationItemContext;
Class rb_cNamedNumberContext;
Class rb_cParameterizedValueContext;
Class rb_cSimpleDefinedValueContext;
Class rb_cActualParameterContext;
Class rb_cExceptionIdentificationContext;
Class rb_cNamedNumberListContext;
Class rb_cAtNotationContext;
Class rb_cComponentIdListContext;
Class rb_cLevelContext;
Class rb_cNamedBitListContext;
Class rb_cNamedBitContext;
Class rb_cToken;
Class rb_cParser;
Class rb_cParseTree;
Class rb_cTerminalNode;
Class rb_cContextProxy;

namespace Rice::detail {
  template <>
  class To_Ruby<Token*> {
  public:
    VALUE convert(Token* const &x) {
      if (!x) return Qnil;
      return Data_Object<Token>(x, false, rb_cToken);
    }
  };

  template <>
  class To_Ruby<tree::ParseTree*> {
  public:
    VALUE convert(tree::ParseTree* const &x) {
      if (!x) return Qnil;
      return Data_Object<tree::ParseTree>(x, false, rb_cParseTree);
    }
  };

  template <>
  class To_Ruby<tree::TerminalNode*> {
  public:
    VALUE convert(tree::TerminalNode* const &x) {
      if (!x) return Qnil;
      return Data_Object<tree::TerminalNode>(x, false, rb_cTerminalNode);
    }
  };
}

class ContextProxy {
public:
  ContextProxy(tree::ParseTree* orig) {
    this -> orig = orig;
  }

  tree::ParseTree* getOriginal() {
    return orig;
  }

  std::string getText() {
    return orig -> getText();
  }

  Object getStart() {
    auto token = ((ParserRuleContext*) orig) -> getStart();

    return detail::To_Ruby<Token*>().convert(token);
  }

  Object getStop() {
    auto token = ((ParserRuleContext*) orig) -> getStop();

    return detail::To_Ruby<Token*>().convert(token);
  }

  Array getChildren() {
    Array children;
    if (orig != nullptr) {
      for (auto it = orig -> children.begin(); it != orig -> children.end(); it ++) {
        Object parseTree = ContextProxy::wrapParseTree(*it);

        if (!parseTree.is_nil()) {
          children.push(parseTree);
        }
      }
    }
    return children;
  }

  Object getParent() {
    return orig == nullptr ? Rice::Object(Qnil) : ContextProxy::wrapParseTree(orig -> parent);
  }

  size_t childCount() {
    return orig == nullptr ? 0 : orig -> children.size();
  }

  bool doubleEquals(Object other) {
    if (other.is_a(rb_cContextProxy)) {
      return detail::From_Ruby<ContextProxy*>().convert(other) -> getOriginal() == getOriginal();
    } else {
      return false;
    }
  }

private:

  static Object wrapParseTree(tree::ParseTree* node);

protected:
  tree::ParseTree* orig = nullptr;
};

class TerminalNodeProxy : public ContextProxy {
public:
  TerminalNodeProxy(tree::ParseTree* tree) : ContextProxy(tree) { }
};


class ModulesContextProxy : public ContextProxy {
public:
  ModulesContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object moduleDefinition();
  Object moduleDefinitionAt(size_t i);
  Object EOF();
};

class ModuleDefinitionContextProxy : public ContextProxy {
public:
  ModuleDefinitionContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object tagDefault();
  Object extensionDefault();
  Object moduleBody();
  Object IDENTIFIER();
  Object IDENTIFIERAt(size_t i);
  Object DEFINITIONS_LITERAL();
  Object ASSIGN_OP();
  Object BEGIN_LITERAL();
  Object END_LITERAL();
  Object L_BRACE();
  Object R_BRACE();
  Object L_PARAN();
  Object L_PARANAt(size_t i);
  Object NUMBER();
  Object NUMBERAt(size_t i);
  Object R_PARAN();
  Object R_PARANAt(size_t i);
};

class TagDefaultContextProxy : public ContextProxy {
public:
  TagDefaultContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object TAGS_LITERAL();
  Object EXPLICIT_LITERAL();
  Object IMPLICIT_LITERAL();
  Object AUTOMATIC_LITERAL();
};

class ExtensionDefaultContextProxy : public ContextProxy {
public:
  ExtensionDefaultContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object EXTENSIBILITY_LITERAL();
  Object IMPLIED_LITERAL();
};

class ModuleBodyContextProxy : public ContextProxy {
public:
  ModuleBodyContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object exports();
  Object imports();
  Object assignmentList();

};

class ExportsContextProxy : public ContextProxy {
public:
  ExportsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object symbolsExported();
  Object EXPORTS_LITERAL();
  Object SEMI_COLON();
  Object ALL_LITERAL();
};

class ImportsContextProxy : public ContextProxy {
public:
  ImportsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object symbolsImported();
  Object IMPORTS_LITERAL();
  Object SEMI_COLON();
};

class AssignmentListContextProxy : public ContextProxy {
public:
  AssignmentListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object assignment();
  Object assignmentAt(size_t i);

};

class SymbolsExportedContextProxy : public ContextProxy {
public:
  SymbolsExportedContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object symbolList();

};

class SymbolListContextProxy : public ContextProxy {
public:
  SymbolListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object symbol();
  Object symbolAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
};

class SymbolsImportedContextProxy : public ContextProxy {
public:
  SymbolsImportedContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object symbolsFromModuleList();

};

class SymbolsFromModuleListContextProxy : public ContextProxy {
public:
  SymbolsFromModuleListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object symbolsFromModule();
  Object symbolsFromModuleAt(size_t i);

};

class SymbolsFromModuleContextProxy : public ContextProxy {
public:
  SymbolsFromModuleContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object symbolList();
  Object globalModuleReference();
  Object FROM_LITERAL();
};

class GlobalModuleReferenceContextProxy : public ContextProxy {
public:
  GlobalModuleReferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object assignedIdentifier();
  Object IDENTIFIER();
};

class AssignedIdentifierContextProxy : public ContextProxy {
public:
  AssignedIdentifierContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class SymbolContextProxy : public ContextProxy {
public:
  SymbolContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object IDENTIFIER();
  Object L_BRACE();
  Object R_BRACE();
};

class AssignmentContextProxy : public ContextProxy {
public:
  AssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valueAssignment();
  Object typeAssignment();
  Object parameterizedAssignment();
  Object objectClassAssignment();
  Object IDENTIFIER();
};

class ValueAssignmentContextProxy : public ContextProxy {
public:
  ValueAssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object asnType();
  Object value();
  Object ASSIGN_OP();
};

class TypeAssignmentContextProxy : public ContextProxy {
public:
  TypeAssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object asnType();
  Object ASSIGN_OP();
};

class ParameterizedAssignmentContextProxy : public ContextProxy {
public:
  ParameterizedAssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object parameterList();
  Object asnType();
  Object value();
  Object valueSet();
  Object definedObjectClass();
  Object object_();
  Object objectClass();
  Object objectSet();
  Object ASSIGN_OP();
};

class ObjectClassAssignmentContextProxy : public ContextProxy {
public:
  ObjectClassAssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objectClass();
  Object ASSIGN_OP();
};

class SequenceTypeContextProxy : public ContextProxy {
public:
  SequenceTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object extensionAndException();
  Object optionalExtensionMarker();
  Object componentTypeLists();
  Object SEQUENCE_LITERAL();
  Object L_BRACE();
  Object R_BRACE();
};

class ExtensionAndExceptionContextProxy : public ContextProxy {
public:
  ExtensionAndExceptionContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object exceptionSpec();
  Object ELLIPSIS();
};

class OptionalExtensionMarkerContextProxy : public ContextProxy {
public:
  OptionalExtensionMarkerContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object COMMA();
  Object ELLIPSIS();
};

class ComponentTypeListsContextProxy : public ContextProxy {
public:
  ComponentTypeListsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object rootComponentTypeList();
  Object rootComponentTypeListAt(size_t i);
  Object extensionAndException();
  Object extensionAdditions();
  Object optionalExtensionMarker();
  Object COMMA();
  Object COMMAAt(size_t i);
  Object EXTENSTIONENDMARKER();
};

class ExceptionSpecContextProxy : public ContextProxy {
public:
  ExceptionSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object exceptionIdentification();
  Object EXCLAM();
};

class RootComponentTypeListContextProxy : public ContextProxy {
public:
  RootComponentTypeListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object componentTypeList();

};

class ExtensionAdditionsContextProxy : public ContextProxy {
public:
  ExtensionAdditionsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object extensionAdditionList();
  Object COMMA();
};

class ComponentTypeListContextProxy : public ContextProxy {
public:
  ComponentTypeListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object componentType();
  Object componentTypeAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
};

class ComponentTypeContextProxy : public ContextProxy {
public:
  ComponentTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object namedType();
  Object value();
  Object asnType();
  Object OPTIONAL_LITERAL();
  Object DEFAULT_LITERAL();
  Object COMPONENTS_LITERAL();
  Object OF_LITERAL();
};

class NamedTypeContextProxy : public ContextProxy {
public:
  NamedTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object asnType();
  Object IDENTIFIER();
};

class ValueContextProxy : public ContextProxy {
public:
  ValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object builtinValue();

};

class AsnTypeContextProxy : public ContextProxy {
public:
  AsnTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object builtinType();
  Object referencedType();
  Object constraint();
  Object constraintAt(size_t i);

};

class ExtensionAdditionListContextProxy : public ContextProxy {
public:
  ExtensionAdditionListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object extensionAddition();
  Object extensionAdditionAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
};

class ExtensionAdditionContextProxy : public ContextProxy {
public:
  ExtensionAdditionContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object componentType();
  Object extensionAdditionGroup();

};

class ExtensionAdditionGroupContextProxy : public ContextProxy {
public:
  ExtensionAdditionGroupContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object versionNumber();
  Object componentTypeList();
  Object DOUBLE_L_BRACKET();
  Object DOUBLE_R_BRACKET();
};

class VersionNumberContextProxy : public ContextProxy {
public:
  VersionNumberContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object NUMBER();
  Object COLON();
};

class SequenceOfTypeContextProxy : public ContextProxy {
public:
  SequenceOfTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object asnType();
  Object namedType();
  Object constraint();
  Object sizeConstraint();
  Object SEQUENCE_LITERAL();
  Object OF_LITERAL();
  Object L_PARAN();
  Object R_PARAN();
};

class ConstraintContextProxy : public ContextProxy {
public:
  ConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object constraintSpec();
  Object exceptionSpec();
  Object L_PARAN();
  Object R_PARAN();
};

class SizeConstraintContextProxy : public ContextProxy {
public:
  SizeConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object constraint();
  Object SIZE_LITERAL();
};

class ParameterListContextProxy : public ContextProxy {
public:
  ParameterListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object parameter();
  Object parameterAt(size_t i);
  Object L_BRACE();
  Object R_BRACE();
  Object COMMA();
  Object COMMAAt(size_t i);
};

class ValueSetContextProxy : public ContextProxy {
public:
  ValueSetContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object elementSetSpecs();
  Object L_BRACE();
  Object R_BRACE();
};

class DefinedObjectClassContextProxy : public ContextProxy {
public:
  DefinedObjectClassContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object IDENTIFIER();
  Object IDENTIFIERAt(size_t i);
  Object DOT();
  Object TYPE_IDENTIFIER_LITERAL();
  Object ABSTRACT_SYNTAX_LITERAL();
};

class Object_ContextProxy : public ContextProxy {
public:
  Object_ContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedObject();
  Object parameterizedObject();

};

class ObjectClassContextProxy : public ContextProxy {
public:
  ObjectClassContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedObjectClass();
  Object objectClassDefn();

};

class ObjectSetContextProxy : public ContextProxy {
public:
  ObjectSetContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objectSetSpec();
  Object L_BRACE();
  Object R_BRACE();
};

class ParameterContextProxy : public ContextProxy {
public:
  ParameterContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object paramGovernor();
  Object IDENTIFIER();
  Object COLON();
};

class ParamGovernorContextProxy : public ContextProxy {
public:
  ParamGovernorContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object governor();
  Object IDENTIFIER();
};

class GovernorContextProxy : public ContextProxy {
public:
  GovernorContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object asnType();
  Object definedObjectClass();

};

class ObjectClassDefnContextProxy : public ContextProxy {
public:
  ObjectClassDefnContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object fieldSpec();
  Object fieldSpecAt(size_t i);
  Object withSyntaxSpec();
  Object CLASS_LITERAL();
  Object L_BRACE();
  Object R_BRACE();
  Object COMMA();
  Object COMMAAt(size_t i);
};

class UsefulObjectClassReferenceContextProxy : public ContextProxy {
public:
  UsefulObjectClassReferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object TYPE_IDENTIFIER_LITERAL();
  Object ABSTRACT_SYNTAX_LITERAL();
};

class ExternalObjectClassReferenceContextProxy : public ContextProxy {
public:
  ExternalObjectClassReferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object IDENTIFIER();
  Object IDENTIFIERAt(size_t i);
  Object DOT();
};

class FieldSpecContextProxy : public ContextProxy {
public:
  FieldSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object asnType();
  Object fieldName();
  Object definedObjectClass();
  Object typeOptionalitySpec();
  Object valueSetOptionalitySpec();
  Object valueOptionalitySpec();
  Object valueSet();
  Object value();
  Object objectSet();
  Object object_();
  Object AMPERSAND();
  Object IDENTIFIER();
  Object OPTIONAL_LITERAL();
  Object DEFAULT_LITERAL();
  Object UNIQUE_LITERAL();
};

class WithSyntaxSpecContextProxy : public ContextProxy {
public:
  WithSyntaxSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object syntaxList();
  Object WITH_LITERAL();
  Object SYNTAX_LITERAL();
};

class SyntaxListContextProxy : public ContextProxy {
public:
  SyntaxListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object tokenOrGroupSpec();
  Object tokenOrGroupSpecAt(size_t i);
  Object L_BRACE();
  Object R_BRACE();
};

class TokenOrGroupSpecContextProxy : public ContextProxy {
public:
  TokenOrGroupSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object requiredToken();
  Object optionalGroup();

};

class RequiredTokenContextProxy : public ContextProxy {
public:
  RequiredTokenContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object literal();
  Object primitiveFieldName();

};

class OptionalGroupContextProxy : public ContextProxy {
public:
  OptionalGroupContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object tokenOrGroupSpec();
  Object tokenOrGroupSpecAt(size_t i);
  Object L_BRACKET();
  Object R_BRACKET();
};

class LiteralContextProxy : public ContextProxy {
public:
  LiteralContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object IDENTIFIER();
  Object COMMA();
};

class PrimitiveFieldNameContextProxy : public ContextProxy {
public:
  PrimitiveFieldNameContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object AMPERSAND();
  Object IDENTIFIER();
};

class FieldNameContextProxy : public ContextProxy {
public:
  FieldNameContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object AMPERSAND();
  Object AMPERSANDAt(size_t i);
  Object IDENTIFIER();
  Object IDENTIFIERAt(size_t i);
  Object DOT();
  Object DOTAt(size_t i);
};

class TypeOptionalitySpecContextProxy : public ContextProxy {
public:
  TypeOptionalitySpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object asnType();
  Object OPTIONAL_LITERAL();
  Object DEFAULT_LITERAL();
};

class ValueSetOptionalitySpecContextProxy : public ContextProxy {
public:
  ValueSetOptionalitySpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valueSet();
  Object OPTIONAL_LITERAL();
  Object DEFAULT_LITERAL();
};

class ValueOptionalitySpecContextProxy : public ContextProxy {
public:
  ValueOptionalitySpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object value();
  Object OPTIONAL_LITERAL();
  Object DEFAULT_LITERAL();
};

class TypeFieldSpecContextProxy : public ContextProxy {
public:
  TypeFieldSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object typeOptionalitySpec();
  Object AMPERSAND();
  Object IDENTIFIER();
};

class FixedTypeValueFieldSpecContextProxy : public ContextProxy {
public:
  FixedTypeValueFieldSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object asnType();
  Object valueOptionalitySpec();
  Object AMPERSAND();
  Object IDENTIFIER();
  Object UNIQUE_LITERAL();
};

class VariableTypeValueFieldSpecContextProxy : public ContextProxy {
public:
  VariableTypeValueFieldSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object fieldName();
  Object valueOptionalitySpec();
  Object AMPERSAND();
  Object IDENTIFIER();
};

class FixedTypeValueSetFieldSpecContextProxy : public ContextProxy {
public:
  FixedTypeValueSetFieldSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object asnType();
  Object valueSetOptionalitySpec();
  Object AMPERSAND();
  Object IDENTIFIER();
};

class DefinedObjectContextProxy : public ContextProxy {
public:
  DefinedObjectContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object IDENTIFIER();
  Object DOT();
};

class ParameterizedObjectContextProxy : public ContextProxy {
public:
  ParameterizedObjectContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedObject();
  Object actualParameterList();

};

class ActualParameterListContextProxy : public ContextProxy {
public:
  ActualParameterListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object actualParameter();
  Object actualParameterAt(size_t i);
  Object L_BRACE();
  Object R_BRACE();
  Object COMMA();
  Object COMMAAt(size_t i);
};

class ObjectSetSpecContextProxy : public ContextProxy {
public:
  ObjectSetSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object rootElementSetSpec();
  Object additionalElementSetSpec();
  Object COMMA();
  Object COMMAAt(size_t i);
  Object ELLIPSIS();
};

class RootElementSetSpecContextProxy : public ContextProxy {
public:
  RootElementSetSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object elementSetSpec();

};

class AdditionalElementSetSpecContextProxy : public ContextProxy {
public:
  AdditionalElementSetSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object elementSetSpec();

};

class ElementSetSpecsContextProxy : public ContextProxy {
public:
  ElementSetSpecsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object rootElementSetSpec();
  Object additionalElementSetSpec();
  Object COMMA();
  Object COMMAAt(size_t i);
  Object ELLIPSIS();
};

class ElementSetSpecContextProxy : public ContextProxy {
public:
  ElementSetSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object unions();
  Object exclusions();
  Object ALL_LITERAL();
};

class UnionsContextProxy : public ContextProxy {
public:
  UnionsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object intersections();
  Object intersectionsAt(size_t i);
  Object unionMark();
  Object unionMarkAt(size_t i);

};

class ExclusionsContextProxy : public ContextProxy {
public:
  ExclusionsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object elements();
  Object EXCEPT_LITERAL();
};

class IntersectionsContextProxy : public ContextProxy {
public:
  IntersectionsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object intersectionElements();
  Object intersectionElementsAt(size_t i);
  Object intersectionMark();
  Object intersectionMarkAt(size_t i);

};

class UnionMarkContextProxy : public ContextProxy {
public:
  UnionMarkContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object PIPE();
  Object UNION_LITERAL();
};

class ElementsContextProxy : public ContextProxy {
public:
  ElementsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object subtypeElements();

};

class IntersectionElementsContextProxy : public ContextProxy {
public:
  IntersectionElementsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object elements();
  Object exclusions();

};

class IntersectionMarkContextProxy : public ContextProxy {
public:
  IntersectionMarkContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object POWER();
  Object INTERSECTION_LITERAL();
};

class SubtypeElementsContextProxy : public ContextProxy {
public:
  SubtypeElementsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object value();
  Object valueAt(size_t i);
  Object sizeConstraint();
  Object DOUBLE_DOT();
  Object MIN_LITERAL();
  Object MAX_LITERAL();
  Object LESS_THAN();
  Object LESS_THANAt(size_t i);
  Object PATTERN_LITERAL();
};

class ObjectSetElementsContextProxy : public ContextProxy {
public:
  ObjectSetElementsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object object_();
  Object definedObject();

};

class VariableTypeValueSetFieldSpecContextProxy : public ContextProxy {
public:
  VariableTypeValueSetFieldSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object fieldName();
  Object valueSetOptionalitySpec();
  Object AMPERSAND();
  Object IDENTIFIER();
};

class ObjectFieldSpecContextProxy : public ContextProxy {
public:
  ObjectFieldSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedObjectClass();
  Object objectOptionalitySpec();
  Object AMPERSAND();
  Object IDENTIFIER();
};

class ObjectOptionalitySpecContextProxy : public ContextProxy {
public:
  ObjectOptionalitySpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object object_();
  Object OPTIONAL_LITERAL();
  Object DEFAULT_LITERAL();
};

class ObjectSetFieldSpecContextProxy : public ContextProxy {
public:
  ObjectSetFieldSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedObjectClass();
  Object objectSetOptionalitySpec();
  Object AMPERSAND();
  Object IDENTIFIER();
};

class ObjectSetOptionalitySpecContextProxy : public ContextProxy {
public:
  ObjectSetOptionalitySpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objectSet();
  Object OPTIONAL_LITERAL();
  Object DEFAULT_LITERAL();
};

class BuiltinTypeContextProxy : public ContextProxy {
public:
  BuiltinTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object octetStringType();
  Object bitStringType();
  Object choiceType();
  Object enumeratedType();
  Object integerType();
  Object sequenceType();
  Object sequenceOfType();
  Object setType();
  Object setOfType();
  Object objectidentifiertype();
  Object objectClassFieldType();
  Object BOOLEAN_LITERAL();
  Object NULL_LITERAL();
};

class ReferencedTypeContextProxy : public ContextProxy {
public:
  ReferencedTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedType();

};

class OctetStringTypeContextProxy : public ContextProxy {
public:
  OctetStringTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object OCTET_LITERAL();
  Object STRING_LITERAL();
};

class BitStringTypeContextProxy : public ContextProxy {
public:
  BitStringTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object namedBitList();
  Object BIT_LITERAL();
  Object STRING_LITERAL();
  Object L_BRACE();
  Object R_BRACE();
};

class ChoiceTypeContextProxy : public ContextProxy {
public:
  ChoiceTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object alternativeTypeLists();
  Object CHOICE_LITERAL();
  Object L_BRACE();
  Object R_BRACE();
};

class EnumeratedTypeContextProxy : public ContextProxy {
public:
  EnumeratedTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object enumerations();
  Object ENUMERATED_LITERAL();
  Object L_BRACE();
  Object R_BRACE();
};

class IntegerTypeContextProxy : public ContextProxy {
public:
  IntegerTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object namedNumberList();
  Object INTEGER_LITERAL();
  Object L_BRACE();
  Object R_BRACE();
};

class SetTypeContextProxy : public ContextProxy {
public:
  SetTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object extensionAndException();
  Object optionalExtensionMarker();
  Object componentTypeLists();
  Object SET_LITERAL();
  Object L_BRACE();
  Object R_BRACE();
};

class SetOfTypeContextProxy : public ContextProxy {
public:
  SetOfTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object asnType();
  Object namedType();
  Object constraint();
  Object sizeConstraint();
  Object SET_LITERAL();
  Object OF_LITERAL();
};

class ObjectidentifiertypeContextProxy : public ContextProxy {
public:
  ObjectidentifiertypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object OBJECT_LITERAL();
  Object IDENTIFIER_LITERAL();
};

class ObjectClassFieldTypeContextProxy : public ContextProxy {
public:
  ObjectClassFieldTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedObjectClass();
  Object fieldName();
  Object DOT();
};

class DefinedTypeContextProxy : public ContextProxy {
public:
  DefinedTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object actualParameterList();
  Object IDENTIFIER();
  Object IDENTIFIERAt(size_t i);
  Object DOT();
};

class ConstraintSpecContextProxy : public ContextProxy {
public:
  ConstraintSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object generalConstraint();
  Object subtypeConstraint();

};

class GeneralConstraintContextProxy : public ContextProxy {
public:
  GeneralConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object userDefinedConstraint();
  Object tableConstraint();
  Object contentsConstraint();

};

class SubtypeConstraintContextProxy : public ContextProxy {
public:
  SubtypeConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object elementSetSpecs();

};

class UserDefinedConstraintContextProxy : public ContextProxy {
public:
  UserDefinedConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object userDefinedConstraintParameter();
  Object userDefinedConstraintParameterAt(size_t i);
  Object CONSTRAINED_LITERAL();
  Object BY_LITERAL();
  Object L_BRACE();
  Object R_BRACE();
  Object COMMA();
  Object COMMAAt(size_t i);
};

class UserDefinedConstraintParameterContextProxy : public ContextProxy {
public:
  UserDefinedConstraintParameterContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object governor();
  Object value();
  Object valueSet();
  Object object_();
  Object objectSet();
  Object COLON();
};

class TableConstraintContextProxy : public ContextProxy {
public:
  TableConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object componentRelationConstraint();

};

class ContentsConstraintContextProxy : public ContextProxy {
public:
  ContentsConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object asnType();
  Object value();
  Object componentPresenceLists();
  Object CONTAINING_LITERAL();
  Object ENCODED_LITERAL();
  Object BY_LITERAL();
  Object WITH_LITERAL();
  Object COMPONENTS_LITERAL();
  Object L_BRACE();
  Object R_BRACE();
};

class ComponentRelationConstraintContextProxy : public ContextProxy {
public:
  ComponentRelationConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object atNotation();
  Object atNotationAt(size_t i);
  Object L_BRACE();
  Object L_BRACEAt(size_t i);
  Object IDENTIFIER();
  Object IDENTIFIERAt(size_t i);
  Object R_BRACE();
  Object R_BRACEAt(size_t i);
  Object DOT();
  Object COMMA();
  Object COMMAAt(size_t i);
};

class SimpleTableConstraintContextProxy : public ContextProxy {
public:
  SimpleTableConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objectSet();

};

class ComponentPresenceListsContextProxy : public ContextProxy {
public:
  ComponentPresenceListsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object componentPresenceList();
  Object componentPresenceListAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
  Object ELLIPSIS();
};

class ComponentPresenceListContextProxy : public ContextProxy {
public:
  ComponentPresenceListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object componentPresence();
  Object componentPresenceAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
};

class ComponentPresenceContextProxy : public ContextProxy {
public:
  ComponentPresenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object IDENTIFIER();
  Object ABSENT_LITERAL();
  Object PRESENT_LITERAL();
};

class BuiltinValueContextProxy : public ContextProxy {
public:
  BuiltinValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object enumeratedValue();
  Object integerValue();
  Object choiceValue();
  Object objectIdentifierValue();
  Object booleanValue();
  Object CSTRING();
  Object BSTRING();
};

class EnumeratedValueContextProxy : public ContextProxy {
public:
  EnumeratedValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object IDENTIFIER();
};

class IntegerValueContextProxy : public ContextProxy {
public:
  IntegerValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object signedNumber();
  Object IDENTIFIER();
};

class ChoiceValueContextProxy : public ContextProxy {
public:
  ChoiceValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object value();
  Object IDENTIFIER();
  Object COLON();
};

class ObjectIdentifierValueContextProxy : public ContextProxy {
public:
  ObjectIdentifierValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objIdComponentsList();
  Object L_BRACE();
  Object R_BRACE();
};

class BooleanValueContextProxy : public ContextProxy {
public:
  BooleanValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object TRUE_LITERAL();
  Object FALSE_LITERAL();
  Object TRUE_SMALL_LITERAL();
  Object FALSE_SMALL_LITERAL();
};

class ObjIdComponentsListContextProxy : public ContextProxy {
public:
  ObjIdComponentsListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objIdComponents();
  Object objIdComponentsAt(size_t i);

};

class ObjIdComponentsContextProxy : public ContextProxy {
public:
  ObjIdComponentsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedValue();
  Object NUMBER();
  Object IDENTIFIER();
  Object L_PARAN();
  Object R_PARAN();
};

class DefinedValueContextProxy : public ContextProxy {
public:
  DefinedValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object parameterizedValue();

};

class SignedNumberContextProxy : public ContextProxy {
public:
  SignedNumberContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object NUMBER();
  Object MINUS();
};

class AlternativeTypeListsContextProxy : public ContextProxy {
public:
  AlternativeTypeListsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object rootAlternativeTypeList();
  Object extensionAndException();
  Object extensionAdditionAlternatives();
  Object optionalExtensionMarker();
  Object COMMA();
};

class RootAlternativeTypeListContextProxy : public ContextProxy {
public:
  RootAlternativeTypeListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object alternativeTypeList();

};

class ExtensionAdditionAlternativesContextProxy : public ContextProxy {
public:
  ExtensionAdditionAlternativesContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object extensionAdditionAlternativesList();
  Object COMMA();
};

class ExtensionAdditionAlternativesListContextProxy : public ContextProxy {
public:
  ExtensionAdditionAlternativesListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object extensionAdditionAlternative();
  Object extensionAdditionAlternativeAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
};

class ExtensionAdditionAlternativeContextProxy : public ContextProxy {
public:
  ExtensionAdditionAlternativeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object extensionAdditionAlternativesGroup();
  Object namedType();

};

class ExtensionAdditionAlternativesGroupContextProxy : public ContextProxy {
public:
  ExtensionAdditionAlternativesGroupContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object versionNumber();
  Object alternativeTypeList();
  Object DOUBLE_L_BRACKET();
  Object DOUBLE_R_BRACKET();
};

class AlternativeTypeListContextProxy : public ContextProxy {
public:
  AlternativeTypeListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object namedType();
  Object namedTypeAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
};

class EnumerationsContextProxy : public ContextProxy {
public:
  EnumerationsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object rootEnumeration();
  Object exceptionSpec();
  Object additionalEnumeration();
  Object COMMA();
  Object COMMAAt(size_t i);
  Object ELLIPSIS();
};

class RootEnumerationContextProxy : public ContextProxy {
public:
  RootEnumerationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object enumeration();

};

class AdditionalEnumerationContextProxy : public ContextProxy {
public:
  AdditionalEnumerationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object enumeration();

};

class EnumerationContextProxy : public ContextProxy {
public:
  EnumerationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object enumerationItem();
  Object enumerationItemAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
};

class EnumerationItemContextProxy : public ContextProxy {
public:
  EnumerationItemContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object namedNumber();
  Object value();
  Object IDENTIFIER();
};

class NamedNumberContextProxy : public ContextProxy {
public:
  NamedNumberContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object signedNumber();
  Object definedValue();
  Object IDENTIFIER();
  Object L_PARAN();
  Object R_PARAN();
};

class ParameterizedValueContextProxy : public ContextProxy {
public:
  ParameterizedValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object simpleDefinedValue();
  Object actualParameterList();

};

class SimpleDefinedValueContextProxy : public ContextProxy {
public:
  SimpleDefinedValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object IDENTIFIER();
  Object IDENTIFIERAt(size_t i);
  Object DOT();
};

class ActualParameterContextProxy : public ContextProxy {
public:
  ActualParameterContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object asnType();
  Object value();

};

class ExceptionIdentificationContextProxy : public ContextProxy {
public:
  ExceptionIdentificationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object signedNumber();
  Object definedValue();
  Object asnType();
  Object value();
  Object COLON();
};

class NamedNumberListContextProxy : public ContextProxy {
public:
  NamedNumberListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object namedNumber();
  Object namedNumberAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
};

class AtNotationContextProxy : public ContextProxy {
public:
  AtNotationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object componentIdList();
  Object level();
  Object A_ROND();
  Object A_ROND_DOT();
};

class ComponentIdListContextProxy : public ContextProxy {
public:
  ComponentIdListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object IDENTIFIER();
  Object IDENTIFIERAt(size_t i);
  Object DOT();
  Object DOTAt(size_t i);
};

class LevelContextProxy : public ContextProxy {
public:
  LevelContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object level();
  Object DOT();
};

class NamedBitListContextProxy : public ContextProxy {
public:
  NamedBitListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object namedBit();
  Object namedBitAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
};

class NamedBitContextProxy : public ContextProxy {
public:
  NamedBitContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedValue();
  Object IDENTIFIER();
  Object L_PARAN();
  Object R_PARAN();
  Object NUMBER();
};


namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ModulesContext*> {
  public:
    VALUE convert(ASNParser::ModulesContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ModulesContext>(x, false, rb_cModulesContext);
    }
  };

  template <>
  class To_Ruby<ModulesContextProxy*> {
  public:
    VALUE convert(ModulesContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ModulesContextProxy>(x, false, rb_cModulesContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ModuleDefinitionContext*> {
  public:
    VALUE convert(ASNParser::ModuleDefinitionContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ModuleDefinitionContext>(x, false, rb_cModuleDefinitionContext);
    }
  };

  template <>
  class To_Ruby<ModuleDefinitionContextProxy*> {
  public:
    VALUE convert(ModuleDefinitionContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ModuleDefinitionContextProxy>(x, false, rb_cModuleDefinitionContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::TagDefaultContext*> {
  public:
    VALUE convert(ASNParser::TagDefaultContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::TagDefaultContext>(x, false, rb_cTagDefaultContext);
    }
  };

  template <>
  class To_Ruby<TagDefaultContextProxy*> {
  public:
    VALUE convert(TagDefaultContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<TagDefaultContextProxy>(x, false, rb_cTagDefaultContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ExtensionDefaultContext*> {
  public:
    VALUE convert(ASNParser::ExtensionDefaultContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ExtensionDefaultContext>(x, false, rb_cExtensionDefaultContext);
    }
  };

  template <>
  class To_Ruby<ExtensionDefaultContextProxy*> {
  public:
    VALUE convert(ExtensionDefaultContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExtensionDefaultContextProxy>(x, false, rb_cExtensionDefaultContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ModuleBodyContext*> {
  public:
    VALUE convert(ASNParser::ModuleBodyContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ModuleBodyContext>(x, false, rb_cModuleBodyContext);
    }
  };

  template <>
  class To_Ruby<ModuleBodyContextProxy*> {
  public:
    VALUE convert(ModuleBodyContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ModuleBodyContextProxy>(x, false, rb_cModuleBodyContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ExportsContext*> {
  public:
    VALUE convert(ASNParser::ExportsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ExportsContext>(x, false, rb_cExportsContext);
    }
  };

  template <>
  class To_Ruby<ExportsContextProxy*> {
  public:
    VALUE convert(ExportsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExportsContextProxy>(x, false, rb_cExportsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ImportsContext*> {
  public:
    VALUE convert(ASNParser::ImportsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ImportsContext>(x, false, rb_cImportsContext);
    }
  };

  template <>
  class To_Ruby<ImportsContextProxy*> {
  public:
    VALUE convert(ImportsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ImportsContextProxy>(x, false, rb_cImportsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::AssignmentListContext*> {
  public:
    VALUE convert(ASNParser::AssignmentListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::AssignmentListContext>(x, false, rb_cAssignmentListContext);
    }
  };

  template <>
  class To_Ruby<AssignmentListContextProxy*> {
  public:
    VALUE convert(AssignmentListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<AssignmentListContextProxy>(x, false, rb_cAssignmentListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::SymbolsExportedContext*> {
  public:
    VALUE convert(ASNParser::SymbolsExportedContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::SymbolsExportedContext>(x, false, rb_cSymbolsExportedContext);
    }
  };

  template <>
  class To_Ruby<SymbolsExportedContextProxy*> {
  public:
    VALUE convert(SymbolsExportedContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SymbolsExportedContextProxy>(x, false, rb_cSymbolsExportedContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::SymbolListContext*> {
  public:
    VALUE convert(ASNParser::SymbolListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::SymbolListContext>(x, false, rb_cSymbolListContext);
    }
  };

  template <>
  class To_Ruby<SymbolListContextProxy*> {
  public:
    VALUE convert(SymbolListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SymbolListContextProxy>(x, false, rb_cSymbolListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::SymbolsImportedContext*> {
  public:
    VALUE convert(ASNParser::SymbolsImportedContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::SymbolsImportedContext>(x, false, rb_cSymbolsImportedContext);
    }
  };

  template <>
  class To_Ruby<SymbolsImportedContextProxy*> {
  public:
    VALUE convert(SymbolsImportedContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SymbolsImportedContextProxy>(x, false, rb_cSymbolsImportedContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::SymbolsFromModuleListContext*> {
  public:
    VALUE convert(ASNParser::SymbolsFromModuleListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::SymbolsFromModuleListContext>(x, false, rb_cSymbolsFromModuleListContext);
    }
  };

  template <>
  class To_Ruby<SymbolsFromModuleListContextProxy*> {
  public:
    VALUE convert(SymbolsFromModuleListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SymbolsFromModuleListContextProxy>(x, false, rb_cSymbolsFromModuleListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::SymbolsFromModuleContext*> {
  public:
    VALUE convert(ASNParser::SymbolsFromModuleContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::SymbolsFromModuleContext>(x, false, rb_cSymbolsFromModuleContext);
    }
  };

  template <>
  class To_Ruby<SymbolsFromModuleContextProxy*> {
  public:
    VALUE convert(SymbolsFromModuleContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SymbolsFromModuleContextProxy>(x, false, rb_cSymbolsFromModuleContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::GlobalModuleReferenceContext*> {
  public:
    VALUE convert(ASNParser::GlobalModuleReferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::GlobalModuleReferenceContext>(x, false, rb_cGlobalModuleReferenceContext);
    }
  };

  template <>
  class To_Ruby<GlobalModuleReferenceContextProxy*> {
  public:
    VALUE convert(GlobalModuleReferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<GlobalModuleReferenceContextProxy>(x, false, rb_cGlobalModuleReferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::AssignedIdentifierContext*> {
  public:
    VALUE convert(ASNParser::AssignedIdentifierContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::AssignedIdentifierContext>(x, false, rb_cAssignedIdentifierContext);
    }
  };

  template <>
  class To_Ruby<AssignedIdentifierContextProxy*> {
  public:
    VALUE convert(AssignedIdentifierContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<AssignedIdentifierContextProxy>(x, false, rb_cAssignedIdentifierContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::SymbolContext*> {
  public:
    VALUE convert(ASNParser::SymbolContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::SymbolContext>(x, false, rb_cSymbolContext);
    }
  };

  template <>
  class To_Ruby<SymbolContextProxy*> {
  public:
    VALUE convert(SymbolContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SymbolContextProxy>(x, false, rb_cSymbolContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::AssignmentContext*> {
  public:
    VALUE convert(ASNParser::AssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::AssignmentContext>(x, false, rb_cAssignmentContext);
    }
  };

  template <>
  class To_Ruby<AssignmentContextProxy*> {
  public:
    VALUE convert(AssignmentContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<AssignmentContextProxy>(x, false, rb_cAssignmentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ValueAssignmentContext*> {
  public:
    VALUE convert(ASNParser::ValueAssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ValueAssignmentContext>(x, false, rb_cValueAssignmentContext);
    }
  };

  template <>
  class To_Ruby<ValueAssignmentContextProxy*> {
  public:
    VALUE convert(ValueAssignmentContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ValueAssignmentContextProxy>(x, false, rb_cValueAssignmentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::TypeAssignmentContext*> {
  public:
    VALUE convert(ASNParser::TypeAssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::TypeAssignmentContext>(x, false, rb_cTypeAssignmentContext);
    }
  };

  template <>
  class To_Ruby<TypeAssignmentContextProxy*> {
  public:
    VALUE convert(TypeAssignmentContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<TypeAssignmentContextProxy>(x, false, rb_cTypeAssignmentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ParameterizedAssignmentContext*> {
  public:
    VALUE convert(ASNParser::ParameterizedAssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ParameterizedAssignmentContext>(x, false, rb_cParameterizedAssignmentContext);
    }
  };

  template <>
  class To_Ruby<ParameterizedAssignmentContextProxy*> {
  public:
    VALUE convert(ParameterizedAssignmentContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ParameterizedAssignmentContextProxy>(x, false, rb_cParameterizedAssignmentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ObjectClassAssignmentContext*> {
  public:
    VALUE convert(ASNParser::ObjectClassAssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ObjectClassAssignmentContext>(x, false, rb_cObjectClassAssignmentContext);
    }
  };

  template <>
  class To_Ruby<ObjectClassAssignmentContextProxy*> {
  public:
    VALUE convert(ObjectClassAssignmentContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectClassAssignmentContextProxy>(x, false, rb_cObjectClassAssignmentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::SequenceTypeContext*> {
  public:
    VALUE convert(ASNParser::SequenceTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::SequenceTypeContext>(x, false, rb_cSequenceTypeContext);
    }
  };

  template <>
  class To_Ruby<SequenceTypeContextProxy*> {
  public:
    VALUE convert(SequenceTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SequenceTypeContextProxy>(x, false, rb_cSequenceTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ExtensionAndExceptionContext*> {
  public:
    VALUE convert(ASNParser::ExtensionAndExceptionContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ExtensionAndExceptionContext>(x, false, rb_cExtensionAndExceptionContext);
    }
  };

  template <>
  class To_Ruby<ExtensionAndExceptionContextProxy*> {
  public:
    VALUE convert(ExtensionAndExceptionContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExtensionAndExceptionContextProxy>(x, false, rb_cExtensionAndExceptionContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::OptionalExtensionMarkerContext*> {
  public:
    VALUE convert(ASNParser::OptionalExtensionMarkerContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::OptionalExtensionMarkerContext>(x, false, rb_cOptionalExtensionMarkerContext);
    }
  };

  template <>
  class To_Ruby<OptionalExtensionMarkerContextProxy*> {
  public:
    VALUE convert(OptionalExtensionMarkerContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<OptionalExtensionMarkerContextProxy>(x, false, rb_cOptionalExtensionMarkerContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ComponentTypeListsContext*> {
  public:
    VALUE convert(ASNParser::ComponentTypeListsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ComponentTypeListsContext>(x, false, rb_cComponentTypeListsContext);
    }
  };

  template <>
  class To_Ruby<ComponentTypeListsContextProxy*> {
  public:
    VALUE convert(ComponentTypeListsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ComponentTypeListsContextProxy>(x, false, rb_cComponentTypeListsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ExceptionSpecContext*> {
  public:
    VALUE convert(ASNParser::ExceptionSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ExceptionSpecContext>(x, false, rb_cExceptionSpecContext);
    }
  };

  template <>
  class To_Ruby<ExceptionSpecContextProxy*> {
  public:
    VALUE convert(ExceptionSpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExceptionSpecContextProxy>(x, false, rb_cExceptionSpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::RootComponentTypeListContext*> {
  public:
    VALUE convert(ASNParser::RootComponentTypeListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::RootComponentTypeListContext>(x, false, rb_cRootComponentTypeListContext);
    }
  };

  template <>
  class To_Ruby<RootComponentTypeListContextProxy*> {
  public:
    VALUE convert(RootComponentTypeListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<RootComponentTypeListContextProxy>(x, false, rb_cRootComponentTypeListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ExtensionAdditionsContext*> {
  public:
    VALUE convert(ASNParser::ExtensionAdditionsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ExtensionAdditionsContext>(x, false, rb_cExtensionAdditionsContext);
    }
  };

  template <>
  class To_Ruby<ExtensionAdditionsContextProxy*> {
  public:
    VALUE convert(ExtensionAdditionsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExtensionAdditionsContextProxy>(x, false, rb_cExtensionAdditionsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ComponentTypeListContext*> {
  public:
    VALUE convert(ASNParser::ComponentTypeListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ComponentTypeListContext>(x, false, rb_cComponentTypeListContext);
    }
  };

  template <>
  class To_Ruby<ComponentTypeListContextProxy*> {
  public:
    VALUE convert(ComponentTypeListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ComponentTypeListContextProxy>(x, false, rb_cComponentTypeListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ComponentTypeContext*> {
  public:
    VALUE convert(ASNParser::ComponentTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ComponentTypeContext>(x, false, rb_cComponentTypeContext);
    }
  };

  template <>
  class To_Ruby<ComponentTypeContextProxy*> {
  public:
    VALUE convert(ComponentTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ComponentTypeContextProxy>(x, false, rb_cComponentTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::NamedTypeContext*> {
  public:
    VALUE convert(ASNParser::NamedTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::NamedTypeContext>(x, false, rb_cNamedTypeContext);
    }
  };

  template <>
  class To_Ruby<NamedTypeContextProxy*> {
  public:
    VALUE convert(NamedTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<NamedTypeContextProxy>(x, false, rb_cNamedTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ValueContext*> {
  public:
    VALUE convert(ASNParser::ValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ValueContext>(x, false, rb_cValueContext);
    }
  };

  template <>
  class To_Ruby<ValueContextProxy*> {
  public:
    VALUE convert(ValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ValueContextProxy>(x, false, rb_cValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::AsnTypeContext*> {
  public:
    VALUE convert(ASNParser::AsnTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::AsnTypeContext>(x, false, rb_cAsnTypeContext);
    }
  };

  template <>
  class To_Ruby<AsnTypeContextProxy*> {
  public:
    VALUE convert(AsnTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<AsnTypeContextProxy>(x, false, rb_cAsnTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ExtensionAdditionListContext*> {
  public:
    VALUE convert(ASNParser::ExtensionAdditionListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ExtensionAdditionListContext>(x, false, rb_cExtensionAdditionListContext);
    }
  };

  template <>
  class To_Ruby<ExtensionAdditionListContextProxy*> {
  public:
    VALUE convert(ExtensionAdditionListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExtensionAdditionListContextProxy>(x, false, rb_cExtensionAdditionListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ExtensionAdditionContext*> {
  public:
    VALUE convert(ASNParser::ExtensionAdditionContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ExtensionAdditionContext>(x, false, rb_cExtensionAdditionContext);
    }
  };

  template <>
  class To_Ruby<ExtensionAdditionContextProxy*> {
  public:
    VALUE convert(ExtensionAdditionContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExtensionAdditionContextProxy>(x, false, rb_cExtensionAdditionContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ExtensionAdditionGroupContext*> {
  public:
    VALUE convert(ASNParser::ExtensionAdditionGroupContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ExtensionAdditionGroupContext>(x, false, rb_cExtensionAdditionGroupContext);
    }
  };

  template <>
  class To_Ruby<ExtensionAdditionGroupContextProxy*> {
  public:
    VALUE convert(ExtensionAdditionGroupContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExtensionAdditionGroupContextProxy>(x, false, rb_cExtensionAdditionGroupContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::VersionNumberContext*> {
  public:
    VALUE convert(ASNParser::VersionNumberContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::VersionNumberContext>(x, false, rb_cVersionNumberContext);
    }
  };

  template <>
  class To_Ruby<VersionNumberContextProxy*> {
  public:
    VALUE convert(VersionNumberContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<VersionNumberContextProxy>(x, false, rb_cVersionNumberContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::SequenceOfTypeContext*> {
  public:
    VALUE convert(ASNParser::SequenceOfTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::SequenceOfTypeContext>(x, false, rb_cSequenceOfTypeContext);
    }
  };

  template <>
  class To_Ruby<SequenceOfTypeContextProxy*> {
  public:
    VALUE convert(SequenceOfTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SequenceOfTypeContextProxy>(x, false, rb_cSequenceOfTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ConstraintContext*> {
  public:
    VALUE convert(ASNParser::ConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ConstraintContext>(x, false, rb_cConstraintContext);
    }
  };

  template <>
  class To_Ruby<ConstraintContextProxy*> {
  public:
    VALUE convert(ConstraintContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ConstraintContextProxy>(x, false, rb_cConstraintContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::SizeConstraintContext*> {
  public:
    VALUE convert(ASNParser::SizeConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::SizeConstraintContext>(x, false, rb_cSizeConstraintContext);
    }
  };

  template <>
  class To_Ruby<SizeConstraintContextProxy*> {
  public:
    VALUE convert(SizeConstraintContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SizeConstraintContextProxy>(x, false, rb_cSizeConstraintContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ParameterListContext*> {
  public:
    VALUE convert(ASNParser::ParameterListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ParameterListContext>(x, false, rb_cParameterListContext);
    }
  };

  template <>
  class To_Ruby<ParameterListContextProxy*> {
  public:
    VALUE convert(ParameterListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ParameterListContextProxy>(x, false, rb_cParameterListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ValueSetContext*> {
  public:
    VALUE convert(ASNParser::ValueSetContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ValueSetContext>(x, false, rb_cValueSetContext);
    }
  };

  template <>
  class To_Ruby<ValueSetContextProxy*> {
  public:
    VALUE convert(ValueSetContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ValueSetContextProxy>(x, false, rb_cValueSetContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::DefinedObjectClassContext*> {
  public:
    VALUE convert(ASNParser::DefinedObjectClassContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::DefinedObjectClassContext>(x, false, rb_cDefinedObjectClassContext);
    }
  };

  template <>
  class To_Ruby<DefinedObjectClassContextProxy*> {
  public:
    VALUE convert(DefinedObjectClassContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<DefinedObjectClassContextProxy>(x, false, rb_cDefinedObjectClassContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::Object_Context*> {
  public:
    VALUE convert(ASNParser::Object_Context* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::Object_Context>(x, false, rb_cObject_Context);
    }
  };

  template <>
  class To_Ruby<Object_ContextProxy*> {
  public:
    VALUE convert(Object_ContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<Object_ContextProxy>(x, false, rb_cObject_Context);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ObjectClassContext*> {
  public:
    VALUE convert(ASNParser::ObjectClassContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ObjectClassContext>(x, false, rb_cObjectClassContext);
    }
  };

  template <>
  class To_Ruby<ObjectClassContextProxy*> {
  public:
    VALUE convert(ObjectClassContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectClassContextProxy>(x, false, rb_cObjectClassContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ObjectSetContext*> {
  public:
    VALUE convert(ASNParser::ObjectSetContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ObjectSetContext>(x, false, rb_cObjectSetContext);
    }
  };

  template <>
  class To_Ruby<ObjectSetContextProxy*> {
  public:
    VALUE convert(ObjectSetContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectSetContextProxy>(x, false, rb_cObjectSetContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ParameterContext*> {
  public:
    VALUE convert(ASNParser::ParameterContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ParameterContext>(x, false, rb_cParameterContext);
    }
  };

  template <>
  class To_Ruby<ParameterContextProxy*> {
  public:
    VALUE convert(ParameterContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ParameterContextProxy>(x, false, rb_cParameterContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ParamGovernorContext*> {
  public:
    VALUE convert(ASNParser::ParamGovernorContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ParamGovernorContext>(x, false, rb_cParamGovernorContext);
    }
  };

  template <>
  class To_Ruby<ParamGovernorContextProxy*> {
  public:
    VALUE convert(ParamGovernorContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ParamGovernorContextProxy>(x, false, rb_cParamGovernorContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::GovernorContext*> {
  public:
    VALUE convert(ASNParser::GovernorContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::GovernorContext>(x, false, rb_cGovernorContext);
    }
  };

  template <>
  class To_Ruby<GovernorContextProxy*> {
  public:
    VALUE convert(GovernorContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<GovernorContextProxy>(x, false, rb_cGovernorContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ObjectClassDefnContext*> {
  public:
    VALUE convert(ASNParser::ObjectClassDefnContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ObjectClassDefnContext>(x, false, rb_cObjectClassDefnContext);
    }
  };

  template <>
  class To_Ruby<ObjectClassDefnContextProxy*> {
  public:
    VALUE convert(ObjectClassDefnContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectClassDefnContextProxy>(x, false, rb_cObjectClassDefnContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::UsefulObjectClassReferenceContext*> {
  public:
    VALUE convert(ASNParser::UsefulObjectClassReferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::UsefulObjectClassReferenceContext>(x, false, rb_cUsefulObjectClassReferenceContext);
    }
  };

  template <>
  class To_Ruby<UsefulObjectClassReferenceContextProxy*> {
  public:
    VALUE convert(UsefulObjectClassReferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<UsefulObjectClassReferenceContextProxy>(x, false, rb_cUsefulObjectClassReferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ExternalObjectClassReferenceContext*> {
  public:
    VALUE convert(ASNParser::ExternalObjectClassReferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ExternalObjectClassReferenceContext>(x, false, rb_cExternalObjectClassReferenceContext);
    }
  };

  template <>
  class To_Ruby<ExternalObjectClassReferenceContextProxy*> {
  public:
    VALUE convert(ExternalObjectClassReferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExternalObjectClassReferenceContextProxy>(x, false, rb_cExternalObjectClassReferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::FieldSpecContext*> {
  public:
    VALUE convert(ASNParser::FieldSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::FieldSpecContext>(x, false, rb_cFieldSpecContext);
    }
  };

  template <>
  class To_Ruby<FieldSpecContextProxy*> {
  public:
    VALUE convert(FieldSpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<FieldSpecContextProxy>(x, false, rb_cFieldSpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::WithSyntaxSpecContext*> {
  public:
    VALUE convert(ASNParser::WithSyntaxSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::WithSyntaxSpecContext>(x, false, rb_cWithSyntaxSpecContext);
    }
  };

  template <>
  class To_Ruby<WithSyntaxSpecContextProxy*> {
  public:
    VALUE convert(WithSyntaxSpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<WithSyntaxSpecContextProxy>(x, false, rb_cWithSyntaxSpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::SyntaxListContext*> {
  public:
    VALUE convert(ASNParser::SyntaxListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::SyntaxListContext>(x, false, rb_cSyntaxListContext);
    }
  };

  template <>
  class To_Ruby<SyntaxListContextProxy*> {
  public:
    VALUE convert(SyntaxListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SyntaxListContextProxy>(x, false, rb_cSyntaxListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::TokenOrGroupSpecContext*> {
  public:
    VALUE convert(ASNParser::TokenOrGroupSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::TokenOrGroupSpecContext>(x, false, rb_cTokenOrGroupSpecContext);
    }
  };

  template <>
  class To_Ruby<TokenOrGroupSpecContextProxy*> {
  public:
    VALUE convert(TokenOrGroupSpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<TokenOrGroupSpecContextProxy>(x, false, rb_cTokenOrGroupSpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::RequiredTokenContext*> {
  public:
    VALUE convert(ASNParser::RequiredTokenContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::RequiredTokenContext>(x, false, rb_cRequiredTokenContext);
    }
  };

  template <>
  class To_Ruby<RequiredTokenContextProxy*> {
  public:
    VALUE convert(RequiredTokenContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<RequiredTokenContextProxy>(x, false, rb_cRequiredTokenContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::OptionalGroupContext*> {
  public:
    VALUE convert(ASNParser::OptionalGroupContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::OptionalGroupContext>(x, false, rb_cOptionalGroupContext);
    }
  };

  template <>
  class To_Ruby<OptionalGroupContextProxy*> {
  public:
    VALUE convert(OptionalGroupContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<OptionalGroupContextProxy>(x, false, rb_cOptionalGroupContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::LiteralContext*> {
  public:
    VALUE convert(ASNParser::LiteralContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::LiteralContext>(x, false, rb_cLiteralContext);
    }
  };

  template <>
  class To_Ruby<LiteralContextProxy*> {
  public:
    VALUE convert(LiteralContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<LiteralContextProxy>(x, false, rb_cLiteralContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::PrimitiveFieldNameContext*> {
  public:
    VALUE convert(ASNParser::PrimitiveFieldNameContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::PrimitiveFieldNameContext>(x, false, rb_cPrimitiveFieldNameContext);
    }
  };

  template <>
  class To_Ruby<PrimitiveFieldNameContextProxy*> {
  public:
    VALUE convert(PrimitiveFieldNameContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<PrimitiveFieldNameContextProxy>(x, false, rb_cPrimitiveFieldNameContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::FieldNameContext*> {
  public:
    VALUE convert(ASNParser::FieldNameContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::FieldNameContext>(x, false, rb_cFieldNameContext);
    }
  };

  template <>
  class To_Ruby<FieldNameContextProxy*> {
  public:
    VALUE convert(FieldNameContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<FieldNameContextProxy>(x, false, rb_cFieldNameContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::TypeOptionalitySpecContext*> {
  public:
    VALUE convert(ASNParser::TypeOptionalitySpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::TypeOptionalitySpecContext>(x, false, rb_cTypeOptionalitySpecContext);
    }
  };

  template <>
  class To_Ruby<TypeOptionalitySpecContextProxy*> {
  public:
    VALUE convert(TypeOptionalitySpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<TypeOptionalitySpecContextProxy>(x, false, rb_cTypeOptionalitySpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ValueSetOptionalitySpecContext*> {
  public:
    VALUE convert(ASNParser::ValueSetOptionalitySpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ValueSetOptionalitySpecContext>(x, false, rb_cValueSetOptionalitySpecContext);
    }
  };

  template <>
  class To_Ruby<ValueSetOptionalitySpecContextProxy*> {
  public:
    VALUE convert(ValueSetOptionalitySpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ValueSetOptionalitySpecContextProxy>(x, false, rb_cValueSetOptionalitySpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ValueOptionalitySpecContext*> {
  public:
    VALUE convert(ASNParser::ValueOptionalitySpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ValueOptionalitySpecContext>(x, false, rb_cValueOptionalitySpecContext);
    }
  };

  template <>
  class To_Ruby<ValueOptionalitySpecContextProxy*> {
  public:
    VALUE convert(ValueOptionalitySpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ValueOptionalitySpecContextProxy>(x, false, rb_cValueOptionalitySpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::TypeFieldSpecContext*> {
  public:
    VALUE convert(ASNParser::TypeFieldSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::TypeFieldSpecContext>(x, false, rb_cTypeFieldSpecContext);
    }
  };

  template <>
  class To_Ruby<TypeFieldSpecContextProxy*> {
  public:
    VALUE convert(TypeFieldSpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<TypeFieldSpecContextProxy>(x, false, rb_cTypeFieldSpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::FixedTypeValueFieldSpecContext*> {
  public:
    VALUE convert(ASNParser::FixedTypeValueFieldSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::FixedTypeValueFieldSpecContext>(x, false, rb_cFixedTypeValueFieldSpecContext);
    }
  };

  template <>
  class To_Ruby<FixedTypeValueFieldSpecContextProxy*> {
  public:
    VALUE convert(FixedTypeValueFieldSpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<FixedTypeValueFieldSpecContextProxy>(x, false, rb_cFixedTypeValueFieldSpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::VariableTypeValueFieldSpecContext*> {
  public:
    VALUE convert(ASNParser::VariableTypeValueFieldSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::VariableTypeValueFieldSpecContext>(x, false, rb_cVariableTypeValueFieldSpecContext);
    }
  };

  template <>
  class To_Ruby<VariableTypeValueFieldSpecContextProxy*> {
  public:
    VALUE convert(VariableTypeValueFieldSpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<VariableTypeValueFieldSpecContextProxy>(x, false, rb_cVariableTypeValueFieldSpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::FixedTypeValueSetFieldSpecContext*> {
  public:
    VALUE convert(ASNParser::FixedTypeValueSetFieldSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::FixedTypeValueSetFieldSpecContext>(x, false, rb_cFixedTypeValueSetFieldSpecContext);
    }
  };

  template <>
  class To_Ruby<FixedTypeValueSetFieldSpecContextProxy*> {
  public:
    VALUE convert(FixedTypeValueSetFieldSpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<FixedTypeValueSetFieldSpecContextProxy>(x, false, rb_cFixedTypeValueSetFieldSpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::DefinedObjectContext*> {
  public:
    VALUE convert(ASNParser::DefinedObjectContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::DefinedObjectContext>(x, false, rb_cDefinedObjectContext);
    }
  };

  template <>
  class To_Ruby<DefinedObjectContextProxy*> {
  public:
    VALUE convert(DefinedObjectContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<DefinedObjectContextProxy>(x, false, rb_cDefinedObjectContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ParameterizedObjectContext*> {
  public:
    VALUE convert(ASNParser::ParameterizedObjectContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ParameterizedObjectContext>(x, false, rb_cParameterizedObjectContext);
    }
  };

  template <>
  class To_Ruby<ParameterizedObjectContextProxy*> {
  public:
    VALUE convert(ParameterizedObjectContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ParameterizedObjectContextProxy>(x, false, rb_cParameterizedObjectContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ActualParameterListContext*> {
  public:
    VALUE convert(ASNParser::ActualParameterListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ActualParameterListContext>(x, false, rb_cActualParameterListContext);
    }
  };

  template <>
  class To_Ruby<ActualParameterListContextProxy*> {
  public:
    VALUE convert(ActualParameterListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ActualParameterListContextProxy>(x, false, rb_cActualParameterListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ObjectSetSpecContext*> {
  public:
    VALUE convert(ASNParser::ObjectSetSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ObjectSetSpecContext>(x, false, rb_cObjectSetSpecContext);
    }
  };

  template <>
  class To_Ruby<ObjectSetSpecContextProxy*> {
  public:
    VALUE convert(ObjectSetSpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectSetSpecContextProxy>(x, false, rb_cObjectSetSpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::RootElementSetSpecContext*> {
  public:
    VALUE convert(ASNParser::RootElementSetSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::RootElementSetSpecContext>(x, false, rb_cRootElementSetSpecContext);
    }
  };

  template <>
  class To_Ruby<RootElementSetSpecContextProxy*> {
  public:
    VALUE convert(RootElementSetSpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<RootElementSetSpecContextProxy>(x, false, rb_cRootElementSetSpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::AdditionalElementSetSpecContext*> {
  public:
    VALUE convert(ASNParser::AdditionalElementSetSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::AdditionalElementSetSpecContext>(x, false, rb_cAdditionalElementSetSpecContext);
    }
  };

  template <>
  class To_Ruby<AdditionalElementSetSpecContextProxy*> {
  public:
    VALUE convert(AdditionalElementSetSpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<AdditionalElementSetSpecContextProxy>(x, false, rb_cAdditionalElementSetSpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ElementSetSpecsContext*> {
  public:
    VALUE convert(ASNParser::ElementSetSpecsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ElementSetSpecsContext>(x, false, rb_cElementSetSpecsContext);
    }
  };

  template <>
  class To_Ruby<ElementSetSpecsContextProxy*> {
  public:
    VALUE convert(ElementSetSpecsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ElementSetSpecsContextProxy>(x, false, rb_cElementSetSpecsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ElementSetSpecContext*> {
  public:
    VALUE convert(ASNParser::ElementSetSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ElementSetSpecContext>(x, false, rb_cElementSetSpecContext);
    }
  };

  template <>
  class To_Ruby<ElementSetSpecContextProxy*> {
  public:
    VALUE convert(ElementSetSpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ElementSetSpecContextProxy>(x, false, rb_cElementSetSpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::UnionsContext*> {
  public:
    VALUE convert(ASNParser::UnionsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::UnionsContext>(x, false, rb_cUnionsContext);
    }
  };

  template <>
  class To_Ruby<UnionsContextProxy*> {
  public:
    VALUE convert(UnionsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<UnionsContextProxy>(x, false, rb_cUnionsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ExclusionsContext*> {
  public:
    VALUE convert(ASNParser::ExclusionsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ExclusionsContext>(x, false, rb_cExclusionsContext);
    }
  };

  template <>
  class To_Ruby<ExclusionsContextProxy*> {
  public:
    VALUE convert(ExclusionsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExclusionsContextProxy>(x, false, rb_cExclusionsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::IntersectionsContext*> {
  public:
    VALUE convert(ASNParser::IntersectionsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::IntersectionsContext>(x, false, rb_cIntersectionsContext);
    }
  };

  template <>
  class To_Ruby<IntersectionsContextProxy*> {
  public:
    VALUE convert(IntersectionsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<IntersectionsContextProxy>(x, false, rb_cIntersectionsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::UnionMarkContext*> {
  public:
    VALUE convert(ASNParser::UnionMarkContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::UnionMarkContext>(x, false, rb_cUnionMarkContext);
    }
  };

  template <>
  class To_Ruby<UnionMarkContextProxy*> {
  public:
    VALUE convert(UnionMarkContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<UnionMarkContextProxy>(x, false, rb_cUnionMarkContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ElementsContext*> {
  public:
    VALUE convert(ASNParser::ElementsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ElementsContext>(x, false, rb_cElementsContext);
    }
  };

  template <>
  class To_Ruby<ElementsContextProxy*> {
  public:
    VALUE convert(ElementsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ElementsContextProxy>(x, false, rb_cElementsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::IntersectionElementsContext*> {
  public:
    VALUE convert(ASNParser::IntersectionElementsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::IntersectionElementsContext>(x, false, rb_cIntersectionElementsContext);
    }
  };

  template <>
  class To_Ruby<IntersectionElementsContextProxy*> {
  public:
    VALUE convert(IntersectionElementsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<IntersectionElementsContextProxy>(x, false, rb_cIntersectionElementsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::IntersectionMarkContext*> {
  public:
    VALUE convert(ASNParser::IntersectionMarkContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::IntersectionMarkContext>(x, false, rb_cIntersectionMarkContext);
    }
  };

  template <>
  class To_Ruby<IntersectionMarkContextProxy*> {
  public:
    VALUE convert(IntersectionMarkContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<IntersectionMarkContextProxy>(x, false, rb_cIntersectionMarkContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::SubtypeElementsContext*> {
  public:
    VALUE convert(ASNParser::SubtypeElementsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::SubtypeElementsContext>(x, false, rb_cSubtypeElementsContext);
    }
  };

  template <>
  class To_Ruby<SubtypeElementsContextProxy*> {
  public:
    VALUE convert(SubtypeElementsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SubtypeElementsContextProxy>(x, false, rb_cSubtypeElementsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ObjectSetElementsContext*> {
  public:
    VALUE convert(ASNParser::ObjectSetElementsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ObjectSetElementsContext>(x, false, rb_cObjectSetElementsContext);
    }
  };

  template <>
  class To_Ruby<ObjectSetElementsContextProxy*> {
  public:
    VALUE convert(ObjectSetElementsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectSetElementsContextProxy>(x, false, rb_cObjectSetElementsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::VariableTypeValueSetFieldSpecContext*> {
  public:
    VALUE convert(ASNParser::VariableTypeValueSetFieldSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::VariableTypeValueSetFieldSpecContext>(x, false, rb_cVariableTypeValueSetFieldSpecContext);
    }
  };

  template <>
  class To_Ruby<VariableTypeValueSetFieldSpecContextProxy*> {
  public:
    VALUE convert(VariableTypeValueSetFieldSpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<VariableTypeValueSetFieldSpecContextProxy>(x, false, rb_cVariableTypeValueSetFieldSpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ObjectFieldSpecContext*> {
  public:
    VALUE convert(ASNParser::ObjectFieldSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ObjectFieldSpecContext>(x, false, rb_cObjectFieldSpecContext);
    }
  };

  template <>
  class To_Ruby<ObjectFieldSpecContextProxy*> {
  public:
    VALUE convert(ObjectFieldSpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectFieldSpecContextProxy>(x, false, rb_cObjectFieldSpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ObjectOptionalitySpecContext*> {
  public:
    VALUE convert(ASNParser::ObjectOptionalitySpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ObjectOptionalitySpecContext>(x, false, rb_cObjectOptionalitySpecContext);
    }
  };

  template <>
  class To_Ruby<ObjectOptionalitySpecContextProxy*> {
  public:
    VALUE convert(ObjectOptionalitySpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectOptionalitySpecContextProxy>(x, false, rb_cObjectOptionalitySpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ObjectSetFieldSpecContext*> {
  public:
    VALUE convert(ASNParser::ObjectSetFieldSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ObjectSetFieldSpecContext>(x, false, rb_cObjectSetFieldSpecContext);
    }
  };

  template <>
  class To_Ruby<ObjectSetFieldSpecContextProxy*> {
  public:
    VALUE convert(ObjectSetFieldSpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectSetFieldSpecContextProxy>(x, false, rb_cObjectSetFieldSpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ObjectSetOptionalitySpecContext*> {
  public:
    VALUE convert(ASNParser::ObjectSetOptionalitySpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ObjectSetOptionalitySpecContext>(x, false, rb_cObjectSetOptionalitySpecContext);
    }
  };

  template <>
  class To_Ruby<ObjectSetOptionalitySpecContextProxy*> {
  public:
    VALUE convert(ObjectSetOptionalitySpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectSetOptionalitySpecContextProxy>(x, false, rb_cObjectSetOptionalitySpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::BuiltinTypeContext*> {
  public:
    VALUE convert(ASNParser::BuiltinTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::BuiltinTypeContext>(x, false, rb_cBuiltinTypeContext);
    }
  };

  template <>
  class To_Ruby<BuiltinTypeContextProxy*> {
  public:
    VALUE convert(BuiltinTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<BuiltinTypeContextProxy>(x, false, rb_cBuiltinTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ReferencedTypeContext*> {
  public:
    VALUE convert(ASNParser::ReferencedTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ReferencedTypeContext>(x, false, rb_cReferencedTypeContext);
    }
  };

  template <>
  class To_Ruby<ReferencedTypeContextProxy*> {
  public:
    VALUE convert(ReferencedTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ReferencedTypeContextProxy>(x, false, rb_cReferencedTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::OctetStringTypeContext*> {
  public:
    VALUE convert(ASNParser::OctetStringTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::OctetStringTypeContext>(x, false, rb_cOctetStringTypeContext);
    }
  };

  template <>
  class To_Ruby<OctetStringTypeContextProxy*> {
  public:
    VALUE convert(OctetStringTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<OctetStringTypeContextProxy>(x, false, rb_cOctetStringTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::BitStringTypeContext*> {
  public:
    VALUE convert(ASNParser::BitStringTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::BitStringTypeContext>(x, false, rb_cBitStringTypeContext);
    }
  };

  template <>
  class To_Ruby<BitStringTypeContextProxy*> {
  public:
    VALUE convert(BitStringTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<BitStringTypeContextProxy>(x, false, rb_cBitStringTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ChoiceTypeContext*> {
  public:
    VALUE convert(ASNParser::ChoiceTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ChoiceTypeContext>(x, false, rb_cChoiceTypeContext);
    }
  };

  template <>
  class To_Ruby<ChoiceTypeContextProxy*> {
  public:
    VALUE convert(ChoiceTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ChoiceTypeContextProxy>(x, false, rb_cChoiceTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::EnumeratedTypeContext*> {
  public:
    VALUE convert(ASNParser::EnumeratedTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::EnumeratedTypeContext>(x, false, rb_cEnumeratedTypeContext);
    }
  };

  template <>
  class To_Ruby<EnumeratedTypeContextProxy*> {
  public:
    VALUE convert(EnumeratedTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<EnumeratedTypeContextProxy>(x, false, rb_cEnumeratedTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::IntegerTypeContext*> {
  public:
    VALUE convert(ASNParser::IntegerTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::IntegerTypeContext>(x, false, rb_cIntegerTypeContext);
    }
  };

  template <>
  class To_Ruby<IntegerTypeContextProxy*> {
  public:
    VALUE convert(IntegerTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<IntegerTypeContextProxy>(x, false, rb_cIntegerTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::SetTypeContext*> {
  public:
    VALUE convert(ASNParser::SetTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::SetTypeContext>(x, false, rb_cSetTypeContext);
    }
  };

  template <>
  class To_Ruby<SetTypeContextProxy*> {
  public:
    VALUE convert(SetTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SetTypeContextProxy>(x, false, rb_cSetTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::SetOfTypeContext*> {
  public:
    VALUE convert(ASNParser::SetOfTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::SetOfTypeContext>(x, false, rb_cSetOfTypeContext);
    }
  };

  template <>
  class To_Ruby<SetOfTypeContextProxy*> {
  public:
    VALUE convert(SetOfTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SetOfTypeContextProxy>(x, false, rb_cSetOfTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ObjectidentifiertypeContext*> {
  public:
    VALUE convert(ASNParser::ObjectidentifiertypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ObjectidentifiertypeContext>(x, false, rb_cObjectidentifiertypeContext);
    }
  };

  template <>
  class To_Ruby<ObjectidentifiertypeContextProxy*> {
  public:
    VALUE convert(ObjectidentifiertypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectidentifiertypeContextProxy>(x, false, rb_cObjectidentifiertypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ObjectClassFieldTypeContext*> {
  public:
    VALUE convert(ASNParser::ObjectClassFieldTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ObjectClassFieldTypeContext>(x, false, rb_cObjectClassFieldTypeContext);
    }
  };

  template <>
  class To_Ruby<ObjectClassFieldTypeContextProxy*> {
  public:
    VALUE convert(ObjectClassFieldTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectClassFieldTypeContextProxy>(x, false, rb_cObjectClassFieldTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::DefinedTypeContext*> {
  public:
    VALUE convert(ASNParser::DefinedTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::DefinedTypeContext>(x, false, rb_cDefinedTypeContext);
    }
  };

  template <>
  class To_Ruby<DefinedTypeContextProxy*> {
  public:
    VALUE convert(DefinedTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<DefinedTypeContextProxy>(x, false, rb_cDefinedTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ConstraintSpecContext*> {
  public:
    VALUE convert(ASNParser::ConstraintSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ConstraintSpecContext>(x, false, rb_cConstraintSpecContext);
    }
  };

  template <>
  class To_Ruby<ConstraintSpecContextProxy*> {
  public:
    VALUE convert(ConstraintSpecContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ConstraintSpecContextProxy>(x, false, rb_cConstraintSpecContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::GeneralConstraintContext*> {
  public:
    VALUE convert(ASNParser::GeneralConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::GeneralConstraintContext>(x, false, rb_cGeneralConstraintContext);
    }
  };

  template <>
  class To_Ruby<GeneralConstraintContextProxy*> {
  public:
    VALUE convert(GeneralConstraintContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<GeneralConstraintContextProxy>(x, false, rb_cGeneralConstraintContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::SubtypeConstraintContext*> {
  public:
    VALUE convert(ASNParser::SubtypeConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::SubtypeConstraintContext>(x, false, rb_cSubtypeConstraintContext);
    }
  };

  template <>
  class To_Ruby<SubtypeConstraintContextProxy*> {
  public:
    VALUE convert(SubtypeConstraintContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SubtypeConstraintContextProxy>(x, false, rb_cSubtypeConstraintContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::UserDefinedConstraintContext*> {
  public:
    VALUE convert(ASNParser::UserDefinedConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::UserDefinedConstraintContext>(x, false, rb_cUserDefinedConstraintContext);
    }
  };

  template <>
  class To_Ruby<UserDefinedConstraintContextProxy*> {
  public:
    VALUE convert(UserDefinedConstraintContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<UserDefinedConstraintContextProxy>(x, false, rb_cUserDefinedConstraintContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::UserDefinedConstraintParameterContext*> {
  public:
    VALUE convert(ASNParser::UserDefinedConstraintParameterContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::UserDefinedConstraintParameterContext>(x, false, rb_cUserDefinedConstraintParameterContext);
    }
  };

  template <>
  class To_Ruby<UserDefinedConstraintParameterContextProxy*> {
  public:
    VALUE convert(UserDefinedConstraintParameterContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<UserDefinedConstraintParameterContextProxy>(x, false, rb_cUserDefinedConstraintParameterContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::TableConstraintContext*> {
  public:
    VALUE convert(ASNParser::TableConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::TableConstraintContext>(x, false, rb_cTableConstraintContext);
    }
  };

  template <>
  class To_Ruby<TableConstraintContextProxy*> {
  public:
    VALUE convert(TableConstraintContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<TableConstraintContextProxy>(x, false, rb_cTableConstraintContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ContentsConstraintContext*> {
  public:
    VALUE convert(ASNParser::ContentsConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ContentsConstraintContext>(x, false, rb_cContentsConstraintContext);
    }
  };

  template <>
  class To_Ruby<ContentsConstraintContextProxy*> {
  public:
    VALUE convert(ContentsConstraintContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ContentsConstraintContextProxy>(x, false, rb_cContentsConstraintContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ComponentRelationConstraintContext*> {
  public:
    VALUE convert(ASNParser::ComponentRelationConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ComponentRelationConstraintContext>(x, false, rb_cComponentRelationConstraintContext);
    }
  };

  template <>
  class To_Ruby<ComponentRelationConstraintContextProxy*> {
  public:
    VALUE convert(ComponentRelationConstraintContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ComponentRelationConstraintContextProxy>(x, false, rb_cComponentRelationConstraintContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::SimpleTableConstraintContext*> {
  public:
    VALUE convert(ASNParser::SimpleTableConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::SimpleTableConstraintContext>(x, false, rb_cSimpleTableConstraintContext);
    }
  };

  template <>
  class To_Ruby<SimpleTableConstraintContextProxy*> {
  public:
    VALUE convert(SimpleTableConstraintContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SimpleTableConstraintContextProxy>(x, false, rb_cSimpleTableConstraintContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ComponentPresenceListsContext*> {
  public:
    VALUE convert(ASNParser::ComponentPresenceListsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ComponentPresenceListsContext>(x, false, rb_cComponentPresenceListsContext);
    }
  };

  template <>
  class To_Ruby<ComponentPresenceListsContextProxy*> {
  public:
    VALUE convert(ComponentPresenceListsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ComponentPresenceListsContextProxy>(x, false, rb_cComponentPresenceListsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ComponentPresenceListContext*> {
  public:
    VALUE convert(ASNParser::ComponentPresenceListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ComponentPresenceListContext>(x, false, rb_cComponentPresenceListContext);
    }
  };

  template <>
  class To_Ruby<ComponentPresenceListContextProxy*> {
  public:
    VALUE convert(ComponentPresenceListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ComponentPresenceListContextProxy>(x, false, rb_cComponentPresenceListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ComponentPresenceContext*> {
  public:
    VALUE convert(ASNParser::ComponentPresenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ComponentPresenceContext>(x, false, rb_cComponentPresenceContext);
    }
  };

  template <>
  class To_Ruby<ComponentPresenceContextProxy*> {
  public:
    VALUE convert(ComponentPresenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ComponentPresenceContextProxy>(x, false, rb_cComponentPresenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::BuiltinValueContext*> {
  public:
    VALUE convert(ASNParser::BuiltinValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::BuiltinValueContext>(x, false, rb_cBuiltinValueContext);
    }
  };

  template <>
  class To_Ruby<BuiltinValueContextProxy*> {
  public:
    VALUE convert(BuiltinValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<BuiltinValueContextProxy>(x, false, rb_cBuiltinValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::EnumeratedValueContext*> {
  public:
    VALUE convert(ASNParser::EnumeratedValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::EnumeratedValueContext>(x, false, rb_cEnumeratedValueContext);
    }
  };

  template <>
  class To_Ruby<EnumeratedValueContextProxy*> {
  public:
    VALUE convert(EnumeratedValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<EnumeratedValueContextProxy>(x, false, rb_cEnumeratedValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::IntegerValueContext*> {
  public:
    VALUE convert(ASNParser::IntegerValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::IntegerValueContext>(x, false, rb_cIntegerValueContext);
    }
  };

  template <>
  class To_Ruby<IntegerValueContextProxy*> {
  public:
    VALUE convert(IntegerValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<IntegerValueContextProxy>(x, false, rb_cIntegerValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ChoiceValueContext*> {
  public:
    VALUE convert(ASNParser::ChoiceValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ChoiceValueContext>(x, false, rb_cChoiceValueContext);
    }
  };

  template <>
  class To_Ruby<ChoiceValueContextProxy*> {
  public:
    VALUE convert(ChoiceValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ChoiceValueContextProxy>(x, false, rb_cChoiceValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ObjectIdentifierValueContext*> {
  public:
    VALUE convert(ASNParser::ObjectIdentifierValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ObjectIdentifierValueContext>(x, false, rb_cObjectIdentifierValueContext);
    }
  };

  template <>
  class To_Ruby<ObjectIdentifierValueContextProxy*> {
  public:
    VALUE convert(ObjectIdentifierValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectIdentifierValueContextProxy>(x, false, rb_cObjectIdentifierValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::BooleanValueContext*> {
  public:
    VALUE convert(ASNParser::BooleanValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::BooleanValueContext>(x, false, rb_cBooleanValueContext);
    }
  };

  template <>
  class To_Ruby<BooleanValueContextProxy*> {
  public:
    VALUE convert(BooleanValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<BooleanValueContextProxy>(x, false, rb_cBooleanValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ObjIdComponentsListContext*> {
  public:
    VALUE convert(ASNParser::ObjIdComponentsListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ObjIdComponentsListContext>(x, false, rb_cObjIdComponentsListContext);
    }
  };

  template <>
  class To_Ruby<ObjIdComponentsListContextProxy*> {
  public:
    VALUE convert(ObjIdComponentsListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjIdComponentsListContextProxy>(x, false, rb_cObjIdComponentsListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ObjIdComponentsContext*> {
  public:
    VALUE convert(ASNParser::ObjIdComponentsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ObjIdComponentsContext>(x, false, rb_cObjIdComponentsContext);
    }
  };

  template <>
  class To_Ruby<ObjIdComponentsContextProxy*> {
  public:
    VALUE convert(ObjIdComponentsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjIdComponentsContextProxy>(x, false, rb_cObjIdComponentsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::DefinedValueContext*> {
  public:
    VALUE convert(ASNParser::DefinedValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::DefinedValueContext>(x, false, rb_cDefinedValueContext);
    }
  };

  template <>
  class To_Ruby<DefinedValueContextProxy*> {
  public:
    VALUE convert(DefinedValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<DefinedValueContextProxy>(x, false, rb_cDefinedValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::SignedNumberContext*> {
  public:
    VALUE convert(ASNParser::SignedNumberContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::SignedNumberContext>(x, false, rb_cSignedNumberContext);
    }
  };

  template <>
  class To_Ruby<SignedNumberContextProxy*> {
  public:
    VALUE convert(SignedNumberContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SignedNumberContextProxy>(x, false, rb_cSignedNumberContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::AlternativeTypeListsContext*> {
  public:
    VALUE convert(ASNParser::AlternativeTypeListsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::AlternativeTypeListsContext>(x, false, rb_cAlternativeTypeListsContext);
    }
  };

  template <>
  class To_Ruby<AlternativeTypeListsContextProxy*> {
  public:
    VALUE convert(AlternativeTypeListsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<AlternativeTypeListsContextProxy>(x, false, rb_cAlternativeTypeListsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::RootAlternativeTypeListContext*> {
  public:
    VALUE convert(ASNParser::RootAlternativeTypeListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::RootAlternativeTypeListContext>(x, false, rb_cRootAlternativeTypeListContext);
    }
  };

  template <>
  class To_Ruby<RootAlternativeTypeListContextProxy*> {
  public:
    VALUE convert(RootAlternativeTypeListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<RootAlternativeTypeListContextProxy>(x, false, rb_cRootAlternativeTypeListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ExtensionAdditionAlternativesContext*> {
  public:
    VALUE convert(ASNParser::ExtensionAdditionAlternativesContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ExtensionAdditionAlternativesContext>(x, false, rb_cExtensionAdditionAlternativesContext);
    }
  };

  template <>
  class To_Ruby<ExtensionAdditionAlternativesContextProxy*> {
  public:
    VALUE convert(ExtensionAdditionAlternativesContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExtensionAdditionAlternativesContextProxy>(x, false, rb_cExtensionAdditionAlternativesContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ExtensionAdditionAlternativesListContext*> {
  public:
    VALUE convert(ASNParser::ExtensionAdditionAlternativesListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ExtensionAdditionAlternativesListContext>(x, false, rb_cExtensionAdditionAlternativesListContext);
    }
  };

  template <>
  class To_Ruby<ExtensionAdditionAlternativesListContextProxy*> {
  public:
    VALUE convert(ExtensionAdditionAlternativesListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExtensionAdditionAlternativesListContextProxy>(x, false, rb_cExtensionAdditionAlternativesListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ExtensionAdditionAlternativeContext*> {
  public:
    VALUE convert(ASNParser::ExtensionAdditionAlternativeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ExtensionAdditionAlternativeContext>(x, false, rb_cExtensionAdditionAlternativeContext);
    }
  };

  template <>
  class To_Ruby<ExtensionAdditionAlternativeContextProxy*> {
  public:
    VALUE convert(ExtensionAdditionAlternativeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExtensionAdditionAlternativeContextProxy>(x, false, rb_cExtensionAdditionAlternativeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ExtensionAdditionAlternativesGroupContext*> {
  public:
    VALUE convert(ASNParser::ExtensionAdditionAlternativesGroupContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ExtensionAdditionAlternativesGroupContext>(x, false, rb_cExtensionAdditionAlternativesGroupContext);
    }
  };

  template <>
  class To_Ruby<ExtensionAdditionAlternativesGroupContextProxy*> {
  public:
    VALUE convert(ExtensionAdditionAlternativesGroupContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExtensionAdditionAlternativesGroupContextProxy>(x, false, rb_cExtensionAdditionAlternativesGroupContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::AlternativeTypeListContext*> {
  public:
    VALUE convert(ASNParser::AlternativeTypeListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::AlternativeTypeListContext>(x, false, rb_cAlternativeTypeListContext);
    }
  };

  template <>
  class To_Ruby<AlternativeTypeListContextProxy*> {
  public:
    VALUE convert(AlternativeTypeListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<AlternativeTypeListContextProxy>(x, false, rb_cAlternativeTypeListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::EnumerationsContext*> {
  public:
    VALUE convert(ASNParser::EnumerationsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::EnumerationsContext>(x, false, rb_cEnumerationsContext);
    }
  };

  template <>
  class To_Ruby<EnumerationsContextProxy*> {
  public:
    VALUE convert(EnumerationsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<EnumerationsContextProxy>(x, false, rb_cEnumerationsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::RootEnumerationContext*> {
  public:
    VALUE convert(ASNParser::RootEnumerationContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::RootEnumerationContext>(x, false, rb_cRootEnumerationContext);
    }
  };

  template <>
  class To_Ruby<RootEnumerationContextProxy*> {
  public:
    VALUE convert(RootEnumerationContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<RootEnumerationContextProxy>(x, false, rb_cRootEnumerationContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::AdditionalEnumerationContext*> {
  public:
    VALUE convert(ASNParser::AdditionalEnumerationContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::AdditionalEnumerationContext>(x, false, rb_cAdditionalEnumerationContext);
    }
  };

  template <>
  class To_Ruby<AdditionalEnumerationContextProxy*> {
  public:
    VALUE convert(AdditionalEnumerationContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<AdditionalEnumerationContextProxy>(x, false, rb_cAdditionalEnumerationContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::EnumerationContext*> {
  public:
    VALUE convert(ASNParser::EnumerationContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::EnumerationContext>(x, false, rb_cEnumerationContext);
    }
  };

  template <>
  class To_Ruby<EnumerationContextProxy*> {
  public:
    VALUE convert(EnumerationContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<EnumerationContextProxy>(x, false, rb_cEnumerationContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::EnumerationItemContext*> {
  public:
    VALUE convert(ASNParser::EnumerationItemContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::EnumerationItemContext>(x, false, rb_cEnumerationItemContext);
    }
  };

  template <>
  class To_Ruby<EnumerationItemContextProxy*> {
  public:
    VALUE convert(EnumerationItemContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<EnumerationItemContextProxy>(x, false, rb_cEnumerationItemContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::NamedNumberContext*> {
  public:
    VALUE convert(ASNParser::NamedNumberContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::NamedNumberContext>(x, false, rb_cNamedNumberContext);
    }
  };

  template <>
  class To_Ruby<NamedNumberContextProxy*> {
  public:
    VALUE convert(NamedNumberContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<NamedNumberContextProxy>(x, false, rb_cNamedNumberContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ParameterizedValueContext*> {
  public:
    VALUE convert(ASNParser::ParameterizedValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ParameterizedValueContext>(x, false, rb_cParameterizedValueContext);
    }
  };

  template <>
  class To_Ruby<ParameterizedValueContextProxy*> {
  public:
    VALUE convert(ParameterizedValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ParameterizedValueContextProxy>(x, false, rb_cParameterizedValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::SimpleDefinedValueContext*> {
  public:
    VALUE convert(ASNParser::SimpleDefinedValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::SimpleDefinedValueContext>(x, false, rb_cSimpleDefinedValueContext);
    }
  };

  template <>
  class To_Ruby<SimpleDefinedValueContextProxy*> {
  public:
    VALUE convert(SimpleDefinedValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SimpleDefinedValueContextProxy>(x, false, rb_cSimpleDefinedValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ActualParameterContext*> {
  public:
    VALUE convert(ASNParser::ActualParameterContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ActualParameterContext>(x, false, rb_cActualParameterContext);
    }
  };

  template <>
  class To_Ruby<ActualParameterContextProxy*> {
  public:
    VALUE convert(ActualParameterContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ActualParameterContextProxy>(x, false, rb_cActualParameterContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ExceptionIdentificationContext*> {
  public:
    VALUE convert(ASNParser::ExceptionIdentificationContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ExceptionIdentificationContext>(x, false, rb_cExceptionIdentificationContext);
    }
  };

  template <>
  class To_Ruby<ExceptionIdentificationContextProxy*> {
  public:
    VALUE convert(ExceptionIdentificationContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExceptionIdentificationContextProxy>(x, false, rb_cExceptionIdentificationContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::NamedNumberListContext*> {
  public:
    VALUE convert(ASNParser::NamedNumberListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::NamedNumberListContext>(x, false, rb_cNamedNumberListContext);
    }
  };

  template <>
  class To_Ruby<NamedNumberListContextProxy*> {
  public:
    VALUE convert(NamedNumberListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<NamedNumberListContextProxy>(x, false, rb_cNamedNumberListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::AtNotationContext*> {
  public:
    VALUE convert(ASNParser::AtNotationContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::AtNotationContext>(x, false, rb_cAtNotationContext);
    }
  };

  template <>
  class To_Ruby<AtNotationContextProxy*> {
  public:
    VALUE convert(AtNotationContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<AtNotationContextProxy>(x, false, rb_cAtNotationContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::ComponentIdListContext*> {
  public:
    VALUE convert(ASNParser::ComponentIdListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::ComponentIdListContext>(x, false, rb_cComponentIdListContext);
    }
  };

  template <>
  class To_Ruby<ComponentIdListContextProxy*> {
  public:
    VALUE convert(ComponentIdListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ComponentIdListContextProxy>(x, false, rb_cComponentIdListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::LevelContext*> {
  public:
    VALUE convert(ASNParser::LevelContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::LevelContext>(x, false, rb_cLevelContext);
    }
  };

  template <>
  class To_Ruby<LevelContextProxy*> {
  public:
    VALUE convert(LevelContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<LevelContextProxy>(x, false, rb_cLevelContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::NamedBitListContext*> {
  public:
    VALUE convert(ASNParser::NamedBitListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::NamedBitListContext>(x, false, rb_cNamedBitListContext);
    }
  };

  template <>
  class To_Ruby<NamedBitListContextProxy*> {
  public:
    VALUE convert(NamedBitListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<NamedBitListContextProxy>(x, false, rb_cNamedBitListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASNParser::NamedBitContext*> {
  public:
    VALUE convert(ASNParser::NamedBitContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASNParser::NamedBitContext>(x, false, rb_cNamedBitContext);
    }
  };

  template <>
  class To_Ruby<NamedBitContextProxy*> {
  public:
    VALUE convert(NamedBitContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<NamedBitContextProxy>(x, false, rb_cNamedBitContext);
    }
  };
}


Object ModulesContextProxy::moduleDefinition() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::ModulesContext*)orig) -> moduleDefinition().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(moduleDefinitionAt(i));
    }
  }

  return std::move(a);
}

Object ModulesContextProxy::moduleDefinitionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ModulesContext*)orig) -> moduleDefinition(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ModulesContextProxy::EOF() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ModulesContext*)orig) -> EOF();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ModuleDefinitionContextProxy::tagDefault() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ModuleDefinitionContext*)orig) -> tagDefault();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ModuleDefinitionContextProxy::extensionDefault() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ModuleDefinitionContext*)orig) -> extensionDefault();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ModuleDefinitionContextProxy::moduleBody() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ModuleDefinitionContext*)orig) -> moduleBody();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ModuleDefinitionContextProxy::IDENTIFIER() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ModuleDefinitionContext*)orig) -> IDENTIFIER();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ModuleDefinitionContextProxy::IDENTIFIERAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ModuleDefinitionContext*)orig) -> IDENTIFIER(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ModuleDefinitionContextProxy::DEFINITIONS_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ModuleDefinitionContext*)orig) -> DEFINITIONS_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ModuleDefinitionContextProxy::ASSIGN_OP() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ModuleDefinitionContext*)orig) -> ASSIGN_OP();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ModuleDefinitionContextProxy::BEGIN_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ModuleDefinitionContext*)orig) -> BEGIN_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ModuleDefinitionContextProxy::END_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ModuleDefinitionContext*)orig) -> END_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ModuleDefinitionContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ModuleDefinitionContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ModuleDefinitionContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ModuleDefinitionContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ModuleDefinitionContextProxy::L_PARAN() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ModuleDefinitionContext*)orig) -> L_PARAN();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ModuleDefinitionContextProxy::L_PARANAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ModuleDefinitionContext*)orig) -> L_PARAN(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ModuleDefinitionContextProxy::NUMBER() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ModuleDefinitionContext*)orig) -> NUMBER();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ModuleDefinitionContextProxy::NUMBERAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ModuleDefinitionContext*)orig) -> NUMBER(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ModuleDefinitionContextProxy::R_PARAN() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ModuleDefinitionContext*)orig) -> R_PARAN();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ModuleDefinitionContextProxy::R_PARANAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ModuleDefinitionContext*)orig) -> R_PARAN(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TagDefaultContextProxy::TAGS_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::TagDefaultContext*)orig) -> TAGS_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TagDefaultContextProxy::EXPLICIT_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::TagDefaultContext*)orig) -> EXPLICIT_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TagDefaultContextProxy::IMPLICIT_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::TagDefaultContext*)orig) -> IMPLICIT_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TagDefaultContextProxy::AUTOMATIC_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::TagDefaultContext*)orig) -> AUTOMATIC_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtensionDefaultContextProxy::EXTENSIBILITY_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExtensionDefaultContext*)orig) -> EXTENSIBILITY_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtensionDefaultContextProxy::IMPLIED_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExtensionDefaultContext*)orig) -> IMPLIED_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ModuleBodyContextProxy::exports() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ModuleBodyContext*)orig) -> exports();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ModuleBodyContextProxy::imports() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ModuleBodyContext*)orig) -> imports();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ModuleBodyContextProxy::assignmentList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ModuleBodyContext*)orig) -> assignmentList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExportsContextProxy::symbolsExported() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExportsContext*)orig) -> symbolsExported();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExportsContextProxy::EXPORTS_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExportsContext*)orig) -> EXPORTS_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExportsContextProxy::SEMI_COLON() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExportsContext*)orig) -> SEMI_COLON();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExportsContextProxy::ALL_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExportsContext*)orig) -> ALL_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ImportsContextProxy::symbolsImported() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ImportsContext*)orig) -> symbolsImported();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ImportsContextProxy::IMPORTS_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ImportsContext*)orig) -> IMPORTS_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ImportsContextProxy::SEMI_COLON() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ImportsContext*)orig) -> SEMI_COLON();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object AssignmentListContextProxy::assignment() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::AssignmentListContext*)orig) -> assignment().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(assignmentAt(i));
    }
  }

  return std::move(a);
}

Object AssignmentListContextProxy::assignmentAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::AssignmentListContext*)orig) -> assignment(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SymbolsExportedContextProxy::symbolList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SymbolsExportedContext*)orig) -> symbolList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SymbolListContextProxy::symbol() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::SymbolListContext*)orig) -> symbol().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(symbolAt(i));
    }
  }

  return std::move(a);
}

Object SymbolListContextProxy::symbolAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SymbolListContext*)orig) -> symbol(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SymbolListContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::SymbolListContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object SymbolListContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SymbolListContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SymbolsImportedContextProxy::symbolsFromModuleList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SymbolsImportedContext*)orig) -> symbolsFromModuleList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SymbolsFromModuleListContextProxy::symbolsFromModule() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::SymbolsFromModuleListContext*)orig) -> symbolsFromModule().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(symbolsFromModuleAt(i));
    }
  }

  return std::move(a);
}

Object SymbolsFromModuleListContextProxy::symbolsFromModuleAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SymbolsFromModuleListContext*)orig) -> symbolsFromModule(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SymbolsFromModuleContextProxy::symbolList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SymbolsFromModuleContext*)orig) -> symbolList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SymbolsFromModuleContextProxy::globalModuleReference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SymbolsFromModuleContext*)orig) -> globalModuleReference();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SymbolsFromModuleContextProxy::FROM_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SymbolsFromModuleContext*)orig) -> FROM_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object GlobalModuleReferenceContextProxy::assignedIdentifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::GlobalModuleReferenceContext*)orig) -> assignedIdentifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object GlobalModuleReferenceContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::GlobalModuleReferenceContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SymbolContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SymbolContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SymbolContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SymbolContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SymbolContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SymbolContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object AssignmentContextProxy::valueAssignment() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::AssignmentContext*)orig) -> valueAssignment();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object AssignmentContextProxy::typeAssignment() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::AssignmentContext*)orig) -> typeAssignment();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object AssignmentContextProxy::parameterizedAssignment() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::AssignmentContext*)orig) -> parameterizedAssignment();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object AssignmentContextProxy::objectClassAssignment() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::AssignmentContext*)orig) -> objectClassAssignment();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object AssignmentContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::AssignmentContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValueAssignmentContextProxy::asnType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ValueAssignmentContext*)orig) -> asnType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ValueAssignmentContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ValueAssignmentContext*)orig) -> value();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ValueAssignmentContextProxy::ASSIGN_OP() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ValueAssignmentContext*)orig) -> ASSIGN_OP();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeAssignmentContextProxy::asnType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::TypeAssignmentContext*)orig) -> asnType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object TypeAssignmentContextProxy::ASSIGN_OP() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::TypeAssignmentContext*)orig) -> ASSIGN_OP();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterizedAssignmentContextProxy::parameterList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ParameterizedAssignmentContext*)orig) -> parameterList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ParameterizedAssignmentContextProxy::asnType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ParameterizedAssignmentContext*)orig) -> asnType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ParameterizedAssignmentContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ParameterizedAssignmentContext*)orig) -> value();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ParameterizedAssignmentContextProxy::valueSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ParameterizedAssignmentContext*)orig) -> valueSet();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ParameterizedAssignmentContextProxy::definedObjectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ParameterizedAssignmentContext*)orig) -> definedObjectClass();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ParameterizedAssignmentContextProxy::object_() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ParameterizedAssignmentContext*)orig) -> object_();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ParameterizedAssignmentContextProxy::objectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ParameterizedAssignmentContext*)orig) -> objectClass();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ParameterizedAssignmentContextProxy::objectSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ParameterizedAssignmentContext*)orig) -> objectSet();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ParameterizedAssignmentContextProxy::ASSIGN_OP() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ParameterizedAssignmentContext*)orig) -> ASSIGN_OP();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectClassAssignmentContextProxy::objectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectClassAssignmentContext*)orig) -> objectClass();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectClassAssignmentContextProxy::ASSIGN_OP() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectClassAssignmentContext*)orig) -> ASSIGN_OP();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SequenceTypeContextProxy::extensionAndException() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SequenceTypeContext*)orig) -> extensionAndException();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SequenceTypeContextProxy::optionalExtensionMarker() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SequenceTypeContext*)orig) -> optionalExtensionMarker();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SequenceTypeContextProxy::componentTypeLists() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SequenceTypeContext*)orig) -> componentTypeLists();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SequenceTypeContextProxy::SEQUENCE_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SequenceTypeContext*)orig) -> SEQUENCE_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SequenceTypeContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SequenceTypeContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SequenceTypeContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SequenceTypeContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtensionAndExceptionContextProxy::exceptionSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExtensionAndExceptionContext*)orig) -> exceptionSpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExtensionAndExceptionContextProxy::ELLIPSIS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExtensionAndExceptionContext*)orig) -> ELLIPSIS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object OptionalExtensionMarkerContextProxy::COMMA() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::OptionalExtensionMarkerContext*)orig) -> COMMA();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object OptionalExtensionMarkerContextProxy::ELLIPSIS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::OptionalExtensionMarkerContext*)orig) -> ELLIPSIS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentTypeListsContextProxy::rootComponentTypeList() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::ComponentTypeListsContext*)orig) -> rootComponentTypeList().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(rootComponentTypeListAt(i));
    }
  }

  return std::move(a);
}

Object ComponentTypeListsContextProxy::rootComponentTypeListAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ComponentTypeListsContext*)orig) -> rootComponentTypeList(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ComponentTypeListsContextProxy::extensionAndException() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ComponentTypeListsContext*)orig) -> extensionAndException();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ComponentTypeListsContextProxy::extensionAdditions() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ComponentTypeListsContext*)orig) -> extensionAdditions();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ComponentTypeListsContextProxy::optionalExtensionMarker() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ComponentTypeListsContext*)orig) -> optionalExtensionMarker();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ComponentTypeListsContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ComponentTypeListsContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ComponentTypeListsContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentTypeListsContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentTypeListsContextProxy::EXTENSTIONENDMARKER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentTypeListsContext*)orig) -> EXTENSTIONENDMARKER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExceptionSpecContextProxy::exceptionIdentification() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExceptionSpecContext*)orig) -> exceptionIdentification();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExceptionSpecContextProxy::EXCLAM() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExceptionSpecContext*)orig) -> EXCLAM();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RootComponentTypeListContextProxy::componentTypeList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::RootComponentTypeListContext*)orig) -> componentTypeList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExtensionAdditionsContextProxy::extensionAdditionList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExtensionAdditionsContext*)orig) -> extensionAdditionList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExtensionAdditionsContextProxy::COMMA() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExtensionAdditionsContext*)orig) -> COMMA();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentTypeListContextProxy::componentType() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::ComponentTypeListContext*)orig) -> componentType().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(componentTypeAt(i));
    }
  }

  return std::move(a);
}

Object ComponentTypeListContextProxy::componentTypeAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ComponentTypeListContext*)orig) -> componentType(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ComponentTypeListContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ComponentTypeListContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ComponentTypeListContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentTypeListContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentTypeContextProxy::namedType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ComponentTypeContext*)orig) -> namedType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ComponentTypeContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ComponentTypeContext*)orig) -> value();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ComponentTypeContextProxy::asnType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ComponentTypeContext*)orig) -> asnType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ComponentTypeContextProxy::OPTIONAL_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentTypeContext*)orig) -> OPTIONAL_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentTypeContextProxy::DEFAULT_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentTypeContext*)orig) -> DEFAULT_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentTypeContextProxy::COMPONENTS_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentTypeContext*)orig) -> COMPONENTS_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentTypeContextProxy::OF_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentTypeContext*)orig) -> OF_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NamedTypeContextProxy::asnType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::NamedTypeContext*)orig) -> asnType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object NamedTypeContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::NamedTypeContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValueContextProxy::builtinValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ValueContext*)orig) -> builtinValue();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object AsnTypeContextProxy::builtinType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::AsnTypeContext*)orig) -> builtinType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object AsnTypeContextProxy::referencedType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::AsnTypeContext*)orig) -> referencedType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object AsnTypeContextProxy::constraint() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::AsnTypeContext*)orig) -> constraint().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(constraintAt(i));
    }
  }

  return std::move(a);
}

Object AsnTypeContextProxy::constraintAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::AsnTypeContext*)orig) -> constraint(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExtensionAdditionListContextProxy::extensionAddition() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::ExtensionAdditionListContext*)orig) -> extensionAddition().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(extensionAdditionAt(i));
    }
  }

  return std::move(a);
}

Object ExtensionAdditionListContextProxy::extensionAdditionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExtensionAdditionListContext*)orig) -> extensionAddition(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExtensionAdditionListContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ExtensionAdditionListContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ExtensionAdditionListContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExtensionAdditionListContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtensionAdditionContextProxy::componentType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExtensionAdditionContext*)orig) -> componentType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExtensionAdditionContextProxy::extensionAdditionGroup() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExtensionAdditionContext*)orig) -> extensionAdditionGroup();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExtensionAdditionGroupContextProxy::versionNumber() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExtensionAdditionGroupContext*)orig) -> versionNumber();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExtensionAdditionGroupContextProxy::componentTypeList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExtensionAdditionGroupContext*)orig) -> componentTypeList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExtensionAdditionGroupContextProxy::DOUBLE_L_BRACKET() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExtensionAdditionGroupContext*)orig) -> DOUBLE_L_BRACKET();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtensionAdditionGroupContextProxy::DOUBLE_R_BRACKET() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExtensionAdditionGroupContext*)orig) -> DOUBLE_R_BRACKET();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object VersionNumberContextProxy::NUMBER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::VersionNumberContext*)orig) -> NUMBER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object VersionNumberContextProxy::COLON() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::VersionNumberContext*)orig) -> COLON();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SequenceOfTypeContextProxy::asnType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SequenceOfTypeContext*)orig) -> asnType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SequenceOfTypeContextProxy::namedType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SequenceOfTypeContext*)orig) -> namedType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SequenceOfTypeContextProxy::constraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SequenceOfTypeContext*)orig) -> constraint();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SequenceOfTypeContextProxy::sizeConstraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SequenceOfTypeContext*)orig) -> sizeConstraint();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SequenceOfTypeContextProxy::SEQUENCE_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SequenceOfTypeContext*)orig) -> SEQUENCE_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SequenceOfTypeContextProxy::OF_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SequenceOfTypeContext*)orig) -> OF_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SequenceOfTypeContextProxy::L_PARAN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SequenceOfTypeContext*)orig) -> L_PARAN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SequenceOfTypeContextProxy::R_PARAN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SequenceOfTypeContext*)orig) -> R_PARAN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ConstraintContextProxy::constraintSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ConstraintContext*)orig) -> constraintSpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ConstraintContextProxy::exceptionSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ConstraintContext*)orig) -> exceptionSpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ConstraintContextProxy::L_PARAN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ConstraintContext*)orig) -> L_PARAN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ConstraintContextProxy::R_PARAN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ConstraintContext*)orig) -> R_PARAN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SizeConstraintContextProxy::constraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SizeConstraintContext*)orig) -> constraint();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SizeConstraintContextProxy::SIZE_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SizeConstraintContext*)orig) -> SIZE_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterListContextProxy::parameter() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::ParameterListContext*)orig) -> parameter().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(parameterAt(i));
    }
  }

  return std::move(a);
}

Object ParameterListContextProxy::parameterAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ParameterListContext*)orig) -> parameter(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ParameterListContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ParameterListContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterListContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ParameterListContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterListContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ParameterListContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ParameterListContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ParameterListContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValueSetContextProxy::elementSetSpecs() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ValueSetContext*)orig) -> elementSetSpecs();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ValueSetContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ValueSetContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValueSetContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ValueSetContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinedObjectClassContextProxy::IDENTIFIER() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::DefinedObjectClassContext*)orig) -> IDENTIFIER();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object DefinedObjectClassContextProxy::IDENTIFIERAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::DefinedObjectClassContext*)orig) -> IDENTIFIER(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinedObjectClassContextProxy::DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::DefinedObjectClassContext*)orig) -> DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinedObjectClassContextProxy::TYPE_IDENTIFIER_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::DefinedObjectClassContext*)orig) -> TYPE_IDENTIFIER_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinedObjectClassContextProxy::ABSTRACT_SYNTAX_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::DefinedObjectClassContext*)orig) -> ABSTRACT_SYNTAX_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object Object_ContextProxy::definedObject() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::Object_Context*)orig) -> definedObject();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object Object_ContextProxy::parameterizedObject() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::Object_Context*)orig) -> parameterizedObject();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectClassContextProxy::definedObjectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectClassContext*)orig) -> definedObjectClass();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectClassContextProxy::objectClassDefn() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectClassContext*)orig) -> objectClassDefn();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectSetContextProxy::objectSetSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectSetContext*)orig) -> objectSetSpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectSetContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectSetContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectSetContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectSetContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterContextProxy::paramGovernor() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ParameterContext*)orig) -> paramGovernor();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ParameterContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ParameterContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterContextProxy::COLON() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ParameterContext*)orig) -> COLON();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParamGovernorContextProxy::governor() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ParamGovernorContext*)orig) -> governor();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ParamGovernorContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ParamGovernorContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object GovernorContextProxy::asnType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::GovernorContext*)orig) -> asnType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object GovernorContextProxy::definedObjectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::GovernorContext*)orig) -> definedObjectClass();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectClassDefnContextProxy::fieldSpec() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::ObjectClassDefnContext*)orig) -> fieldSpec().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(fieldSpecAt(i));
    }
  }

  return std::move(a);
}

Object ObjectClassDefnContextProxy::fieldSpecAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectClassDefnContext*)orig) -> fieldSpec(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectClassDefnContextProxy::withSyntaxSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectClassDefnContext*)orig) -> withSyntaxSpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectClassDefnContextProxy::CLASS_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectClassDefnContext*)orig) -> CLASS_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectClassDefnContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectClassDefnContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectClassDefnContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectClassDefnContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectClassDefnContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ObjectClassDefnContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ObjectClassDefnContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectClassDefnContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UsefulObjectClassReferenceContextProxy::TYPE_IDENTIFIER_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::UsefulObjectClassReferenceContext*)orig) -> TYPE_IDENTIFIER_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UsefulObjectClassReferenceContextProxy::ABSTRACT_SYNTAX_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::UsefulObjectClassReferenceContext*)orig) -> ABSTRACT_SYNTAX_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExternalObjectClassReferenceContextProxy::IDENTIFIER() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ExternalObjectClassReferenceContext*)orig) -> IDENTIFIER();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ExternalObjectClassReferenceContextProxy::IDENTIFIERAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExternalObjectClassReferenceContext*)orig) -> IDENTIFIER(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExternalObjectClassReferenceContextProxy::DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExternalObjectClassReferenceContext*)orig) -> DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FieldSpecContextProxy::asnType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::FieldSpecContext*)orig) -> asnType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object FieldSpecContextProxy::fieldName() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::FieldSpecContext*)orig) -> fieldName();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object FieldSpecContextProxy::definedObjectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::FieldSpecContext*)orig) -> definedObjectClass();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object FieldSpecContextProxy::typeOptionalitySpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::FieldSpecContext*)orig) -> typeOptionalitySpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object FieldSpecContextProxy::valueSetOptionalitySpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::FieldSpecContext*)orig) -> valueSetOptionalitySpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object FieldSpecContextProxy::valueOptionalitySpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::FieldSpecContext*)orig) -> valueOptionalitySpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object FieldSpecContextProxy::valueSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::FieldSpecContext*)orig) -> valueSet();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object FieldSpecContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::FieldSpecContext*)orig) -> value();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object FieldSpecContextProxy::objectSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::FieldSpecContext*)orig) -> objectSet();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object FieldSpecContextProxy::object_() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::FieldSpecContext*)orig) -> object_();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object FieldSpecContextProxy::AMPERSAND() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::FieldSpecContext*)orig) -> AMPERSAND();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FieldSpecContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::FieldSpecContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FieldSpecContextProxy::OPTIONAL_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::FieldSpecContext*)orig) -> OPTIONAL_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FieldSpecContextProxy::DEFAULT_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::FieldSpecContext*)orig) -> DEFAULT_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FieldSpecContextProxy::UNIQUE_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::FieldSpecContext*)orig) -> UNIQUE_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object WithSyntaxSpecContextProxy::syntaxList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::WithSyntaxSpecContext*)orig) -> syntaxList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object WithSyntaxSpecContextProxy::WITH_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::WithSyntaxSpecContext*)orig) -> WITH_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object WithSyntaxSpecContextProxy::SYNTAX_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::WithSyntaxSpecContext*)orig) -> SYNTAX_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SyntaxListContextProxy::tokenOrGroupSpec() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::SyntaxListContext*)orig) -> tokenOrGroupSpec().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(tokenOrGroupSpecAt(i));
    }
  }

  return std::move(a);
}

Object SyntaxListContextProxy::tokenOrGroupSpecAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SyntaxListContext*)orig) -> tokenOrGroupSpec(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SyntaxListContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SyntaxListContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SyntaxListContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SyntaxListContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TokenOrGroupSpecContextProxy::requiredToken() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::TokenOrGroupSpecContext*)orig) -> requiredToken();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object TokenOrGroupSpecContextProxy::optionalGroup() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::TokenOrGroupSpecContext*)orig) -> optionalGroup();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object RequiredTokenContextProxy::literal() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::RequiredTokenContext*)orig) -> literal();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object RequiredTokenContextProxy::primitiveFieldName() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::RequiredTokenContext*)orig) -> primitiveFieldName();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object OptionalGroupContextProxy::tokenOrGroupSpec() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::OptionalGroupContext*)orig) -> tokenOrGroupSpec().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(tokenOrGroupSpecAt(i));
    }
  }

  return std::move(a);
}

Object OptionalGroupContextProxy::tokenOrGroupSpecAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::OptionalGroupContext*)orig) -> tokenOrGroupSpec(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object OptionalGroupContextProxy::L_BRACKET() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::OptionalGroupContext*)orig) -> L_BRACKET();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object OptionalGroupContextProxy::R_BRACKET() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::OptionalGroupContext*)orig) -> R_BRACKET();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object LiteralContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::LiteralContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object LiteralContextProxy::COMMA() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::LiteralContext*)orig) -> COMMA();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object PrimitiveFieldNameContextProxy::AMPERSAND() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::PrimitiveFieldNameContext*)orig) -> AMPERSAND();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object PrimitiveFieldNameContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::PrimitiveFieldNameContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FieldNameContextProxy::AMPERSAND() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::FieldNameContext*)orig) -> AMPERSAND();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object FieldNameContextProxy::AMPERSANDAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::FieldNameContext*)orig) -> AMPERSAND(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FieldNameContextProxy::IDENTIFIER() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::FieldNameContext*)orig) -> IDENTIFIER();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object FieldNameContextProxy::IDENTIFIERAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::FieldNameContext*)orig) -> IDENTIFIER(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FieldNameContextProxy::DOT() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::FieldNameContext*)orig) -> DOT();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object FieldNameContextProxy::DOTAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::FieldNameContext*)orig) -> DOT(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeOptionalitySpecContextProxy::asnType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::TypeOptionalitySpecContext*)orig) -> asnType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object TypeOptionalitySpecContextProxy::OPTIONAL_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::TypeOptionalitySpecContext*)orig) -> OPTIONAL_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeOptionalitySpecContextProxy::DEFAULT_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::TypeOptionalitySpecContext*)orig) -> DEFAULT_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValueSetOptionalitySpecContextProxy::valueSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ValueSetOptionalitySpecContext*)orig) -> valueSet();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ValueSetOptionalitySpecContextProxy::OPTIONAL_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ValueSetOptionalitySpecContext*)orig) -> OPTIONAL_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValueSetOptionalitySpecContextProxy::DEFAULT_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ValueSetOptionalitySpecContext*)orig) -> DEFAULT_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValueOptionalitySpecContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ValueOptionalitySpecContext*)orig) -> value();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ValueOptionalitySpecContextProxy::OPTIONAL_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ValueOptionalitySpecContext*)orig) -> OPTIONAL_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValueOptionalitySpecContextProxy::DEFAULT_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ValueOptionalitySpecContext*)orig) -> DEFAULT_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeFieldSpecContextProxy::typeOptionalitySpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::TypeFieldSpecContext*)orig) -> typeOptionalitySpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object TypeFieldSpecContextProxy::AMPERSAND() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::TypeFieldSpecContext*)orig) -> AMPERSAND();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeFieldSpecContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::TypeFieldSpecContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FixedTypeValueFieldSpecContextProxy::asnType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::FixedTypeValueFieldSpecContext*)orig) -> asnType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object FixedTypeValueFieldSpecContextProxy::valueOptionalitySpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::FixedTypeValueFieldSpecContext*)orig) -> valueOptionalitySpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object FixedTypeValueFieldSpecContextProxy::AMPERSAND() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::FixedTypeValueFieldSpecContext*)orig) -> AMPERSAND();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FixedTypeValueFieldSpecContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::FixedTypeValueFieldSpecContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FixedTypeValueFieldSpecContextProxy::UNIQUE_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::FixedTypeValueFieldSpecContext*)orig) -> UNIQUE_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object VariableTypeValueFieldSpecContextProxy::fieldName() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::VariableTypeValueFieldSpecContext*)orig) -> fieldName();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object VariableTypeValueFieldSpecContextProxy::valueOptionalitySpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::VariableTypeValueFieldSpecContext*)orig) -> valueOptionalitySpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object VariableTypeValueFieldSpecContextProxy::AMPERSAND() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::VariableTypeValueFieldSpecContext*)orig) -> AMPERSAND();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object VariableTypeValueFieldSpecContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::VariableTypeValueFieldSpecContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FixedTypeValueSetFieldSpecContextProxy::asnType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::FixedTypeValueSetFieldSpecContext*)orig) -> asnType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object FixedTypeValueSetFieldSpecContextProxy::valueSetOptionalitySpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::FixedTypeValueSetFieldSpecContext*)orig) -> valueSetOptionalitySpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object FixedTypeValueSetFieldSpecContextProxy::AMPERSAND() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::FixedTypeValueSetFieldSpecContext*)orig) -> AMPERSAND();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FixedTypeValueSetFieldSpecContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::FixedTypeValueSetFieldSpecContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinedObjectContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::DefinedObjectContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinedObjectContextProxy::DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::DefinedObjectContext*)orig) -> DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterizedObjectContextProxy::definedObject() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ParameterizedObjectContext*)orig) -> definedObject();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ParameterizedObjectContextProxy::actualParameterList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ParameterizedObjectContext*)orig) -> actualParameterList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ActualParameterListContextProxy::actualParameter() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::ActualParameterListContext*)orig) -> actualParameter().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(actualParameterAt(i));
    }
  }

  return std::move(a);
}

Object ActualParameterListContextProxy::actualParameterAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ActualParameterListContext*)orig) -> actualParameter(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ActualParameterListContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ActualParameterListContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ActualParameterListContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ActualParameterListContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ActualParameterListContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ActualParameterListContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ActualParameterListContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ActualParameterListContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectSetSpecContextProxy::rootElementSetSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectSetSpecContext*)orig) -> rootElementSetSpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectSetSpecContextProxy::additionalElementSetSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectSetSpecContext*)orig) -> additionalElementSetSpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectSetSpecContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ObjectSetSpecContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ObjectSetSpecContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectSetSpecContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectSetSpecContextProxy::ELLIPSIS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectSetSpecContext*)orig) -> ELLIPSIS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RootElementSetSpecContextProxy::elementSetSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::RootElementSetSpecContext*)orig) -> elementSetSpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object AdditionalElementSetSpecContextProxy::elementSetSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::AdditionalElementSetSpecContext*)orig) -> elementSetSpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ElementSetSpecsContextProxy::rootElementSetSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ElementSetSpecsContext*)orig) -> rootElementSetSpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ElementSetSpecsContextProxy::additionalElementSetSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ElementSetSpecsContext*)orig) -> additionalElementSetSpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ElementSetSpecsContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ElementSetSpecsContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ElementSetSpecsContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ElementSetSpecsContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ElementSetSpecsContextProxy::ELLIPSIS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ElementSetSpecsContext*)orig) -> ELLIPSIS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ElementSetSpecContextProxy::unions() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ElementSetSpecContext*)orig) -> unions();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ElementSetSpecContextProxy::exclusions() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ElementSetSpecContext*)orig) -> exclusions();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ElementSetSpecContextProxy::ALL_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ElementSetSpecContext*)orig) -> ALL_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UnionsContextProxy::intersections() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::UnionsContext*)orig) -> intersections().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(intersectionsAt(i));
    }
  }

  return std::move(a);
}

Object UnionsContextProxy::intersectionsAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::UnionsContext*)orig) -> intersections(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object UnionsContextProxy::unionMark() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::UnionsContext*)orig) -> unionMark().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(unionMarkAt(i));
    }
  }

  return std::move(a);
}

Object UnionsContextProxy::unionMarkAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::UnionsContext*)orig) -> unionMark(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExclusionsContextProxy::elements() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExclusionsContext*)orig) -> elements();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExclusionsContextProxy::EXCEPT_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExclusionsContext*)orig) -> EXCEPT_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntersectionsContextProxy::intersectionElements() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::IntersectionsContext*)orig) -> intersectionElements().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(intersectionElementsAt(i));
    }
  }

  return std::move(a);
}

Object IntersectionsContextProxy::intersectionElementsAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::IntersectionsContext*)orig) -> intersectionElements(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object IntersectionsContextProxy::intersectionMark() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::IntersectionsContext*)orig) -> intersectionMark().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(intersectionMarkAt(i));
    }
  }

  return std::move(a);
}

Object IntersectionsContextProxy::intersectionMarkAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::IntersectionsContext*)orig) -> intersectionMark(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object UnionMarkContextProxy::PIPE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::UnionMarkContext*)orig) -> PIPE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UnionMarkContextProxy::UNION_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::UnionMarkContext*)orig) -> UNION_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ElementsContextProxy::subtypeElements() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ElementsContext*)orig) -> subtypeElements();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object IntersectionElementsContextProxy::elements() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::IntersectionElementsContext*)orig) -> elements();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object IntersectionElementsContextProxy::exclusions() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::IntersectionElementsContext*)orig) -> exclusions();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object IntersectionMarkContextProxy::POWER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::IntersectionMarkContext*)orig) -> POWER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntersectionMarkContextProxy::INTERSECTION_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::IntersectionMarkContext*)orig) -> INTERSECTION_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SubtypeElementsContextProxy::value() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::SubtypeElementsContext*)orig) -> value().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(valueAt(i));
    }
  }

  return std::move(a);
}

Object SubtypeElementsContextProxy::valueAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SubtypeElementsContext*)orig) -> value(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SubtypeElementsContextProxy::sizeConstraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SubtypeElementsContext*)orig) -> sizeConstraint();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SubtypeElementsContextProxy::DOUBLE_DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SubtypeElementsContext*)orig) -> DOUBLE_DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SubtypeElementsContextProxy::MIN_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SubtypeElementsContext*)orig) -> MIN_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SubtypeElementsContextProxy::MAX_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SubtypeElementsContext*)orig) -> MAX_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SubtypeElementsContextProxy::LESS_THAN() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::SubtypeElementsContext*)orig) -> LESS_THAN();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object SubtypeElementsContextProxy::LESS_THANAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SubtypeElementsContext*)orig) -> LESS_THAN(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SubtypeElementsContextProxy::PATTERN_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SubtypeElementsContext*)orig) -> PATTERN_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectSetElementsContextProxy::object_() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectSetElementsContext*)orig) -> object_();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectSetElementsContextProxy::definedObject() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectSetElementsContext*)orig) -> definedObject();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object VariableTypeValueSetFieldSpecContextProxy::fieldName() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::VariableTypeValueSetFieldSpecContext*)orig) -> fieldName();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object VariableTypeValueSetFieldSpecContextProxy::valueSetOptionalitySpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::VariableTypeValueSetFieldSpecContext*)orig) -> valueSetOptionalitySpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object VariableTypeValueSetFieldSpecContextProxy::AMPERSAND() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::VariableTypeValueSetFieldSpecContext*)orig) -> AMPERSAND();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object VariableTypeValueSetFieldSpecContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::VariableTypeValueSetFieldSpecContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectFieldSpecContextProxy::definedObjectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectFieldSpecContext*)orig) -> definedObjectClass();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectFieldSpecContextProxy::objectOptionalitySpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectFieldSpecContext*)orig) -> objectOptionalitySpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectFieldSpecContextProxy::AMPERSAND() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectFieldSpecContext*)orig) -> AMPERSAND();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectFieldSpecContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectFieldSpecContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectOptionalitySpecContextProxy::object_() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectOptionalitySpecContext*)orig) -> object_();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectOptionalitySpecContextProxy::OPTIONAL_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectOptionalitySpecContext*)orig) -> OPTIONAL_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectOptionalitySpecContextProxy::DEFAULT_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectOptionalitySpecContext*)orig) -> DEFAULT_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectSetFieldSpecContextProxy::definedObjectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectSetFieldSpecContext*)orig) -> definedObjectClass();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectSetFieldSpecContextProxy::objectSetOptionalitySpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectSetFieldSpecContext*)orig) -> objectSetOptionalitySpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectSetFieldSpecContextProxy::AMPERSAND() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectSetFieldSpecContext*)orig) -> AMPERSAND();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectSetFieldSpecContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectSetFieldSpecContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectSetOptionalitySpecContextProxy::objectSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectSetOptionalitySpecContext*)orig) -> objectSet();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectSetOptionalitySpecContextProxy::OPTIONAL_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectSetOptionalitySpecContext*)orig) -> OPTIONAL_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectSetOptionalitySpecContextProxy::DEFAULT_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectSetOptionalitySpecContext*)orig) -> DEFAULT_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BuiltinTypeContextProxy::octetStringType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::BuiltinTypeContext*)orig) -> octetStringType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object BuiltinTypeContextProxy::bitStringType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::BuiltinTypeContext*)orig) -> bitStringType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object BuiltinTypeContextProxy::choiceType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::BuiltinTypeContext*)orig) -> choiceType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object BuiltinTypeContextProxy::enumeratedType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::BuiltinTypeContext*)orig) -> enumeratedType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object BuiltinTypeContextProxy::integerType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::BuiltinTypeContext*)orig) -> integerType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object BuiltinTypeContextProxy::sequenceType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::BuiltinTypeContext*)orig) -> sequenceType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object BuiltinTypeContextProxy::sequenceOfType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::BuiltinTypeContext*)orig) -> sequenceOfType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object BuiltinTypeContextProxy::setType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::BuiltinTypeContext*)orig) -> setType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object BuiltinTypeContextProxy::setOfType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::BuiltinTypeContext*)orig) -> setOfType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object BuiltinTypeContextProxy::objectidentifiertype() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::BuiltinTypeContext*)orig) -> objectidentifiertype();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object BuiltinTypeContextProxy::objectClassFieldType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::BuiltinTypeContext*)orig) -> objectClassFieldType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object BuiltinTypeContextProxy::BOOLEAN_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::BuiltinTypeContext*)orig) -> BOOLEAN_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BuiltinTypeContextProxy::NULL_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::BuiltinTypeContext*)orig) -> NULL_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ReferencedTypeContextProxy::definedType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ReferencedTypeContext*)orig) -> definedType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object OctetStringTypeContextProxy::OCTET_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::OctetStringTypeContext*)orig) -> OCTET_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object OctetStringTypeContextProxy::STRING_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::OctetStringTypeContext*)orig) -> STRING_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BitStringTypeContextProxy::namedBitList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::BitStringTypeContext*)orig) -> namedBitList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object BitStringTypeContextProxy::BIT_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::BitStringTypeContext*)orig) -> BIT_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BitStringTypeContextProxy::STRING_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::BitStringTypeContext*)orig) -> STRING_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BitStringTypeContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::BitStringTypeContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BitStringTypeContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::BitStringTypeContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ChoiceTypeContextProxy::alternativeTypeLists() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ChoiceTypeContext*)orig) -> alternativeTypeLists();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ChoiceTypeContextProxy::CHOICE_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ChoiceTypeContext*)orig) -> CHOICE_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ChoiceTypeContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ChoiceTypeContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ChoiceTypeContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ChoiceTypeContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object EnumeratedTypeContextProxy::enumerations() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::EnumeratedTypeContext*)orig) -> enumerations();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object EnumeratedTypeContextProxy::ENUMERATED_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::EnumeratedTypeContext*)orig) -> ENUMERATED_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object EnumeratedTypeContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::EnumeratedTypeContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object EnumeratedTypeContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::EnumeratedTypeContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntegerTypeContextProxy::namedNumberList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::IntegerTypeContext*)orig) -> namedNumberList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object IntegerTypeContextProxy::INTEGER_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::IntegerTypeContext*)orig) -> INTEGER_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntegerTypeContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::IntegerTypeContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntegerTypeContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::IntegerTypeContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SetTypeContextProxy::extensionAndException() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SetTypeContext*)orig) -> extensionAndException();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SetTypeContextProxy::optionalExtensionMarker() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SetTypeContext*)orig) -> optionalExtensionMarker();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SetTypeContextProxy::componentTypeLists() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SetTypeContext*)orig) -> componentTypeLists();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SetTypeContextProxy::SET_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SetTypeContext*)orig) -> SET_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SetTypeContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SetTypeContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SetTypeContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SetTypeContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SetOfTypeContextProxy::asnType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SetOfTypeContext*)orig) -> asnType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SetOfTypeContextProxy::namedType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SetOfTypeContext*)orig) -> namedType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SetOfTypeContextProxy::constraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SetOfTypeContext*)orig) -> constraint();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SetOfTypeContextProxy::sizeConstraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SetOfTypeContext*)orig) -> sizeConstraint();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SetOfTypeContextProxy::SET_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SetOfTypeContext*)orig) -> SET_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SetOfTypeContextProxy::OF_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SetOfTypeContext*)orig) -> OF_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectidentifiertypeContextProxy::OBJECT_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectidentifiertypeContext*)orig) -> OBJECT_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectidentifiertypeContextProxy::IDENTIFIER_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectidentifiertypeContext*)orig) -> IDENTIFIER_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectClassFieldTypeContextProxy::definedObjectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectClassFieldTypeContext*)orig) -> definedObjectClass();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectClassFieldTypeContextProxy::fieldName() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectClassFieldTypeContext*)orig) -> fieldName();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectClassFieldTypeContextProxy::DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectClassFieldTypeContext*)orig) -> DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinedTypeContextProxy::actualParameterList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::DefinedTypeContext*)orig) -> actualParameterList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object DefinedTypeContextProxy::IDENTIFIER() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::DefinedTypeContext*)orig) -> IDENTIFIER();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object DefinedTypeContextProxy::IDENTIFIERAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::DefinedTypeContext*)orig) -> IDENTIFIER(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinedTypeContextProxy::DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::DefinedTypeContext*)orig) -> DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ConstraintSpecContextProxy::generalConstraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ConstraintSpecContext*)orig) -> generalConstraint();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ConstraintSpecContextProxy::subtypeConstraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ConstraintSpecContext*)orig) -> subtypeConstraint();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object GeneralConstraintContextProxy::userDefinedConstraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::GeneralConstraintContext*)orig) -> userDefinedConstraint();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object GeneralConstraintContextProxy::tableConstraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::GeneralConstraintContext*)orig) -> tableConstraint();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object GeneralConstraintContextProxy::contentsConstraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::GeneralConstraintContext*)orig) -> contentsConstraint();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SubtypeConstraintContextProxy::elementSetSpecs() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SubtypeConstraintContext*)orig) -> elementSetSpecs();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object UserDefinedConstraintContextProxy::userDefinedConstraintParameter() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::UserDefinedConstraintContext*)orig) -> userDefinedConstraintParameter().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(userDefinedConstraintParameterAt(i));
    }
  }

  return std::move(a);
}

Object UserDefinedConstraintContextProxy::userDefinedConstraintParameterAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::UserDefinedConstraintContext*)orig) -> userDefinedConstraintParameter(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object UserDefinedConstraintContextProxy::CONSTRAINED_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::UserDefinedConstraintContext*)orig) -> CONSTRAINED_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UserDefinedConstraintContextProxy::BY_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::UserDefinedConstraintContext*)orig) -> BY_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UserDefinedConstraintContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::UserDefinedConstraintContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UserDefinedConstraintContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::UserDefinedConstraintContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UserDefinedConstraintContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::UserDefinedConstraintContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object UserDefinedConstraintContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::UserDefinedConstraintContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UserDefinedConstraintParameterContextProxy::governor() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::UserDefinedConstraintParameterContext*)orig) -> governor();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object UserDefinedConstraintParameterContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::UserDefinedConstraintParameterContext*)orig) -> value();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object UserDefinedConstraintParameterContextProxy::valueSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::UserDefinedConstraintParameterContext*)orig) -> valueSet();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object UserDefinedConstraintParameterContextProxy::object_() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::UserDefinedConstraintParameterContext*)orig) -> object_();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object UserDefinedConstraintParameterContextProxy::objectSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::UserDefinedConstraintParameterContext*)orig) -> objectSet();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object UserDefinedConstraintParameterContextProxy::COLON() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::UserDefinedConstraintParameterContext*)orig) -> COLON();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TableConstraintContextProxy::componentRelationConstraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::TableConstraintContext*)orig) -> componentRelationConstraint();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ContentsConstraintContextProxy::asnType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ContentsConstraintContext*)orig) -> asnType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ContentsConstraintContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ContentsConstraintContext*)orig) -> value();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ContentsConstraintContextProxy::componentPresenceLists() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ContentsConstraintContext*)orig) -> componentPresenceLists();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ContentsConstraintContextProxy::CONTAINING_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ContentsConstraintContext*)orig) -> CONTAINING_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ContentsConstraintContextProxy::ENCODED_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ContentsConstraintContext*)orig) -> ENCODED_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ContentsConstraintContextProxy::BY_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ContentsConstraintContext*)orig) -> BY_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ContentsConstraintContextProxy::WITH_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ContentsConstraintContext*)orig) -> WITH_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ContentsConstraintContextProxy::COMPONENTS_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ContentsConstraintContext*)orig) -> COMPONENTS_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ContentsConstraintContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ContentsConstraintContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ContentsConstraintContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ContentsConstraintContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentRelationConstraintContextProxy::atNotation() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::ComponentRelationConstraintContext*)orig) -> atNotation().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(atNotationAt(i));
    }
  }

  return std::move(a);
}

Object ComponentRelationConstraintContextProxy::atNotationAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ComponentRelationConstraintContext*)orig) -> atNotation(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ComponentRelationConstraintContextProxy::L_BRACE() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ComponentRelationConstraintContext*)orig) -> L_BRACE();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ComponentRelationConstraintContextProxy::L_BRACEAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentRelationConstraintContext*)orig) -> L_BRACE(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentRelationConstraintContextProxy::IDENTIFIER() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ComponentRelationConstraintContext*)orig) -> IDENTIFIER();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ComponentRelationConstraintContextProxy::IDENTIFIERAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentRelationConstraintContext*)orig) -> IDENTIFIER(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentRelationConstraintContextProxy::R_BRACE() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ComponentRelationConstraintContext*)orig) -> R_BRACE();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ComponentRelationConstraintContextProxy::R_BRACEAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentRelationConstraintContext*)orig) -> R_BRACE(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentRelationConstraintContextProxy::DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentRelationConstraintContext*)orig) -> DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentRelationConstraintContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ComponentRelationConstraintContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ComponentRelationConstraintContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentRelationConstraintContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SimpleTableConstraintContextProxy::objectSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::SimpleTableConstraintContext*)orig) -> objectSet();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ComponentPresenceListsContextProxy::componentPresenceList() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::ComponentPresenceListsContext*)orig) -> componentPresenceList().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(componentPresenceListAt(i));
    }
  }

  return std::move(a);
}

Object ComponentPresenceListsContextProxy::componentPresenceListAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ComponentPresenceListsContext*)orig) -> componentPresenceList(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ComponentPresenceListsContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ComponentPresenceListsContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ComponentPresenceListsContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentPresenceListsContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentPresenceListsContextProxy::ELLIPSIS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentPresenceListsContext*)orig) -> ELLIPSIS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentPresenceListContextProxy::componentPresence() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::ComponentPresenceListContext*)orig) -> componentPresence().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(componentPresenceAt(i));
    }
  }

  return std::move(a);
}

Object ComponentPresenceListContextProxy::componentPresenceAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ComponentPresenceListContext*)orig) -> componentPresence(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ComponentPresenceListContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ComponentPresenceListContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ComponentPresenceListContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentPresenceListContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentPresenceContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentPresenceContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentPresenceContextProxy::ABSENT_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentPresenceContext*)orig) -> ABSENT_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentPresenceContextProxy::PRESENT_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentPresenceContext*)orig) -> PRESENT_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BuiltinValueContextProxy::enumeratedValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::BuiltinValueContext*)orig) -> enumeratedValue();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object BuiltinValueContextProxy::integerValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::BuiltinValueContext*)orig) -> integerValue();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object BuiltinValueContextProxy::choiceValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::BuiltinValueContext*)orig) -> choiceValue();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object BuiltinValueContextProxy::objectIdentifierValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::BuiltinValueContext*)orig) -> objectIdentifierValue();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object BuiltinValueContextProxy::booleanValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::BuiltinValueContext*)orig) -> booleanValue();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object BuiltinValueContextProxy::CSTRING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::BuiltinValueContext*)orig) -> CSTRING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BuiltinValueContextProxy::BSTRING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::BuiltinValueContext*)orig) -> BSTRING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object EnumeratedValueContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::EnumeratedValueContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntegerValueContextProxy::signedNumber() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::IntegerValueContext*)orig) -> signedNumber();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object IntegerValueContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::IntegerValueContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ChoiceValueContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ChoiceValueContext*)orig) -> value();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ChoiceValueContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ChoiceValueContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ChoiceValueContextProxy::COLON() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ChoiceValueContext*)orig) -> COLON();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectIdentifierValueContextProxy::objIdComponentsList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjectIdentifierValueContext*)orig) -> objIdComponentsList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjectIdentifierValueContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectIdentifierValueContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectIdentifierValueContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjectIdentifierValueContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BooleanValueContextProxy::TRUE_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::BooleanValueContext*)orig) -> TRUE_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BooleanValueContextProxy::FALSE_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::BooleanValueContext*)orig) -> FALSE_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BooleanValueContextProxy::TRUE_SMALL_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::BooleanValueContext*)orig) -> TRUE_SMALL_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BooleanValueContextProxy::FALSE_SMALL_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::BooleanValueContext*)orig) -> FALSE_SMALL_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjIdComponentsListContextProxy::objIdComponents() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::ObjIdComponentsListContext*)orig) -> objIdComponents().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(objIdComponentsAt(i));
    }
  }

  return std::move(a);
}

Object ObjIdComponentsListContextProxy::objIdComponentsAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjIdComponentsListContext*)orig) -> objIdComponents(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjIdComponentsContextProxy::definedValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ObjIdComponentsContext*)orig) -> definedValue();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ObjIdComponentsContextProxy::NUMBER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjIdComponentsContext*)orig) -> NUMBER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjIdComponentsContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjIdComponentsContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjIdComponentsContextProxy::L_PARAN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjIdComponentsContext*)orig) -> L_PARAN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjIdComponentsContextProxy::R_PARAN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ObjIdComponentsContext*)orig) -> R_PARAN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinedValueContextProxy::parameterizedValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::DefinedValueContext*)orig) -> parameterizedValue();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SignedNumberContextProxy::NUMBER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SignedNumberContext*)orig) -> NUMBER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SignedNumberContextProxy::MINUS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SignedNumberContext*)orig) -> MINUS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object AlternativeTypeListsContextProxy::rootAlternativeTypeList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::AlternativeTypeListsContext*)orig) -> rootAlternativeTypeList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object AlternativeTypeListsContextProxy::extensionAndException() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::AlternativeTypeListsContext*)orig) -> extensionAndException();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object AlternativeTypeListsContextProxy::extensionAdditionAlternatives() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::AlternativeTypeListsContext*)orig) -> extensionAdditionAlternatives();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object AlternativeTypeListsContextProxy::optionalExtensionMarker() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::AlternativeTypeListsContext*)orig) -> optionalExtensionMarker();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object AlternativeTypeListsContextProxy::COMMA() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::AlternativeTypeListsContext*)orig) -> COMMA();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RootAlternativeTypeListContextProxy::alternativeTypeList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::RootAlternativeTypeListContext*)orig) -> alternativeTypeList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExtensionAdditionAlternativesContextProxy::extensionAdditionAlternativesList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExtensionAdditionAlternativesContext*)orig) -> extensionAdditionAlternativesList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExtensionAdditionAlternativesContextProxy::COMMA() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExtensionAdditionAlternativesContext*)orig) -> COMMA();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtensionAdditionAlternativesListContextProxy::extensionAdditionAlternative() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::ExtensionAdditionAlternativesListContext*)orig) -> extensionAdditionAlternative().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(extensionAdditionAlternativeAt(i));
    }
  }

  return std::move(a);
}

Object ExtensionAdditionAlternativesListContextProxy::extensionAdditionAlternativeAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExtensionAdditionAlternativesListContext*)orig) -> extensionAdditionAlternative(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExtensionAdditionAlternativesListContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ExtensionAdditionAlternativesListContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ExtensionAdditionAlternativesListContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExtensionAdditionAlternativesListContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtensionAdditionAlternativeContextProxy::extensionAdditionAlternativesGroup() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExtensionAdditionAlternativeContext*)orig) -> extensionAdditionAlternativesGroup();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExtensionAdditionAlternativeContextProxy::namedType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExtensionAdditionAlternativeContext*)orig) -> namedType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExtensionAdditionAlternativesGroupContextProxy::versionNumber() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExtensionAdditionAlternativesGroupContext*)orig) -> versionNumber();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExtensionAdditionAlternativesGroupContextProxy::alternativeTypeList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExtensionAdditionAlternativesGroupContext*)orig) -> alternativeTypeList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExtensionAdditionAlternativesGroupContextProxy::DOUBLE_L_BRACKET() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExtensionAdditionAlternativesGroupContext*)orig) -> DOUBLE_L_BRACKET();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtensionAdditionAlternativesGroupContextProxy::DOUBLE_R_BRACKET() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExtensionAdditionAlternativesGroupContext*)orig) -> DOUBLE_R_BRACKET();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object AlternativeTypeListContextProxy::namedType() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::AlternativeTypeListContext*)orig) -> namedType().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(namedTypeAt(i));
    }
  }

  return std::move(a);
}

Object AlternativeTypeListContextProxy::namedTypeAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::AlternativeTypeListContext*)orig) -> namedType(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object AlternativeTypeListContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::AlternativeTypeListContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object AlternativeTypeListContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::AlternativeTypeListContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object EnumerationsContextProxy::rootEnumeration() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::EnumerationsContext*)orig) -> rootEnumeration();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object EnumerationsContextProxy::exceptionSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::EnumerationsContext*)orig) -> exceptionSpec();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object EnumerationsContextProxy::additionalEnumeration() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::EnumerationsContext*)orig) -> additionalEnumeration();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object EnumerationsContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::EnumerationsContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object EnumerationsContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::EnumerationsContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object EnumerationsContextProxy::ELLIPSIS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::EnumerationsContext*)orig) -> ELLIPSIS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RootEnumerationContextProxy::enumeration() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::RootEnumerationContext*)orig) -> enumeration();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object AdditionalEnumerationContextProxy::enumeration() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::AdditionalEnumerationContext*)orig) -> enumeration();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object EnumerationContextProxy::enumerationItem() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::EnumerationContext*)orig) -> enumerationItem().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(enumerationItemAt(i));
    }
  }

  return std::move(a);
}

Object EnumerationContextProxy::enumerationItemAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::EnumerationContext*)orig) -> enumerationItem(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object EnumerationContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::EnumerationContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object EnumerationContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::EnumerationContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object EnumerationItemContextProxy::namedNumber() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::EnumerationItemContext*)orig) -> namedNumber();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object EnumerationItemContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::EnumerationItemContext*)orig) -> value();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object EnumerationItemContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::EnumerationItemContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NamedNumberContextProxy::signedNumber() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::NamedNumberContext*)orig) -> signedNumber();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object NamedNumberContextProxy::definedValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::NamedNumberContext*)orig) -> definedValue();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object NamedNumberContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::NamedNumberContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NamedNumberContextProxy::L_PARAN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::NamedNumberContext*)orig) -> L_PARAN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NamedNumberContextProxy::R_PARAN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::NamedNumberContext*)orig) -> R_PARAN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterizedValueContextProxy::simpleDefinedValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ParameterizedValueContext*)orig) -> simpleDefinedValue();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ParameterizedValueContextProxy::actualParameterList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ParameterizedValueContext*)orig) -> actualParameterList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object SimpleDefinedValueContextProxy::IDENTIFIER() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::SimpleDefinedValueContext*)orig) -> IDENTIFIER();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object SimpleDefinedValueContextProxy::IDENTIFIERAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SimpleDefinedValueContext*)orig) -> IDENTIFIER(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SimpleDefinedValueContextProxy::DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::SimpleDefinedValueContext*)orig) -> DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ActualParameterContextProxy::asnType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ActualParameterContext*)orig) -> asnType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ActualParameterContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ActualParameterContext*)orig) -> value();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExceptionIdentificationContextProxy::signedNumber() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExceptionIdentificationContext*)orig) -> signedNumber();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExceptionIdentificationContextProxy::definedValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExceptionIdentificationContext*)orig) -> definedValue();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExceptionIdentificationContextProxy::asnType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExceptionIdentificationContext*)orig) -> asnType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExceptionIdentificationContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::ExceptionIdentificationContext*)orig) -> value();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object ExceptionIdentificationContextProxy::COLON() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ExceptionIdentificationContext*)orig) -> COLON();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NamedNumberListContextProxy::namedNumber() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::NamedNumberListContext*)orig) -> namedNumber().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(namedNumberAt(i));
    }
  }

  return std::move(a);
}

Object NamedNumberListContextProxy::namedNumberAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::NamedNumberListContext*)orig) -> namedNumber(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object NamedNumberListContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::NamedNumberListContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object NamedNumberListContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::NamedNumberListContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object AtNotationContextProxy::componentIdList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::AtNotationContext*)orig) -> componentIdList();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object AtNotationContextProxy::level() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::AtNotationContext*)orig) -> level();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object AtNotationContextProxy::A_ROND() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::AtNotationContext*)orig) -> A_ROND();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object AtNotationContextProxy::A_ROND_DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::AtNotationContext*)orig) -> A_ROND_DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentIdListContextProxy::IDENTIFIER() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ComponentIdListContext*)orig) -> IDENTIFIER();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ComponentIdListContextProxy::IDENTIFIERAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentIdListContext*)orig) -> IDENTIFIER(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentIdListContextProxy::DOT() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::ComponentIdListContext*)orig) -> DOT();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ComponentIdListContextProxy::DOTAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::ComponentIdListContext*)orig) -> DOT(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object LevelContextProxy::level() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::LevelContext*)orig) -> level();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object LevelContextProxy::DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::LevelContext*)orig) -> DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NamedBitListContextProxy::namedBit() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASNParser::NamedBitListContext*)orig) -> namedBit().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(namedBitAt(i));
    }
  }

  return std::move(a);
}

Object NamedBitListContextProxy::namedBitAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::NamedBitListContext*)orig) -> namedBit(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object NamedBitListContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASNParser::NamedBitListContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object NamedBitListContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::NamedBitListContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NamedBitContextProxy::definedValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASNParser::NamedBitContext*)orig) -> definedValue();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return Rice::Object(child);
    }
  }

  return Qnil;
}

Object NamedBitContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::NamedBitContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NamedBitContextProxy::L_PARAN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::NamedBitContext*)orig) -> L_PARAN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NamedBitContextProxy::R_PARAN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::NamedBitContext*)orig) -> R_PARAN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NamedBitContextProxy::NUMBER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASNParser::NamedBitContext*)orig) -> NUMBER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}


class VisitorProxy : public ASNBaseVisitor, public Director {
public:
  VisitorProxy(Object self) : Director(self) { }

  Object ruby_visit(ContextProxy* proxy) {
    auto result = visit(proxy -> getOriginal());
    try {
      return std::any_cast<Object>(result);
    } catch(std::bad_cast) {
      return Qnil;
    }
  }

  Object ruby_visitChildren(ContextProxy* proxy) {
    auto result = visitChildren(proxy -> getOriginal());
    try {
      return std::any_cast<Object>(result);
    } catch(std::bad_cast) {
      return Qnil;
    }
  }

  virtual antlrcpp::Any visitModules(ASNParser::ModulesContext *ctx) override {
    ModulesContextProxy proxy(ctx);
    return getSelf().call("visit_modules", &proxy);
  }

  virtual antlrcpp::Any visitModuleDefinition(ASNParser::ModuleDefinitionContext *ctx) override {
    ModuleDefinitionContextProxy proxy(ctx);
    return getSelf().call("visit_module_definition", &proxy);
  }

  virtual antlrcpp::Any visitTagDefault(ASNParser::TagDefaultContext *ctx) override {
    TagDefaultContextProxy proxy(ctx);
    return getSelf().call("visit_tag_default", &proxy);
  }

  virtual antlrcpp::Any visitExtensionDefault(ASNParser::ExtensionDefaultContext *ctx) override {
    ExtensionDefaultContextProxy proxy(ctx);
    return getSelf().call("visit_extension_default", &proxy);
  }

  virtual antlrcpp::Any visitModuleBody(ASNParser::ModuleBodyContext *ctx) override {
    ModuleBodyContextProxy proxy(ctx);
    return getSelf().call("visit_module_body", &proxy);
  }

  virtual antlrcpp::Any visitExports(ASNParser::ExportsContext *ctx) override {
    ExportsContextProxy proxy(ctx);
    return getSelf().call("visit_exports", &proxy);
  }

  virtual antlrcpp::Any visitSymbolsExported(ASNParser::SymbolsExportedContext *ctx) override {
    SymbolsExportedContextProxy proxy(ctx);
    return getSelf().call("visit_symbols_exported", &proxy);
  }

  virtual antlrcpp::Any visitImports(ASNParser::ImportsContext *ctx) override {
    ImportsContextProxy proxy(ctx);
    return getSelf().call("visit_imports", &proxy);
  }

  virtual antlrcpp::Any visitSymbolsImported(ASNParser::SymbolsImportedContext *ctx) override {
    SymbolsImportedContextProxy proxy(ctx);
    return getSelf().call("visit_symbols_imported", &proxy);
  }

  virtual antlrcpp::Any visitSymbolsFromModuleList(ASNParser::SymbolsFromModuleListContext *ctx) override {
    SymbolsFromModuleListContextProxy proxy(ctx);
    return getSelf().call("visit_symbols_from_module_list", &proxy);
  }

  virtual antlrcpp::Any visitSymbolsFromModule(ASNParser::SymbolsFromModuleContext *ctx) override {
    SymbolsFromModuleContextProxy proxy(ctx);
    return getSelf().call("visit_symbols_from_module", &proxy);
  }

  virtual antlrcpp::Any visitGlobalModuleReference(ASNParser::GlobalModuleReferenceContext *ctx) override {
    GlobalModuleReferenceContextProxy proxy(ctx);
    return getSelf().call("visit_global_module_reference", &proxy);
  }

  virtual antlrcpp::Any visitAssignedIdentifier(ASNParser::AssignedIdentifierContext *ctx) override {
    AssignedIdentifierContextProxy proxy(ctx);
    return getSelf().call("visit_assigned_identifier", &proxy);
  }

  virtual antlrcpp::Any visitSymbolList(ASNParser::SymbolListContext *ctx) override {
    SymbolListContextProxy proxy(ctx);
    return getSelf().call("visit_symbol_list", &proxy);
  }

  virtual antlrcpp::Any visitSymbol(ASNParser::SymbolContext *ctx) override {
    SymbolContextProxy proxy(ctx);
    return getSelf().call("visit_symbol", &proxy);
  }

  virtual antlrcpp::Any visitAssignmentList(ASNParser::AssignmentListContext *ctx) override {
    AssignmentListContextProxy proxy(ctx);
    return getSelf().call("visit_assignment_list", &proxy);
  }

  virtual antlrcpp::Any visitAssignment(ASNParser::AssignmentContext *ctx) override {
    AssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_assignment", &proxy);
  }

  virtual antlrcpp::Any visitSequenceType(ASNParser::SequenceTypeContext *ctx) override {
    SequenceTypeContextProxy proxy(ctx);
    return getSelf().call("visit_sequence_type", &proxy);
  }

  virtual antlrcpp::Any visitExtensionAndException(ASNParser::ExtensionAndExceptionContext *ctx) override {
    ExtensionAndExceptionContextProxy proxy(ctx);
    return getSelf().call("visit_extension_and_exception", &proxy);
  }

  virtual antlrcpp::Any visitOptionalExtensionMarker(ASNParser::OptionalExtensionMarkerContext *ctx) override {
    OptionalExtensionMarkerContextProxy proxy(ctx);
    return getSelf().call("visit_optional_extension_marker", &proxy);
  }

  virtual antlrcpp::Any visitComponentTypeLists(ASNParser::ComponentTypeListsContext *ctx) override {
    ComponentTypeListsContextProxy proxy(ctx);
    return getSelf().call("visit_component_type_lists", &proxy);
  }

  virtual antlrcpp::Any visitRootComponentTypeList(ASNParser::RootComponentTypeListContext *ctx) override {
    RootComponentTypeListContextProxy proxy(ctx);
    return getSelf().call("visit_root_component_type_list", &proxy);
  }

  virtual antlrcpp::Any visitComponentTypeList(ASNParser::ComponentTypeListContext *ctx) override {
    ComponentTypeListContextProxy proxy(ctx);
    return getSelf().call("visit_component_type_list", &proxy);
  }

  virtual antlrcpp::Any visitComponentType(ASNParser::ComponentTypeContext *ctx) override {
    ComponentTypeContextProxy proxy(ctx);
    return getSelf().call("visit_component_type", &proxy);
  }

  virtual antlrcpp::Any visitExtensionAdditions(ASNParser::ExtensionAdditionsContext *ctx) override {
    ExtensionAdditionsContextProxy proxy(ctx);
    return getSelf().call("visit_extension_additions", &proxy);
  }

  virtual antlrcpp::Any visitExtensionAdditionList(ASNParser::ExtensionAdditionListContext *ctx) override {
    ExtensionAdditionListContextProxy proxy(ctx);
    return getSelf().call("visit_extension_addition_list", &proxy);
  }

  virtual antlrcpp::Any visitExtensionAddition(ASNParser::ExtensionAdditionContext *ctx) override {
    ExtensionAdditionContextProxy proxy(ctx);
    return getSelf().call("visit_extension_addition", &proxy);
  }

  virtual antlrcpp::Any visitExtensionAdditionGroup(ASNParser::ExtensionAdditionGroupContext *ctx) override {
    ExtensionAdditionGroupContextProxy proxy(ctx);
    return getSelf().call("visit_extension_addition_group", &proxy);
  }

  virtual antlrcpp::Any visitVersionNumber(ASNParser::VersionNumberContext *ctx) override {
    VersionNumberContextProxy proxy(ctx);
    return getSelf().call("visit_version_number", &proxy);
  }

  virtual antlrcpp::Any visitSequenceOfType(ASNParser::SequenceOfTypeContext *ctx) override {
    SequenceOfTypeContextProxy proxy(ctx);
    return getSelf().call("visit_sequence_of_type", &proxy);
  }

  virtual antlrcpp::Any visitSizeConstraint(ASNParser::SizeConstraintContext *ctx) override {
    SizeConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_size_constraint", &proxy);
  }

  virtual antlrcpp::Any visitParameterizedAssignment(ASNParser::ParameterizedAssignmentContext *ctx) override {
    ParameterizedAssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_parameterized_assignment", &proxy);
  }

  virtual antlrcpp::Any visitParameterList(ASNParser::ParameterListContext *ctx) override {
    ParameterListContextProxy proxy(ctx);
    return getSelf().call("visit_parameter_list", &proxy);
  }

  virtual antlrcpp::Any visitParameter(ASNParser::ParameterContext *ctx) override {
    ParameterContextProxy proxy(ctx);
    return getSelf().call("visit_parameter", &proxy);
  }

  virtual antlrcpp::Any visitParamGovernor(ASNParser::ParamGovernorContext *ctx) override {
    ParamGovernorContextProxy proxy(ctx);
    return getSelf().call("visit_param_governor", &proxy);
  }

  virtual antlrcpp::Any visitGovernor(ASNParser::GovernorContext *ctx) override {
    GovernorContextProxy proxy(ctx);
    return getSelf().call("visit_governor", &proxy);
  }

  virtual antlrcpp::Any visitObjectClassAssignment(ASNParser::ObjectClassAssignmentContext *ctx) override {
    ObjectClassAssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_object_class_assignment", &proxy);
  }

  virtual antlrcpp::Any visitObjectClass(ASNParser::ObjectClassContext *ctx) override {
    ObjectClassContextProxy proxy(ctx);
    return getSelf().call("visit_object_class", &proxy);
  }

  virtual antlrcpp::Any visitDefinedObjectClass(ASNParser::DefinedObjectClassContext *ctx) override {
    DefinedObjectClassContextProxy proxy(ctx);
    return getSelf().call("visit_defined_object_class", &proxy);
  }

  virtual antlrcpp::Any visitUsefulObjectClassReference(ASNParser::UsefulObjectClassReferenceContext *ctx) override {
    UsefulObjectClassReferenceContextProxy proxy(ctx);
    return getSelf().call("visit_useful_object_class_reference", &proxy);
  }

  virtual antlrcpp::Any visitExternalObjectClassReference(ASNParser::ExternalObjectClassReferenceContext *ctx) override {
    ExternalObjectClassReferenceContextProxy proxy(ctx);
    return getSelf().call("visit_external_object_class_reference", &proxy);
  }

  virtual antlrcpp::Any visitObjectClassDefn(ASNParser::ObjectClassDefnContext *ctx) override {
    ObjectClassDefnContextProxy proxy(ctx);
    return getSelf().call("visit_object_class_defn", &proxy);
  }

  virtual antlrcpp::Any visitWithSyntaxSpec(ASNParser::WithSyntaxSpecContext *ctx) override {
    WithSyntaxSpecContextProxy proxy(ctx);
    return getSelf().call("visit_with_syntax_spec", &proxy);
  }

  virtual antlrcpp::Any visitSyntaxList(ASNParser::SyntaxListContext *ctx) override {
    SyntaxListContextProxy proxy(ctx);
    return getSelf().call("visit_syntax_list", &proxy);
  }

  virtual antlrcpp::Any visitTokenOrGroupSpec(ASNParser::TokenOrGroupSpecContext *ctx) override {
    TokenOrGroupSpecContextProxy proxy(ctx);
    return getSelf().call("visit_token_or_group_spec", &proxy);
  }

  virtual antlrcpp::Any visitOptionalGroup(ASNParser::OptionalGroupContext *ctx) override {
    OptionalGroupContextProxy proxy(ctx);
    return getSelf().call("visit_optional_group", &proxy);
  }

  virtual antlrcpp::Any visitRequiredToken(ASNParser::RequiredTokenContext *ctx) override {
    RequiredTokenContextProxy proxy(ctx);
    return getSelf().call("visit_required_token", &proxy);
  }

  virtual antlrcpp::Any visitLiteral(ASNParser::LiteralContext *ctx) override {
    LiteralContextProxy proxy(ctx);
    return getSelf().call("visit_literal", &proxy);
  }

  virtual antlrcpp::Any visitPrimitiveFieldName(ASNParser::PrimitiveFieldNameContext *ctx) override {
    PrimitiveFieldNameContextProxy proxy(ctx);
    return getSelf().call("visit_primitive_field_name", &proxy);
  }

  virtual antlrcpp::Any visitFieldSpec(ASNParser::FieldSpecContext *ctx) override {
    FieldSpecContextProxy proxy(ctx);
    return getSelf().call("visit_field_spec", &proxy);
  }

  virtual antlrcpp::Any visitTypeFieldSpec(ASNParser::TypeFieldSpecContext *ctx) override {
    TypeFieldSpecContextProxy proxy(ctx);
    return getSelf().call("visit_type_field_spec", &proxy);
  }

  virtual antlrcpp::Any visitTypeOptionalitySpec(ASNParser::TypeOptionalitySpecContext *ctx) override {
    TypeOptionalitySpecContextProxy proxy(ctx);
    return getSelf().call("visit_type_optionality_spec", &proxy);
  }

  virtual antlrcpp::Any visitFixedTypeValueFieldSpec(ASNParser::FixedTypeValueFieldSpecContext *ctx) override {
    FixedTypeValueFieldSpecContextProxy proxy(ctx);
    return getSelf().call("visit_fixed_type_value_field_spec", &proxy);
  }

  virtual antlrcpp::Any visitValueOptionalitySpec(ASNParser::ValueOptionalitySpecContext *ctx) override {
    ValueOptionalitySpecContextProxy proxy(ctx);
    return getSelf().call("visit_value_optionality_spec", &proxy);
  }

  virtual antlrcpp::Any visitVariableTypeValueFieldSpec(ASNParser::VariableTypeValueFieldSpecContext *ctx) override {
    VariableTypeValueFieldSpecContextProxy proxy(ctx);
    return getSelf().call("visit_variable_type_value_field_spec", &proxy);
  }

  virtual antlrcpp::Any visitFixedTypeValueSetFieldSpec(ASNParser::FixedTypeValueSetFieldSpecContext *ctx) override {
    FixedTypeValueSetFieldSpecContextProxy proxy(ctx);
    return getSelf().call("visit_fixed_type_value_set_field_spec", &proxy);
  }

  virtual antlrcpp::Any visitValueSetOptionalitySpec(ASNParser::ValueSetOptionalitySpecContext *ctx) override {
    ValueSetOptionalitySpecContextProxy proxy(ctx);
    return getSelf().call("visit_value_set_optionality_spec", &proxy);
  }

  virtual antlrcpp::Any visitObject_(ASNParser::Object_Context *ctx) override {
    Object_ContextProxy proxy(ctx);
    return getSelf().call("visit_object_", &proxy);
  }

  virtual antlrcpp::Any visitParameterizedObject(ASNParser::ParameterizedObjectContext *ctx) override {
    ParameterizedObjectContextProxy proxy(ctx);
    return getSelf().call("visit_parameterized_object", &proxy);
  }

  virtual antlrcpp::Any visitDefinedObject(ASNParser::DefinedObjectContext *ctx) override {
    DefinedObjectContextProxy proxy(ctx);
    return getSelf().call("visit_defined_object", &proxy);
  }

  virtual antlrcpp::Any visitObjectSet(ASNParser::ObjectSetContext *ctx) override {
    ObjectSetContextProxy proxy(ctx);
    return getSelf().call("visit_object_set", &proxy);
  }

  virtual antlrcpp::Any visitObjectSetSpec(ASNParser::ObjectSetSpecContext *ctx) override {
    ObjectSetSpecContextProxy proxy(ctx);
    return getSelf().call("visit_object_set_spec", &proxy);
  }

  virtual antlrcpp::Any visitFieldName(ASNParser::FieldNameContext *ctx) override {
    FieldNameContextProxy proxy(ctx);
    return getSelf().call("visit_field_name", &proxy);
  }

  virtual antlrcpp::Any visitValueSet(ASNParser::ValueSetContext *ctx) override {
    ValueSetContextProxy proxy(ctx);
    return getSelf().call("visit_value_set", &proxy);
  }

  virtual antlrcpp::Any visitElementSetSpecs(ASNParser::ElementSetSpecsContext *ctx) override {
    ElementSetSpecsContextProxy proxy(ctx);
    return getSelf().call("visit_element_set_specs", &proxy);
  }

  virtual antlrcpp::Any visitRootElementSetSpec(ASNParser::RootElementSetSpecContext *ctx) override {
    RootElementSetSpecContextProxy proxy(ctx);
    return getSelf().call("visit_root_element_set_spec", &proxy);
  }

  virtual antlrcpp::Any visitAdditionalElementSetSpec(ASNParser::AdditionalElementSetSpecContext *ctx) override {
    AdditionalElementSetSpecContextProxy proxy(ctx);
    return getSelf().call("visit_additional_element_set_spec", &proxy);
  }

  virtual antlrcpp::Any visitElementSetSpec(ASNParser::ElementSetSpecContext *ctx) override {
    ElementSetSpecContextProxy proxy(ctx);
    return getSelf().call("visit_element_set_spec", &proxy);
  }

  virtual antlrcpp::Any visitUnions(ASNParser::UnionsContext *ctx) override {
    UnionsContextProxy proxy(ctx);
    return getSelf().call("visit_unions", &proxy);
  }

  virtual antlrcpp::Any visitExclusions(ASNParser::ExclusionsContext *ctx) override {
    ExclusionsContextProxy proxy(ctx);
    return getSelf().call("visit_exclusions", &proxy);
  }

  virtual antlrcpp::Any visitIntersections(ASNParser::IntersectionsContext *ctx) override {
    IntersectionsContextProxy proxy(ctx);
    return getSelf().call("visit_intersections", &proxy);
  }

  virtual antlrcpp::Any visitUnionMark(ASNParser::UnionMarkContext *ctx) override {
    UnionMarkContextProxy proxy(ctx);
    return getSelf().call("visit_union_mark", &proxy);
  }

  virtual antlrcpp::Any visitIntersectionMark(ASNParser::IntersectionMarkContext *ctx) override {
    IntersectionMarkContextProxy proxy(ctx);
    return getSelf().call("visit_intersection_mark", &proxy);
  }

  virtual antlrcpp::Any visitElements(ASNParser::ElementsContext *ctx) override {
    ElementsContextProxy proxy(ctx);
    return getSelf().call("visit_elements", &proxy);
  }

  virtual antlrcpp::Any visitObjectSetElements(ASNParser::ObjectSetElementsContext *ctx) override {
    ObjectSetElementsContextProxy proxy(ctx);
    return getSelf().call("visit_object_set_elements", &proxy);
  }

  virtual antlrcpp::Any visitIntersectionElements(ASNParser::IntersectionElementsContext *ctx) override {
    IntersectionElementsContextProxy proxy(ctx);
    return getSelf().call("visit_intersection_elements", &proxy);
  }

  virtual antlrcpp::Any visitSubtypeElements(ASNParser::SubtypeElementsContext *ctx) override {
    SubtypeElementsContextProxy proxy(ctx);
    return getSelf().call("visit_subtype_elements", &proxy);
  }

  virtual antlrcpp::Any visitVariableTypeValueSetFieldSpec(ASNParser::VariableTypeValueSetFieldSpecContext *ctx) override {
    VariableTypeValueSetFieldSpecContextProxy proxy(ctx);
    return getSelf().call("visit_variable_type_value_set_field_spec", &proxy);
  }

  virtual antlrcpp::Any visitObjectFieldSpec(ASNParser::ObjectFieldSpecContext *ctx) override {
    ObjectFieldSpecContextProxy proxy(ctx);
    return getSelf().call("visit_object_field_spec", &proxy);
  }

  virtual antlrcpp::Any visitObjectOptionalitySpec(ASNParser::ObjectOptionalitySpecContext *ctx) override {
    ObjectOptionalitySpecContextProxy proxy(ctx);
    return getSelf().call("visit_object_optionality_spec", &proxy);
  }

  virtual antlrcpp::Any visitObjectSetFieldSpec(ASNParser::ObjectSetFieldSpecContext *ctx) override {
    ObjectSetFieldSpecContextProxy proxy(ctx);
    return getSelf().call("visit_object_set_field_spec", &proxy);
  }

  virtual antlrcpp::Any visitObjectSetOptionalitySpec(ASNParser::ObjectSetOptionalitySpecContext *ctx) override {
    ObjectSetOptionalitySpecContextProxy proxy(ctx);
    return getSelf().call("visit_object_set_optionality_spec", &proxy);
  }

  virtual antlrcpp::Any visitTypeAssignment(ASNParser::TypeAssignmentContext *ctx) override {
    TypeAssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_type_assignment", &proxy);
  }

  virtual antlrcpp::Any visitValueAssignment(ASNParser::ValueAssignmentContext *ctx) override {
    ValueAssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_value_assignment", &proxy);
  }

  virtual antlrcpp::Any visitAsnType(ASNParser::AsnTypeContext *ctx) override {
    AsnTypeContextProxy proxy(ctx);
    return getSelf().call("visit_asn_type", &proxy);
  }

  virtual antlrcpp::Any visitBuiltinType(ASNParser::BuiltinTypeContext *ctx) override {
    BuiltinTypeContextProxy proxy(ctx);
    return getSelf().call("visit_builtin_type", &proxy);
  }

  virtual antlrcpp::Any visitObjectClassFieldType(ASNParser::ObjectClassFieldTypeContext *ctx) override {
    ObjectClassFieldTypeContextProxy proxy(ctx);
    return getSelf().call("visit_object_class_field_type", &proxy);
  }

  virtual antlrcpp::Any visitSetType(ASNParser::SetTypeContext *ctx) override {
    SetTypeContextProxy proxy(ctx);
    return getSelf().call("visit_set_type", &proxy);
  }

  virtual antlrcpp::Any visitSetOfType(ASNParser::SetOfTypeContext *ctx) override {
    SetOfTypeContextProxy proxy(ctx);
    return getSelf().call("visit_set_of_type", &proxy);
  }

  virtual antlrcpp::Any visitReferencedType(ASNParser::ReferencedTypeContext *ctx) override {
    ReferencedTypeContextProxy proxy(ctx);
    return getSelf().call("visit_referenced_type", &proxy);
  }

  virtual antlrcpp::Any visitDefinedType(ASNParser::DefinedTypeContext *ctx) override {
    DefinedTypeContextProxy proxy(ctx);
    return getSelf().call("visit_defined_type", &proxy);
  }

  virtual antlrcpp::Any visitConstraint(ASNParser::ConstraintContext *ctx) override {
    ConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_constraint", &proxy);
  }

  virtual antlrcpp::Any visitConstraintSpec(ASNParser::ConstraintSpecContext *ctx) override {
    ConstraintSpecContextProxy proxy(ctx);
    return getSelf().call("visit_constraint_spec", &proxy);
  }

  virtual antlrcpp::Any visitUserDefinedConstraint(ASNParser::UserDefinedConstraintContext *ctx) override {
    UserDefinedConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_user_defined_constraint", &proxy);
  }

  virtual antlrcpp::Any visitGeneralConstraint(ASNParser::GeneralConstraintContext *ctx) override {
    GeneralConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_general_constraint", &proxy);
  }

  virtual antlrcpp::Any visitUserDefinedConstraintParameter(ASNParser::UserDefinedConstraintParameterContext *ctx) override {
    UserDefinedConstraintParameterContextProxy proxy(ctx);
    return getSelf().call("visit_user_defined_constraint_parameter", &proxy);
  }

  virtual antlrcpp::Any visitTableConstraint(ASNParser::TableConstraintContext *ctx) override {
    TableConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_table_constraint", &proxy);
  }

  virtual antlrcpp::Any visitSimpleTableConstraint(ASNParser::SimpleTableConstraintContext *ctx) override {
    SimpleTableConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_simple_table_constraint", &proxy);
  }

  virtual antlrcpp::Any visitContentsConstraint(ASNParser::ContentsConstraintContext *ctx) override {
    ContentsConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_contents_constraint", &proxy);
  }

  virtual antlrcpp::Any visitComponentPresenceLists(ASNParser::ComponentPresenceListsContext *ctx) override {
    ComponentPresenceListsContextProxy proxy(ctx);
    return getSelf().call("visit_component_presence_lists", &proxy);
  }

  virtual antlrcpp::Any visitComponentPresenceList(ASNParser::ComponentPresenceListContext *ctx) override {
    ComponentPresenceListContextProxy proxy(ctx);
    return getSelf().call("visit_component_presence_list", &proxy);
  }

  virtual antlrcpp::Any visitComponentPresence(ASNParser::ComponentPresenceContext *ctx) override {
    ComponentPresenceContextProxy proxy(ctx);
    return getSelf().call("visit_component_presence", &proxy);
  }

  virtual antlrcpp::Any visitSubtypeConstraint(ASNParser::SubtypeConstraintContext *ctx) override {
    SubtypeConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_subtype_constraint", &proxy);
  }

  virtual antlrcpp::Any visitValue(ASNParser::ValueContext *ctx) override {
    ValueContextProxy proxy(ctx);
    return getSelf().call("visit_value", &proxy);
  }

  virtual antlrcpp::Any visitBuiltinValue(ASNParser::BuiltinValueContext *ctx) override {
    BuiltinValueContextProxy proxy(ctx);
    return getSelf().call("visit_builtin_value", &proxy);
  }

  virtual antlrcpp::Any visitObjectIdentifierValue(ASNParser::ObjectIdentifierValueContext *ctx) override {
    ObjectIdentifierValueContextProxy proxy(ctx);
    return getSelf().call("visit_object_identifier_value", &proxy);
  }

  virtual antlrcpp::Any visitObjIdComponentsList(ASNParser::ObjIdComponentsListContext *ctx) override {
    ObjIdComponentsListContextProxy proxy(ctx);
    return getSelf().call("visit_obj_id_components_list", &proxy);
  }

  virtual antlrcpp::Any visitObjIdComponents(ASNParser::ObjIdComponentsContext *ctx) override {
    ObjIdComponentsContextProxy proxy(ctx);
    return getSelf().call("visit_obj_id_components", &proxy);
  }

  virtual antlrcpp::Any visitIntegerValue(ASNParser::IntegerValueContext *ctx) override {
    IntegerValueContextProxy proxy(ctx);
    return getSelf().call("visit_integer_value", &proxy);
  }

  virtual antlrcpp::Any visitChoiceValue(ASNParser::ChoiceValueContext *ctx) override {
    ChoiceValueContextProxy proxy(ctx);
    return getSelf().call("visit_choice_value", &proxy);
  }

  virtual antlrcpp::Any visitEnumeratedValue(ASNParser::EnumeratedValueContext *ctx) override {
    EnumeratedValueContextProxy proxy(ctx);
    return getSelf().call("visit_enumerated_value", &proxy);
  }

  virtual antlrcpp::Any visitSignedNumber(ASNParser::SignedNumberContext *ctx) override {
    SignedNumberContextProxy proxy(ctx);
    return getSelf().call("visit_signed_number", &proxy);
  }

  virtual antlrcpp::Any visitChoiceType(ASNParser::ChoiceTypeContext *ctx) override {
    ChoiceTypeContextProxy proxy(ctx);
    return getSelf().call("visit_choice_type", &proxy);
  }

  virtual antlrcpp::Any visitAlternativeTypeLists(ASNParser::AlternativeTypeListsContext *ctx) override {
    AlternativeTypeListsContextProxy proxy(ctx);
    return getSelf().call("visit_alternative_type_lists", &proxy);
  }

  virtual antlrcpp::Any visitExtensionAdditionAlternatives(ASNParser::ExtensionAdditionAlternativesContext *ctx) override {
    ExtensionAdditionAlternativesContextProxy proxy(ctx);
    return getSelf().call("visit_extension_addition_alternatives", &proxy);
  }

  virtual antlrcpp::Any visitExtensionAdditionAlternativesList(ASNParser::ExtensionAdditionAlternativesListContext *ctx) override {
    ExtensionAdditionAlternativesListContextProxy proxy(ctx);
    return getSelf().call("visit_extension_addition_alternatives_list", &proxy);
  }

  virtual antlrcpp::Any visitExtensionAdditionAlternative(ASNParser::ExtensionAdditionAlternativeContext *ctx) override {
    ExtensionAdditionAlternativeContextProxy proxy(ctx);
    return getSelf().call("visit_extension_addition_alternative", &proxy);
  }

  virtual antlrcpp::Any visitExtensionAdditionAlternativesGroup(ASNParser::ExtensionAdditionAlternativesGroupContext *ctx) override {
    ExtensionAdditionAlternativesGroupContextProxy proxy(ctx);
    return getSelf().call("visit_extension_addition_alternatives_group", &proxy);
  }

  virtual antlrcpp::Any visitRootAlternativeTypeList(ASNParser::RootAlternativeTypeListContext *ctx) override {
    RootAlternativeTypeListContextProxy proxy(ctx);
    return getSelf().call("visit_root_alternative_type_list", &proxy);
  }

  virtual antlrcpp::Any visitAlternativeTypeList(ASNParser::AlternativeTypeListContext *ctx) override {
    AlternativeTypeListContextProxy proxy(ctx);
    return getSelf().call("visit_alternative_type_list", &proxy);
  }

  virtual antlrcpp::Any visitNamedType(ASNParser::NamedTypeContext *ctx) override {
    NamedTypeContextProxy proxy(ctx);
    return getSelf().call("visit_named_type", &proxy);
  }

  virtual antlrcpp::Any visitEnumeratedType(ASNParser::EnumeratedTypeContext *ctx) override {
    EnumeratedTypeContextProxy proxy(ctx);
    return getSelf().call("visit_enumerated_type", &proxy);
  }

  virtual antlrcpp::Any visitEnumerations(ASNParser::EnumerationsContext *ctx) override {
    EnumerationsContextProxy proxy(ctx);
    return getSelf().call("visit_enumerations", &proxy);
  }

  virtual antlrcpp::Any visitRootEnumeration(ASNParser::RootEnumerationContext *ctx) override {
    RootEnumerationContextProxy proxy(ctx);
    return getSelf().call("visit_root_enumeration", &proxy);
  }

  virtual antlrcpp::Any visitEnumeration(ASNParser::EnumerationContext *ctx) override {
    EnumerationContextProxy proxy(ctx);
    return getSelf().call("visit_enumeration", &proxy);
  }

  virtual antlrcpp::Any visitEnumerationItem(ASNParser::EnumerationItemContext *ctx) override {
    EnumerationItemContextProxy proxy(ctx);
    return getSelf().call("visit_enumeration_item", &proxy);
  }

  virtual antlrcpp::Any visitNamedNumber(ASNParser::NamedNumberContext *ctx) override {
    NamedNumberContextProxy proxy(ctx);
    return getSelf().call("visit_named_number", &proxy);
  }

  virtual antlrcpp::Any visitDefinedValue(ASNParser::DefinedValueContext *ctx) override {
    DefinedValueContextProxy proxy(ctx);
    return getSelf().call("visit_defined_value", &proxy);
  }

  virtual antlrcpp::Any visitParameterizedValue(ASNParser::ParameterizedValueContext *ctx) override {
    ParameterizedValueContextProxy proxy(ctx);
    return getSelf().call("visit_parameterized_value", &proxy);
  }

  virtual antlrcpp::Any visitSimpleDefinedValue(ASNParser::SimpleDefinedValueContext *ctx) override {
    SimpleDefinedValueContextProxy proxy(ctx);
    return getSelf().call("visit_simple_defined_value", &proxy);
  }

  virtual antlrcpp::Any visitActualParameterList(ASNParser::ActualParameterListContext *ctx) override {
    ActualParameterListContextProxy proxy(ctx);
    return getSelf().call("visit_actual_parameter_list", &proxy);
  }

  virtual antlrcpp::Any visitActualParameter(ASNParser::ActualParameterContext *ctx) override {
    ActualParameterContextProxy proxy(ctx);
    return getSelf().call("visit_actual_parameter", &proxy);
  }

  virtual antlrcpp::Any visitExceptionSpec(ASNParser::ExceptionSpecContext *ctx) override {
    ExceptionSpecContextProxy proxy(ctx);
    return getSelf().call("visit_exception_spec", &proxy);
  }

  virtual antlrcpp::Any visitExceptionIdentification(ASNParser::ExceptionIdentificationContext *ctx) override {
    ExceptionIdentificationContextProxy proxy(ctx);
    return getSelf().call("visit_exception_identification", &proxy);
  }

  virtual antlrcpp::Any visitAdditionalEnumeration(ASNParser::AdditionalEnumerationContext *ctx) override {
    AdditionalEnumerationContextProxy proxy(ctx);
    return getSelf().call("visit_additional_enumeration", &proxy);
  }

  virtual antlrcpp::Any visitIntegerType(ASNParser::IntegerTypeContext *ctx) override {
    IntegerTypeContextProxy proxy(ctx);
    return getSelf().call("visit_integer_type", &proxy);
  }

  virtual antlrcpp::Any visitNamedNumberList(ASNParser::NamedNumberListContext *ctx) override {
    NamedNumberListContextProxy proxy(ctx);
    return getSelf().call("visit_named_number_list", &proxy);
  }

  virtual antlrcpp::Any visitObjectidentifiertype(ASNParser::ObjectidentifiertypeContext *ctx) override {
    ObjectidentifiertypeContextProxy proxy(ctx);
    return getSelf().call("visit_objectidentifiertype", &proxy);
  }

  virtual antlrcpp::Any visitComponentRelationConstraint(ASNParser::ComponentRelationConstraintContext *ctx) override {
    ComponentRelationConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_component_relation_constraint", &proxy);
  }

  virtual antlrcpp::Any visitAtNotation(ASNParser::AtNotationContext *ctx) override {
    AtNotationContextProxy proxy(ctx);
    return getSelf().call("visit_at_notation", &proxy);
  }

  virtual antlrcpp::Any visitLevel(ASNParser::LevelContext *ctx) override {
    LevelContextProxy proxy(ctx);
    return getSelf().call("visit_level", &proxy);
  }

  virtual antlrcpp::Any visitComponentIdList(ASNParser::ComponentIdListContext *ctx) override {
    ComponentIdListContextProxy proxy(ctx);
    return getSelf().call("visit_component_id_list", &proxy);
  }

  virtual antlrcpp::Any visitOctetStringType(ASNParser::OctetStringTypeContext *ctx) override {
    OctetStringTypeContextProxy proxy(ctx);
    return getSelf().call("visit_octet_string_type", &proxy);
  }

  virtual antlrcpp::Any visitBitStringType(ASNParser::BitStringTypeContext *ctx) override {
    BitStringTypeContextProxy proxy(ctx);
    return getSelf().call("visit_bit_string_type", &proxy);
  }

  virtual antlrcpp::Any visitNamedBitList(ASNParser::NamedBitListContext *ctx) override {
    NamedBitListContextProxy proxy(ctx);
    return getSelf().call("visit_named_bit_list", &proxy);
  }

  virtual antlrcpp::Any visitNamedBit(ASNParser::NamedBitContext *ctx) override {
    NamedBitContextProxy proxy(ctx);
    return getSelf().call("visit_named_bit", &proxy);
  }

  virtual antlrcpp::Any visitBooleanValue(ASNParser::BooleanValueContext *ctx) override {
    BooleanValueContextProxy proxy(ctx);
    return getSelf().call("visit_boolean_value", &proxy);
  }

};


class ParserProxy {
public:
  static ParserProxy* parse(string code) {
    auto input = new ANTLRInputStream(code);
    return parseStream(input);
  }

  static ParserProxy* parseFile(string file) {
    ifstream stream;
    stream.open(file);

    auto input = new ANTLRInputStream(stream);
    auto parser = parseStream(input);

    stream.close();

    return parser;
  }

  Object modules() {
    auto ctx = this -> parser -> modules();

    ModulesContextProxy proxy((ASNParser::ModulesContext*) ctx);
    return detail::To_Ruby<ModulesContextProxy>().convert(proxy);
  }

  Object visit(VisitorProxy* visitor) {
    auto result = visitor -> visit(this -> parser -> modules());

    // reset for the next visit call
    this -> lexer -> reset();
    this -> parser -> reset();

    return std::any_cast<Object>(result);
  }

  ~ParserProxy() {
    delete this -> parser;
    delete this -> tokens;
    delete this -> lexer;
    delete this -> input;
  }

private:
  static ParserProxy* parseStream(ANTLRInputStream* input) {
    ParserProxy* parser = new ParserProxy();

    parser -> input = input;
    parser -> lexer = new ASNLexer(parser -> input);
    parser -> tokens = new CommonTokenStream(parser -> lexer);
    parser -> parser = new ASNParser(parser -> tokens);

    return parser;
  }

  ParserProxy() {};

  ANTLRInputStream* input;
  ASNLexer* lexer;
  CommonTokenStream* tokens;
  ASNParser* parser;
};

namespace Rice::detail {
  template <>
  struct Type<ParserProxy*> {
    static bool verify() {
      return true;
    }
  };

  template <>
  class To_Ruby<ParserProxy*> {
  public:
    To_Ruby() = default;

    explicit To_Ruby(Arg* arg) : arg_(arg) {}

    VALUE convert(ParserProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ParserProxy>(x, false, rb_cParser);
    }
  private:
    Arg* arg_ = nullptr;
  };
}


Object ContextProxy::wrapParseTree(tree::ParseTree* node) {
  if (antlrcpp::is<ASNParser::ModulesContext*>(node)) {
    ModulesContextProxy proxy((ASNParser::ModulesContext*)node);
    return detail::To_Ruby<ModulesContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ModuleDefinitionContext*>(node)) {
    ModuleDefinitionContextProxy proxy((ASNParser::ModuleDefinitionContext*)node);
    return detail::To_Ruby<ModuleDefinitionContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::TagDefaultContext*>(node)) {
    TagDefaultContextProxy proxy((ASNParser::TagDefaultContext*)node);
    return detail::To_Ruby<TagDefaultContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ExtensionDefaultContext*>(node)) {
    ExtensionDefaultContextProxy proxy((ASNParser::ExtensionDefaultContext*)node);
    return detail::To_Ruby<ExtensionDefaultContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ModuleBodyContext*>(node)) {
    ModuleBodyContextProxy proxy((ASNParser::ModuleBodyContext*)node);
    return detail::To_Ruby<ModuleBodyContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ExportsContext*>(node)) {
    ExportsContextProxy proxy((ASNParser::ExportsContext*)node);
    return detail::To_Ruby<ExportsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ImportsContext*>(node)) {
    ImportsContextProxy proxy((ASNParser::ImportsContext*)node);
    return detail::To_Ruby<ImportsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::AssignmentListContext*>(node)) {
    AssignmentListContextProxy proxy((ASNParser::AssignmentListContext*)node);
    return detail::To_Ruby<AssignmentListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::SymbolsExportedContext*>(node)) {
    SymbolsExportedContextProxy proxy((ASNParser::SymbolsExportedContext*)node);
    return detail::To_Ruby<SymbolsExportedContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::SymbolListContext*>(node)) {
    SymbolListContextProxy proxy((ASNParser::SymbolListContext*)node);
    return detail::To_Ruby<SymbolListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::SymbolsImportedContext*>(node)) {
    SymbolsImportedContextProxy proxy((ASNParser::SymbolsImportedContext*)node);
    return detail::To_Ruby<SymbolsImportedContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::SymbolsFromModuleListContext*>(node)) {
    SymbolsFromModuleListContextProxy proxy((ASNParser::SymbolsFromModuleListContext*)node);
    return detail::To_Ruby<SymbolsFromModuleListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::SymbolsFromModuleContext*>(node)) {
    SymbolsFromModuleContextProxy proxy((ASNParser::SymbolsFromModuleContext*)node);
    return detail::To_Ruby<SymbolsFromModuleContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::GlobalModuleReferenceContext*>(node)) {
    GlobalModuleReferenceContextProxy proxy((ASNParser::GlobalModuleReferenceContext*)node);
    return detail::To_Ruby<GlobalModuleReferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::AssignedIdentifierContext*>(node)) {
    AssignedIdentifierContextProxy proxy((ASNParser::AssignedIdentifierContext*)node);
    return detail::To_Ruby<AssignedIdentifierContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::SymbolContext*>(node)) {
    SymbolContextProxy proxy((ASNParser::SymbolContext*)node);
    return detail::To_Ruby<SymbolContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::AssignmentContext*>(node)) {
    AssignmentContextProxy proxy((ASNParser::AssignmentContext*)node);
    return detail::To_Ruby<AssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ValueAssignmentContext*>(node)) {
    ValueAssignmentContextProxy proxy((ASNParser::ValueAssignmentContext*)node);
    return detail::To_Ruby<ValueAssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::TypeAssignmentContext*>(node)) {
    TypeAssignmentContextProxy proxy((ASNParser::TypeAssignmentContext*)node);
    return detail::To_Ruby<TypeAssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ParameterizedAssignmentContext*>(node)) {
    ParameterizedAssignmentContextProxy proxy((ASNParser::ParameterizedAssignmentContext*)node);
    return detail::To_Ruby<ParameterizedAssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ObjectClassAssignmentContext*>(node)) {
    ObjectClassAssignmentContextProxy proxy((ASNParser::ObjectClassAssignmentContext*)node);
    return detail::To_Ruby<ObjectClassAssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::SequenceTypeContext*>(node)) {
    SequenceTypeContextProxy proxy((ASNParser::SequenceTypeContext*)node);
    return detail::To_Ruby<SequenceTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ExtensionAndExceptionContext*>(node)) {
    ExtensionAndExceptionContextProxy proxy((ASNParser::ExtensionAndExceptionContext*)node);
    return detail::To_Ruby<ExtensionAndExceptionContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::OptionalExtensionMarkerContext*>(node)) {
    OptionalExtensionMarkerContextProxy proxy((ASNParser::OptionalExtensionMarkerContext*)node);
    return detail::To_Ruby<OptionalExtensionMarkerContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ComponentTypeListsContext*>(node)) {
    ComponentTypeListsContextProxy proxy((ASNParser::ComponentTypeListsContext*)node);
    return detail::To_Ruby<ComponentTypeListsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ExceptionSpecContext*>(node)) {
    ExceptionSpecContextProxy proxy((ASNParser::ExceptionSpecContext*)node);
    return detail::To_Ruby<ExceptionSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::RootComponentTypeListContext*>(node)) {
    RootComponentTypeListContextProxy proxy((ASNParser::RootComponentTypeListContext*)node);
    return detail::To_Ruby<RootComponentTypeListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ExtensionAdditionsContext*>(node)) {
    ExtensionAdditionsContextProxy proxy((ASNParser::ExtensionAdditionsContext*)node);
    return detail::To_Ruby<ExtensionAdditionsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ComponentTypeListContext*>(node)) {
    ComponentTypeListContextProxy proxy((ASNParser::ComponentTypeListContext*)node);
    return detail::To_Ruby<ComponentTypeListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ComponentTypeContext*>(node)) {
    ComponentTypeContextProxy proxy((ASNParser::ComponentTypeContext*)node);
    return detail::To_Ruby<ComponentTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::NamedTypeContext*>(node)) {
    NamedTypeContextProxy proxy((ASNParser::NamedTypeContext*)node);
    return detail::To_Ruby<NamedTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ValueContext*>(node)) {
    ValueContextProxy proxy((ASNParser::ValueContext*)node);
    return detail::To_Ruby<ValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::AsnTypeContext*>(node)) {
    AsnTypeContextProxy proxy((ASNParser::AsnTypeContext*)node);
    return detail::To_Ruby<AsnTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ExtensionAdditionListContext*>(node)) {
    ExtensionAdditionListContextProxy proxy((ASNParser::ExtensionAdditionListContext*)node);
    return detail::To_Ruby<ExtensionAdditionListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ExtensionAdditionContext*>(node)) {
    ExtensionAdditionContextProxy proxy((ASNParser::ExtensionAdditionContext*)node);
    return detail::To_Ruby<ExtensionAdditionContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ExtensionAdditionGroupContext*>(node)) {
    ExtensionAdditionGroupContextProxy proxy((ASNParser::ExtensionAdditionGroupContext*)node);
    return detail::To_Ruby<ExtensionAdditionGroupContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::VersionNumberContext*>(node)) {
    VersionNumberContextProxy proxy((ASNParser::VersionNumberContext*)node);
    return detail::To_Ruby<VersionNumberContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::SequenceOfTypeContext*>(node)) {
    SequenceOfTypeContextProxy proxy((ASNParser::SequenceOfTypeContext*)node);
    return detail::To_Ruby<SequenceOfTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ConstraintContext*>(node)) {
    ConstraintContextProxy proxy((ASNParser::ConstraintContext*)node);
    return detail::To_Ruby<ConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::SizeConstraintContext*>(node)) {
    SizeConstraintContextProxy proxy((ASNParser::SizeConstraintContext*)node);
    return detail::To_Ruby<SizeConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ParameterListContext*>(node)) {
    ParameterListContextProxy proxy((ASNParser::ParameterListContext*)node);
    return detail::To_Ruby<ParameterListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ValueSetContext*>(node)) {
    ValueSetContextProxy proxy((ASNParser::ValueSetContext*)node);
    return detail::To_Ruby<ValueSetContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::DefinedObjectClassContext*>(node)) {
    DefinedObjectClassContextProxy proxy((ASNParser::DefinedObjectClassContext*)node);
    return detail::To_Ruby<DefinedObjectClassContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::Object_Context*>(node)) {
    Object_ContextProxy proxy((ASNParser::Object_Context*)node);
    return detail::To_Ruby<Object_ContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ObjectClassContext*>(node)) {
    ObjectClassContextProxy proxy((ASNParser::ObjectClassContext*)node);
    return detail::To_Ruby<ObjectClassContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ObjectSetContext*>(node)) {
    ObjectSetContextProxy proxy((ASNParser::ObjectSetContext*)node);
    return detail::To_Ruby<ObjectSetContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ParameterContext*>(node)) {
    ParameterContextProxy proxy((ASNParser::ParameterContext*)node);
    return detail::To_Ruby<ParameterContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ParamGovernorContext*>(node)) {
    ParamGovernorContextProxy proxy((ASNParser::ParamGovernorContext*)node);
    return detail::To_Ruby<ParamGovernorContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::GovernorContext*>(node)) {
    GovernorContextProxy proxy((ASNParser::GovernorContext*)node);
    return detail::To_Ruby<GovernorContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ObjectClassDefnContext*>(node)) {
    ObjectClassDefnContextProxy proxy((ASNParser::ObjectClassDefnContext*)node);
    return detail::To_Ruby<ObjectClassDefnContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::UsefulObjectClassReferenceContext*>(node)) {
    UsefulObjectClassReferenceContextProxy proxy((ASNParser::UsefulObjectClassReferenceContext*)node);
    return detail::To_Ruby<UsefulObjectClassReferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ExternalObjectClassReferenceContext*>(node)) {
    ExternalObjectClassReferenceContextProxy proxy((ASNParser::ExternalObjectClassReferenceContext*)node);
    return detail::To_Ruby<ExternalObjectClassReferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::FieldSpecContext*>(node)) {
    FieldSpecContextProxy proxy((ASNParser::FieldSpecContext*)node);
    return detail::To_Ruby<FieldSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::WithSyntaxSpecContext*>(node)) {
    WithSyntaxSpecContextProxy proxy((ASNParser::WithSyntaxSpecContext*)node);
    return detail::To_Ruby<WithSyntaxSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::SyntaxListContext*>(node)) {
    SyntaxListContextProxy proxy((ASNParser::SyntaxListContext*)node);
    return detail::To_Ruby<SyntaxListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::TokenOrGroupSpecContext*>(node)) {
    TokenOrGroupSpecContextProxy proxy((ASNParser::TokenOrGroupSpecContext*)node);
    return detail::To_Ruby<TokenOrGroupSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::RequiredTokenContext*>(node)) {
    RequiredTokenContextProxy proxy((ASNParser::RequiredTokenContext*)node);
    return detail::To_Ruby<RequiredTokenContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::OptionalGroupContext*>(node)) {
    OptionalGroupContextProxy proxy((ASNParser::OptionalGroupContext*)node);
    return detail::To_Ruby<OptionalGroupContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::LiteralContext*>(node)) {
    LiteralContextProxy proxy((ASNParser::LiteralContext*)node);
    return detail::To_Ruby<LiteralContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::PrimitiveFieldNameContext*>(node)) {
    PrimitiveFieldNameContextProxy proxy((ASNParser::PrimitiveFieldNameContext*)node);
    return detail::To_Ruby<PrimitiveFieldNameContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::FieldNameContext*>(node)) {
    FieldNameContextProxy proxy((ASNParser::FieldNameContext*)node);
    return detail::To_Ruby<FieldNameContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::TypeOptionalitySpecContext*>(node)) {
    TypeOptionalitySpecContextProxy proxy((ASNParser::TypeOptionalitySpecContext*)node);
    return detail::To_Ruby<TypeOptionalitySpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ValueSetOptionalitySpecContext*>(node)) {
    ValueSetOptionalitySpecContextProxy proxy((ASNParser::ValueSetOptionalitySpecContext*)node);
    return detail::To_Ruby<ValueSetOptionalitySpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ValueOptionalitySpecContext*>(node)) {
    ValueOptionalitySpecContextProxy proxy((ASNParser::ValueOptionalitySpecContext*)node);
    return detail::To_Ruby<ValueOptionalitySpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::TypeFieldSpecContext*>(node)) {
    TypeFieldSpecContextProxy proxy((ASNParser::TypeFieldSpecContext*)node);
    return detail::To_Ruby<TypeFieldSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::FixedTypeValueFieldSpecContext*>(node)) {
    FixedTypeValueFieldSpecContextProxy proxy((ASNParser::FixedTypeValueFieldSpecContext*)node);
    return detail::To_Ruby<FixedTypeValueFieldSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::VariableTypeValueFieldSpecContext*>(node)) {
    VariableTypeValueFieldSpecContextProxy proxy((ASNParser::VariableTypeValueFieldSpecContext*)node);
    return detail::To_Ruby<VariableTypeValueFieldSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::FixedTypeValueSetFieldSpecContext*>(node)) {
    FixedTypeValueSetFieldSpecContextProxy proxy((ASNParser::FixedTypeValueSetFieldSpecContext*)node);
    return detail::To_Ruby<FixedTypeValueSetFieldSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::DefinedObjectContext*>(node)) {
    DefinedObjectContextProxy proxy((ASNParser::DefinedObjectContext*)node);
    return detail::To_Ruby<DefinedObjectContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ParameterizedObjectContext*>(node)) {
    ParameterizedObjectContextProxy proxy((ASNParser::ParameterizedObjectContext*)node);
    return detail::To_Ruby<ParameterizedObjectContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ActualParameterListContext*>(node)) {
    ActualParameterListContextProxy proxy((ASNParser::ActualParameterListContext*)node);
    return detail::To_Ruby<ActualParameterListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ObjectSetSpecContext*>(node)) {
    ObjectSetSpecContextProxy proxy((ASNParser::ObjectSetSpecContext*)node);
    return detail::To_Ruby<ObjectSetSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::RootElementSetSpecContext*>(node)) {
    RootElementSetSpecContextProxy proxy((ASNParser::RootElementSetSpecContext*)node);
    return detail::To_Ruby<RootElementSetSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::AdditionalElementSetSpecContext*>(node)) {
    AdditionalElementSetSpecContextProxy proxy((ASNParser::AdditionalElementSetSpecContext*)node);
    return detail::To_Ruby<AdditionalElementSetSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ElementSetSpecsContext*>(node)) {
    ElementSetSpecsContextProxy proxy((ASNParser::ElementSetSpecsContext*)node);
    return detail::To_Ruby<ElementSetSpecsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ElementSetSpecContext*>(node)) {
    ElementSetSpecContextProxy proxy((ASNParser::ElementSetSpecContext*)node);
    return detail::To_Ruby<ElementSetSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::UnionsContext*>(node)) {
    UnionsContextProxy proxy((ASNParser::UnionsContext*)node);
    return detail::To_Ruby<UnionsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ExclusionsContext*>(node)) {
    ExclusionsContextProxy proxy((ASNParser::ExclusionsContext*)node);
    return detail::To_Ruby<ExclusionsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::IntersectionsContext*>(node)) {
    IntersectionsContextProxy proxy((ASNParser::IntersectionsContext*)node);
    return detail::To_Ruby<IntersectionsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::UnionMarkContext*>(node)) {
    UnionMarkContextProxy proxy((ASNParser::UnionMarkContext*)node);
    return detail::To_Ruby<UnionMarkContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ElementsContext*>(node)) {
    ElementsContextProxy proxy((ASNParser::ElementsContext*)node);
    return detail::To_Ruby<ElementsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::IntersectionElementsContext*>(node)) {
    IntersectionElementsContextProxy proxy((ASNParser::IntersectionElementsContext*)node);
    return detail::To_Ruby<IntersectionElementsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::IntersectionMarkContext*>(node)) {
    IntersectionMarkContextProxy proxy((ASNParser::IntersectionMarkContext*)node);
    return detail::To_Ruby<IntersectionMarkContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::SubtypeElementsContext*>(node)) {
    SubtypeElementsContextProxy proxy((ASNParser::SubtypeElementsContext*)node);
    return detail::To_Ruby<SubtypeElementsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ObjectSetElementsContext*>(node)) {
    ObjectSetElementsContextProxy proxy((ASNParser::ObjectSetElementsContext*)node);
    return detail::To_Ruby<ObjectSetElementsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::VariableTypeValueSetFieldSpecContext*>(node)) {
    VariableTypeValueSetFieldSpecContextProxy proxy((ASNParser::VariableTypeValueSetFieldSpecContext*)node);
    return detail::To_Ruby<VariableTypeValueSetFieldSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ObjectFieldSpecContext*>(node)) {
    ObjectFieldSpecContextProxy proxy((ASNParser::ObjectFieldSpecContext*)node);
    return detail::To_Ruby<ObjectFieldSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ObjectOptionalitySpecContext*>(node)) {
    ObjectOptionalitySpecContextProxy proxy((ASNParser::ObjectOptionalitySpecContext*)node);
    return detail::To_Ruby<ObjectOptionalitySpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ObjectSetFieldSpecContext*>(node)) {
    ObjectSetFieldSpecContextProxy proxy((ASNParser::ObjectSetFieldSpecContext*)node);
    return detail::To_Ruby<ObjectSetFieldSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ObjectSetOptionalitySpecContext*>(node)) {
    ObjectSetOptionalitySpecContextProxy proxy((ASNParser::ObjectSetOptionalitySpecContext*)node);
    return detail::To_Ruby<ObjectSetOptionalitySpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::BuiltinTypeContext*>(node)) {
    BuiltinTypeContextProxy proxy((ASNParser::BuiltinTypeContext*)node);
    return detail::To_Ruby<BuiltinTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ReferencedTypeContext*>(node)) {
    ReferencedTypeContextProxy proxy((ASNParser::ReferencedTypeContext*)node);
    return detail::To_Ruby<ReferencedTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::OctetStringTypeContext*>(node)) {
    OctetStringTypeContextProxy proxy((ASNParser::OctetStringTypeContext*)node);
    return detail::To_Ruby<OctetStringTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::BitStringTypeContext*>(node)) {
    BitStringTypeContextProxy proxy((ASNParser::BitStringTypeContext*)node);
    return detail::To_Ruby<BitStringTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ChoiceTypeContext*>(node)) {
    ChoiceTypeContextProxy proxy((ASNParser::ChoiceTypeContext*)node);
    return detail::To_Ruby<ChoiceTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::EnumeratedTypeContext*>(node)) {
    EnumeratedTypeContextProxy proxy((ASNParser::EnumeratedTypeContext*)node);
    return detail::To_Ruby<EnumeratedTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::IntegerTypeContext*>(node)) {
    IntegerTypeContextProxy proxy((ASNParser::IntegerTypeContext*)node);
    return detail::To_Ruby<IntegerTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::SetTypeContext*>(node)) {
    SetTypeContextProxy proxy((ASNParser::SetTypeContext*)node);
    return detail::To_Ruby<SetTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::SetOfTypeContext*>(node)) {
    SetOfTypeContextProxy proxy((ASNParser::SetOfTypeContext*)node);
    return detail::To_Ruby<SetOfTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ObjectidentifiertypeContext*>(node)) {
    ObjectidentifiertypeContextProxy proxy((ASNParser::ObjectidentifiertypeContext*)node);
    return detail::To_Ruby<ObjectidentifiertypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ObjectClassFieldTypeContext*>(node)) {
    ObjectClassFieldTypeContextProxy proxy((ASNParser::ObjectClassFieldTypeContext*)node);
    return detail::To_Ruby<ObjectClassFieldTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::DefinedTypeContext*>(node)) {
    DefinedTypeContextProxy proxy((ASNParser::DefinedTypeContext*)node);
    return detail::To_Ruby<DefinedTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ConstraintSpecContext*>(node)) {
    ConstraintSpecContextProxy proxy((ASNParser::ConstraintSpecContext*)node);
    return detail::To_Ruby<ConstraintSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::GeneralConstraintContext*>(node)) {
    GeneralConstraintContextProxy proxy((ASNParser::GeneralConstraintContext*)node);
    return detail::To_Ruby<GeneralConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::SubtypeConstraintContext*>(node)) {
    SubtypeConstraintContextProxy proxy((ASNParser::SubtypeConstraintContext*)node);
    return detail::To_Ruby<SubtypeConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::UserDefinedConstraintContext*>(node)) {
    UserDefinedConstraintContextProxy proxy((ASNParser::UserDefinedConstraintContext*)node);
    return detail::To_Ruby<UserDefinedConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::UserDefinedConstraintParameterContext*>(node)) {
    UserDefinedConstraintParameterContextProxy proxy((ASNParser::UserDefinedConstraintParameterContext*)node);
    return detail::To_Ruby<UserDefinedConstraintParameterContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::TableConstraintContext*>(node)) {
    TableConstraintContextProxy proxy((ASNParser::TableConstraintContext*)node);
    return detail::To_Ruby<TableConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ContentsConstraintContext*>(node)) {
    ContentsConstraintContextProxy proxy((ASNParser::ContentsConstraintContext*)node);
    return detail::To_Ruby<ContentsConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ComponentRelationConstraintContext*>(node)) {
    ComponentRelationConstraintContextProxy proxy((ASNParser::ComponentRelationConstraintContext*)node);
    return detail::To_Ruby<ComponentRelationConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::SimpleTableConstraintContext*>(node)) {
    SimpleTableConstraintContextProxy proxy((ASNParser::SimpleTableConstraintContext*)node);
    return detail::To_Ruby<SimpleTableConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ComponentPresenceListsContext*>(node)) {
    ComponentPresenceListsContextProxy proxy((ASNParser::ComponentPresenceListsContext*)node);
    return detail::To_Ruby<ComponentPresenceListsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ComponentPresenceListContext*>(node)) {
    ComponentPresenceListContextProxy proxy((ASNParser::ComponentPresenceListContext*)node);
    return detail::To_Ruby<ComponentPresenceListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ComponentPresenceContext*>(node)) {
    ComponentPresenceContextProxy proxy((ASNParser::ComponentPresenceContext*)node);
    return detail::To_Ruby<ComponentPresenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::BuiltinValueContext*>(node)) {
    BuiltinValueContextProxy proxy((ASNParser::BuiltinValueContext*)node);
    return detail::To_Ruby<BuiltinValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::EnumeratedValueContext*>(node)) {
    EnumeratedValueContextProxy proxy((ASNParser::EnumeratedValueContext*)node);
    return detail::To_Ruby<EnumeratedValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::IntegerValueContext*>(node)) {
    IntegerValueContextProxy proxy((ASNParser::IntegerValueContext*)node);
    return detail::To_Ruby<IntegerValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ChoiceValueContext*>(node)) {
    ChoiceValueContextProxy proxy((ASNParser::ChoiceValueContext*)node);
    return detail::To_Ruby<ChoiceValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ObjectIdentifierValueContext*>(node)) {
    ObjectIdentifierValueContextProxy proxy((ASNParser::ObjectIdentifierValueContext*)node);
    return detail::To_Ruby<ObjectIdentifierValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::BooleanValueContext*>(node)) {
    BooleanValueContextProxy proxy((ASNParser::BooleanValueContext*)node);
    return detail::To_Ruby<BooleanValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ObjIdComponentsListContext*>(node)) {
    ObjIdComponentsListContextProxy proxy((ASNParser::ObjIdComponentsListContext*)node);
    return detail::To_Ruby<ObjIdComponentsListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ObjIdComponentsContext*>(node)) {
    ObjIdComponentsContextProxy proxy((ASNParser::ObjIdComponentsContext*)node);
    return detail::To_Ruby<ObjIdComponentsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::DefinedValueContext*>(node)) {
    DefinedValueContextProxy proxy((ASNParser::DefinedValueContext*)node);
    return detail::To_Ruby<DefinedValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::SignedNumberContext*>(node)) {
    SignedNumberContextProxy proxy((ASNParser::SignedNumberContext*)node);
    return detail::To_Ruby<SignedNumberContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::AlternativeTypeListsContext*>(node)) {
    AlternativeTypeListsContextProxy proxy((ASNParser::AlternativeTypeListsContext*)node);
    return detail::To_Ruby<AlternativeTypeListsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::RootAlternativeTypeListContext*>(node)) {
    RootAlternativeTypeListContextProxy proxy((ASNParser::RootAlternativeTypeListContext*)node);
    return detail::To_Ruby<RootAlternativeTypeListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ExtensionAdditionAlternativesContext*>(node)) {
    ExtensionAdditionAlternativesContextProxy proxy((ASNParser::ExtensionAdditionAlternativesContext*)node);
    return detail::To_Ruby<ExtensionAdditionAlternativesContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ExtensionAdditionAlternativesListContext*>(node)) {
    ExtensionAdditionAlternativesListContextProxy proxy((ASNParser::ExtensionAdditionAlternativesListContext*)node);
    return detail::To_Ruby<ExtensionAdditionAlternativesListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ExtensionAdditionAlternativeContext*>(node)) {
    ExtensionAdditionAlternativeContextProxy proxy((ASNParser::ExtensionAdditionAlternativeContext*)node);
    return detail::To_Ruby<ExtensionAdditionAlternativeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ExtensionAdditionAlternativesGroupContext*>(node)) {
    ExtensionAdditionAlternativesGroupContextProxy proxy((ASNParser::ExtensionAdditionAlternativesGroupContext*)node);
    return detail::To_Ruby<ExtensionAdditionAlternativesGroupContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::AlternativeTypeListContext*>(node)) {
    AlternativeTypeListContextProxy proxy((ASNParser::AlternativeTypeListContext*)node);
    return detail::To_Ruby<AlternativeTypeListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::EnumerationsContext*>(node)) {
    EnumerationsContextProxy proxy((ASNParser::EnumerationsContext*)node);
    return detail::To_Ruby<EnumerationsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::RootEnumerationContext*>(node)) {
    RootEnumerationContextProxy proxy((ASNParser::RootEnumerationContext*)node);
    return detail::To_Ruby<RootEnumerationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::AdditionalEnumerationContext*>(node)) {
    AdditionalEnumerationContextProxy proxy((ASNParser::AdditionalEnumerationContext*)node);
    return detail::To_Ruby<AdditionalEnumerationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::EnumerationContext*>(node)) {
    EnumerationContextProxy proxy((ASNParser::EnumerationContext*)node);
    return detail::To_Ruby<EnumerationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::EnumerationItemContext*>(node)) {
    EnumerationItemContextProxy proxy((ASNParser::EnumerationItemContext*)node);
    return detail::To_Ruby<EnumerationItemContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::NamedNumberContext*>(node)) {
    NamedNumberContextProxy proxy((ASNParser::NamedNumberContext*)node);
    return detail::To_Ruby<NamedNumberContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ParameterizedValueContext*>(node)) {
    ParameterizedValueContextProxy proxy((ASNParser::ParameterizedValueContext*)node);
    return detail::To_Ruby<ParameterizedValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::SimpleDefinedValueContext*>(node)) {
    SimpleDefinedValueContextProxy proxy((ASNParser::SimpleDefinedValueContext*)node);
    return detail::To_Ruby<SimpleDefinedValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ActualParameterContext*>(node)) {
    ActualParameterContextProxy proxy((ASNParser::ActualParameterContext*)node);
    return detail::To_Ruby<ActualParameterContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ExceptionIdentificationContext*>(node)) {
    ExceptionIdentificationContextProxy proxy((ASNParser::ExceptionIdentificationContext*)node);
    return detail::To_Ruby<ExceptionIdentificationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::NamedNumberListContext*>(node)) {
    NamedNumberListContextProxy proxy((ASNParser::NamedNumberListContext*)node);
    return detail::To_Ruby<NamedNumberListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::AtNotationContext*>(node)) {
    AtNotationContextProxy proxy((ASNParser::AtNotationContext*)node);
    return detail::To_Ruby<AtNotationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::ComponentIdListContext*>(node)) {
    ComponentIdListContextProxy proxy((ASNParser::ComponentIdListContext*)node);
    return detail::To_Ruby<ComponentIdListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::LevelContext*>(node)) {
    LevelContextProxy proxy((ASNParser::LevelContext*)node);
    return detail::To_Ruby<LevelContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::NamedBitListContext*>(node)) {
    NamedBitListContextProxy proxy((ASNParser::NamedBitListContext*)node);
    return detail::To_Ruby<NamedBitListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASNParser::NamedBitContext*>(node)) {
    NamedBitContextProxy proxy((ASNParser::NamedBitContext*)node);
    return detail::To_Ruby<NamedBitContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<tree::TerminalNodeImpl*>(node)) {
    TerminalNodeProxy proxy(node);
    return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
  } else {
    return Qnil;
  }
}


extern "C"
void Init_asn_parser() {
  Module rb_mASNParser = define_module("ASNParser");

  rb_cToken = define_class_under<Token>(rb_mASNParser, "Token")
    .define_method("text", &Token::getText)
    .define_method("channel", &Token::getChannel)
    .define_method("token_index", &Token::getTokenIndex);

  rb_cParseTree = define_class_under<tree::ParseTree>(rb_mASNParser, "ParseTree");

  rb_cContextProxy = define_class_under<ContextProxy>(rb_mASNParser, "Context")
    .define_method("children", &ContextProxy::getChildren)
    .define_method("child_count", &ContextProxy::childCount)
    .define_method("text", &ContextProxy::getText)
    .define_method("start", &ContextProxy::getStart)
    .define_method("stop", &ContextProxy::getStop)
    .define_method("parent", &ContextProxy::getParent)
    .define_method("==", &ContextProxy::doubleEquals);

  rb_cTerminalNode = define_class_under<TerminalNodeProxy, ContextProxy>(rb_mASNParser, "TerminalNodeImpl");

  define_class_under<ASNBaseVisitor>(rb_mASNParser, "Visitor")
    .define_director<VisitorProxy>()
    .define_constructor(Constructor<VisitorProxy, Object>())
    .define_method("visit", &VisitorProxy::ruby_visit)
    .define_method("visit_children", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_modules", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_module_definition", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_tag_default", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_default", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_module_body", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_exports", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_symbols_exported", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_imports", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_symbols_imported", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_symbols_from_module_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_symbols_from_module", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_global_module_reference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_assigned_identifier", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_symbol_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_symbol", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_assignment_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_sequence_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_and_exception", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_optional_extension_marker", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_component_type_lists", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_root_component_type_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_component_type_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_component_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_additions", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_addition_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_addition", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_addition_group", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_version_number", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_sequence_of_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_size_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameterized_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameter_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameter", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_param_governor", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_governor", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_class_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_class", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_defined_object_class", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_useful_object_class_reference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_external_object_class_reference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_class_defn", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_with_syntax_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_syntax_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_token_or_group_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_optional_group", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_required_token", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_literal", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_primitive_field_name", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_field_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_type_field_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_type_optionality_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_fixed_type_value_field_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_value_optionality_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_variable_type_value_field_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_fixed_type_value_set_field_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_value_set_optionality_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameterized_object", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_defined_object", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_set", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_set_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_field_name", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_value_set", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_element_set_specs", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_root_element_set_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_additional_element_set_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_element_set_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_unions", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_exclusions", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_intersections", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_union_mark", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_intersection_mark", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_elements", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_set_elements", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_intersection_elements", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_subtype_elements", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_variable_type_value_set_field_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_field_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_optionality_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_set_field_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_set_optionality_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_type_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_value_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_asn_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_builtin_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_class_field_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_set_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_set_of_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_referenced_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_defined_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_constraint_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_user_defined_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_general_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_user_defined_constraint_parameter", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_table_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_simple_table_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_contents_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_component_presence_lists", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_component_presence_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_component_presence", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_subtype_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_builtin_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_identifier_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_obj_id_components_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_obj_id_components", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_integer_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_choice_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_enumerated_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_signed_number", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_choice_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_alternative_type_lists", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_addition_alternatives", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_addition_alternatives_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_addition_alternative", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_addition_alternatives_group", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_root_alternative_type_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_alternative_type_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_named_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_enumerated_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_enumerations", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_root_enumeration", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_enumeration", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_enumeration_item", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_named_number", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_defined_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameterized_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_simple_defined_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_actual_parameter_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_actual_parameter", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_exception_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_exception_identification", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_additional_enumeration", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_integer_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_named_number_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_objectidentifiertype", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_component_relation_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_at_notation", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_level", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_component_id_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_octet_string_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_bit_string_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_named_bit_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_named_bit", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_boolean_value", &VisitorProxy::ruby_visitChildren);

  rb_cParser = define_class_under<ParserProxy>(rb_mASNParser, "Parser")
    .define_singleton_function("parse", &ParserProxy::parse)
    .define_singleton_function("parse_file", &ParserProxy::parseFile)
    .define_method("modules", &ParserProxy::modules)
    .define_method("visit", &ParserProxy::visit);

  rb_cModulesContext = define_class_under<ModulesContextProxy, ContextProxy>(rb_mASNParser, "ModulesContext")
    .define_method("module_definition", &ModulesContextProxy::moduleDefinition)
    .define_method("module_definition_at", &ModulesContextProxy::moduleDefinitionAt)
    .define_method("EOF", &ModulesContextProxy::EOF);

  rb_cModuleDefinitionContext = define_class_under<ModuleDefinitionContextProxy, ContextProxy>(rb_mASNParser, "ModuleDefinitionContext")
    .define_method("tag_default", &ModuleDefinitionContextProxy::tagDefault)
    .define_method("extension_default", &ModuleDefinitionContextProxy::extensionDefault)
    .define_method("module_body", &ModuleDefinitionContextProxy::moduleBody)
    .define_method("IDENTIFIER", &ModuleDefinitionContextProxy::IDENTIFIER)
    .define_method("IDENTIFIERAt", &ModuleDefinitionContextProxy::IDENTIFIER)
    .define_method("DEFINITIONS_LITERAL", &ModuleDefinitionContextProxy::DEFINITIONS_LITERAL)
    .define_method("ASSIGN_OP", &ModuleDefinitionContextProxy::ASSIGN_OP)
    .define_method("BEGIN_LITERAL", &ModuleDefinitionContextProxy::BEGIN_LITERAL)
    .define_method("END_LITERAL", &ModuleDefinitionContextProxy::END_LITERAL)
    .define_method("L_BRACE", &ModuleDefinitionContextProxy::L_BRACE)
    .define_method("R_BRACE", &ModuleDefinitionContextProxy::R_BRACE)
    .define_method("L_PARAN", &ModuleDefinitionContextProxy::L_PARAN)
    .define_method("L_PARANAt", &ModuleDefinitionContextProxy::L_PARAN)
    .define_method("NUMBER", &ModuleDefinitionContextProxy::NUMBER)
    .define_method("NUMBERAt", &ModuleDefinitionContextProxy::NUMBER)
    .define_method("R_PARAN", &ModuleDefinitionContextProxy::R_PARAN)
    .define_method("R_PARANAt", &ModuleDefinitionContextProxy::R_PARAN);

  rb_cTagDefaultContext = define_class_under<TagDefaultContextProxy, ContextProxy>(rb_mASNParser, "TagDefaultContext")
    .define_method("TAGS_LITERAL", &TagDefaultContextProxy::TAGS_LITERAL)
    .define_method("EXPLICIT_LITERAL", &TagDefaultContextProxy::EXPLICIT_LITERAL)
    .define_method("IMPLICIT_LITERAL", &TagDefaultContextProxy::IMPLICIT_LITERAL)
    .define_method("AUTOMATIC_LITERAL", &TagDefaultContextProxy::AUTOMATIC_LITERAL);

  rb_cExtensionDefaultContext = define_class_under<ExtensionDefaultContextProxy, ContextProxy>(rb_mASNParser, "ExtensionDefaultContext")
    .define_method("EXTENSIBILITY_LITERAL", &ExtensionDefaultContextProxy::EXTENSIBILITY_LITERAL)
    .define_method("IMPLIED_LITERAL", &ExtensionDefaultContextProxy::IMPLIED_LITERAL);

  rb_cModuleBodyContext = define_class_under<ModuleBodyContextProxy, ContextProxy>(rb_mASNParser, "ModuleBodyContext")
    .define_method("exports", &ModuleBodyContextProxy::exports)
    .define_method("imports", &ModuleBodyContextProxy::imports)
    .define_method("assignment_list", &ModuleBodyContextProxy::assignmentList);

  rb_cExportsContext = define_class_under<ExportsContextProxy, ContextProxy>(rb_mASNParser, "ExportsContext")
    .define_method("symbols_exported", &ExportsContextProxy::symbolsExported)
    .define_method("EXPORTS_LITERAL", &ExportsContextProxy::EXPORTS_LITERAL)
    .define_method("SEMI_COLON", &ExportsContextProxy::SEMI_COLON)
    .define_method("ALL_LITERAL", &ExportsContextProxy::ALL_LITERAL);

  rb_cImportsContext = define_class_under<ImportsContextProxy, ContextProxy>(rb_mASNParser, "ImportsContext")
    .define_method("symbols_imported", &ImportsContextProxy::symbolsImported)
    .define_method("IMPORTS_LITERAL", &ImportsContextProxy::IMPORTS_LITERAL)
    .define_method("SEMI_COLON", &ImportsContextProxy::SEMI_COLON);

  rb_cAssignmentListContext = define_class_under<AssignmentListContextProxy, ContextProxy>(rb_mASNParser, "AssignmentListContext")
    .define_method("assignment", &AssignmentListContextProxy::assignment)
    .define_method("assignment_at", &AssignmentListContextProxy::assignmentAt);

  rb_cSymbolsExportedContext = define_class_under<SymbolsExportedContextProxy, ContextProxy>(rb_mASNParser, "SymbolsExportedContext")
    .define_method("symbol_list", &SymbolsExportedContextProxy::symbolList);

  rb_cSymbolListContext = define_class_under<SymbolListContextProxy, ContextProxy>(rb_mASNParser, "SymbolListContext")
    .define_method("symbol", &SymbolListContextProxy::symbol)
    .define_method("symbol_at", &SymbolListContextProxy::symbolAt)
    .define_method("COMMA", &SymbolListContextProxy::COMMA)
    .define_method("COMMAAt", &SymbolListContextProxy::COMMA);

  rb_cSymbolsImportedContext = define_class_under<SymbolsImportedContextProxy, ContextProxy>(rb_mASNParser, "SymbolsImportedContext")
    .define_method("symbols_from_module_list", &SymbolsImportedContextProxy::symbolsFromModuleList);

  rb_cSymbolsFromModuleListContext = define_class_under<SymbolsFromModuleListContextProxy, ContextProxy>(rb_mASNParser, "SymbolsFromModuleListContext")
    .define_method("symbols_from_module", &SymbolsFromModuleListContextProxy::symbolsFromModule)
    .define_method("symbols_from_module_at", &SymbolsFromModuleListContextProxy::symbolsFromModuleAt);

  rb_cSymbolsFromModuleContext = define_class_under<SymbolsFromModuleContextProxy, ContextProxy>(rb_mASNParser, "SymbolsFromModuleContext")
    .define_method("symbol_list", &SymbolsFromModuleContextProxy::symbolList)
    .define_method("global_module_reference", &SymbolsFromModuleContextProxy::globalModuleReference)
    .define_method("FROM_LITERAL", &SymbolsFromModuleContextProxy::FROM_LITERAL);

  rb_cGlobalModuleReferenceContext = define_class_under<GlobalModuleReferenceContextProxy, ContextProxy>(rb_mASNParser, "GlobalModuleReferenceContext")
    .define_method("assigned_identifier", &GlobalModuleReferenceContextProxy::assignedIdentifier)
    .define_method("IDENTIFIER", &GlobalModuleReferenceContextProxy::IDENTIFIER);

  rb_cAssignedIdentifierContext = define_class_under<AssignedIdentifierContextProxy, ContextProxy>(rb_mASNParser, "AssignedIdentifierContext");

  rb_cSymbolContext = define_class_under<SymbolContextProxy, ContextProxy>(rb_mASNParser, "SymbolContext")
    .define_method("IDENTIFIER", &SymbolContextProxy::IDENTIFIER)
    .define_method("L_BRACE", &SymbolContextProxy::L_BRACE)
    .define_method("R_BRACE", &SymbolContextProxy::R_BRACE);

  rb_cAssignmentContext = define_class_under<AssignmentContextProxy, ContextProxy>(rb_mASNParser, "AssignmentContext")
    .define_method("value_assignment", &AssignmentContextProxy::valueAssignment)
    .define_method("type_assignment", &AssignmentContextProxy::typeAssignment)
    .define_method("parameterized_assignment", &AssignmentContextProxy::parameterizedAssignment)
    .define_method("object_class_assignment", &AssignmentContextProxy::objectClassAssignment)
    .define_method("IDENTIFIER", &AssignmentContextProxy::IDENTIFIER);

  rb_cValueAssignmentContext = define_class_under<ValueAssignmentContextProxy, ContextProxy>(rb_mASNParser, "ValueAssignmentContext")
    .define_method("asn_type", &ValueAssignmentContextProxy::asnType)
    .define_method("value", &ValueAssignmentContextProxy::value)
    .define_method("ASSIGN_OP", &ValueAssignmentContextProxy::ASSIGN_OP);

  rb_cTypeAssignmentContext = define_class_under<TypeAssignmentContextProxy, ContextProxy>(rb_mASNParser, "TypeAssignmentContext")
    .define_method("asn_type", &TypeAssignmentContextProxy::asnType)
    .define_method("ASSIGN_OP", &TypeAssignmentContextProxy::ASSIGN_OP);

  rb_cParameterizedAssignmentContext = define_class_under<ParameterizedAssignmentContextProxy, ContextProxy>(rb_mASNParser, "ParameterizedAssignmentContext")
    .define_method("parameter_list", &ParameterizedAssignmentContextProxy::parameterList)
    .define_method("asn_type", &ParameterizedAssignmentContextProxy::asnType)
    .define_method("value", &ParameterizedAssignmentContextProxy::value)
    .define_method("value_set", &ParameterizedAssignmentContextProxy::valueSet)
    .define_method("defined_object_class", &ParameterizedAssignmentContextProxy::definedObjectClass)
    .define_method("object_", &ParameterizedAssignmentContextProxy::object_)
    .define_method("object_class", &ParameterizedAssignmentContextProxy::objectClass)
    .define_method("object_set", &ParameterizedAssignmentContextProxy::objectSet)
    .define_method("ASSIGN_OP", &ParameterizedAssignmentContextProxy::ASSIGN_OP);

  rb_cObjectClassAssignmentContext = define_class_under<ObjectClassAssignmentContextProxy, ContextProxy>(rb_mASNParser, "ObjectClassAssignmentContext")
    .define_method("object_class", &ObjectClassAssignmentContextProxy::objectClass)
    .define_method("ASSIGN_OP", &ObjectClassAssignmentContextProxy::ASSIGN_OP);

  rb_cSequenceTypeContext = define_class_under<SequenceTypeContextProxy, ContextProxy>(rb_mASNParser, "SequenceTypeContext")
    .define_method("extension_and_exception", &SequenceTypeContextProxy::extensionAndException)
    .define_method("optional_extension_marker", &SequenceTypeContextProxy::optionalExtensionMarker)
    .define_method("component_type_lists", &SequenceTypeContextProxy::componentTypeLists)
    .define_method("SEQUENCE_LITERAL", &SequenceTypeContextProxy::SEQUENCE_LITERAL)
    .define_method("L_BRACE", &SequenceTypeContextProxy::L_BRACE)
    .define_method("R_BRACE", &SequenceTypeContextProxy::R_BRACE);

  rb_cExtensionAndExceptionContext = define_class_under<ExtensionAndExceptionContextProxy, ContextProxy>(rb_mASNParser, "ExtensionAndExceptionContext")
    .define_method("exception_spec", &ExtensionAndExceptionContextProxy::exceptionSpec)
    .define_method("ELLIPSIS", &ExtensionAndExceptionContextProxy::ELLIPSIS);

  rb_cOptionalExtensionMarkerContext = define_class_under<OptionalExtensionMarkerContextProxy, ContextProxy>(rb_mASNParser, "OptionalExtensionMarkerContext")
    .define_method("COMMA", &OptionalExtensionMarkerContextProxy::COMMA)
    .define_method("ELLIPSIS", &OptionalExtensionMarkerContextProxy::ELLIPSIS);

  rb_cComponentTypeListsContext = define_class_under<ComponentTypeListsContextProxy, ContextProxy>(rb_mASNParser, "ComponentTypeListsContext")
    .define_method("root_component_type_list", &ComponentTypeListsContextProxy::rootComponentTypeList)
    .define_method("root_component_type_list_at", &ComponentTypeListsContextProxy::rootComponentTypeListAt)
    .define_method("extension_and_exception", &ComponentTypeListsContextProxy::extensionAndException)
    .define_method("extension_additions", &ComponentTypeListsContextProxy::extensionAdditions)
    .define_method("optional_extension_marker", &ComponentTypeListsContextProxy::optionalExtensionMarker)
    .define_method("COMMA", &ComponentTypeListsContextProxy::COMMA)
    .define_method("COMMAAt", &ComponentTypeListsContextProxy::COMMA)
    .define_method("EXTENSTIONENDMARKER", &ComponentTypeListsContextProxy::EXTENSTIONENDMARKER);

  rb_cExceptionSpecContext = define_class_under<ExceptionSpecContextProxy, ContextProxy>(rb_mASNParser, "ExceptionSpecContext")
    .define_method("exception_identification", &ExceptionSpecContextProxy::exceptionIdentification)
    .define_method("EXCLAM", &ExceptionSpecContextProxy::EXCLAM);

  rb_cRootComponentTypeListContext = define_class_under<RootComponentTypeListContextProxy, ContextProxy>(rb_mASNParser, "RootComponentTypeListContext")
    .define_method("component_type_list", &RootComponentTypeListContextProxy::componentTypeList);

  rb_cExtensionAdditionsContext = define_class_under<ExtensionAdditionsContextProxy, ContextProxy>(rb_mASNParser, "ExtensionAdditionsContext")
    .define_method("extension_addition_list", &ExtensionAdditionsContextProxy::extensionAdditionList)
    .define_method("COMMA", &ExtensionAdditionsContextProxy::COMMA);

  rb_cComponentTypeListContext = define_class_under<ComponentTypeListContextProxy, ContextProxy>(rb_mASNParser, "ComponentTypeListContext")
    .define_method("component_type", &ComponentTypeListContextProxy::componentType)
    .define_method("component_type_at", &ComponentTypeListContextProxy::componentTypeAt)
    .define_method("COMMA", &ComponentTypeListContextProxy::COMMA)
    .define_method("COMMAAt", &ComponentTypeListContextProxy::COMMA);

  rb_cComponentTypeContext = define_class_under<ComponentTypeContextProxy, ContextProxy>(rb_mASNParser, "ComponentTypeContext")
    .define_method("named_type", &ComponentTypeContextProxy::namedType)
    .define_method("value", &ComponentTypeContextProxy::value)
    .define_method("asn_type", &ComponentTypeContextProxy::asnType)
    .define_method("OPTIONAL_LITERAL", &ComponentTypeContextProxy::OPTIONAL_LITERAL)
    .define_method("DEFAULT_LITERAL", &ComponentTypeContextProxy::DEFAULT_LITERAL)
    .define_method("COMPONENTS_LITERAL", &ComponentTypeContextProxy::COMPONENTS_LITERAL)
    .define_method("OF_LITERAL", &ComponentTypeContextProxy::OF_LITERAL);

  rb_cNamedTypeContext = define_class_under<NamedTypeContextProxy, ContextProxy>(rb_mASNParser, "NamedTypeContext")
    .define_method("asn_type", &NamedTypeContextProxy::asnType)
    .define_method("IDENTIFIER", &NamedTypeContextProxy::IDENTIFIER);

  rb_cValueContext = define_class_under<ValueContextProxy, ContextProxy>(rb_mASNParser, "ValueContext")
    .define_method("builtin_value", &ValueContextProxy::builtinValue);

  rb_cAsnTypeContext = define_class_under<AsnTypeContextProxy, ContextProxy>(rb_mASNParser, "AsnTypeContext")
    .define_method("builtin_type", &AsnTypeContextProxy::builtinType)
    .define_method("referenced_type", &AsnTypeContextProxy::referencedType)
    .define_method("constraint", &AsnTypeContextProxy::constraint)
    .define_method("constraint_at", &AsnTypeContextProxy::constraintAt);

  rb_cExtensionAdditionListContext = define_class_under<ExtensionAdditionListContextProxy, ContextProxy>(rb_mASNParser, "ExtensionAdditionListContext")
    .define_method("extension_addition", &ExtensionAdditionListContextProxy::extensionAddition)
    .define_method("extension_addition_at", &ExtensionAdditionListContextProxy::extensionAdditionAt)
    .define_method("COMMA", &ExtensionAdditionListContextProxy::COMMA)
    .define_method("COMMAAt", &ExtensionAdditionListContextProxy::COMMA);

  rb_cExtensionAdditionContext = define_class_under<ExtensionAdditionContextProxy, ContextProxy>(rb_mASNParser, "ExtensionAdditionContext")
    .define_method("component_type", &ExtensionAdditionContextProxy::componentType)
    .define_method("extension_addition_group", &ExtensionAdditionContextProxy::extensionAdditionGroup);

  rb_cExtensionAdditionGroupContext = define_class_under<ExtensionAdditionGroupContextProxy, ContextProxy>(rb_mASNParser, "ExtensionAdditionGroupContext")
    .define_method("version_number", &ExtensionAdditionGroupContextProxy::versionNumber)
    .define_method("component_type_list", &ExtensionAdditionGroupContextProxy::componentTypeList)
    .define_method("DOUBLE_L_BRACKET", &ExtensionAdditionGroupContextProxy::DOUBLE_L_BRACKET)
    .define_method("DOUBLE_R_BRACKET", &ExtensionAdditionGroupContextProxy::DOUBLE_R_BRACKET);

  rb_cVersionNumberContext = define_class_under<VersionNumberContextProxy, ContextProxy>(rb_mASNParser, "VersionNumberContext")
    .define_method("NUMBER", &VersionNumberContextProxy::NUMBER)
    .define_method("COLON", &VersionNumberContextProxy::COLON);

  rb_cSequenceOfTypeContext = define_class_under<SequenceOfTypeContextProxy, ContextProxy>(rb_mASNParser, "SequenceOfTypeContext")
    .define_method("asn_type", &SequenceOfTypeContextProxy::asnType)
    .define_method("named_type", &SequenceOfTypeContextProxy::namedType)
    .define_method("constraint", &SequenceOfTypeContextProxy::constraint)
    .define_method("size_constraint", &SequenceOfTypeContextProxy::sizeConstraint)
    .define_method("SEQUENCE_LITERAL", &SequenceOfTypeContextProxy::SEQUENCE_LITERAL)
    .define_method("OF_LITERAL", &SequenceOfTypeContextProxy::OF_LITERAL)
    .define_method("L_PARAN", &SequenceOfTypeContextProxy::L_PARAN)
    .define_method("R_PARAN", &SequenceOfTypeContextProxy::R_PARAN);

  rb_cConstraintContext = define_class_under<ConstraintContextProxy, ContextProxy>(rb_mASNParser, "ConstraintContext")
    .define_method("constraint_spec", &ConstraintContextProxy::constraintSpec)
    .define_method("exception_spec", &ConstraintContextProxy::exceptionSpec)
    .define_method("L_PARAN", &ConstraintContextProxy::L_PARAN)
    .define_method("R_PARAN", &ConstraintContextProxy::R_PARAN);

  rb_cSizeConstraintContext = define_class_under<SizeConstraintContextProxy, ContextProxy>(rb_mASNParser, "SizeConstraintContext")
    .define_method("constraint", &SizeConstraintContextProxy::constraint)
    .define_method("SIZE_LITERAL", &SizeConstraintContextProxy::SIZE_LITERAL);

  rb_cParameterListContext = define_class_under<ParameterListContextProxy, ContextProxy>(rb_mASNParser, "ParameterListContext")
    .define_method("parameter", &ParameterListContextProxy::parameter)
    .define_method("parameter_at", &ParameterListContextProxy::parameterAt)
    .define_method("L_BRACE", &ParameterListContextProxy::L_BRACE)
    .define_method("R_BRACE", &ParameterListContextProxy::R_BRACE)
    .define_method("COMMA", &ParameterListContextProxy::COMMA)
    .define_method("COMMAAt", &ParameterListContextProxy::COMMA);

  rb_cValueSetContext = define_class_under<ValueSetContextProxy, ContextProxy>(rb_mASNParser, "ValueSetContext")
    .define_method("element_set_specs", &ValueSetContextProxy::elementSetSpecs)
    .define_method("L_BRACE", &ValueSetContextProxy::L_BRACE)
    .define_method("R_BRACE", &ValueSetContextProxy::R_BRACE);

  rb_cDefinedObjectClassContext = define_class_under<DefinedObjectClassContextProxy, ContextProxy>(rb_mASNParser, "DefinedObjectClassContext")
    .define_method("IDENTIFIER", &DefinedObjectClassContextProxy::IDENTIFIER)
    .define_method("IDENTIFIERAt", &DefinedObjectClassContextProxy::IDENTIFIER)
    .define_method("DOT", &DefinedObjectClassContextProxy::DOT)
    .define_method("TYPE_IDENTIFIER_LITERAL", &DefinedObjectClassContextProxy::TYPE_IDENTIFIER_LITERAL)
    .define_method("ABSTRACT_SYNTAX_LITERAL", &DefinedObjectClassContextProxy::ABSTRACT_SYNTAX_LITERAL);

  rb_cObject_Context = define_class_under<Object_ContextProxy, ContextProxy>(rb_mASNParser, "Object_Context")
    .define_method("defined_object", &Object_ContextProxy::definedObject)
    .define_method("parameterized_object", &Object_ContextProxy::parameterizedObject);

  rb_cObjectClassContext = define_class_under<ObjectClassContextProxy, ContextProxy>(rb_mASNParser, "ObjectClassContext")
    .define_method("defined_object_class", &ObjectClassContextProxy::definedObjectClass)
    .define_method("object_class_defn", &ObjectClassContextProxy::objectClassDefn);

  rb_cObjectSetContext = define_class_under<ObjectSetContextProxy, ContextProxy>(rb_mASNParser, "ObjectSetContext")
    .define_method("object_set_spec", &ObjectSetContextProxy::objectSetSpec)
    .define_method("L_BRACE", &ObjectSetContextProxy::L_BRACE)
    .define_method("R_BRACE", &ObjectSetContextProxy::R_BRACE);

  rb_cParameterContext = define_class_under<ParameterContextProxy, ContextProxy>(rb_mASNParser, "ParameterContext")
    .define_method("param_governor", &ParameterContextProxy::paramGovernor)
    .define_method("IDENTIFIER", &ParameterContextProxy::IDENTIFIER)
    .define_method("COLON", &ParameterContextProxy::COLON);

  rb_cParamGovernorContext = define_class_under<ParamGovernorContextProxy, ContextProxy>(rb_mASNParser, "ParamGovernorContext")
    .define_method("governor", &ParamGovernorContextProxy::governor)
    .define_method("IDENTIFIER", &ParamGovernorContextProxy::IDENTIFIER);

  rb_cGovernorContext = define_class_under<GovernorContextProxy, ContextProxy>(rb_mASNParser, "GovernorContext")
    .define_method("asn_type", &GovernorContextProxy::asnType)
    .define_method("defined_object_class", &GovernorContextProxy::definedObjectClass);

  rb_cObjectClassDefnContext = define_class_under<ObjectClassDefnContextProxy, ContextProxy>(rb_mASNParser, "ObjectClassDefnContext")
    .define_method("field_spec", &ObjectClassDefnContextProxy::fieldSpec)
    .define_method("field_spec_at", &ObjectClassDefnContextProxy::fieldSpecAt)
    .define_method("with_syntax_spec", &ObjectClassDefnContextProxy::withSyntaxSpec)
    .define_method("CLASS_LITERAL", &ObjectClassDefnContextProxy::CLASS_LITERAL)
    .define_method("L_BRACE", &ObjectClassDefnContextProxy::L_BRACE)
    .define_method("R_BRACE", &ObjectClassDefnContextProxy::R_BRACE)
    .define_method("COMMA", &ObjectClassDefnContextProxy::COMMA)
    .define_method("COMMAAt", &ObjectClassDefnContextProxy::COMMA);

  rb_cUsefulObjectClassReferenceContext = define_class_under<UsefulObjectClassReferenceContextProxy, ContextProxy>(rb_mASNParser, "UsefulObjectClassReferenceContext")
    .define_method("TYPE_IDENTIFIER_LITERAL", &UsefulObjectClassReferenceContextProxy::TYPE_IDENTIFIER_LITERAL)
    .define_method("ABSTRACT_SYNTAX_LITERAL", &UsefulObjectClassReferenceContextProxy::ABSTRACT_SYNTAX_LITERAL);

  rb_cExternalObjectClassReferenceContext = define_class_under<ExternalObjectClassReferenceContextProxy, ContextProxy>(rb_mASNParser, "ExternalObjectClassReferenceContext")
    .define_method("IDENTIFIER", &ExternalObjectClassReferenceContextProxy::IDENTIFIER)
    .define_method("IDENTIFIERAt", &ExternalObjectClassReferenceContextProxy::IDENTIFIER)
    .define_method("DOT", &ExternalObjectClassReferenceContextProxy::DOT);

  rb_cFieldSpecContext = define_class_under<FieldSpecContextProxy, ContextProxy>(rb_mASNParser, "FieldSpecContext")
    .define_method("asn_type", &FieldSpecContextProxy::asnType)
    .define_method("field_name", &FieldSpecContextProxy::fieldName)
    .define_method("defined_object_class", &FieldSpecContextProxy::definedObjectClass)
    .define_method("type_optionality_spec", &FieldSpecContextProxy::typeOptionalitySpec)
    .define_method("value_set_optionality_spec", &FieldSpecContextProxy::valueSetOptionalitySpec)
    .define_method("value_optionality_spec", &FieldSpecContextProxy::valueOptionalitySpec)
    .define_method("value_set", &FieldSpecContextProxy::valueSet)
    .define_method("value", &FieldSpecContextProxy::value)
    .define_method("object_set", &FieldSpecContextProxy::objectSet)
    .define_method("object_", &FieldSpecContextProxy::object_)
    .define_method("AMPERSAND", &FieldSpecContextProxy::AMPERSAND)
    .define_method("IDENTIFIER", &FieldSpecContextProxy::IDENTIFIER)
    .define_method("OPTIONAL_LITERAL", &FieldSpecContextProxy::OPTIONAL_LITERAL)
    .define_method("DEFAULT_LITERAL", &FieldSpecContextProxy::DEFAULT_LITERAL)
    .define_method("UNIQUE_LITERAL", &FieldSpecContextProxy::UNIQUE_LITERAL);

  rb_cWithSyntaxSpecContext = define_class_under<WithSyntaxSpecContextProxy, ContextProxy>(rb_mASNParser, "WithSyntaxSpecContext")
    .define_method("syntax_list", &WithSyntaxSpecContextProxy::syntaxList)
    .define_method("WITH_LITERAL", &WithSyntaxSpecContextProxy::WITH_LITERAL)
    .define_method("SYNTAX_LITERAL", &WithSyntaxSpecContextProxy::SYNTAX_LITERAL);

  rb_cSyntaxListContext = define_class_under<SyntaxListContextProxy, ContextProxy>(rb_mASNParser, "SyntaxListContext")
    .define_method("token_or_group_spec", &SyntaxListContextProxy::tokenOrGroupSpec)
    .define_method("token_or_group_spec_at", &SyntaxListContextProxy::tokenOrGroupSpecAt)
    .define_method("L_BRACE", &SyntaxListContextProxy::L_BRACE)
    .define_method("R_BRACE", &SyntaxListContextProxy::R_BRACE);

  rb_cTokenOrGroupSpecContext = define_class_under<TokenOrGroupSpecContextProxy, ContextProxy>(rb_mASNParser, "TokenOrGroupSpecContext")
    .define_method("required_token", &TokenOrGroupSpecContextProxy::requiredToken)
    .define_method("optional_group", &TokenOrGroupSpecContextProxy::optionalGroup);

  rb_cRequiredTokenContext = define_class_under<RequiredTokenContextProxy, ContextProxy>(rb_mASNParser, "RequiredTokenContext")
    .define_method("literal", &RequiredTokenContextProxy::literal)
    .define_method("primitive_field_name", &RequiredTokenContextProxy::primitiveFieldName);

  rb_cOptionalGroupContext = define_class_under<OptionalGroupContextProxy, ContextProxy>(rb_mASNParser, "OptionalGroupContext")
    .define_method("token_or_group_spec", &OptionalGroupContextProxy::tokenOrGroupSpec)
    .define_method("token_or_group_spec_at", &OptionalGroupContextProxy::tokenOrGroupSpecAt)
    .define_method("L_BRACKET", &OptionalGroupContextProxy::L_BRACKET)
    .define_method("R_BRACKET", &OptionalGroupContextProxy::R_BRACKET);

  rb_cLiteralContext = define_class_under<LiteralContextProxy, ContextProxy>(rb_mASNParser, "LiteralContext")
    .define_method("IDENTIFIER", &LiteralContextProxy::IDENTIFIER)
    .define_method("COMMA", &LiteralContextProxy::COMMA);

  rb_cPrimitiveFieldNameContext = define_class_under<PrimitiveFieldNameContextProxy, ContextProxy>(rb_mASNParser, "PrimitiveFieldNameContext")
    .define_method("AMPERSAND", &PrimitiveFieldNameContextProxy::AMPERSAND)
    .define_method("IDENTIFIER", &PrimitiveFieldNameContextProxy::IDENTIFIER);

  rb_cFieldNameContext = define_class_under<FieldNameContextProxy, ContextProxy>(rb_mASNParser, "FieldNameContext")
    .define_method("AMPERSAND", &FieldNameContextProxy::AMPERSAND)
    .define_method("AMPERSANDAt", &FieldNameContextProxy::AMPERSAND)
    .define_method("IDENTIFIER", &FieldNameContextProxy::IDENTIFIER)
    .define_method("IDENTIFIERAt", &FieldNameContextProxy::IDENTIFIER)
    .define_method("DOT", &FieldNameContextProxy::DOT)
    .define_method("DOTAt", &FieldNameContextProxy::DOT);

  rb_cTypeOptionalitySpecContext = define_class_under<TypeOptionalitySpecContextProxy, ContextProxy>(rb_mASNParser, "TypeOptionalitySpecContext")
    .define_method("asn_type", &TypeOptionalitySpecContextProxy::asnType)
    .define_method("OPTIONAL_LITERAL", &TypeOptionalitySpecContextProxy::OPTIONAL_LITERAL)
    .define_method("DEFAULT_LITERAL", &TypeOptionalitySpecContextProxy::DEFAULT_LITERAL);

  rb_cValueSetOptionalitySpecContext = define_class_under<ValueSetOptionalitySpecContextProxy, ContextProxy>(rb_mASNParser, "ValueSetOptionalitySpecContext")
    .define_method("value_set", &ValueSetOptionalitySpecContextProxy::valueSet)
    .define_method("OPTIONAL_LITERAL", &ValueSetOptionalitySpecContextProxy::OPTIONAL_LITERAL)
    .define_method("DEFAULT_LITERAL", &ValueSetOptionalitySpecContextProxy::DEFAULT_LITERAL);

  rb_cValueOptionalitySpecContext = define_class_under<ValueOptionalitySpecContextProxy, ContextProxy>(rb_mASNParser, "ValueOptionalitySpecContext")
    .define_method("value", &ValueOptionalitySpecContextProxy::value)
    .define_method("OPTIONAL_LITERAL", &ValueOptionalitySpecContextProxy::OPTIONAL_LITERAL)
    .define_method("DEFAULT_LITERAL", &ValueOptionalitySpecContextProxy::DEFAULT_LITERAL);

  rb_cTypeFieldSpecContext = define_class_under<TypeFieldSpecContextProxy, ContextProxy>(rb_mASNParser, "TypeFieldSpecContext")
    .define_method("type_optionality_spec", &TypeFieldSpecContextProxy::typeOptionalitySpec)
    .define_method("AMPERSAND", &TypeFieldSpecContextProxy::AMPERSAND)
    .define_method("IDENTIFIER", &TypeFieldSpecContextProxy::IDENTIFIER);

  rb_cFixedTypeValueFieldSpecContext = define_class_under<FixedTypeValueFieldSpecContextProxy, ContextProxy>(rb_mASNParser, "FixedTypeValueFieldSpecContext")
    .define_method("asn_type", &FixedTypeValueFieldSpecContextProxy::asnType)
    .define_method("value_optionality_spec", &FixedTypeValueFieldSpecContextProxy::valueOptionalitySpec)
    .define_method("AMPERSAND", &FixedTypeValueFieldSpecContextProxy::AMPERSAND)
    .define_method("IDENTIFIER", &FixedTypeValueFieldSpecContextProxy::IDENTIFIER)
    .define_method("UNIQUE_LITERAL", &FixedTypeValueFieldSpecContextProxy::UNIQUE_LITERAL);

  rb_cVariableTypeValueFieldSpecContext = define_class_under<VariableTypeValueFieldSpecContextProxy, ContextProxy>(rb_mASNParser, "VariableTypeValueFieldSpecContext")
    .define_method("field_name", &VariableTypeValueFieldSpecContextProxy::fieldName)
    .define_method("value_optionality_spec", &VariableTypeValueFieldSpecContextProxy::valueOptionalitySpec)
    .define_method("AMPERSAND", &VariableTypeValueFieldSpecContextProxy::AMPERSAND)
    .define_method("IDENTIFIER", &VariableTypeValueFieldSpecContextProxy::IDENTIFIER);

  rb_cFixedTypeValueSetFieldSpecContext = define_class_under<FixedTypeValueSetFieldSpecContextProxy, ContextProxy>(rb_mASNParser, "FixedTypeValueSetFieldSpecContext")
    .define_method("asn_type", &FixedTypeValueSetFieldSpecContextProxy::asnType)
    .define_method("value_set_optionality_spec", &FixedTypeValueSetFieldSpecContextProxy::valueSetOptionalitySpec)
    .define_method("AMPERSAND", &FixedTypeValueSetFieldSpecContextProxy::AMPERSAND)
    .define_method("IDENTIFIER", &FixedTypeValueSetFieldSpecContextProxy::IDENTIFIER);

  rb_cDefinedObjectContext = define_class_under<DefinedObjectContextProxy, ContextProxy>(rb_mASNParser, "DefinedObjectContext")
    .define_method("IDENTIFIER", &DefinedObjectContextProxy::IDENTIFIER)
    .define_method("DOT", &DefinedObjectContextProxy::DOT);

  rb_cParameterizedObjectContext = define_class_under<ParameterizedObjectContextProxy, ContextProxy>(rb_mASNParser, "ParameterizedObjectContext")
    .define_method("defined_object", &ParameterizedObjectContextProxy::definedObject)
    .define_method("actual_parameter_list", &ParameterizedObjectContextProxy::actualParameterList);

  rb_cActualParameterListContext = define_class_under<ActualParameterListContextProxy, ContextProxy>(rb_mASNParser, "ActualParameterListContext")
    .define_method("actual_parameter", &ActualParameterListContextProxy::actualParameter)
    .define_method("actual_parameter_at", &ActualParameterListContextProxy::actualParameterAt)
    .define_method("L_BRACE", &ActualParameterListContextProxy::L_BRACE)
    .define_method("R_BRACE", &ActualParameterListContextProxy::R_BRACE)
    .define_method("COMMA", &ActualParameterListContextProxy::COMMA)
    .define_method("COMMAAt", &ActualParameterListContextProxy::COMMA);

  rb_cObjectSetSpecContext = define_class_under<ObjectSetSpecContextProxy, ContextProxy>(rb_mASNParser, "ObjectSetSpecContext")
    .define_method("root_element_set_spec", &ObjectSetSpecContextProxy::rootElementSetSpec)
    .define_method("additional_element_set_spec", &ObjectSetSpecContextProxy::additionalElementSetSpec)
    .define_method("COMMA", &ObjectSetSpecContextProxy::COMMA)
    .define_method("COMMAAt", &ObjectSetSpecContextProxy::COMMA)
    .define_method("ELLIPSIS", &ObjectSetSpecContextProxy::ELLIPSIS);

  rb_cRootElementSetSpecContext = define_class_under<RootElementSetSpecContextProxy, ContextProxy>(rb_mASNParser, "RootElementSetSpecContext")
    .define_method("element_set_spec", &RootElementSetSpecContextProxy::elementSetSpec);

  rb_cAdditionalElementSetSpecContext = define_class_under<AdditionalElementSetSpecContextProxy, ContextProxy>(rb_mASNParser, "AdditionalElementSetSpecContext")
    .define_method("element_set_spec", &AdditionalElementSetSpecContextProxy::elementSetSpec);

  rb_cElementSetSpecsContext = define_class_under<ElementSetSpecsContextProxy, ContextProxy>(rb_mASNParser, "ElementSetSpecsContext")
    .define_method("root_element_set_spec", &ElementSetSpecsContextProxy::rootElementSetSpec)
    .define_method("additional_element_set_spec", &ElementSetSpecsContextProxy::additionalElementSetSpec)
    .define_method("COMMA", &ElementSetSpecsContextProxy::COMMA)
    .define_method("COMMAAt", &ElementSetSpecsContextProxy::COMMA)
    .define_method("ELLIPSIS", &ElementSetSpecsContextProxy::ELLIPSIS);

  rb_cElementSetSpecContext = define_class_under<ElementSetSpecContextProxy, ContextProxy>(rb_mASNParser, "ElementSetSpecContext")
    .define_method("unions", &ElementSetSpecContextProxy::unions)
    .define_method("exclusions", &ElementSetSpecContextProxy::exclusions)
    .define_method("ALL_LITERAL", &ElementSetSpecContextProxy::ALL_LITERAL);

  rb_cUnionsContext = define_class_under<UnionsContextProxy, ContextProxy>(rb_mASNParser, "UnionsContext")
    .define_method("intersections", &UnionsContextProxy::intersections)
    .define_method("intersections_at", &UnionsContextProxy::intersectionsAt)
    .define_method("union_mark", &UnionsContextProxy::unionMark)
    .define_method("union_mark_at", &UnionsContextProxy::unionMarkAt);

  rb_cExclusionsContext = define_class_under<ExclusionsContextProxy, ContextProxy>(rb_mASNParser, "ExclusionsContext")
    .define_method("elements", &ExclusionsContextProxy::elements)
    .define_method("EXCEPT_LITERAL", &ExclusionsContextProxy::EXCEPT_LITERAL);

  rb_cIntersectionsContext = define_class_under<IntersectionsContextProxy, ContextProxy>(rb_mASNParser, "IntersectionsContext")
    .define_method("intersection_elements", &IntersectionsContextProxy::intersectionElements)
    .define_method("intersection_elements_at", &IntersectionsContextProxy::intersectionElementsAt)
    .define_method("intersection_mark", &IntersectionsContextProxy::intersectionMark)
    .define_method("intersection_mark_at", &IntersectionsContextProxy::intersectionMarkAt);

  rb_cUnionMarkContext = define_class_under<UnionMarkContextProxy, ContextProxy>(rb_mASNParser, "UnionMarkContext")
    .define_method("PIPE", &UnionMarkContextProxy::PIPE)
    .define_method("UNION_LITERAL", &UnionMarkContextProxy::UNION_LITERAL);

  rb_cElementsContext = define_class_under<ElementsContextProxy, ContextProxy>(rb_mASNParser, "ElementsContext")
    .define_method("subtype_elements", &ElementsContextProxy::subtypeElements);

  rb_cIntersectionElementsContext = define_class_under<IntersectionElementsContextProxy, ContextProxy>(rb_mASNParser, "IntersectionElementsContext")
    .define_method("elements", &IntersectionElementsContextProxy::elements)
    .define_method("exclusions", &IntersectionElementsContextProxy::exclusions);

  rb_cIntersectionMarkContext = define_class_under<IntersectionMarkContextProxy, ContextProxy>(rb_mASNParser, "IntersectionMarkContext")
    .define_method("POWER", &IntersectionMarkContextProxy::POWER)
    .define_method("INTERSECTION_LITERAL", &IntersectionMarkContextProxy::INTERSECTION_LITERAL);

  rb_cSubtypeElementsContext = define_class_under<SubtypeElementsContextProxy, ContextProxy>(rb_mASNParser, "SubtypeElementsContext")
    .define_method("value", &SubtypeElementsContextProxy::value)
    .define_method("value_at", &SubtypeElementsContextProxy::valueAt)
    .define_method("size_constraint", &SubtypeElementsContextProxy::sizeConstraint)
    .define_method("DOUBLE_DOT", &SubtypeElementsContextProxy::DOUBLE_DOT)
    .define_method("MIN_LITERAL", &SubtypeElementsContextProxy::MIN_LITERAL)
    .define_method("MAX_LITERAL", &SubtypeElementsContextProxy::MAX_LITERAL)
    .define_method("LESS_THAN", &SubtypeElementsContextProxy::LESS_THAN)
    .define_method("LESS_THANAt", &SubtypeElementsContextProxy::LESS_THAN)
    .define_method("PATTERN_LITERAL", &SubtypeElementsContextProxy::PATTERN_LITERAL);

  rb_cObjectSetElementsContext = define_class_under<ObjectSetElementsContextProxy, ContextProxy>(rb_mASNParser, "ObjectSetElementsContext")
    .define_method("object_", &ObjectSetElementsContextProxy::object_)
    .define_method("defined_object", &ObjectSetElementsContextProxy::definedObject);

  rb_cVariableTypeValueSetFieldSpecContext = define_class_under<VariableTypeValueSetFieldSpecContextProxy, ContextProxy>(rb_mASNParser, "VariableTypeValueSetFieldSpecContext")
    .define_method("field_name", &VariableTypeValueSetFieldSpecContextProxy::fieldName)
    .define_method("value_set_optionality_spec", &VariableTypeValueSetFieldSpecContextProxy::valueSetOptionalitySpec)
    .define_method("AMPERSAND", &VariableTypeValueSetFieldSpecContextProxy::AMPERSAND)
    .define_method("IDENTIFIER", &VariableTypeValueSetFieldSpecContextProxy::IDENTIFIER);

  rb_cObjectFieldSpecContext = define_class_under<ObjectFieldSpecContextProxy, ContextProxy>(rb_mASNParser, "ObjectFieldSpecContext")
    .define_method("defined_object_class", &ObjectFieldSpecContextProxy::definedObjectClass)
    .define_method("object_optionality_spec", &ObjectFieldSpecContextProxy::objectOptionalitySpec)
    .define_method("AMPERSAND", &ObjectFieldSpecContextProxy::AMPERSAND)
    .define_method("IDENTIFIER", &ObjectFieldSpecContextProxy::IDENTIFIER);

  rb_cObjectOptionalitySpecContext = define_class_under<ObjectOptionalitySpecContextProxy, ContextProxy>(rb_mASNParser, "ObjectOptionalitySpecContext")
    .define_method("object_", &ObjectOptionalitySpecContextProxy::object_)
    .define_method("OPTIONAL_LITERAL", &ObjectOptionalitySpecContextProxy::OPTIONAL_LITERAL)
    .define_method("DEFAULT_LITERAL", &ObjectOptionalitySpecContextProxy::DEFAULT_LITERAL);

  rb_cObjectSetFieldSpecContext = define_class_under<ObjectSetFieldSpecContextProxy, ContextProxy>(rb_mASNParser, "ObjectSetFieldSpecContext")
    .define_method("defined_object_class", &ObjectSetFieldSpecContextProxy::definedObjectClass)
    .define_method("object_set_optionality_spec", &ObjectSetFieldSpecContextProxy::objectSetOptionalitySpec)
    .define_method("AMPERSAND", &ObjectSetFieldSpecContextProxy::AMPERSAND)
    .define_method("IDENTIFIER", &ObjectSetFieldSpecContextProxy::IDENTIFIER);

  rb_cObjectSetOptionalitySpecContext = define_class_under<ObjectSetOptionalitySpecContextProxy, ContextProxy>(rb_mASNParser, "ObjectSetOptionalitySpecContext")
    .define_method("object_set", &ObjectSetOptionalitySpecContextProxy::objectSet)
    .define_method("OPTIONAL_LITERAL", &ObjectSetOptionalitySpecContextProxy::OPTIONAL_LITERAL)
    .define_method("DEFAULT_LITERAL", &ObjectSetOptionalitySpecContextProxy::DEFAULT_LITERAL);

  rb_cBuiltinTypeContext = define_class_under<BuiltinTypeContextProxy, ContextProxy>(rb_mASNParser, "BuiltinTypeContext")
    .define_method("octet_string_type", &BuiltinTypeContextProxy::octetStringType)
    .define_method("bit_string_type", &BuiltinTypeContextProxy::bitStringType)
    .define_method("choice_type", &BuiltinTypeContextProxy::choiceType)
    .define_method("enumerated_type", &BuiltinTypeContextProxy::enumeratedType)
    .define_method("integer_type", &BuiltinTypeContextProxy::integerType)
    .define_method("sequence_type", &BuiltinTypeContextProxy::sequenceType)
    .define_method("sequence_of_type", &BuiltinTypeContextProxy::sequenceOfType)
    .define_method("set_type", &BuiltinTypeContextProxy::setType)
    .define_method("set_of_type", &BuiltinTypeContextProxy::setOfType)
    .define_method("objectidentifiertype", &BuiltinTypeContextProxy::objectidentifiertype)
    .define_method("object_class_field_type", &BuiltinTypeContextProxy::objectClassFieldType)
    .define_method("BOOLEAN_LITERAL", &BuiltinTypeContextProxy::BOOLEAN_LITERAL)
    .define_method("NULL_LITERAL", &BuiltinTypeContextProxy::NULL_LITERAL);

  rb_cReferencedTypeContext = define_class_under<ReferencedTypeContextProxy, ContextProxy>(rb_mASNParser, "ReferencedTypeContext")
    .define_method("defined_type", &ReferencedTypeContextProxy::definedType);

  rb_cOctetStringTypeContext = define_class_under<OctetStringTypeContextProxy, ContextProxy>(rb_mASNParser, "OctetStringTypeContext")
    .define_method("OCTET_LITERAL", &OctetStringTypeContextProxy::OCTET_LITERAL)
    .define_method("STRING_LITERAL", &OctetStringTypeContextProxy::STRING_LITERAL);

  rb_cBitStringTypeContext = define_class_under<BitStringTypeContextProxy, ContextProxy>(rb_mASNParser, "BitStringTypeContext")
    .define_method("named_bit_list", &BitStringTypeContextProxy::namedBitList)
    .define_method("BIT_LITERAL", &BitStringTypeContextProxy::BIT_LITERAL)
    .define_method("STRING_LITERAL", &BitStringTypeContextProxy::STRING_LITERAL)
    .define_method("L_BRACE", &BitStringTypeContextProxy::L_BRACE)
    .define_method("R_BRACE", &BitStringTypeContextProxy::R_BRACE);

  rb_cChoiceTypeContext = define_class_under<ChoiceTypeContextProxy, ContextProxy>(rb_mASNParser, "ChoiceTypeContext")
    .define_method("alternative_type_lists", &ChoiceTypeContextProxy::alternativeTypeLists)
    .define_method("CHOICE_LITERAL", &ChoiceTypeContextProxy::CHOICE_LITERAL)
    .define_method("L_BRACE", &ChoiceTypeContextProxy::L_BRACE)
    .define_method("R_BRACE", &ChoiceTypeContextProxy::R_BRACE);

  rb_cEnumeratedTypeContext = define_class_under<EnumeratedTypeContextProxy, ContextProxy>(rb_mASNParser, "EnumeratedTypeContext")
    .define_method("enumerations", &EnumeratedTypeContextProxy::enumerations)
    .define_method("ENUMERATED_LITERAL", &EnumeratedTypeContextProxy::ENUMERATED_LITERAL)
    .define_method("L_BRACE", &EnumeratedTypeContextProxy::L_BRACE)
    .define_method("R_BRACE", &EnumeratedTypeContextProxy::R_BRACE);

  rb_cIntegerTypeContext = define_class_under<IntegerTypeContextProxy, ContextProxy>(rb_mASNParser, "IntegerTypeContext")
    .define_method("named_number_list", &IntegerTypeContextProxy::namedNumberList)
    .define_method("INTEGER_LITERAL", &IntegerTypeContextProxy::INTEGER_LITERAL)
    .define_method("L_BRACE", &IntegerTypeContextProxy::L_BRACE)
    .define_method("R_BRACE", &IntegerTypeContextProxy::R_BRACE);

  rb_cSetTypeContext = define_class_under<SetTypeContextProxy, ContextProxy>(rb_mASNParser, "SetTypeContext")
    .define_method("extension_and_exception", &SetTypeContextProxy::extensionAndException)
    .define_method("optional_extension_marker", &SetTypeContextProxy::optionalExtensionMarker)
    .define_method("component_type_lists", &SetTypeContextProxy::componentTypeLists)
    .define_method("SET_LITERAL", &SetTypeContextProxy::SET_LITERAL)
    .define_method("L_BRACE", &SetTypeContextProxy::L_BRACE)
    .define_method("R_BRACE", &SetTypeContextProxy::R_BRACE);

  rb_cSetOfTypeContext = define_class_under<SetOfTypeContextProxy, ContextProxy>(rb_mASNParser, "SetOfTypeContext")
    .define_method("asn_type", &SetOfTypeContextProxy::asnType)
    .define_method("named_type", &SetOfTypeContextProxy::namedType)
    .define_method("constraint", &SetOfTypeContextProxy::constraint)
    .define_method("size_constraint", &SetOfTypeContextProxy::sizeConstraint)
    .define_method("SET_LITERAL", &SetOfTypeContextProxy::SET_LITERAL)
    .define_method("OF_LITERAL", &SetOfTypeContextProxy::OF_LITERAL);

  rb_cObjectidentifiertypeContext = define_class_under<ObjectidentifiertypeContextProxy, ContextProxy>(rb_mASNParser, "ObjectidentifiertypeContext")
    .define_method("OBJECT_LITERAL", &ObjectidentifiertypeContextProxy::OBJECT_LITERAL)
    .define_method("IDENTIFIER_LITERAL", &ObjectidentifiertypeContextProxy::IDENTIFIER_LITERAL);

  rb_cObjectClassFieldTypeContext = define_class_under<ObjectClassFieldTypeContextProxy, ContextProxy>(rb_mASNParser, "ObjectClassFieldTypeContext")
    .define_method("defined_object_class", &ObjectClassFieldTypeContextProxy::definedObjectClass)
    .define_method("field_name", &ObjectClassFieldTypeContextProxy::fieldName)
    .define_method("DOT", &ObjectClassFieldTypeContextProxy::DOT);

  rb_cDefinedTypeContext = define_class_under<DefinedTypeContextProxy, ContextProxy>(rb_mASNParser, "DefinedTypeContext")
    .define_method("actual_parameter_list", &DefinedTypeContextProxy::actualParameterList)
    .define_method("IDENTIFIER", &DefinedTypeContextProxy::IDENTIFIER)
    .define_method("IDENTIFIERAt", &DefinedTypeContextProxy::IDENTIFIER)
    .define_method("DOT", &DefinedTypeContextProxy::DOT);

  rb_cConstraintSpecContext = define_class_under<ConstraintSpecContextProxy, ContextProxy>(rb_mASNParser, "ConstraintSpecContext")
    .define_method("general_constraint", &ConstraintSpecContextProxy::generalConstraint)
    .define_method("subtype_constraint", &ConstraintSpecContextProxy::subtypeConstraint);

  rb_cGeneralConstraintContext = define_class_under<GeneralConstraintContextProxy, ContextProxy>(rb_mASNParser, "GeneralConstraintContext")
    .define_method("user_defined_constraint", &GeneralConstraintContextProxy::userDefinedConstraint)
    .define_method("table_constraint", &GeneralConstraintContextProxy::tableConstraint)
    .define_method("contents_constraint", &GeneralConstraintContextProxy::contentsConstraint);

  rb_cSubtypeConstraintContext = define_class_under<SubtypeConstraintContextProxy, ContextProxy>(rb_mASNParser, "SubtypeConstraintContext")
    .define_method("element_set_specs", &SubtypeConstraintContextProxy::elementSetSpecs);

  rb_cUserDefinedConstraintContext = define_class_under<UserDefinedConstraintContextProxy, ContextProxy>(rb_mASNParser, "UserDefinedConstraintContext")
    .define_method("user_defined_constraint_parameter", &UserDefinedConstraintContextProxy::userDefinedConstraintParameter)
    .define_method("user_defined_constraint_parameter_at", &UserDefinedConstraintContextProxy::userDefinedConstraintParameterAt)
    .define_method("CONSTRAINED_LITERAL", &UserDefinedConstraintContextProxy::CONSTRAINED_LITERAL)
    .define_method("BY_LITERAL", &UserDefinedConstraintContextProxy::BY_LITERAL)
    .define_method("L_BRACE", &UserDefinedConstraintContextProxy::L_BRACE)
    .define_method("R_BRACE", &UserDefinedConstraintContextProxy::R_BRACE)
    .define_method("COMMA", &UserDefinedConstraintContextProxy::COMMA)
    .define_method("COMMAAt", &UserDefinedConstraintContextProxy::COMMA);

  rb_cUserDefinedConstraintParameterContext = define_class_under<UserDefinedConstraintParameterContextProxy, ContextProxy>(rb_mASNParser, "UserDefinedConstraintParameterContext")
    .define_method("governor", &UserDefinedConstraintParameterContextProxy::governor)
    .define_method("value", &UserDefinedConstraintParameterContextProxy::value)
    .define_method("value_set", &UserDefinedConstraintParameterContextProxy::valueSet)
    .define_method("object_", &UserDefinedConstraintParameterContextProxy::object_)
    .define_method("object_set", &UserDefinedConstraintParameterContextProxy::objectSet)
    .define_method("COLON", &UserDefinedConstraintParameterContextProxy::COLON);

  rb_cTableConstraintContext = define_class_under<TableConstraintContextProxy, ContextProxy>(rb_mASNParser, "TableConstraintContext")
    .define_method("component_relation_constraint", &TableConstraintContextProxy::componentRelationConstraint);

  rb_cContentsConstraintContext = define_class_under<ContentsConstraintContextProxy, ContextProxy>(rb_mASNParser, "ContentsConstraintContext")
    .define_method("asn_type", &ContentsConstraintContextProxy::asnType)
    .define_method("value", &ContentsConstraintContextProxy::value)
    .define_method("component_presence_lists", &ContentsConstraintContextProxy::componentPresenceLists)
    .define_method("CONTAINING_LITERAL", &ContentsConstraintContextProxy::CONTAINING_LITERAL)
    .define_method("ENCODED_LITERAL", &ContentsConstraintContextProxy::ENCODED_LITERAL)
    .define_method("BY_LITERAL", &ContentsConstraintContextProxy::BY_LITERAL)
    .define_method("WITH_LITERAL", &ContentsConstraintContextProxy::WITH_LITERAL)
    .define_method("COMPONENTS_LITERAL", &ContentsConstraintContextProxy::COMPONENTS_LITERAL)
    .define_method("L_BRACE", &ContentsConstraintContextProxy::L_BRACE)
    .define_method("R_BRACE", &ContentsConstraintContextProxy::R_BRACE);

  rb_cComponentRelationConstraintContext = define_class_under<ComponentRelationConstraintContextProxy, ContextProxy>(rb_mASNParser, "ComponentRelationConstraintContext")
    .define_method("at_notation", &ComponentRelationConstraintContextProxy::atNotation)
    .define_method("at_notation_at", &ComponentRelationConstraintContextProxy::atNotationAt)
    .define_method("L_BRACE", &ComponentRelationConstraintContextProxy::L_BRACE)
    .define_method("L_BRACEAt", &ComponentRelationConstraintContextProxy::L_BRACE)
    .define_method("IDENTIFIER", &ComponentRelationConstraintContextProxy::IDENTIFIER)
    .define_method("IDENTIFIERAt", &ComponentRelationConstraintContextProxy::IDENTIFIER)
    .define_method("R_BRACE", &ComponentRelationConstraintContextProxy::R_BRACE)
    .define_method("R_BRACEAt", &ComponentRelationConstraintContextProxy::R_BRACE)
    .define_method("DOT", &ComponentRelationConstraintContextProxy::DOT)
    .define_method("COMMA", &ComponentRelationConstraintContextProxy::COMMA)
    .define_method("COMMAAt", &ComponentRelationConstraintContextProxy::COMMA);

  rb_cSimpleTableConstraintContext = define_class_under<SimpleTableConstraintContextProxy, ContextProxy>(rb_mASNParser, "SimpleTableConstraintContext")
    .define_method("object_set", &SimpleTableConstraintContextProxy::objectSet);

  rb_cComponentPresenceListsContext = define_class_under<ComponentPresenceListsContextProxy, ContextProxy>(rb_mASNParser, "ComponentPresenceListsContext")
    .define_method("component_presence_list", &ComponentPresenceListsContextProxy::componentPresenceList)
    .define_method("component_presence_list_at", &ComponentPresenceListsContextProxy::componentPresenceListAt)
    .define_method("COMMA", &ComponentPresenceListsContextProxy::COMMA)
    .define_method("COMMAAt", &ComponentPresenceListsContextProxy::COMMA)
    .define_method("ELLIPSIS", &ComponentPresenceListsContextProxy::ELLIPSIS);

  rb_cComponentPresenceListContext = define_class_under<ComponentPresenceListContextProxy, ContextProxy>(rb_mASNParser, "ComponentPresenceListContext")
    .define_method("component_presence", &ComponentPresenceListContextProxy::componentPresence)
    .define_method("component_presence_at", &ComponentPresenceListContextProxy::componentPresenceAt)
    .define_method("COMMA", &ComponentPresenceListContextProxy::COMMA)
    .define_method("COMMAAt", &ComponentPresenceListContextProxy::COMMA);

  rb_cComponentPresenceContext = define_class_under<ComponentPresenceContextProxy, ContextProxy>(rb_mASNParser, "ComponentPresenceContext")
    .define_method("IDENTIFIER", &ComponentPresenceContextProxy::IDENTIFIER)
    .define_method("ABSENT_LITERAL", &ComponentPresenceContextProxy::ABSENT_LITERAL)
    .define_method("PRESENT_LITERAL", &ComponentPresenceContextProxy::PRESENT_LITERAL);

  rb_cBuiltinValueContext = define_class_under<BuiltinValueContextProxy, ContextProxy>(rb_mASNParser, "BuiltinValueContext")
    .define_method("enumerated_value", &BuiltinValueContextProxy::enumeratedValue)
    .define_method("integer_value", &BuiltinValueContextProxy::integerValue)
    .define_method("choice_value", &BuiltinValueContextProxy::choiceValue)
    .define_method("object_identifier_value", &BuiltinValueContextProxy::objectIdentifierValue)
    .define_method("boolean_value", &BuiltinValueContextProxy::booleanValue)
    .define_method("CSTRING", &BuiltinValueContextProxy::CSTRING)
    .define_method("BSTRING", &BuiltinValueContextProxy::BSTRING);

  rb_cEnumeratedValueContext = define_class_under<EnumeratedValueContextProxy, ContextProxy>(rb_mASNParser, "EnumeratedValueContext")
    .define_method("IDENTIFIER", &EnumeratedValueContextProxy::IDENTIFIER);

  rb_cIntegerValueContext = define_class_under<IntegerValueContextProxy, ContextProxy>(rb_mASNParser, "IntegerValueContext")
    .define_method("signed_number", &IntegerValueContextProxy::signedNumber)
    .define_method("IDENTIFIER", &IntegerValueContextProxy::IDENTIFIER);

  rb_cChoiceValueContext = define_class_under<ChoiceValueContextProxy, ContextProxy>(rb_mASNParser, "ChoiceValueContext")
    .define_method("value", &ChoiceValueContextProxy::value)
    .define_method("IDENTIFIER", &ChoiceValueContextProxy::IDENTIFIER)
    .define_method("COLON", &ChoiceValueContextProxy::COLON);

  rb_cObjectIdentifierValueContext = define_class_under<ObjectIdentifierValueContextProxy, ContextProxy>(rb_mASNParser, "ObjectIdentifierValueContext")
    .define_method("obj_id_components_list", &ObjectIdentifierValueContextProxy::objIdComponentsList)
    .define_method("L_BRACE", &ObjectIdentifierValueContextProxy::L_BRACE)
    .define_method("R_BRACE", &ObjectIdentifierValueContextProxy::R_BRACE);

  rb_cBooleanValueContext = define_class_under<BooleanValueContextProxy, ContextProxy>(rb_mASNParser, "BooleanValueContext")
    .define_method("TRUE_LITERAL", &BooleanValueContextProxy::TRUE_LITERAL)
    .define_method("FALSE_LITERAL", &BooleanValueContextProxy::FALSE_LITERAL)
    .define_method("TRUE_SMALL_LITERAL", &BooleanValueContextProxy::TRUE_SMALL_LITERAL)
    .define_method("FALSE_SMALL_LITERAL", &BooleanValueContextProxy::FALSE_SMALL_LITERAL);

  rb_cObjIdComponentsListContext = define_class_under<ObjIdComponentsListContextProxy, ContextProxy>(rb_mASNParser, "ObjIdComponentsListContext")
    .define_method("obj_id_components", &ObjIdComponentsListContextProxy::objIdComponents)
    .define_method("obj_id_components_at", &ObjIdComponentsListContextProxy::objIdComponentsAt);

  rb_cObjIdComponentsContext = define_class_under<ObjIdComponentsContextProxy, ContextProxy>(rb_mASNParser, "ObjIdComponentsContext")
    .define_method("defined_value", &ObjIdComponentsContextProxy::definedValue)
    .define_method("NUMBER", &ObjIdComponentsContextProxy::NUMBER)
    .define_method("IDENTIFIER", &ObjIdComponentsContextProxy::IDENTIFIER)
    .define_method("L_PARAN", &ObjIdComponentsContextProxy::L_PARAN)
    .define_method("R_PARAN", &ObjIdComponentsContextProxy::R_PARAN);

  rb_cDefinedValueContext = define_class_under<DefinedValueContextProxy, ContextProxy>(rb_mASNParser, "DefinedValueContext")
    .define_method("parameterized_value", &DefinedValueContextProxy::parameterizedValue);

  rb_cSignedNumberContext = define_class_under<SignedNumberContextProxy, ContextProxy>(rb_mASNParser, "SignedNumberContext")
    .define_method("NUMBER", &SignedNumberContextProxy::NUMBER)
    .define_method("MINUS", &SignedNumberContextProxy::MINUS);

  rb_cAlternativeTypeListsContext = define_class_under<AlternativeTypeListsContextProxy, ContextProxy>(rb_mASNParser, "AlternativeTypeListsContext")
    .define_method("root_alternative_type_list", &AlternativeTypeListsContextProxy::rootAlternativeTypeList)
    .define_method("extension_and_exception", &AlternativeTypeListsContextProxy::extensionAndException)
    .define_method("extension_addition_alternatives", &AlternativeTypeListsContextProxy::extensionAdditionAlternatives)
    .define_method("optional_extension_marker", &AlternativeTypeListsContextProxy::optionalExtensionMarker)
    .define_method("COMMA", &AlternativeTypeListsContextProxy::COMMA);

  rb_cRootAlternativeTypeListContext = define_class_under<RootAlternativeTypeListContextProxy, ContextProxy>(rb_mASNParser, "RootAlternativeTypeListContext")
    .define_method("alternative_type_list", &RootAlternativeTypeListContextProxy::alternativeTypeList);

  rb_cExtensionAdditionAlternativesContext = define_class_under<ExtensionAdditionAlternativesContextProxy, ContextProxy>(rb_mASNParser, "ExtensionAdditionAlternativesContext")
    .define_method("extension_addition_alternatives_list", &ExtensionAdditionAlternativesContextProxy::extensionAdditionAlternativesList)
    .define_method("COMMA", &ExtensionAdditionAlternativesContextProxy::COMMA);

  rb_cExtensionAdditionAlternativesListContext = define_class_under<ExtensionAdditionAlternativesListContextProxy, ContextProxy>(rb_mASNParser, "ExtensionAdditionAlternativesListContext")
    .define_method("extension_addition_alternative", &ExtensionAdditionAlternativesListContextProxy::extensionAdditionAlternative)
    .define_method("extension_addition_alternative_at", &ExtensionAdditionAlternativesListContextProxy::extensionAdditionAlternativeAt)
    .define_method("COMMA", &ExtensionAdditionAlternativesListContextProxy::COMMA)
    .define_method("COMMAAt", &ExtensionAdditionAlternativesListContextProxy::COMMA);

  rb_cExtensionAdditionAlternativeContext = define_class_under<ExtensionAdditionAlternativeContextProxy, ContextProxy>(rb_mASNParser, "ExtensionAdditionAlternativeContext")
    .define_method("extension_addition_alternatives_group", &ExtensionAdditionAlternativeContextProxy::extensionAdditionAlternativesGroup)
    .define_method("named_type", &ExtensionAdditionAlternativeContextProxy::namedType);

  rb_cExtensionAdditionAlternativesGroupContext = define_class_under<ExtensionAdditionAlternativesGroupContextProxy, ContextProxy>(rb_mASNParser, "ExtensionAdditionAlternativesGroupContext")
    .define_method("version_number", &ExtensionAdditionAlternativesGroupContextProxy::versionNumber)
    .define_method("alternative_type_list", &ExtensionAdditionAlternativesGroupContextProxy::alternativeTypeList)
    .define_method("DOUBLE_L_BRACKET", &ExtensionAdditionAlternativesGroupContextProxy::DOUBLE_L_BRACKET)
    .define_method("DOUBLE_R_BRACKET", &ExtensionAdditionAlternativesGroupContextProxy::DOUBLE_R_BRACKET);

  rb_cAlternativeTypeListContext = define_class_under<AlternativeTypeListContextProxy, ContextProxy>(rb_mASNParser, "AlternativeTypeListContext")
    .define_method("named_type", &AlternativeTypeListContextProxy::namedType)
    .define_method("named_type_at", &AlternativeTypeListContextProxy::namedTypeAt)
    .define_method("COMMA", &AlternativeTypeListContextProxy::COMMA)
    .define_method("COMMAAt", &AlternativeTypeListContextProxy::COMMA);

  rb_cEnumerationsContext = define_class_under<EnumerationsContextProxy, ContextProxy>(rb_mASNParser, "EnumerationsContext")
    .define_method("root_enumeration", &EnumerationsContextProxy::rootEnumeration)
    .define_method("exception_spec", &EnumerationsContextProxy::exceptionSpec)
    .define_method("additional_enumeration", &EnumerationsContextProxy::additionalEnumeration)
    .define_method("COMMA", &EnumerationsContextProxy::COMMA)
    .define_method("COMMAAt", &EnumerationsContextProxy::COMMA)
    .define_method("ELLIPSIS", &EnumerationsContextProxy::ELLIPSIS);

  rb_cRootEnumerationContext = define_class_under<RootEnumerationContextProxy, ContextProxy>(rb_mASNParser, "RootEnumerationContext")
    .define_method("enumeration", &RootEnumerationContextProxy::enumeration);

  rb_cAdditionalEnumerationContext = define_class_under<AdditionalEnumerationContextProxy, ContextProxy>(rb_mASNParser, "AdditionalEnumerationContext")
    .define_method("enumeration", &AdditionalEnumerationContextProxy::enumeration);

  rb_cEnumerationContext = define_class_under<EnumerationContextProxy, ContextProxy>(rb_mASNParser, "EnumerationContext")
    .define_method("enumeration_item", &EnumerationContextProxy::enumerationItem)
    .define_method("enumeration_item_at", &EnumerationContextProxy::enumerationItemAt)
    .define_method("COMMA", &EnumerationContextProxy::COMMA)
    .define_method("COMMAAt", &EnumerationContextProxy::COMMA);

  rb_cEnumerationItemContext = define_class_under<EnumerationItemContextProxy, ContextProxy>(rb_mASNParser, "EnumerationItemContext")
    .define_method("named_number", &EnumerationItemContextProxy::namedNumber)
    .define_method("value", &EnumerationItemContextProxy::value)
    .define_method("IDENTIFIER", &EnumerationItemContextProxy::IDENTIFIER);

  rb_cNamedNumberContext = define_class_under<NamedNumberContextProxy, ContextProxy>(rb_mASNParser, "NamedNumberContext")
    .define_method("signed_number", &NamedNumberContextProxy::signedNumber)
    .define_method("defined_value", &NamedNumberContextProxy::definedValue)
    .define_method("IDENTIFIER", &NamedNumberContextProxy::IDENTIFIER)
    .define_method("L_PARAN", &NamedNumberContextProxy::L_PARAN)
    .define_method("R_PARAN", &NamedNumberContextProxy::R_PARAN);

  rb_cParameterizedValueContext = define_class_under<ParameterizedValueContextProxy, ContextProxy>(rb_mASNParser, "ParameterizedValueContext")
    .define_method("simple_defined_value", &ParameterizedValueContextProxy::simpleDefinedValue)
    .define_method("actual_parameter_list", &ParameterizedValueContextProxy::actualParameterList);

  rb_cSimpleDefinedValueContext = define_class_under<SimpleDefinedValueContextProxy, ContextProxy>(rb_mASNParser, "SimpleDefinedValueContext")
    .define_method("IDENTIFIER", &SimpleDefinedValueContextProxy::IDENTIFIER)
    .define_method("IDENTIFIERAt", &SimpleDefinedValueContextProxy::IDENTIFIER)
    .define_method("DOT", &SimpleDefinedValueContextProxy::DOT);

  rb_cActualParameterContext = define_class_under<ActualParameterContextProxy, ContextProxy>(rb_mASNParser, "ActualParameterContext")
    .define_method("asn_type", &ActualParameterContextProxy::asnType)
    .define_method("value", &ActualParameterContextProxy::value);

  rb_cExceptionIdentificationContext = define_class_under<ExceptionIdentificationContextProxy, ContextProxy>(rb_mASNParser, "ExceptionIdentificationContext")
    .define_method("signed_number", &ExceptionIdentificationContextProxy::signedNumber)
    .define_method("defined_value", &ExceptionIdentificationContextProxy::definedValue)
    .define_method("asn_type", &ExceptionIdentificationContextProxy::asnType)
    .define_method("value", &ExceptionIdentificationContextProxy::value)
    .define_method("COLON", &ExceptionIdentificationContextProxy::COLON);

  rb_cNamedNumberListContext = define_class_under<NamedNumberListContextProxy, ContextProxy>(rb_mASNParser, "NamedNumberListContext")
    .define_method("named_number", &NamedNumberListContextProxy::namedNumber)
    .define_method("named_number_at", &NamedNumberListContextProxy::namedNumberAt)
    .define_method("COMMA", &NamedNumberListContextProxy::COMMA)
    .define_method("COMMAAt", &NamedNumberListContextProxy::COMMA);

  rb_cAtNotationContext = define_class_under<AtNotationContextProxy, ContextProxy>(rb_mASNParser, "AtNotationContext")
    .define_method("component_id_list", &AtNotationContextProxy::componentIdList)
    .define_method("level", &AtNotationContextProxy::level)
    .define_method("A_ROND", &AtNotationContextProxy::A_ROND)
    .define_method("A_ROND_DOT", &AtNotationContextProxy::A_ROND_DOT);

  rb_cComponentIdListContext = define_class_under<ComponentIdListContextProxy, ContextProxy>(rb_mASNParser, "ComponentIdListContext")
    .define_method("IDENTIFIER", &ComponentIdListContextProxy::IDENTIFIER)
    .define_method("IDENTIFIERAt", &ComponentIdListContextProxy::IDENTIFIER)
    .define_method("DOT", &ComponentIdListContextProxy::DOT)
    .define_method("DOTAt", &ComponentIdListContextProxy::DOT);

  rb_cLevelContext = define_class_under<LevelContextProxy, ContextProxy>(rb_mASNParser, "LevelContext")
    .define_method("level", &LevelContextProxy::level)
    .define_method("DOT", &LevelContextProxy::DOT);

  rb_cNamedBitListContext = define_class_under<NamedBitListContextProxy, ContextProxy>(rb_mASNParser, "NamedBitListContext")
    .define_method("named_bit", &NamedBitListContextProxy::namedBit)
    .define_method("named_bit_at", &NamedBitListContextProxy::namedBitAt)
    .define_method("COMMA", &NamedBitListContextProxy::COMMA)
    .define_method("COMMAAt", &NamedBitListContextProxy::COMMA);

  rb_cNamedBitContext = define_class_under<NamedBitContextProxy, ContextProxy>(rb_mASNParser, "NamedBitContext")
    .define_method("defined_value", &NamedBitContextProxy::definedValue)
    .define_method("IDENTIFIER", &NamedBitContextProxy::IDENTIFIER)
    .define_method("L_PARAN", &NamedBitContextProxy::L_PARAN)
    .define_method("R_PARAN", &NamedBitContextProxy::R_PARAN)
    .define_method("NUMBER", &NamedBitContextProxy::NUMBER);
}

