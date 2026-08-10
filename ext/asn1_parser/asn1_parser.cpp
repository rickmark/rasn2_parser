#include <iostream>

#include <antlr4-runtime.h>

#include "antlrgen/ASN1Parser.h"
#include "antlrgen/ASN1BaseVisitor.h"
#include "antlrgen/ASN1Lexer.h"

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

Class rb_cModuleDefinitionContext;
Class rb_cModuleIdentifierContext;
Class rb_cTagDefaultContext;
Class rb_cExtensionDefaultContext;
Class rb_cModuleBodyContext;
Class rb_cModulereferenceContext;
Class rb_cDefinitiveIdentifierContext;
Class rb_cDefinitiveObjIdComponentListContext;
Class rb_cDefinitiveObjIdComponentContext;
Class rb_cNameFormContext;
Class rb_cDefinitiveNumberFormContext;
Class rb_cDefinitiveNameAndNumberFormContext;
Class rb_cNumberContext;
Class rb_cIdentifierContext;
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
Class rb_cObjectIdentifierValueContext;
Class rb_cDefinedValueContext;
Class rb_cSymbolContext;
Class rb_cReferenceContext;
Class rb_cParameterizedReferenceContext;
Class rb_cTypereferenceContext;
Class rb_cValuereferenceContext;
Class rb_cObjectclassreferenceContext;
Class rb_cObjectreferenceContext;
Class rb_cObjectsetreferenceContext;
Class rb_cAssignmentContext;
Class rb_cTypeAssignmentContext;
Class rb_cValueAssignmentContext;
Class rb_cValueSetTypeAssignmentContext;
Class rb_cObjectClassAssignmentContext;
Class rb_cObjectAssignmentContext;
Class rb_cObjectSetAssignmentContext;
Class rb_cParameterizedAssignmentContext;
Class rb_cDefinedTypeContext;
Class rb_cExternalTypeReferenceContext;
Class rb_cParameterizedTypeContext;
Class rb_cParameterizedValueSetTypeContext;
Class rb_cExternalValueReferenceContext;
Class rb_cParameterizedValueContext;
Class rb_cTypeContext;
Class rb_cValueContext;
Class rb_cValueSetContext;
Class rb_cElementSetSpecsContext;
Class rb_cBuiltinTypeContext;
Class rb_cReferencedTypeContext;
Class rb_cConstrainedTypeContext;
Class rb_cBitStringTypeContext;
Class rb_cBooleanTypeContext;
Class rb_cCharacterStringTypeContext;
Class rb_cChoiceTypeContext;
Class rb_cEnumeratedTypeContext;
Class rb_cIntegerTypeContext;
Class rb_cNullTypeContext;
Class rb_cObjectClassFieldTypeContext;
Class rb_cObjectIdentifierTypeContext;
Class rb_cOctetStringTypeContext;
Class rb_cSequenceTypeContext;
Class rb_cSequenceOfTypeContext;
Class rb_cSetTypeContext;
Class rb_cSetOfTypeContext;
Class rb_cTaggedTypeContext;
Class rb_cAnyTypeContext;
Class rb_cUsefulTypeContext;
Class rb_cTypeFromObjectContext;
Class rb_cValueSetFromObjectsContext;
Class rb_cNamedTypeContext;
Class rb_cBuiltinValueContext;
Class rb_cReferencedValueContext;
Class rb_cObjectClassFieldValueContext;
Class rb_cBitStringValueContext;
Class rb_cBooleanValueContext;
Class rb_cCharacterStringValueContext;
Class rb_cEnumeratedValueContext;
Class rb_cIntegerValueContext;
Class rb_cNullValueContext;
Class rb_cOctetStringValueContext;
Class rb_cSequenceValueContext;
Class rb_cSequenceOfValueContext;
Class rb_cSetValueContext;
Class rb_cSetOfValueContext;
Class rb_cValueFromObjectContext;
Class rb_cNamedValueContext;
Class rb_cNamedNumberListContext;
Class rb_cNamedNumberContext;
Class rb_cSignedNumberContext;
Class rb_cEnumerationsContext;
Class rb_cRootEnumerationContext;
Class rb_cExceptionSpecContext;
Class rb_cAdditionalEnumerationContext;
Class rb_cEnumerationContext;
Class rb_cEnumerationItemContext;
Class rb_cNamedBitListContext;
Class rb_cNamedBitContext;
Class rb_cBstringContext;
Class rb_cHstringContext;
Class rb_cIdentifierListContext;
Class rb_cExtensionAndExceptionContext;
Class rb_cComponentTypeListsContext;
Class rb_cRootComponentTypeListContext;
Class rb_cExtensionAdditionsContext;
Class rb_cOptionalExtensionMarkerContext;
Class rb_cExtensionEndMarkerContext;
Class rb_cComponentTypeListContext;
Class rb_cExtensionAdditionListContext;
Class rb_cExtensionAdditionContext;
Class rb_cComponentTypeContext;
Class rb_cExtensionAdditionGroupContext;
Class rb_cVersionNumberContext;
Class rb_cComponentValueListContext;
Class rb_cValueListContext;
Class rb_cNamedValueListContext;
Class rb_cAlternativeTypeListsContext;
Class rb_cRootAlternativeTypeListContext;
Class rb_cExtensionAdditionAlternativesContext;
Class rb_cAlternativeTypeListContext;
Class rb_cExtensionAdditionAlternativesListContext;
Class rb_cExtensionAdditionAlternativeContext;
Class rb_cExtensionAdditionAlternativesGroupContext;
Class rb_cTagContext;
Class rb_cClassPContext;
Class rb_cClassNumberContext;
Class rb_cObjIdComponentsListContext;
Class rb_cObjIdComponentsContext;
Class rb_cNumberFormContext;
Class rb_cNameAndNumberFormContext;
Class rb_cExceptionIdentificationContext;
Class rb_cRestrictedCharacterStringTypeContext;
Class rb_cUnrestrictedCharacterStringTypeContext;
Class rb_cRestrictedCharacterStringValueContext;
Class rb_cCstringContext;
Class rb_cCharacterStringListContext;
Class rb_cQuadrupleContext;
Class rb_cTupleContext;
Class rb_cCharSymsContext;
Class rb_cCharsDefnContext;
Class rb_cGroupContext;
Class rb_cPlaneContext;
Class rb_cRowContext;
Class rb_cCellContext;
Class rb_cTableColumnContext;
Class rb_cTableRowContext;
Class rb_cUTCTimeTypeContext;
Class rb_cGeneralizedTimeTypeContext;
Class rb_cConstraintContext;
Class rb_cTypeWithConstraintContext;
Class rb_cSizeConstraintContext;
Class rb_cConstraintSpecContext;
Class rb_cSubtypeConstraintContext;
Class rb_cGeneralConstraintContext;
Class rb_cUserDefinedConstraintContext;
Class rb_cTableConstraintContext;
Class rb_cContentsConstraintContext;
Class rb_cRootElementSetSpecContext;
Class rb_cAdditionalElementSetSpecContext;
Class rb_cElementSetSpecContext;
Class rb_cUnionsContext;
Class rb_cExclusionsContext;
Class rb_cIntersectionsContext;
Class rb_cUnionMarkContext;
Class rb_cUElemsContext;
Class rb_cIntersectionElementsContext;
Class rb_cIntersectionMarkContext;
Class rb_cIElemsContext;
Class rb_cElementsContext;
Class rb_cElemsContext;
Class rb_cSubtypeElementsContext;
Class rb_cObjectSetElementsContext;
Class rb_cSingleValueContext;
Class rb_cContainedSubtypeContext;
Class rb_cValueRangeContext;
Class rb_cPermittedAlphabetContext;
Class rb_cIncludesContext;
Class rb_cLowerEndpointContext;
Class rb_cUpperEndpointContext;
Class rb_cLowerEndValueContext;
Class rb_cUpperEndValueContext;
Class rb_cUserDefinedConstraintParameterContext;
Class rb_cGovernorContext;
Class rb_cObjectContext;
Class rb_cObjectSetContext;
Class rb_cDefinedObjectClassContext;
Class rb_cSimpleTableConstraintContext;
Class rb_cComponentRelationConstraintContext;
Class rb_cDefinedObjectSetContext;
Class rb_cAtNotationContext;
Class rb_cComponentIdListContext;
Class rb_cLevelContext;
Class rb_cExternalObjectClassReferenceContext;
Class rb_cUsefulObjectClassReferenceContext;
Class rb_cDefinedObjectContext;
Class rb_cExternalObjectReferenceContext;
Class rb_cExternalObjectSetReferenceContext;
Class rb_cObjectClassContext;
Class rb_cObjectClassDefnContext;
Class rb_cParameterizedObjectClassContext;
Class rb_cFieldSpecContext;
Class rb_cWithSyntaxSpecContext;
Class rb_cSyntaxListContext;
Class rb_cTypeFieldSpecContext;
Class rb_cFixedTypeValueFieldSpecContext;
Class rb_cVariableTypeValueFieldSpecContext;
Class rb_cFixedTypeValueSetFieldSpecContext;
Class rb_cVariableTypeValueSetFieldSpecContext;
Class rb_cObjectFieldSpecContext;
Class rb_cObjectSetFieldSpecContext;
Class rb_cTypefieldreferenceContext;
Class rb_cTypeOptionalitySpecContext;
Class rb_cValuefieldreferenceContext;
Class rb_cValueOptionalitySpecContext;
Class rb_cFieldNameContext;
Class rb_cValuesetfieldreferenceContext;
Class rb_cValueSetOptionalitySpecContext;
Class rb_cObjectfieldreferenceContext;
Class rb_cObjectOptionalitySpecContext;
Class rb_cObjectsetfieldreferenceContext;
Class rb_cObjectSetOptionalitySpecContext;
Class rb_cPrimitiveFieldNameContext;
Class rb_cTokenOrGroupSpecContext;
Class rb_cRequiredTokenContext;
Class rb_cOptionalGroupContext;
Class rb_cLiteralContext;
Class rb_cWordContext;
Class rb_cObjectDefnContext;
Class rb_cObjectFromObjectContext;
Class rb_cParameterizedObjectContext;
Class rb_cDefaultSyntaxContext;
Class rb_cDefinedSyntaxContext;
Class rb_cFieldSettingContext;
Class rb_cSettingContext;
Class rb_cDefinedSyntaxTokenContext;
Class rb_cObjectSetSpecContext;
Class rb_cObjectSetFromObjectsContext;
Class rb_cParameterizedObjectSetContext;
Class rb_cOpenTypeFieldValContext;
Class rb_cFixedTypeFieldValContext;
Class rb_cReferencedObjectsContext;
Class rb_cParameterizedTypeAssignmentContext;
Class rb_cParameterizedValueAssignmentContext;
Class rb_cParameterizedValueSetTypeAssignmentContext;
Class rb_cParameterizedObjectClassAssignmentContext;
Class rb_cParameterizedObjectAssignmentContext;
Class rb_cParameterizedObjectSetAssignmentContext;
Class rb_cParameterListContext;
Class rb_cParameterContext;
Class rb_cParamGovernorContext;
Class rb_cDummyReferenceContext;
Class rb_cDummyGovernorContext;
Class rb_cSimpleDefinedTypeContext;
Class rb_cActualParameterListContext;
Class rb_cSimpleDefinedValueContext;
Class rb_cActualParameterContext;
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


class ModuleDefinitionContextProxy : public ContextProxy {
public:
  ModuleDefinitionContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object moduleIdentifier();
  Object moduleIdentifierAt(size_t i);
  Object tagDefault();
  Object tagDefaultAt(size_t i);
  Object extensionDefault();
  Object extensionDefaultAt(size_t i);
  Object moduleBody();
  Object moduleBodyAt(size_t i);
  Object EOF();
  Object DEFINITIONS_WORD();
  Object DEFINITIONS_WORDAt(size_t i);
  Object ASSIGN();
  Object ASSIGNAt(size_t i);
  Object BEGIN_WORD();
  Object BEGIN_WORDAt(size_t i);
  Object END_WORD();
  Object END_WORDAt(size_t i);
};

class ModuleIdentifierContextProxy : public ContextProxy {
public:
  ModuleIdentifierContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object modulereference();
  Object definitiveIdentifier();

};

class TagDefaultContextProxy : public ContextProxy {
public:
  TagDefaultContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object TAGS_WORD();
  Object EXPLICIT_WORD();
  Object IMPLICIT_WORD();
  Object AUTOMATIC_WORD();
};

class ExtensionDefaultContextProxy : public ContextProxy {
public:
  ExtensionDefaultContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object EXTENSIBILITY_WORD();
  Object IMPLIED_WORD();
};

class ModuleBodyContextProxy : public ContextProxy {
public:
  ModuleBodyContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object exports();
  Object imports();
  Object assignmentList();

};

class ModulereferenceContextProxy : public ContextProxy {
public:
  ModulereferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object ReferenceItem();
};

class DefinitiveIdentifierContextProxy : public ContextProxy {
public:
  DefinitiveIdentifierContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definitiveObjIdComponentList();
  Object L_BRACE();
  Object R_BRACE();
};

class DefinitiveObjIdComponentListContextProxy : public ContextProxy {
public:
  DefinitiveObjIdComponentListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definitiveObjIdComponent();
  Object definitiveObjIdComponentAt(size_t i);

};

class DefinitiveObjIdComponentContextProxy : public ContextProxy {
public:
  DefinitiveObjIdComponentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object nameForm();
  Object definitiveNumberForm();
  Object definitiveNameAndNumberForm();

};

class NameFormContextProxy : public ContextProxy {
public:
  NameFormContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();

};

class DefinitiveNumberFormContextProxy : public ContextProxy {
public:
  DefinitiveNumberFormContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object number();

};

class DefinitiveNameAndNumberFormContextProxy : public ContextProxy {
public:
  DefinitiveNameAndNumberFormContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();
  Object definitiveNumberForm();
  Object L_PAREN();
  Object R_PAREN();
};

class NumberContextProxy : public ContextProxy {
public:
  NumberContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object NumberItem();
};

class IdentifierContextProxy : public ContextProxy {
public:
  IdentifierContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object IdentifierOrValueItem();
};

class ExportsContextProxy : public ContextProxy {
public:
  ExportsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object symbolsExported();
  Object EXPORTS_WORD();
  Object ALL_WORD();
};

class ImportsContextProxy : public ContextProxy {
public:
  ImportsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object symbolsImported();
  Object IMPORTS_WORD();
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
  Object FROM_WORD();
};

class GlobalModuleReferenceContextProxy : public ContextProxy {
public:
  GlobalModuleReferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object modulereference();
  Object assignedIdentifier();

};

class AssignedIdentifierContextProxy : public ContextProxy {
public:
  AssignedIdentifierContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objectIdentifierValue();
  Object definedValue();

};

class ObjectIdentifierValueContextProxy : public ContextProxy {
public:
  ObjectIdentifierValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objIdComponentsList();
  Object definedValue();
  Object L_BRACE();
  Object R_BRACE();
};

class DefinedValueContextProxy : public ContextProxy {
public:
  DefinedValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object externalValueReference();
  Object valuereference();
  Object parameterizedValue();

};

class SymbolContextProxy : public ContextProxy {
public:
  SymbolContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object reference();
  Object parameterizedReference();

};

class ReferenceContextProxy : public ContextProxy {
public:
  ReferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object typereference();
  Object valuereference();
  Object objectclassreference();
  Object objectreference();
  Object objectsetreference();

};

class ParameterizedReferenceContextProxy : public ContextProxy {
public:
  ParameterizedReferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object reference();
  Object L_BRACE();
  Object R_BRACE();
};

class TypereferenceContextProxy : public ContextProxy {
public:
  TypereferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object ReferenceItem();
};

class ValuereferenceContextProxy : public ContextProxy {
public:
  ValuereferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object IdentifierOrValueItem();
};

class ObjectclassreferenceContextProxy : public ContextProxy {
public:
  ObjectclassreferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object ReferenceItem();
};

class ObjectreferenceContextProxy : public ContextProxy {
public:
  ObjectreferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object IdentifierOrValueItem();
};

class ObjectsetreferenceContextProxy : public ContextProxy {
public:
  ObjectsetreferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object ReferenceItem();
};

class AssignmentContextProxy : public ContextProxy {
public:
  AssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object typeAssignment();
  Object valueAssignment();
  Object valueSetTypeAssignment();
  Object objectClassAssignment();
  Object objectAssignment();
  Object objectSetAssignment();
  Object parameterizedAssignment();

};

class TypeAssignmentContextProxy : public ContextProxy {
public:
  TypeAssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object typereference();
  Object type();
  Object ASSIGN();
};

class ValueAssignmentContextProxy : public ContextProxy {
public:
  ValueAssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valuereference();
  Object type();
  Object value();
  Object ASSIGN();
};

class ValueSetTypeAssignmentContextProxy : public ContextProxy {
public:
  ValueSetTypeAssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object typereference();
  Object type();
  Object valueSet();
  Object ASSIGN();
};

class ObjectClassAssignmentContextProxy : public ContextProxy {
public:
  ObjectClassAssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objectclassreference();
  Object objectClass();
  Object ASSIGN();
};

class ObjectAssignmentContextProxy : public ContextProxy {
public:
  ObjectAssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objectreference();
  Object definedObjectClass();
  Object object();
  Object ASSIGN();
};

class ObjectSetAssignmentContextProxy : public ContextProxy {
public:
  ObjectSetAssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objectsetreference();
  Object definedObjectClass();
  Object objectSet();
  Object ASSIGN();
};

class ParameterizedAssignmentContextProxy : public ContextProxy {
public:
  ParameterizedAssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object parameterizedTypeAssignment();
  Object parameterizedValueAssignment();
  Object parameterizedValueSetTypeAssignment();
  Object parameterizedObjectClassAssignment();
  Object parameterizedObjectAssignment();
  Object parameterizedObjectSetAssignment();

};

class DefinedTypeContextProxy : public ContextProxy {
public:
  DefinedTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object externalTypeReference();
  Object typereference();
  Object parameterizedType();
  Object parameterizedValueSetType();

};

class ExternalTypeReferenceContextProxy : public ContextProxy {
public:
  ExternalTypeReferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object modulereference();
  Object typereference();
  Object DOT();
};

class ParameterizedTypeContextProxy : public ContextProxy {
public:
  ParameterizedTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object simpleDefinedType();
  Object actualParameterList();

};

class ParameterizedValueSetTypeContextProxy : public ContextProxy {
public:
  ParameterizedValueSetTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object simpleDefinedType();
  Object actualParameterList();

};

class ExternalValueReferenceContextProxy : public ContextProxy {
public:
  ExternalValueReferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object modulereference();
  Object valuereference();
  Object DOT();
};

class ParameterizedValueContextProxy : public ContextProxy {
public:
  ParameterizedValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object simpleDefinedValue();
  Object actualParameterList();

};

class TypeContextProxy : public ContextProxy {
public:
  TypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object builtinType();
  Object referencedType();
  Object constrainedType();

};

class ValueContextProxy : public ContextProxy {
public:
  ValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object builtinValue();
  Object referencedValue();
  Object objectClassFieldValue();

};

class ValueSetContextProxy : public ContextProxy {
public:
  ValueSetContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object elementSetSpecs();
  Object L_BRACE();
  Object R_BRACE();
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

class BuiltinTypeContextProxy : public ContextProxy {
public:
  BuiltinTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object bitStringType();
  Object booleanType();
  Object characterStringType();
  Object choiceType();
  Object enumeratedType();
  Object integerType();
  Object nullType();
  Object objectClassFieldType();
  Object objectIdentifierType();
  Object octetStringType();
  Object sequenceType();
  Object sequenceOfType();
  Object setType();
  Object setOfType();
  Object taggedType();
  Object anyType();

};

class ReferencedTypeContextProxy : public ContextProxy {
public:
  ReferencedTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedType();
  Object usefulType();
  Object typeFromObject();
  Object valueSetFromObjects();

};

class ConstrainedTypeContextProxy : public ContextProxy {
public:
  ConstrainedTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object constraint();
  Object builtinType();
  Object referencedType();
  Object typeWithConstraint();

};

class BitStringTypeContextProxy : public ContextProxy {
public:
  BitStringTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object namedBitList();
  Object BIT_WORD();
  Object STRING_WORD();
  Object L_BRACE();
  Object R_BRACE();
};

class BooleanTypeContextProxy : public ContextProxy {
public:
  BooleanTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object BOOLEAN_WORD();
};

class CharacterStringTypeContextProxy : public ContextProxy {
public:
  CharacterStringTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object restrictedCharacterStringType();
  Object unrestrictedCharacterStringType();

};

class ChoiceTypeContextProxy : public ContextProxy {
public:
  ChoiceTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object alternativeTypeLists();
  Object CHOICE_WORD();
  Object L_BRACE();
  Object R_BRACE();
};

class EnumeratedTypeContextProxy : public ContextProxy {
public:
  EnumeratedTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object enumerations();
  Object ENUMERATED_WORD();
  Object L_BRACE();
  Object R_BRACE();
};

class IntegerTypeContextProxy : public ContextProxy {
public:
  IntegerTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object namedNumberList();
  Object INTEGER_WORD();
  Object L_BRACE();
  Object R_BRACE();
};

class NullTypeContextProxy : public ContextProxy {
public:
  NullTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object NULL_WORD();
};

class ObjectClassFieldTypeContextProxy : public ContextProxy {
public:
  ObjectClassFieldTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedObjectClass();
  Object fieldName();
  Object DOT();
};

class ObjectIdentifierTypeContextProxy : public ContextProxy {
public:
  ObjectIdentifierTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object OBJECT_WORD();
  Object IDENTIFIER_WORD();
};

class OctetStringTypeContextProxy : public ContextProxy {
public:
  OctetStringTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object OCTET_WORD();
  Object STRING_WORD();
};

class SequenceTypeContextProxy : public ContextProxy {
public:
  SequenceTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object extensionAndException();
  Object componentTypeLists();
  Object SEQUENCE_WORD();
  Object L_BRACE();
  Object R_BRACE();
};

class SequenceOfTypeContextProxy : public ContextProxy {
public:
  SequenceOfTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object type();
  Object namedType();
  Object SEQUENCE_WORD();
  Object OF_WORD();
};

class SetTypeContextProxy : public ContextProxy {
public:
  SetTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object extensionAndException();
  Object optionalExtensionMarker();
  Object componentTypeLists();
  Object SET_WORD();
  Object L_BRACE();
  Object R_BRACE();
};

class SetOfTypeContextProxy : public ContextProxy {
public:
  SetOfTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object type();
  Object namedType();
  Object SET_WORD();
  Object OF_WORD();
};

class TaggedTypeContextProxy : public ContextProxy {
public:
  TaggedTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object tag();
  Object type();
  Object IMPLICIT_WORD();
  Object EXPLICIT_WORD();
};

class AnyTypeContextProxy : public ContextProxy {
public:
  AnyTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();
  Object ANY_WORD();
  Object DEFINED_WORD();
  Object BY_WORD();
};

class UsefulTypeContextProxy : public ContextProxy {
public:
  UsefulTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class TypeFromObjectContextProxy : public ContextProxy {
public:
  TypeFromObjectContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object referencedObjects();
  Object fieldName();
  Object DOT();
};

class ValueSetFromObjectsContextProxy : public ContextProxy {
public:
  ValueSetFromObjectsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object referencedObjects();
  Object fieldName();
  Object DOT();
};

class NamedTypeContextProxy : public ContextProxy {
public:
  NamedTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();
  Object type();

};

class BuiltinValueContextProxy : public ContextProxy {
public:
  BuiltinValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object bitStringValue();
  Object booleanValue();
  Object characterStringValue();
  Object enumeratedValue();
  Object integerValue();
  Object nullValue();
  Object objectIdentifierValue();
  Object octetStringValue();
  Object sequenceValue();
  Object sequenceOfValue();
  Object setValue();
  Object setOfValue();

};

class ReferencedValueContextProxy : public ContextProxy {
public:
  ReferencedValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedValue();
  Object valueFromObject();

};

class ObjectClassFieldValueContextProxy : public ContextProxy {
public:
  ObjectClassFieldValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object openTypeFieldVal();
  Object fixedTypeFieldVal();

};

class BitStringValueContextProxy : public ContextProxy {
public:
  BitStringValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object bstring();
  Object hstring();
  Object identifierList();
  Object value();
  Object L_BRACE();
  Object R_BRACE();
  Object CONTAINING_WORD();
};

class BooleanValueContextProxy : public ContextProxy {
public:
  BooleanValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object TRUE_WORD();
  Object FALSE_WORD();
};

class CharacterStringValueContextProxy : public ContextProxy {
public:
  CharacterStringValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object restrictedCharacterStringValue();

};

class EnumeratedValueContextProxy : public ContextProxy {
public:
  EnumeratedValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();

};

class IntegerValueContextProxy : public ContextProxy {
public:
  IntegerValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object signedNumber();
  Object identifier();

};

class NullValueContextProxy : public ContextProxy {
public:
  NullValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object NULL_WORD();
};

class OctetStringValueContextProxy : public ContextProxy {
public:
  OctetStringValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object bstring();
  Object hstring();
  Object value();
  Object CONTAINING_WORD();
};

class SequenceValueContextProxy : public ContextProxy {
public:
  SequenceValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object componentValueList();
  Object L_BRACE();
  Object R_BRACE();
};

class SequenceOfValueContextProxy : public ContextProxy {
public:
  SequenceOfValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valueList();
  Object namedValueList();
  Object L_BRACE();
  Object R_BRACE();
};

class SetValueContextProxy : public ContextProxy {
public:
  SetValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object componentValueList();
  Object L_BRACE();
  Object R_BRACE();
};

class SetOfValueContextProxy : public ContextProxy {
public:
  SetOfValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valueList();
  Object namedValueList();
  Object L_BRACE();
  Object R_BRACE();
};

class ValueFromObjectContextProxy : public ContextProxy {
public:
  ValueFromObjectContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object referencedObjects();
  Object fieldName();
  Object DOT();
};

class NamedValueContextProxy : public ContextProxy {
public:
  NamedValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();
  Object value();

};

class NamedNumberListContextProxy : public ContextProxy {
public:
  NamedNumberListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object namedNumber();
  Object namedNumberAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
};

class NamedNumberContextProxy : public ContextProxy {
public:
  NamedNumberContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();
  Object signedNumber();
  Object definedValue();
  Object L_PAREN();
  Object R_PAREN();
};

class SignedNumberContextProxy : public ContextProxy {
public:
  SignedNumberContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object number();
  Object MINUS();
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

class ExceptionSpecContextProxy : public ContextProxy {
public:
  ExceptionSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object exceptionIdentification();

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
  Object identifier();
  Object namedNumber();

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
  Object identifier();
  Object number();
  Object definedValue();
  Object L_PAREN();
  Object R_PAREN();
};

class BstringContextProxy : public ContextProxy {
public:
  BstringContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object BStringItem();
};

class HstringContextProxy : public ContextProxy {
public:
  HstringContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object HStringItem();
};

class IdentifierListContextProxy : public ContextProxy {
public:
  IdentifierListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();
  Object identifierAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
};

class ExtensionAndExceptionContextProxy : public ContextProxy {
public:
  ExtensionAndExceptionContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object exceptionSpec();
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
  Object extensionEndMarker();
  Object COMMA();
  Object COMMAAt(size_t i);
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

class OptionalExtensionMarkerContextProxy : public ContextProxy {
public:
  OptionalExtensionMarkerContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object COMMA();
  Object ELLIPSIS();
};

class ExtensionEndMarkerContextProxy : public ContextProxy {
public:
  ExtensionEndMarkerContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object COMMA();
  Object ELLIPSIS();
};

class ComponentTypeListContextProxy : public ContextProxy {
public:
  ComponentTypeListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object componentType();
  Object componentTypeAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
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

class ComponentTypeContextProxy : public ContextProxy {
public:
  ComponentTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object namedType();
  Object value();
  Object type();
  Object OPTIONAL_WORD();
  Object DEFAULT_WORD();
  Object COMPONENTS_WORD();
  Object OF_WORD();
};

class ExtensionAdditionGroupContextProxy : public ContextProxy {
public:
  ExtensionAdditionGroupContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object versionNumber();
  Object componentTypeList();
  Object LV_BRACKET();
  Object RV_BRACKET();
};

class VersionNumberContextProxy : public ContextProxy {
public:
  VersionNumberContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object number();
  Object COLON();
};

class ComponentValueListContextProxy : public ContextProxy {
public:
  ComponentValueListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object namedValue();
  Object namedValueAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
};

class ValueListContextProxy : public ContextProxy {
public:
  ValueListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object value();
  Object valueAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
};

class NamedValueListContextProxy : public ContextProxy {
public:
  NamedValueListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object namedValue();
  Object namedValueAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
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
  Object extensionAdditionAlternativesListAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
};

class AlternativeTypeListContextProxy : public ContextProxy {
public:
  AlternativeTypeListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object namedType();
  Object namedTypeAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
};

class ExtensionAdditionAlternativesListContextProxy : public ContextProxy {
public:
  ExtensionAdditionAlternativesListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object extensionAdditionAlternative();
  Object extensionAdditionAlternativesList();
  Object COMMA();
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
  Object LV_BRACKET();
  Object RV_BRACKET();
};

class TagContextProxy : public ContextProxy {
public:
  TagContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object classP();
  Object classNumber();

};

class ClassPContextProxy : public ContextProxy {
public:
  ClassPContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object UNIVERSAL_WORD();
  Object APPLICATION_WORD();
  Object PRIVATE_WORD();
};

class ClassNumberContextProxy : public ContextProxy {
public:
  ClassNumberContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object number();
  Object definedValue();

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
  Object nameForm();
  Object numberForm();
  Object nameAndNumberForm();
  Object definedValue();

};

class NumberFormContextProxy : public ContextProxy {
public:
  NumberFormContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object number();
  Object definedValue();

};

class NameAndNumberFormContextProxy : public ContextProxy {
public:
  NameAndNumberFormContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();
  Object numberForm();
  Object L_PAREN();
  Object R_PAREN();
};

class ExceptionIdentificationContextProxy : public ContextProxy {
public:
  ExceptionIdentificationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object signedNumber();
  Object definedValue();
  Object type();
  Object value();
  Object COLON();
};

class RestrictedCharacterStringTypeContextProxy : public ContextProxy {
public:
  RestrictedCharacterStringTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object BMPString_WORD();
  Object GeneralString_WORD();
  Object GraphicString_WORD();
  Object IA5String_WORD();
  Object ISO646String_WORD();
  Object NumericString_WORD();
  Object PrintableString_WORD();
  Object TeletexString_WORD();
  Object T61String_WORD();
  Object UniversalString_WORD();
  Object UTF8String_WORD();
  Object VideotexString_WORD();
  Object VisibleString_WORD();
};

class UnrestrictedCharacterStringTypeContextProxy : public ContextProxy {
public:
  UnrestrictedCharacterStringTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object CHARACTER_WORD();
  Object STRING_WORD();
};

class RestrictedCharacterStringValueContextProxy : public ContextProxy {
public:
  RestrictedCharacterStringValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object cstring();
  Object characterStringList();
  Object quadruple();
  Object tuple();

};

class CstringContextProxy : public ContextProxy {
public:
  CstringContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object CStringItem();
};

class CharacterStringListContextProxy : public ContextProxy {
public:
  CharacterStringListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object charSyms();
  Object L_BRACE();
  Object R_BRACE();
};

class QuadrupleContextProxy : public ContextProxy {
public:
  QuadrupleContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object group();
  Object plane();
  Object row();
  Object cell();
  Object L_BRACE();
  Object COMMA();
  Object COMMAAt(size_t i);
  Object R_BRACE();
};

class TupleContextProxy : public ContextProxy {
public:
  TupleContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object tableColumn();
  Object tableRow();
  Object L_BRACE();
  Object COMMA();
  Object R_BRACE();
};

class CharSymsContextProxy : public ContextProxy {
public:
  CharSymsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object charsDefn();
  Object charsDefnAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
};

class CharsDefnContextProxy : public ContextProxy {
public:
  CharsDefnContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object cstring();
  Object quadruple();
  Object tuple();
  Object definedValue();

};

class GroupContextProxy : public ContextProxy {
public:
  GroupContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object number();

};

class PlaneContextProxy : public ContextProxy {
public:
  PlaneContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object number();

};

class RowContextProxy : public ContextProxy {
public:
  RowContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object number();

};

class CellContextProxy : public ContextProxy {
public:
  CellContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object number();

};

class TableColumnContextProxy : public ContextProxy {
public:
  TableColumnContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object number();

};

class TableRowContextProxy : public ContextProxy {
public:
  TableRowContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object number();

};

class UTCTimeTypeContextProxy : public ContextProxy {
public:
  UTCTimeTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object UTCTime_WORD();
};

class GeneralizedTimeTypeContextProxy : public ContextProxy {
public:
  GeneralizedTimeTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object GeneralizedTime_WORD();
};

class ConstraintContextProxy : public ContextProxy {
public:
  ConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object constraintSpec();
  Object exceptionSpec();
  Object L_PAREN();
  Object R_PAREN();
};

class TypeWithConstraintContextProxy : public ContextProxy {
public:
  TypeWithConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object constraint();
  Object type();
  Object sizeConstraint();
  Object namedType();
  Object SET_WORD();
  Object OF_WORD();
  Object SEQUENCE_WORD();
};

class SizeConstraintContextProxy : public ContextProxy {
public:
  SizeConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object constraint();
  Object SIZE_WORD();
};

class ConstraintSpecContextProxy : public ContextProxy {
public:
  ConstraintSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object subtypeConstraint();
  Object generalConstraint();

};

class SubtypeConstraintContextProxy : public ContextProxy {
public:
  SubtypeConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object elementSetSpecs();

};

class GeneralConstraintContextProxy : public ContextProxy {
public:
  GeneralConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object userDefinedConstraint();
  Object tableConstraint();
  Object contentsConstraint();

};

class UserDefinedConstraintContextProxy : public ContextProxy {
public:
  UserDefinedConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object userDefinedConstraintParameter();
  Object userDefinedConstraintParameterAt(size_t i);
  Object CONSTRAINED_WORD();
  Object BY_WORD();
  Object L_BRACE();
  Object R_BRACE();
  Object COMMA();
  Object COMMAAt(size_t i);
};

class TableConstraintContextProxy : public ContextProxy {
public:
  TableConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object simpleTableConstraint();
  Object componentRelationConstraint();

};

class ContentsConstraintContextProxy : public ContextProxy {
public:
  ContentsConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object type();
  Object value();
  Object CONTAINING_WORD();
  Object ENCODED_WORD();
  Object BY_WORD();
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

class ElementSetSpecContextProxy : public ContextProxy {
public:
  ElementSetSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object unions();
  Object exclusions();
  Object ALL_WORD();
};

class UnionsContextProxy : public ContextProxy {
public:
  UnionsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object intersections();
  Object unions();
  Object unionMark();

};

class ExclusionsContextProxy : public ContextProxy {
public:
  ExclusionsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object elements();
  Object EXCEPT_WORD();
};

class IntersectionsContextProxy : public ContextProxy {
public:
  IntersectionsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object intersectionElements();
  Object intersections();
  Object intersectionMark();

};

class UnionMarkContextProxy : public ContextProxy {
public:
  UnionMarkContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object UNION_WORD();
};

class UElemsContextProxy : public ContextProxy {
public:
  UElemsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object unions();

};

class IntersectionElementsContextProxy : public ContextProxy {
public:
  IntersectionElementsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object elements();
  Object elems();
  Object exclusions();

};

class IntersectionMarkContextProxy : public ContextProxy {
public:
  IntersectionMarkContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object INTERSECTION_WORD();
};

class IElemsContextProxy : public ContextProxy {
public:
  IElemsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object intersections();

};

class ElementsContextProxy : public ContextProxy {
public:
  ElementsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object subtypeElements();
  Object objectSetElements();
  Object elementSetSpec();
  Object L_PAREN();
  Object R_PAREN();
};

class ElemsContextProxy : public ContextProxy {
public:
  ElemsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object elements();

};

class SubtypeElementsContextProxy : public ContextProxy {
public:
  SubtypeElementsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object singleValue();
  Object containedSubtype();
  Object valueRange();
  Object permittedAlphabet();
  Object sizeConstraint();

};

class ObjectSetElementsContextProxy : public ContextProxy {
public:
  ObjectSetElementsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object object();
  Object definedObjectSet();
  Object objectSetFromObjects();
  Object parameterizedObjectSet();

};

class SingleValueContextProxy : public ContextProxy {
public:
  SingleValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object value();

};

class ContainedSubtypeContextProxy : public ContextProxy {
public:
  ContainedSubtypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object includes();
  Object type();

};

class ValueRangeContextProxy : public ContextProxy {
public:
  ValueRangeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object lowerEndpoint();
  Object upperEndpoint();
  Object RANGE();
};

class PermittedAlphabetContextProxy : public ContextProxy {
public:
  PermittedAlphabetContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object constraint();
  Object FROM_WORD();
};

class IncludesContextProxy : public ContextProxy {
public:
  IncludesContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object INCLUDES_WORD();
};

class LowerEndpointContextProxy : public ContextProxy {
public:
  LowerEndpointContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object lowerEndValue();

};

class UpperEndpointContextProxy : public ContextProxy {
public:
  UpperEndpointContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object upperEndValue();

};

class LowerEndValueContextProxy : public ContextProxy {
public:
  LowerEndValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object value();
  Object MIN_WORD();
};

class UpperEndValueContextProxy : public ContextProxy {
public:
  UpperEndValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object value();
  Object MAX_WORD();
};

class UserDefinedConstraintParameterContextProxy : public ContextProxy {
public:
  UserDefinedConstraintParameterContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object governor();
  Object value();
  Object valueSet();
  Object object();
  Object objectSet();
  Object type();
  Object definedObjectClass();
  Object COLON();
};

class GovernorContextProxy : public ContextProxy {
public:
  GovernorContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object type();
  Object definedObjectClass();

};

class ObjectContextProxy : public ContextProxy {
public:
  ObjectContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedObject();
  Object objectDefn();
  Object objectFromObject();
  Object parameterizedObject();

};

class ObjectSetContextProxy : public ContextProxy {
public:
  ObjectSetContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objectSetSpec();
  Object L_BRACE();
  Object R_BRACE();
};

class DefinedObjectClassContextProxy : public ContextProxy {
public:
  DefinedObjectClassContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object externalObjectClassReference();
  Object objectclassreference();
  Object usefulObjectClassReference();

};

class SimpleTableConstraintContextProxy : public ContextProxy {
public:
  SimpleTableConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objectSet();

};

class ComponentRelationConstraintContextProxy : public ContextProxy {
public:
  ComponentRelationConstraintContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedObjectSet();
  Object atNotation();
  Object atNotationAt(size_t i);
  Object L_BRACE();
  Object L_BRACEAt(size_t i);
  Object R_BRACE();
  Object R_BRACEAt(size_t i);
  Object COMMA();
  Object COMMAAt(size_t i);
};

class DefinedObjectSetContextProxy : public ContextProxy {
public:
  DefinedObjectSetContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object externalObjectSetReference();
  Object objectsetreference();

};

class AtNotationContextProxy : public ContextProxy {
public:
  AtNotationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object componentIdList();
  Object level();

};

class ComponentIdListContextProxy : public ContextProxy {
public:
  ComponentIdListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();
  Object identifierAt(size_t i);
  Object DOT();
  Object DOTAt(size_t i);
};

class LevelContextProxy : public ContextProxy {
public:
  LevelContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object level();
  Object DOT();
};

class ExternalObjectClassReferenceContextProxy : public ContextProxy {
public:
  ExternalObjectClassReferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object modulereference();
  Object objectclassreference();
  Object DOT();
};

class UsefulObjectClassReferenceContextProxy : public ContextProxy {
public:
  UsefulObjectClassReferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object TYPE_IDENTIFIER_WORD();
  Object ABSTRACT_SYNTAX_WORD();
};

class DefinedObjectContextProxy : public ContextProxy {
public:
  DefinedObjectContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object externalObjectReference();
  Object objectreference();

};

class ExternalObjectReferenceContextProxy : public ContextProxy {
public:
  ExternalObjectReferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object modulereference();
  Object objectreference();
  Object DOT();
};

class ExternalObjectSetReferenceContextProxy : public ContextProxy {
public:
  ExternalObjectSetReferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object modulereference();
  Object objectsetreference();
  Object DOT();
};

class ObjectClassContextProxy : public ContextProxy {
public:
  ObjectClassContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedObjectClass();
  Object objectClassDefn();
  Object parameterizedObjectClass();

};

class ObjectClassDefnContextProxy : public ContextProxy {
public:
  ObjectClassDefnContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object fieldSpec();
  Object fieldSpecAt(size_t i);
  Object withSyntaxSpec();
  Object CLASS_WORD();
  Object L_BRACE();
  Object R_BRACE();
  Object COMMA();
  Object COMMAAt(size_t i);
};

class ParameterizedObjectClassContextProxy : public ContextProxy {
public:
  ParameterizedObjectClassContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedObjectClass();
  Object actualParameterList();

};

class FieldSpecContextProxy : public ContextProxy {
public:
  FieldSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object typeFieldSpec();
  Object fixedTypeValueFieldSpec();
  Object variableTypeValueFieldSpec();
  Object fixedTypeValueSetFieldSpec();
  Object variableTypeValueSetFieldSpec();
  Object objectFieldSpec();
  Object objectSetFieldSpec();

};

class WithSyntaxSpecContextProxy : public ContextProxy {
public:
  WithSyntaxSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object syntaxList();
  Object WITH_WORD();
  Object SYNTAX_WORD();
};

class SyntaxListContextProxy : public ContextProxy {
public:
  SyntaxListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object tokenOrGroupSpec();
  Object tokenOrGroupSpecAt(size_t i);
  Object L_BRACE();
  Object R_BRACE();
};

class TypeFieldSpecContextProxy : public ContextProxy {
public:
  TypeFieldSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object typefieldreference();
  Object typeOptionalitySpec();

};

class FixedTypeValueFieldSpecContextProxy : public ContextProxy {
public:
  FixedTypeValueFieldSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valuefieldreference();
  Object type();
  Object valueOptionalitySpec();
  Object UNIQUE_WORD();
};

class VariableTypeValueFieldSpecContextProxy : public ContextProxy {
public:
  VariableTypeValueFieldSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valuefieldreference();
  Object fieldName();
  Object valueOptionalitySpec();

};

class FixedTypeValueSetFieldSpecContextProxy : public ContextProxy {
public:
  FixedTypeValueSetFieldSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valuesetfieldreference();
  Object type();
  Object valueSetOptionalitySpec();

};

class VariableTypeValueSetFieldSpecContextProxy : public ContextProxy {
public:
  VariableTypeValueSetFieldSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valuesetfieldreference();
  Object fieldName();
  Object valueSetOptionalitySpec();

};

class ObjectFieldSpecContextProxy : public ContextProxy {
public:
  ObjectFieldSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objectfieldreference();
  Object definedObjectClass();
  Object objectOptionalitySpec();

};

class ObjectSetFieldSpecContextProxy : public ContextProxy {
public:
  ObjectSetFieldSpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objectsetfieldreference();
  Object definedObjectClass();
  Object objectSetOptionalitySpec();

};

class TypefieldreferenceContextProxy : public ContextProxy {
public:
  TypefieldreferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object ReferenceItem();
};

class TypeOptionalitySpecContextProxy : public ContextProxy {
public:
  TypeOptionalitySpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object type();
  Object OPTIONAL_WORD();
  Object DEFAULT_WORD();
};

class ValuefieldreferenceContextProxy : public ContextProxy {
public:
  ValuefieldreferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object IdentifierOrValueItem();
};

class ValueOptionalitySpecContextProxy : public ContextProxy {
public:
  ValueOptionalitySpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object value();
  Object OPTIONAL_WORD();
  Object DEFAULT_WORD();
};

class FieldNameContextProxy : public ContextProxy {
public:
  FieldNameContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object primitiveFieldName();
  Object primitiveFieldNameAt(size_t i);
  Object DOT();
  Object DOTAt(size_t i);
};

class ValuesetfieldreferenceContextProxy : public ContextProxy {
public:
  ValuesetfieldreferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object ReferenceItem();
};

class ValueSetOptionalitySpecContextProxy : public ContextProxy {
public:
  ValueSetOptionalitySpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valueSet();
  Object OPTIONAL_WORD();
  Object DEFAULT_WORD();
};

class ObjectfieldreferenceContextProxy : public ContextProxy {
public:
  ObjectfieldreferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object IdentifierOrValueItem();
};

class ObjectOptionalitySpecContextProxy : public ContextProxy {
public:
  ObjectOptionalitySpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object object();
  Object OPTIONAL_WORD();
  Object DEFAULT_WORD();
};

class ObjectsetfieldreferenceContextProxy : public ContextProxy {
public:
  ObjectsetfieldreferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object ReferenceItem();
};

class ObjectSetOptionalitySpecContextProxy : public ContextProxy {
public:
  ObjectSetOptionalitySpecContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objectSet();
  Object OPTIONAL_WORD();
  Object DEFAULT_WORD();
};

class PrimitiveFieldNameContextProxy : public ContextProxy {
public:
  PrimitiveFieldNameContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object typefieldreference();
  Object valuefieldreference();
  Object valuesetfieldreference();
  Object objectfieldreference();
  Object objectsetfieldreference();

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

};

class LiteralContextProxy : public ContextProxy {
public:
  LiteralContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object word();
  Object COMMA();
};

class WordContextProxy : public ContextProxy {
public:
  WordContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object ReferenceItem();
};

class ObjectDefnContextProxy : public ContextProxy {
public:
  ObjectDefnContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object defaultSyntax();
  Object definedSyntax();

};

class ObjectFromObjectContextProxy : public ContextProxy {
public:
  ObjectFromObjectContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object referencedObjects();
  Object fieldName();
  Object DOT();
};

class ParameterizedObjectContextProxy : public ContextProxy {
public:
  ParameterizedObjectContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedObject();
  Object actualParameterList();

};

class DefaultSyntaxContextProxy : public ContextProxy {
public:
  DefaultSyntaxContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object fieldSetting();
  Object fieldSettingAt(size_t i);
  Object L_BRACE();
  Object R_BRACE();
  Object COMMA();
  Object COMMAAt(size_t i);
};

class DefinedSyntaxContextProxy : public ContextProxy {
public:
  DefinedSyntaxContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedSyntaxToken();
  Object definedSyntaxTokenAt(size_t i);
  Object L_BRACE();
  Object R_BRACE();
};

class FieldSettingContextProxy : public ContextProxy {
public:
  FieldSettingContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object primitiveFieldName();
  Object setting();

};

class SettingContextProxy : public ContextProxy {
public:
  SettingContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object type();
  Object value();
  Object valueSet();
  Object object();
  Object objectSet();

};

class DefinedSyntaxTokenContextProxy : public ContextProxy {
public:
  DefinedSyntaxTokenContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object literal();
  Object setting();

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

class ObjectSetFromObjectsContextProxy : public ContextProxy {
public:
  ObjectSetFromObjectsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object referencedObjects();
  Object fieldName();
  Object DOT();
};

class ParameterizedObjectSetContextProxy : public ContextProxy {
public:
  ParameterizedObjectSetContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedObjectSet();
  Object actualParameterList();

};

class OpenTypeFieldValContextProxy : public ContextProxy {
public:
  OpenTypeFieldValContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object type();
  Object value();
  Object COLON();
};

class FixedTypeFieldValContextProxy : public ContextProxy {
public:
  FixedTypeFieldValContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object builtinValue();
  Object referencedValue();

};

class ReferencedObjectsContextProxy : public ContextProxy {
public:
  ReferencedObjectsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object definedObject();
  Object parameterizedObject();
  Object definedObjectSet();
  Object parameterizedObjectSet();

};

class ParameterizedTypeAssignmentContextProxy : public ContextProxy {
public:
  ParameterizedTypeAssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object typereference();
  Object parameterList();
  Object type();
  Object ASSIGN();
};

class ParameterizedValueAssignmentContextProxy : public ContextProxy {
public:
  ParameterizedValueAssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valuereference();
  Object parameterList();
  Object type();
  Object value();
  Object ASSIGN();
};

class ParameterizedValueSetTypeAssignmentContextProxy : public ContextProxy {
public:
  ParameterizedValueSetTypeAssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object typereference();
  Object parameterList();
  Object type();
  Object valueSet();
  Object ASSIGN();
};

class ParameterizedObjectClassAssignmentContextProxy : public ContextProxy {
public:
  ParameterizedObjectClassAssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objectclassreference();
  Object parameterList();
  Object objectClass();
  Object ASSIGN();
};

class ParameterizedObjectAssignmentContextProxy : public ContextProxy {
public:
  ParameterizedObjectAssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objectreference();
  Object parameterList();
  Object definedObjectClass();
  Object object();
  Object ASSIGN();
};

class ParameterizedObjectSetAssignmentContextProxy : public ContextProxy {
public:
  ParameterizedObjectSetAssignmentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object objectsetreference();
  Object parameterList();
  Object definedObjectClass();
  Object objectSet();
  Object ASSIGN();
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

class ParameterContextProxy : public ContextProxy {
public:
  ParameterContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object paramGovernor();
  Object dummyReference();
  Object COLON();
};

class ParamGovernorContextProxy : public ContextProxy {
public:
  ParamGovernorContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object governor();
  Object dummyGovernor();

};

class DummyReferenceContextProxy : public ContextProxy {
public:
  DummyReferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object reference();

};

class DummyGovernorContextProxy : public ContextProxy {
public:
  DummyGovernorContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object dummyReference();

};

class SimpleDefinedTypeContextProxy : public ContextProxy {
public:
  SimpleDefinedTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object externalTypeReference();
  Object typereference();

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

class SimpleDefinedValueContextProxy : public ContextProxy {
public:
  SimpleDefinedValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object externalValueReference();
  Object valuereference();

};

class ActualParameterContextProxy : public ContextProxy {
public:
  ActualParameterContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object type();
  Object value();
  Object valueSet();
  Object definedObjectClass();
  Object object();
  Object objectSet();

};


namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ModuleDefinitionContext*> {
  public:
    VALUE convert(ASN1Parser::ModuleDefinitionContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ModuleDefinitionContext>(x, false, rb_cModuleDefinitionContext);
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
  class To_Ruby<ASN1Parser::ModuleIdentifierContext*> {
  public:
    VALUE convert(ASN1Parser::ModuleIdentifierContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ModuleIdentifierContext>(x, false, rb_cModuleIdentifierContext);
    }
  };

  template <>
  class To_Ruby<ModuleIdentifierContextProxy*> {
  public:
    VALUE convert(ModuleIdentifierContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ModuleIdentifierContextProxy>(x, false, rb_cModuleIdentifierContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::TagDefaultContext*> {
  public:
    VALUE convert(ASN1Parser::TagDefaultContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::TagDefaultContext>(x, false, rb_cTagDefaultContext);
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
  class To_Ruby<ASN1Parser::ExtensionDefaultContext*> {
  public:
    VALUE convert(ASN1Parser::ExtensionDefaultContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExtensionDefaultContext>(x, false, rb_cExtensionDefaultContext);
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
  class To_Ruby<ASN1Parser::ModuleBodyContext*> {
  public:
    VALUE convert(ASN1Parser::ModuleBodyContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ModuleBodyContext>(x, false, rb_cModuleBodyContext);
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
  class To_Ruby<ASN1Parser::ModulereferenceContext*> {
  public:
    VALUE convert(ASN1Parser::ModulereferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ModulereferenceContext>(x, false, rb_cModulereferenceContext);
    }
  };

  template <>
  class To_Ruby<ModulereferenceContextProxy*> {
  public:
    VALUE convert(ModulereferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ModulereferenceContextProxy>(x, false, rb_cModulereferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::DefinitiveIdentifierContext*> {
  public:
    VALUE convert(ASN1Parser::DefinitiveIdentifierContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::DefinitiveIdentifierContext>(x, false, rb_cDefinitiveIdentifierContext);
    }
  };

  template <>
  class To_Ruby<DefinitiveIdentifierContextProxy*> {
  public:
    VALUE convert(DefinitiveIdentifierContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<DefinitiveIdentifierContextProxy>(x, false, rb_cDefinitiveIdentifierContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::DefinitiveObjIdComponentListContext*> {
  public:
    VALUE convert(ASN1Parser::DefinitiveObjIdComponentListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::DefinitiveObjIdComponentListContext>(x, false, rb_cDefinitiveObjIdComponentListContext);
    }
  };

  template <>
  class To_Ruby<DefinitiveObjIdComponentListContextProxy*> {
  public:
    VALUE convert(DefinitiveObjIdComponentListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<DefinitiveObjIdComponentListContextProxy>(x, false, rb_cDefinitiveObjIdComponentListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::DefinitiveObjIdComponentContext*> {
  public:
    VALUE convert(ASN1Parser::DefinitiveObjIdComponentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::DefinitiveObjIdComponentContext>(x, false, rb_cDefinitiveObjIdComponentContext);
    }
  };

  template <>
  class To_Ruby<DefinitiveObjIdComponentContextProxy*> {
  public:
    VALUE convert(DefinitiveObjIdComponentContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<DefinitiveObjIdComponentContextProxy>(x, false, rb_cDefinitiveObjIdComponentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::NameFormContext*> {
  public:
    VALUE convert(ASN1Parser::NameFormContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::NameFormContext>(x, false, rb_cNameFormContext);
    }
  };

  template <>
  class To_Ruby<NameFormContextProxy*> {
  public:
    VALUE convert(NameFormContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<NameFormContextProxy>(x, false, rb_cNameFormContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::DefinitiveNumberFormContext*> {
  public:
    VALUE convert(ASN1Parser::DefinitiveNumberFormContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::DefinitiveNumberFormContext>(x, false, rb_cDefinitiveNumberFormContext);
    }
  };

  template <>
  class To_Ruby<DefinitiveNumberFormContextProxy*> {
  public:
    VALUE convert(DefinitiveNumberFormContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<DefinitiveNumberFormContextProxy>(x, false, rb_cDefinitiveNumberFormContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::DefinitiveNameAndNumberFormContext*> {
  public:
    VALUE convert(ASN1Parser::DefinitiveNameAndNumberFormContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::DefinitiveNameAndNumberFormContext>(x, false, rb_cDefinitiveNameAndNumberFormContext);
    }
  };

  template <>
  class To_Ruby<DefinitiveNameAndNumberFormContextProxy*> {
  public:
    VALUE convert(DefinitiveNameAndNumberFormContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<DefinitiveNameAndNumberFormContextProxy>(x, false, rb_cDefinitiveNameAndNumberFormContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::NumberContext*> {
  public:
    VALUE convert(ASN1Parser::NumberContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::NumberContext>(x, false, rb_cNumberContext);
    }
  };

  template <>
  class To_Ruby<NumberContextProxy*> {
  public:
    VALUE convert(NumberContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<NumberContextProxy>(x, false, rb_cNumberContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::IdentifierContext*> {
  public:
    VALUE convert(ASN1Parser::IdentifierContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::IdentifierContext>(x, false, rb_cIdentifierContext);
    }
  };

  template <>
  class To_Ruby<IdentifierContextProxy*> {
  public:
    VALUE convert(IdentifierContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<IdentifierContextProxy>(x, false, rb_cIdentifierContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ExportsContext*> {
  public:
    VALUE convert(ASN1Parser::ExportsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExportsContext>(x, false, rb_cExportsContext);
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
  class To_Ruby<ASN1Parser::ImportsContext*> {
  public:
    VALUE convert(ASN1Parser::ImportsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ImportsContext>(x, false, rb_cImportsContext);
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
  class To_Ruby<ASN1Parser::AssignmentListContext*> {
  public:
    VALUE convert(ASN1Parser::AssignmentListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::AssignmentListContext>(x, false, rb_cAssignmentListContext);
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
  class To_Ruby<ASN1Parser::SymbolsExportedContext*> {
  public:
    VALUE convert(ASN1Parser::SymbolsExportedContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SymbolsExportedContext>(x, false, rb_cSymbolsExportedContext);
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
  class To_Ruby<ASN1Parser::SymbolListContext*> {
  public:
    VALUE convert(ASN1Parser::SymbolListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SymbolListContext>(x, false, rb_cSymbolListContext);
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
  class To_Ruby<ASN1Parser::SymbolsImportedContext*> {
  public:
    VALUE convert(ASN1Parser::SymbolsImportedContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SymbolsImportedContext>(x, false, rb_cSymbolsImportedContext);
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
  class To_Ruby<ASN1Parser::SymbolsFromModuleListContext*> {
  public:
    VALUE convert(ASN1Parser::SymbolsFromModuleListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SymbolsFromModuleListContext>(x, false, rb_cSymbolsFromModuleListContext);
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
  class To_Ruby<ASN1Parser::SymbolsFromModuleContext*> {
  public:
    VALUE convert(ASN1Parser::SymbolsFromModuleContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SymbolsFromModuleContext>(x, false, rb_cSymbolsFromModuleContext);
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
  class To_Ruby<ASN1Parser::GlobalModuleReferenceContext*> {
  public:
    VALUE convert(ASN1Parser::GlobalModuleReferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::GlobalModuleReferenceContext>(x, false, rb_cGlobalModuleReferenceContext);
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
  class To_Ruby<ASN1Parser::AssignedIdentifierContext*> {
  public:
    VALUE convert(ASN1Parser::AssignedIdentifierContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::AssignedIdentifierContext>(x, false, rb_cAssignedIdentifierContext);
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
  class To_Ruby<ASN1Parser::ObjectIdentifierValueContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectIdentifierValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectIdentifierValueContext>(x, false, rb_cObjectIdentifierValueContext);
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
  class To_Ruby<ASN1Parser::DefinedValueContext*> {
  public:
    VALUE convert(ASN1Parser::DefinedValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::DefinedValueContext>(x, false, rb_cDefinedValueContext);
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
  class To_Ruby<ASN1Parser::SymbolContext*> {
  public:
    VALUE convert(ASN1Parser::SymbolContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SymbolContext>(x, false, rb_cSymbolContext);
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
  class To_Ruby<ASN1Parser::ReferenceContext*> {
  public:
    VALUE convert(ASN1Parser::ReferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ReferenceContext>(x, false, rb_cReferenceContext);
    }
  };

  template <>
  class To_Ruby<ReferenceContextProxy*> {
  public:
    VALUE convert(ReferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ReferenceContextProxy>(x, false, rb_cReferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ParameterizedReferenceContext*> {
  public:
    VALUE convert(ASN1Parser::ParameterizedReferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ParameterizedReferenceContext>(x, false, rb_cParameterizedReferenceContext);
    }
  };

  template <>
  class To_Ruby<ParameterizedReferenceContextProxy*> {
  public:
    VALUE convert(ParameterizedReferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ParameterizedReferenceContextProxy>(x, false, rb_cParameterizedReferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::TypereferenceContext*> {
  public:
    VALUE convert(ASN1Parser::TypereferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::TypereferenceContext>(x, false, rb_cTypereferenceContext);
    }
  };

  template <>
  class To_Ruby<TypereferenceContextProxy*> {
  public:
    VALUE convert(TypereferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<TypereferenceContextProxy>(x, false, rb_cTypereferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ValuereferenceContext*> {
  public:
    VALUE convert(ASN1Parser::ValuereferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ValuereferenceContext>(x, false, rb_cValuereferenceContext);
    }
  };

  template <>
  class To_Ruby<ValuereferenceContextProxy*> {
  public:
    VALUE convert(ValuereferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ValuereferenceContextProxy>(x, false, rb_cValuereferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ObjectclassreferenceContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectclassreferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectclassreferenceContext>(x, false, rb_cObjectclassreferenceContext);
    }
  };

  template <>
  class To_Ruby<ObjectclassreferenceContextProxy*> {
  public:
    VALUE convert(ObjectclassreferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectclassreferenceContextProxy>(x, false, rb_cObjectclassreferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ObjectreferenceContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectreferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectreferenceContext>(x, false, rb_cObjectreferenceContext);
    }
  };

  template <>
  class To_Ruby<ObjectreferenceContextProxy*> {
  public:
    VALUE convert(ObjectreferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectreferenceContextProxy>(x, false, rb_cObjectreferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ObjectsetreferenceContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectsetreferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectsetreferenceContext>(x, false, rb_cObjectsetreferenceContext);
    }
  };

  template <>
  class To_Ruby<ObjectsetreferenceContextProxy*> {
  public:
    VALUE convert(ObjectsetreferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectsetreferenceContextProxy>(x, false, rb_cObjectsetreferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::AssignmentContext*> {
  public:
    VALUE convert(ASN1Parser::AssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::AssignmentContext>(x, false, rb_cAssignmentContext);
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
  class To_Ruby<ASN1Parser::TypeAssignmentContext*> {
  public:
    VALUE convert(ASN1Parser::TypeAssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::TypeAssignmentContext>(x, false, rb_cTypeAssignmentContext);
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
  class To_Ruby<ASN1Parser::ValueAssignmentContext*> {
  public:
    VALUE convert(ASN1Parser::ValueAssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ValueAssignmentContext>(x, false, rb_cValueAssignmentContext);
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
  class To_Ruby<ASN1Parser::ValueSetTypeAssignmentContext*> {
  public:
    VALUE convert(ASN1Parser::ValueSetTypeAssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ValueSetTypeAssignmentContext>(x, false, rb_cValueSetTypeAssignmentContext);
    }
  };

  template <>
  class To_Ruby<ValueSetTypeAssignmentContextProxy*> {
  public:
    VALUE convert(ValueSetTypeAssignmentContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ValueSetTypeAssignmentContextProxy>(x, false, rb_cValueSetTypeAssignmentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ObjectClassAssignmentContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectClassAssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectClassAssignmentContext>(x, false, rb_cObjectClassAssignmentContext);
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
  class To_Ruby<ASN1Parser::ObjectAssignmentContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectAssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectAssignmentContext>(x, false, rb_cObjectAssignmentContext);
    }
  };

  template <>
  class To_Ruby<ObjectAssignmentContextProxy*> {
  public:
    VALUE convert(ObjectAssignmentContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectAssignmentContextProxy>(x, false, rb_cObjectAssignmentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ObjectSetAssignmentContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectSetAssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectSetAssignmentContext>(x, false, rb_cObjectSetAssignmentContext);
    }
  };

  template <>
  class To_Ruby<ObjectSetAssignmentContextProxy*> {
  public:
    VALUE convert(ObjectSetAssignmentContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectSetAssignmentContextProxy>(x, false, rb_cObjectSetAssignmentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ParameterizedAssignmentContext*> {
  public:
    VALUE convert(ASN1Parser::ParameterizedAssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ParameterizedAssignmentContext>(x, false, rb_cParameterizedAssignmentContext);
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
  class To_Ruby<ASN1Parser::DefinedTypeContext*> {
  public:
    VALUE convert(ASN1Parser::DefinedTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::DefinedTypeContext>(x, false, rb_cDefinedTypeContext);
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
  class To_Ruby<ASN1Parser::ExternalTypeReferenceContext*> {
  public:
    VALUE convert(ASN1Parser::ExternalTypeReferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExternalTypeReferenceContext>(x, false, rb_cExternalTypeReferenceContext);
    }
  };

  template <>
  class To_Ruby<ExternalTypeReferenceContextProxy*> {
  public:
    VALUE convert(ExternalTypeReferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExternalTypeReferenceContextProxy>(x, false, rb_cExternalTypeReferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ParameterizedTypeContext*> {
  public:
    VALUE convert(ASN1Parser::ParameterizedTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ParameterizedTypeContext>(x, false, rb_cParameterizedTypeContext);
    }
  };

  template <>
  class To_Ruby<ParameterizedTypeContextProxy*> {
  public:
    VALUE convert(ParameterizedTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ParameterizedTypeContextProxy>(x, false, rb_cParameterizedTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ParameterizedValueSetTypeContext*> {
  public:
    VALUE convert(ASN1Parser::ParameterizedValueSetTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ParameterizedValueSetTypeContext>(x, false, rb_cParameterizedValueSetTypeContext);
    }
  };

  template <>
  class To_Ruby<ParameterizedValueSetTypeContextProxy*> {
  public:
    VALUE convert(ParameterizedValueSetTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ParameterizedValueSetTypeContextProxy>(x, false, rb_cParameterizedValueSetTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ExternalValueReferenceContext*> {
  public:
    VALUE convert(ASN1Parser::ExternalValueReferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExternalValueReferenceContext>(x, false, rb_cExternalValueReferenceContext);
    }
  };

  template <>
  class To_Ruby<ExternalValueReferenceContextProxy*> {
  public:
    VALUE convert(ExternalValueReferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExternalValueReferenceContextProxy>(x, false, rb_cExternalValueReferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ParameterizedValueContext*> {
  public:
    VALUE convert(ASN1Parser::ParameterizedValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ParameterizedValueContext>(x, false, rb_cParameterizedValueContext);
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
  class To_Ruby<ASN1Parser::TypeContext*> {
  public:
    VALUE convert(ASN1Parser::TypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::TypeContext>(x, false, rb_cTypeContext);
    }
  };

  template <>
  class To_Ruby<TypeContextProxy*> {
  public:
    VALUE convert(TypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<TypeContextProxy>(x, false, rb_cTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ValueContext*> {
  public:
    VALUE convert(ASN1Parser::ValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ValueContext>(x, false, rb_cValueContext);
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
  class To_Ruby<ASN1Parser::ValueSetContext*> {
  public:
    VALUE convert(ASN1Parser::ValueSetContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ValueSetContext>(x, false, rb_cValueSetContext);
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
  class To_Ruby<ASN1Parser::ElementSetSpecsContext*> {
  public:
    VALUE convert(ASN1Parser::ElementSetSpecsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ElementSetSpecsContext>(x, false, rb_cElementSetSpecsContext);
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
  class To_Ruby<ASN1Parser::BuiltinTypeContext*> {
  public:
    VALUE convert(ASN1Parser::BuiltinTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::BuiltinTypeContext>(x, false, rb_cBuiltinTypeContext);
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
  class To_Ruby<ASN1Parser::ReferencedTypeContext*> {
  public:
    VALUE convert(ASN1Parser::ReferencedTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ReferencedTypeContext>(x, false, rb_cReferencedTypeContext);
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
  class To_Ruby<ASN1Parser::ConstrainedTypeContext*> {
  public:
    VALUE convert(ASN1Parser::ConstrainedTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ConstrainedTypeContext>(x, false, rb_cConstrainedTypeContext);
    }
  };

  template <>
  class To_Ruby<ConstrainedTypeContextProxy*> {
  public:
    VALUE convert(ConstrainedTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ConstrainedTypeContextProxy>(x, false, rb_cConstrainedTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::BitStringTypeContext*> {
  public:
    VALUE convert(ASN1Parser::BitStringTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::BitStringTypeContext>(x, false, rb_cBitStringTypeContext);
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
  class To_Ruby<ASN1Parser::BooleanTypeContext*> {
  public:
    VALUE convert(ASN1Parser::BooleanTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::BooleanTypeContext>(x, false, rb_cBooleanTypeContext);
    }
  };

  template <>
  class To_Ruby<BooleanTypeContextProxy*> {
  public:
    VALUE convert(BooleanTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<BooleanTypeContextProxy>(x, false, rb_cBooleanTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::CharacterStringTypeContext*> {
  public:
    VALUE convert(ASN1Parser::CharacterStringTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::CharacterStringTypeContext>(x, false, rb_cCharacterStringTypeContext);
    }
  };

  template <>
  class To_Ruby<CharacterStringTypeContextProxy*> {
  public:
    VALUE convert(CharacterStringTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<CharacterStringTypeContextProxy>(x, false, rb_cCharacterStringTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ChoiceTypeContext*> {
  public:
    VALUE convert(ASN1Parser::ChoiceTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ChoiceTypeContext>(x, false, rb_cChoiceTypeContext);
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
  class To_Ruby<ASN1Parser::EnumeratedTypeContext*> {
  public:
    VALUE convert(ASN1Parser::EnumeratedTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::EnumeratedTypeContext>(x, false, rb_cEnumeratedTypeContext);
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
  class To_Ruby<ASN1Parser::IntegerTypeContext*> {
  public:
    VALUE convert(ASN1Parser::IntegerTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::IntegerTypeContext>(x, false, rb_cIntegerTypeContext);
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
  class To_Ruby<ASN1Parser::NullTypeContext*> {
  public:
    VALUE convert(ASN1Parser::NullTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::NullTypeContext>(x, false, rb_cNullTypeContext);
    }
  };

  template <>
  class To_Ruby<NullTypeContextProxy*> {
  public:
    VALUE convert(NullTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<NullTypeContextProxy>(x, false, rb_cNullTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ObjectClassFieldTypeContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectClassFieldTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectClassFieldTypeContext>(x, false, rb_cObjectClassFieldTypeContext);
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
  class To_Ruby<ASN1Parser::ObjectIdentifierTypeContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectIdentifierTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectIdentifierTypeContext>(x, false, rb_cObjectIdentifierTypeContext);
    }
  };

  template <>
  class To_Ruby<ObjectIdentifierTypeContextProxy*> {
  public:
    VALUE convert(ObjectIdentifierTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectIdentifierTypeContextProxy>(x, false, rb_cObjectIdentifierTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::OctetStringTypeContext*> {
  public:
    VALUE convert(ASN1Parser::OctetStringTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::OctetStringTypeContext>(x, false, rb_cOctetStringTypeContext);
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
  class To_Ruby<ASN1Parser::SequenceTypeContext*> {
  public:
    VALUE convert(ASN1Parser::SequenceTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SequenceTypeContext>(x, false, rb_cSequenceTypeContext);
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
  class To_Ruby<ASN1Parser::SequenceOfTypeContext*> {
  public:
    VALUE convert(ASN1Parser::SequenceOfTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SequenceOfTypeContext>(x, false, rb_cSequenceOfTypeContext);
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
  class To_Ruby<ASN1Parser::SetTypeContext*> {
  public:
    VALUE convert(ASN1Parser::SetTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SetTypeContext>(x, false, rb_cSetTypeContext);
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
  class To_Ruby<ASN1Parser::SetOfTypeContext*> {
  public:
    VALUE convert(ASN1Parser::SetOfTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SetOfTypeContext>(x, false, rb_cSetOfTypeContext);
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
  class To_Ruby<ASN1Parser::TaggedTypeContext*> {
  public:
    VALUE convert(ASN1Parser::TaggedTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::TaggedTypeContext>(x, false, rb_cTaggedTypeContext);
    }
  };

  template <>
  class To_Ruby<TaggedTypeContextProxy*> {
  public:
    VALUE convert(TaggedTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<TaggedTypeContextProxy>(x, false, rb_cTaggedTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::AnyTypeContext*> {
  public:
    VALUE convert(ASN1Parser::AnyTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::AnyTypeContext>(x, false, rb_cAnyTypeContext);
    }
  };

  template <>
  class To_Ruby<AnyTypeContextProxy*> {
  public:
    VALUE convert(AnyTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<AnyTypeContextProxy>(x, false, rb_cAnyTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::UsefulTypeContext*> {
  public:
    VALUE convert(ASN1Parser::UsefulTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::UsefulTypeContext>(x, false, rb_cUsefulTypeContext);
    }
  };

  template <>
  class To_Ruby<UsefulTypeContextProxy*> {
  public:
    VALUE convert(UsefulTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<UsefulTypeContextProxy>(x, false, rb_cUsefulTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::TypeFromObjectContext*> {
  public:
    VALUE convert(ASN1Parser::TypeFromObjectContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::TypeFromObjectContext>(x, false, rb_cTypeFromObjectContext);
    }
  };

  template <>
  class To_Ruby<TypeFromObjectContextProxy*> {
  public:
    VALUE convert(TypeFromObjectContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<TypeFromObjectContextProxy>(x, false, rb_cTypeFromObjectContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ValueSetFromObjectsContext*> {
  public:
    VALUE convert(ASN1Parser::ValueSetFromObjectsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ValueSetFromObjectsContext>(x, false, rb_cValueSetFromObjectsContext);
    }
  };

  template <>
  class To_Ruby<ValueSetFromObjectsContextProxy*> {
  public:
    VALUE convert(ValueSetFromObjectsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ValueSetFromObjectsContextProxy>(x, false, rb_cValueSetFromObjectsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::NamedTypeContext*> {
  public:
    VALUE convert(ASN1Parser::NamedTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::NamedTypeContext>(x, false, rb_cNamedTypeContext);
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
  class To_Ruby<ASN1Parser::BuiltinValueContext*> {
  public:
    VALUE convert(ASN1Parser::BuiltinValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::BuiltinValueContext>(x, false, rb_cBuiltinValueContext);
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
  class To_Ruby<ASN1Parser::ReferencedValueContext*> {
  public:
    VALUE convert(ASN1Parser::ReferencedValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ReferencedValueContext>(x, false, rb_cReferencedValueContext);
    }
  };

  template <>
  class To_Ruby<ReferencedValueContextProxy*> {
  public:
    VALUE convert(ReferencedValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ReferencedValueContextProxy>(x, false, rb_cReferencedValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ObjectClassFieldValueContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectClassFieldValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectClassFieldValueContext>(x, false, rb_cObjectClassFieldValueContext);
    }
  };

  template <>
  class To_Ruby<ObjectClassFieldValueContextProxy*> {
  public:
    VALUE convert(ObjectClassFieldValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectClassFieldValueContextProxy>(x, false, rb_cObjectClassFieldValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::BitStringValueContext*> {
  public:
    VALUE convert(ASN1Parser::BitStringValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::BitStringValueContext>(x, false, rb_cBitStringValueContext);
    }
  };

  template <>
  class To_Ruby<BitStringValueContextProxy*> {
  public:
    VALUE convert(BitStringValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<BitStringValueContextProxy>(x, false, rb_cBitStringValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::BooleanValueContext*> {
  public:
    VALUE convert(ASN1Parser::BooleanValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::BooleanValueContext>(x, false, rb_cBooleanValueContext);
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
  class To_Ruby<ASN1Parser::CharacterStringValueContext*> {
  public:
    VALUE convert(ASN1Parser::CharacterStringValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::CharacterStringValueContext>(x, false, rb_cCharacterStringValueContext);
    }
  };

  template <>
  class To_Ruby<CharacterStringValueContextProxy*> {
  public:
    VALUE convert(CharacterStringValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<CharacterStringValueContextProxy>(x, false, rb_cCharacterStringValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::EnumeratedValueContext*> {
  public:
    VALUE convert(ASN1Parser::EnumeratedValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::EnumeratedValueContext>(x, false, rb_cEnumeratedValueContext);
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
  class To_Ruby<ASN1Parser::IntegerValueContext*> {
  public:
    VALUE convert(ASN1Parser::IntegerValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::IntegerValueContext>(x, false, rb_cIntegerValueContext);
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
  class To_Ruby<ASN1Parser::NullValueContext*> {
  public:
    VALUE convert(ASN1Parser::NullValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::NullValueContext>(x, false, rb_cNullValueContext);
    }
  };

  template <>
  class To_Ruby<NullValueContextProxy*> {
  public:
    VALUE convert(NullValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<NullValueContextProxy>(x, false, rb_cNullValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::OctetStringValueContext*> {
  public:
    VALUE convert(ASN1Parser::OctetStringValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::OctetStringValueContext>(x, false, rb_cOctetStringValueContext);
    }
  };

  template <>
  class To_Ruby<OctetStringValueContextProxy*> {
  public:
    VALUE convert(OctetStringValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<OctetStringValueContextProxy>(x, false, rb_cOctetStringValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::SequenceValueContext*> {
  public:
    VALUE convert(ASN1Parser::SequenceValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SequenceValueContext>(x, false, rb_cSequenceValueContext);
    }
  };

  template <>
  class To_Ruby<SequenceValueContextProxy*> {
  public:
    VALUE convert(SequenceValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SequenceValueContextProxy>(x, false, rb_cSequenceValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::SequenceOfValueContext*> {
  public:
    VALUE convert(ASN1Parser::SequenceOfValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SequenceOfValueContext>(x, false, rb_cSequenceOfValueContext);
    }
  };

  template <>
  class To_Ruby<SequenceOfValueContextProxy*> {
  public:
    VALUE convert(SequenceOfValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SequenceOfValueContextProxy>(x, false, rb_cSequenceOfValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::SetValueContext*> {
  public:
    VALUE convert(ASN1Parser::SetValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SetValueContext>(x, false, rb_cSetValueContext);
    }
  };

  template <>
  class To_Ruby<SetValueContextProxy*> {
  public:
    VALUE convert(SetValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SetValueContextProxy>(x, false, rb_cSetValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::SetOfValueContext*> {
  public:
    VALUE convert(ASN1Parser::SetOfValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SetOfValueContext>(x, false, rb_cSetOfValueContext);
    }
  };

  template <>
  class To_Ruby<SetOfValueContextProxy*> {
  public:
    VALUE convert(SetOfValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SetOfValueContextProxy>(x, false, rb_cSetOfValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ValueFromObjectContext*> {
  public:
    VALUE convert(ASN1Parser::ValueFromObjectContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ValueFromObjectContext>(x, false, rb_cValueFromObjectContext);
    }
  };

  template <>
  class To_Ruby<ValueFromObjectContextProxy*> {
  public:
    VALUE convert(ValueFromObjectContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ValueFromObjectContextProxy>(x, false, rb_cValueFromObjectContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::NamedValueContext*> {
  public:
    VALUE convert(ASN1Parser::NamedValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::NamedValueContext>(x, false, rb_cNamedValueContext);
    }
  };

  template <>
  class To_Ruby<NamedValueContextProxy*> {
  public:
    VALUE convert(NamedValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<NamedValueContextProxy>(x, false, rb_cNamedValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::NamedNumberListContext*> {
  public:
    VALUE convert(ASN1Parser::NamedNumberListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::NamedNumberListContext>(x, false, rb_cNamedNumberListContext);
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
  class To_Ruby<ASN1Parser::NamedNumberContext*> {
  public:
    VALUE convert(ASN1Parser::NamedNumberContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::NamedNumberContext>(x, false, rb_cNamedNumberContext);
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
  class To_Ruby<ASN1Parser::SignedNumberContext*> {
  public:
    VALUE convert(ASN1Parser::SignedNumberContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SignedNumberContext>(x, false, rb_cSignedNumberContext);
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
  class To_Ruby<ASN1Parser::EnumerationsContext*> {
  public:
    VALUE convert(ASN1Parser::EnumerationsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::EnumerationsContext>(x, false, rb_cEnumerationsContext);
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
  class To_Ruby<ASN1Parser::RootEnumerationContext*> {
  public:
    VALUE convert(ASN1Parser::RootEnumerationContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::RootEnumerationContext>(x, false, rb_cRootEnumerationContext);
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
  class To_Ruby<ASN1Parser::ExceptionSpecContext*> {
  public:
    VALUE convert(ASN1Parser::ExceptionSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExceptionSpecContext>(x, false, rb_cExceptionSpecContext);
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
  class To_Ruby<ASN1Parser::AdditionalEnumerationContext*> {
  public:
    VALUE convert(ASN1Parser::AdditionalEnumerationContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::AdditionalEnumerationContext>(x, false, rb_cAdditionalEnumerationContext);
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
  class To_Ruby<ASN1Parser::EnumerationContext*> {
  public:
    VALUE convert(ASN1Parser::EnumerationContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::EnumerationContext>(x, false, rb_cEnumerationContext);
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
  class To_Ruby<ASN1Parser::EnumerationItemContext*> {
  public:
    VALUE convert(ASN1Parser::EnumerationItemContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::EnumerationItemContext>(x, false, rb_cEnumerationItemContext);
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
  class To_Ruby<ASN1Parser::NamedBitListContext*> {
  public:
    VALUE convert(ASN1Parser::NamedBitListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::NamedBitListContext>(x, false, rb_cNamedBitListContext);
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
  class To_Ruby<ASN1Parser::NamedBitContext*> {
  public:
    VALUE convert(ASN1Parser::NamedBitContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::NamedBitContext>(x, false, rb_cNamedBitContext);
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

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::BstringContext*> {
  public:
    VALUE convert(ASN1Parser::BstringContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::BstringContext>(x, false, rb_cBstringContext);
    }
  };

  template <>
  class To_Ruby<BstringContextProxy*> {
  public:
    VALUE convert(BstringContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<BstringContextProxy>(x, false, rb_cBstringContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::HstringContext*> {
  public:
    VALUE convert(ASN1Parser::HstringContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::HstringContext>(x, false, rb_cHstringContext);
    }
  };

  template <>
  class To_Ruby<HstringContextProxy*> {
  public:
    VALUE convert(HstringContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<HstringContextProxy>(x, false, rb_cHstringContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::IdentifierListContext*> {
  public:
    VALUE convert(ASN1Parser::IdentifierListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::IdentifierListContext>(x, false, rb_cIdentifierListContext);
    }
  };

  template <>
  class To_Ruby<IdentifierListContextProxy*> {
  public:
    VALUE convert(IdentifierListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<IdentifierListContextProxy>(x, false, rb_cIdentifierListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ExtensionAndExceptionContext*> {
  public:
    VALUE convert(ASN1Parser::ExtensionAndExceptionContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExtensionAndExceptionContext>(x, false, rb_cExtensionAndExceptionContext);
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
  class To_Ruby<ASN1Parser::ComponentTypeListsContext*> {
  public:
    VALUE convert(ASN1Parser::ComponentTypeListsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ComponentTypeListsContext>(x, false, rb_cComponentTypeListsContext);
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
  class To_Ruby<ASN1Parser::RootComponentTypeListContext*> {
  public:
    VALUE convert(ASN1Parser::RootComponentTypeListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::RootComponentTypeListContext>(x, false, rb_cRootComponentTypeListContext);
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
  class To_Ruby<ASN1Parser::ExtensionAdditionsContext*> {
  public:
    VALUE convert(ASN1Parser::ExtensionAdditionsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExtensionAdditionsContext>(x, false, rb_cExtensionAdditionsContext);
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
  class To_Ruby<ASN1Parser::OptionalExtensionMarkerContext*> {
  public:
    VALUE convert(ASN1Parser::OptionalExtensionMarkerContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::OptionalExtensionMarkerContext>(x, false, rb_cOptionalExtensionMarkerContext);
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
  class To_Ruby<ASN1Parser::ExtensionEndMarkerContext*> {
  public:
    VALUE convert(ASN1Parser::ExtensionEndMarkerContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExtensionEndMarkerContext>(x, false, rb_cExtensionEndMarkerContext);
    }
  };

  template <>
  class To_Ruby<ExtensionEndMarkerContextProxy*> {
  public:
    VALUE convert(ExtensionEndMarkerContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExtensionEndMarkerContextProxy>(x, false, rb_cExtensionEndMarkerContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ComponentTypeListContext*> {
  public:
    VALUE convert(ASN1Parser::ComponentTypeListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ComponentTypeListContext>(x, false, rb_cComponentTypeListContext);
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
  class To_Ruby<ASN1Parser::ExtensionAdditionListContext*> {
  public:
    VALUE convert(ASN1Parser::ExtensionAdditionListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExtensionAdditionListContext>(x, false, rb_cExtensionAdditionListContext);
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
  class To_Ruby<ASN1Parser::ExtensionAdditionContext*> {
  public:
    VALUE convert(ASN1Parser::ExtensionAdditionContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExtensionAdditionContext>(x, false, rb_cExtensionAdditionContext);
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
  class To_Ruby<ASN1Parser::ComponentTypeContext*> {
  public:
    VALUE convert(ASN1Parser::ComponentTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ComponentTypeContext>(x, false, rb_cComponentTypeContext);
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
  class To_Ruby<ASN1Parser::ExtensionAdditionGroupContext*> {
  public:
    VALUE convert(ASN1Parser::ExtensionAdditionGroupContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExtensionAdditionGroupContext>(x, false, rb_cExtensionAdditionGroupContext);
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
  class To_Ruby<ASN1Parser::VersionNumberContext*> {
  public:
    VALUE convert(ASN1Parser::VersionNumberContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::VersionNumberContext>(x, false, rb_cVersionNumberContext);
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
  class To_Ruby<ASN1Parser::ComponentValueListContext*> {
  public:
    VALUE convert(ASN1Parser::ComponentValueListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ComponentValueListContext>(x, false, rb_cComponentValueListContext);
    }
  };

  template <>
  class To_Ruby<ComponentValueListContextProxy*> {
  public:
    VALUE convert(ComponentValueListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ComponentValueListContextProxy>(x, false, rb_cComponentValueListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ValueListContext*> {
  public:
    VALUE convert(ASN1Parser::ValueListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ValueListContext>(x, false, rb_cValueListContext);
    }
  };

  template <>
  class To_Ruby<ValueListContextProxy*> {
  public:
    VALUE convert(ValueListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ValueListContextProxy>(x, false, rb_cValueListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::NamedValueListContext*> {
  public:
    VALUE convert(ASN1Parser::NamedValueListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::NamedValueListContext>(x, false, rb_cNamedValueListContext);
    }
  };

  template <>
  class To_Ruby<NamedValueListContextProxy*> {
  public:
    VALUE convert(NamedValueListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<NamedValueListContextProxy>(x, false, rb_cNamedValueListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::AlternativeTypeListsContext*> {
  public:
    VALUE convert(ASN1Parser::AlternativeTypeListsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::AlternativeTypeListsContext>(x, false, rb_cAlternativeTypeListsContext);
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
  class To_Ruby<ASN1Parser::RootAlternativeTypeListContext*> {
  public:
    VALUE convert(ASN1Parser::RootAlternativeTypeListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::RootAlternativeTypeListContext>(x, false, rb_cRootAlternativeTypeListContext);
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
  class To_Ruby<ASN1Parser::ExtensionAdditionAlternativesContext*> {
  public:
    VALUE convert(ASN1Parser::ExtensionAdditionAlternativesContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExtensionAdditionAlternativesContext>(x, false, rb_cExtensionAdditionAlternativesContext);
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
  class To_Ruby<ASN1Parser::AlternativeTypeListContext*> {
  public:
    VALUE convert(ASN1Parser::AlternativeTypeListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::AlternativeTypeListContext>(x, false, rb_cAlternativeTypeListContext);
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
  class To_Ruby<ASN1Parser::ExtensionAdditionAlternativesListContext*> {
  public:
    VALUE convert(ASN1Parser::ExtensionAdditionAlternativesListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExtensionAdditionAlternativesListContext>(x, false, rb_cExtensionAdditionAlternativesListContext);
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
  class To_Ruby<ASN1Parser::ExtensionAdditionAlternativeContext*> {
  public:
    VALUE convert(ASN1Parser::ExtensionAdditionAlternativeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExtensionAdditionAlternativeContext>(x, false, rb_cExtensionAdditionAlternativeContext);
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
  class To_Ruby<ASN1Parser::ExtensionAdditionAlternativesGroupContext*> {
  public:
    VALUE convert(ASN1Parser::ExtensionAdditionAlternativesGroupContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExtensionAdditionAlternativesGroupContext>(x, false, rb_cExtensionAdditionAlternativesGroupContext);
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
  class To_Ruby<ASN1Parser::TagContext*> {
  public:
    VALUE convert(ASN1Parser::TagContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::TagContext>(x, false, rb_cTagContext);
    }
  };

  template <>
  class To_Ruby<TagContextProxy*> {
  public:
    VALUE convert(TagContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<TagContextProxy>(x, false, rb_cTagContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ClassPContext*> {
  public:
    VALUE convert(ASN1Parser::ClassPContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ClassPContext>(x, false, rb_cClassPContext);
    }
  };

  template <>
  class To_Ruby<ClassPContextProxy*> {
  public:
    VALUE convert(ClassPContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ClassPContextProxy>(x, false, rb_cClassPContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ClassNumberContext*> {
  public:
    VALUE convert(ASN1Parser::ClassNumberContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ClassNumberContext>(x, false, rb_cClassNumberContext);
    }
  };

  template <>
  class To_Ruby<ClassNumberContextProxy*> {
  public:
    VALUE convert(ClassNumberContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ClassNumberContextProxy>(x, false, rb_cClassNumberContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ObjIdComponentsListContext*> {
  public:
    VALUE convert(ASN1Parser::ObjIdComponentsListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjIdComponentsListContext>(x, false, rb_cObjIdComponentsListContext);
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
  class To_Ruby<ASN1Parser::ObjIdComponentsContext*> {
  public:
    VALUE convert(ASN1Parser::ObjIdComponentsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjIdComponentsContext>(x, false, rb_cObjIdComponentsContext);
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
  class To_Ruby<ASN1Parser::NumberFormContext*> {
  public:
    VALUE convert(ASN1Parser::NumberFormContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::NumberFormContext>(x, false, rb_cNumberFormContext);
    }
  };

  template <>
  class To_Ruby<NumberFormContextProxy*> {
  public:
    VALUE convert(NumberFormContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<NumberFormContextProxy>(x, false, rb_cNumberFormContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::NameAndNumberFormContext*> {
  public:
    VALUE convert(ASN1Parser::NameAndNumberFormContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::NameAndNumberFormContext>(x, false, rb_cNameAndNumberFormContext);
    }
  };

  template <>
  class To_Ruby<NameAndNumberFormContextProxy*> {
  public:
    VALUE convert(NameAndNumberFormContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<NameAndNumberFormContextProxy>(x, false, rb_cNameAndNumberFormContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ExceptionIdentificationContext*> {
  public:
    VALUE convert(ASN1Parser::ExceptionIdentificationContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExceptionIdentificationContext>(x, false, rb_cExceptionIdentificationContext);
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
  class To_Ruby<ASN1Parser::RestrictedCharacterStringTypeContext*> {
  public:
    VALUE convert(ASN1Parser::RestrictedCharacterStringTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::RestrictedCharacterStringTypeContext>(x, false, rb_cRestrictedCharacterStringTypeContext);
    }
  };

  template <>
  class To_Ruby<RestrictedCharacterStringTypeContextProxy*> {
  public:
    VALUE convert(RestrictedCharacterStringTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<RestrictedCharacterStringTypeContextProxy>(x, false, rb_cRestrictedCharacterStringTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::UnrestrictedCharacterStringTypeContext*> {
  public:
    VALUE convert(ASN1Parser::UnrestrictedCharacterStringTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::UnrestrictedCharacterStringTypeContext>(x, false, rb_cUnrestrictedCharacterStringTypeContext);
    }
  };

  template <>
  class To_Ruby<UnrestrictedCharacterStringTypeContextProxy*> {
  public:
    VALUE convert(UnrestrictedCharacterStringTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<UnrestrictedCharacterStringTypeContextProxy>(x, false, rb_cUnrestrictedCharacterStringTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::RestrictedCharacterStringValueContext*> {
  public:
    VALUE convert(ASN1Parser::RestrictedCharacterStringValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::RestrictedCharacterStringValueContext>(x, false, rb_cRestrictedCharacterStringValueContext);
    }
  };

  template <>
  class To_Ruby<RestrictedCharacterStringValueContextProxy*> {
  public:
    VALUE convert(RestrictedCharacterStringValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<RestrictedCharacterStringValueContextProxy>(x, false, rb_cRestrictedCharacterStringValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::CstringContext*> {
  public:
    VALUE convert(ASN1Parser::CstringContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::CstringContext>(x, false, rb_cCstringContext);
    }
  };

  template <>
  class To_Ruby<CstringContextProxy*> {
  public:
    VALUE convert(CstringContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<CstringContextProxy>(x, false, rb_cCstringContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::CharacterStringListContext*> {
  public:
    VALUE convert(ASN1Parser::CharacterStringListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::CharacterStringListContext>(x, false, rb_cCharacterStringListContext);
    }
  };

  template <>
  class To_Ruby<CharacterStringListContextProxy*> {
  public:
    VALUE convert(CharacterStringListContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<CharacterStringListContextProxy>(x, false, rb_cCharacterStringListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::QuadrupleContext*> {
  public:
    VALUE convert(ASN1Parser::QuadrupleContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::QuadrupleContext>(x, false, rb_cQuadrupleContext);
    }
  };

  template <>
  class To_Ruby<QuadrupleContextProxy*> {
  public:
    VALUE convert(QuadrupleContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<QuadrupleContextProxy>(x, false, rb_cQuadrupleContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::TupleContext*> {
  public:
    VALUE convert(ASN1Parser::TupleContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::TupleContext>(x, false, rb_cTupleContext);
    }
  };

  template <>
  class To_Ruby<TupleContextProxy*> {
  public:
    VALUE convert(TupleContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<TupleContextProxy>(x, false, rb_cTupleContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::CharSymsContext*> {
  public:
    VALUE convert(ASN1Parser::CharSymsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::CharSymsContext>(x, false, rb_cCharSymsContext);
    }
  };

  template <>
  class To_Ruby<CharSymsContextProxy*> {
  public:
    VALUE convert(CharSymsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<CharSymsContextProxy>(x, false, rb_cCharSymsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::CharsDefnContext*> {
  public:
    VALUE convert(ASN1Parser::CharsDefnContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::CharsDefnContext>(x, false, rb_cCharsDefnContext);
    }
  };

  template <>
  class To_Ruby<CharsDefnContextProxy*> {
  public:
    VALUE convert(CharsDefnContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<CharsDefnContextProxy>(x, false, rb_cCharsDefnContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::GroupContext*> {
  public:
    VALUE convert(ASN1Parser::GroupContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::GroupContext>(x, false, rb_cGroupContext);
    }
  };

  template <>
  class To_Ruby<GroupContextProxy*> {
  public:
    VALUE convert(GroupContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<GroupContextProxy>(x, false, rb_cGroupContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::PlaneContext*> {
  public:
    VALUE convert(ASN1Parser::PlaneContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::PlaneContext>(x, false, rb_cPlaneContext);
    }
  };

  template <>
  class To_Ruby<PlaneContextProxy*> {
  public:
    VALUE convert(PlaneContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<PlaneContextProxy>(x, false, rb_cPlaneContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::RowContext*> {
  public:
    VALUE convert(ASN1Parser::RowContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::RowContext>(x, false, rb_cRowContext);
    }
  };

  template <>
  class To_Ruby<RowContextProxy*> {
  public:
    VALUE convert(RowContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<RowContextProxy>(x, false, rb_cRowContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::CellContext*> {
  public:
    VALUE convert(ASN1Parser::CellContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::CellContext>(x, false, rb_cCellContext);
    }
  };

  template <>
  class To_Ruby<CellContextProxy*> {
  public:
    VALUE convert(CellContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<CellContextProxy>(x, false, rb_cCellContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::TableColumnContext*> {
  public:
    VALUE convert(ASN1Parser::TableColumnContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::TableColumnContext>(x, false, rb_cTableColumnContext);
    }
  };

  template <>
  class To_Ruby<TableColumnContextProxy*> {
  public:
    VALUE convert(TableColumnContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<TableColumnContextProxy>(x, false, rb_cTableColumnContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::TableRowContext*> {
  public:
    VALUE convert(ASN1Parser::TableRowContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::TableRowContext>(x, false, rb_cTableRowContext);
    }
  };

  template <>
  class To_Ruby<TableRowContextProxy*> {
  public:
    VALUE convert(TableRowContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<TableRowContextProxy>(x, false, rb_cTableRowContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::UTCTimeTypeContext*> {
  public:
    VALUE convert(ASN1Parser::UTCTimeTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::UTCTimeTypeContext>(x, false, rb_cUTCTimeTypeContext);
    }
  };

  template <>
  class To_Ruby<UTCTimeTypeContextProxy*> {
  public:
    VALUE convert(UTCTimeTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<UTCTimeTypeContextProxy>(x, false, rb_cUTCTimeTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::GeneralizedTimeTypeContext*> {
  public:
    VALUE convert(ASN1Parser::GeneralizedTimeTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::GeneralizedTimeTypeContext>(x, false, rb_cGeneralizedTimeTypeContext);
    }
  };

  template <>
  class To_Ruby<GeneralizedTimeTypeContextProxy*> {
  public:
    VALUE convert(GeneralizedTimeTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<GeneralizedTimeTypeContextProxy>(x, false, rb_cGeneralizedTimeTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ConstraintContext*> {
  public:
    VALUE convert(ASN1Parser::ConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ConstraintContext>(x, false, rb_cConstraintContext);
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
  class To_Ruby<ASN1Parser::TypeWithConstraintContext*> {
  public:
    VALUE convert(ASN1Parser::TypeWithConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::TypeWithConstraintContext>(x, false, rb_cTypeWithConstraintContext);
    }
  };

  template <>
  class To_Ruby<TypeWithConstraintContextProxy*> {
  public:
    VALUE convert(TypeWithConstraintContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<TypeWithConstraintContextProxy>(x, false, rb_cTypeWithConstraintContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::SizeConstraintContext*> {
  public:
    VALUE convert(ASN1Parser::SizeConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SizeConstraintContext>(x, false, rb_cSizeConstraintContext);
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
  class To_Ruby<ASN1Parser::ConstraintSpecContext*> {
  public:
    VALUE convert(ASN1Parser::ConstraintSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ConstraintSpecContext>(x, false, rb_cConstraintSpecContext);
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
  class To_Ruby<ASN1Parser::SubtypeConstraintContext*> {
  public:
    VALUE convert(ASN1Parser::SubtypeConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SubtypeConstraintContext>(x, false, rb_cSubtypeConstraintContext);
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
  class To_Ruby<ASN1Parser::GeneralConstraintContext*> {
  public:
    VALUE convert(ASN1Parser::GeneralConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::GeneralConstraintContext>(x, false, rb_cGeneralConstraintContext);
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
  class To_Ruby<ASN1Parser::UserDefinedConstraintContext*> {
  public:
    VALUE convert(ASN1Parser::UserDefinedConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::UserDefinedConstraintContext>(x, false, rb_cUserDefinedConstraintContext);
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
  class To_Ruby<ASN1Parser::TableConstraintContext*> {
  public:
    VALUE convert(ASN1Parser::TableConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::TableConstraintContext>(x, false, rb_cTableConstraintContext);
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
  class To_Ruby<ASN1Parser::ContentsConstraintContext*> {
  public:
    VALUE convert(ASN1Parser::ContentsConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ContentsConstraintContext>(x, false, rb_cContentsConstraintContext);
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
  class To_Ruby<ASN1Parser::RootElementSetSpecContext*> {
  public:
    VALUE convert(ASN1Parser::RootElementSetSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::RootElementSetSpecContext>(x, false, rb_cRootElementSetSpecContext);
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
  class To_Ruby<ASN1Parser::AdditionalElementSetSpecContext*> {
  public:
    VALUE convert(ASN1Parser::AdditionalElementSetSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::AdditionalElementSetSpecContext>(x, false, rb_cAdditionalElementSetSpecContext);
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
  class To_Ruby<ASN1Parser::ElementSetSpecContext*> {
  public:
    VALUE convert(ASN1Parser::ElementSetSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ElementSetSpecContext>(x, false, rb_cElementSetSpecContext);
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
  class To_Ruby<ASN1Parser::UnionsContext*> {
  public:
    VALUE convert(ASN1Parser::UnionsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::UnionsContext>(x, false, rb_cUnionsContext);
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
  class To_Ruby<ASN1Parser::ExclusionsContext*> {
  public:
    VALUE convert(ASN1Parser::ExclusionsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExclusionsContext>(x, false, rb_cExclusionsContext);
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
  class To_Ruby<ASN1Parser::IntersectionsContext*> {
  public:
    VALUE convert(ASN1Parser::IntersectionsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::IntersectionsContext>(x, false, rb_cIntersectionsContext);
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
  class To_Ruby<ASN1Parser::UnionMarkContext*> {
  public:
    VALUE convert(ASN1Parser::UnionMarkContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::UnionMarkContext>(x, false, rb_cUnionMarkContext);
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
  class To_Ruby<ASN1Parser::UElemsContext*> {
  public:
    VALUE convert(ASN1Parser::UElemsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::UElemsContext>(x, false, rb_cUElemsContext);
    }
  };

  template <>
  class To_Ruby<UElemsContextProxy*> {
  public:
    VALUE convert(UElemsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<UElemsContextProxy>(x, false, rb_cUElemsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::IntersectionElementsContext*> {
  public:
    VALUE convert(ASN1Parser::IntersectionElementsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::IntersectionElementsContext>(x, false, rb_cIntersectionElementsContext);
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
  class To_Ruby<ASN1Parser::IntersectionMarkContext*> {
  public:
    VALUE convert(ASN1Parser::IntersectionMarkContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::IntersectionMarkContext>(x, false, rb_cIntersectionMarkContext);
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
  class To_Ruby<ASN1Parser::IElemsContext*> {
  public:
    VALUE convert(ASN1Parser::IElemsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::IElemsContext>(x, false, rb_cIElemsContext);
    }
  };

  template <>
  class To_Ruby<IElemsContextProxy*> {
  public:
    VALUE convert(IElemsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<IElemsContextProxy>(x, false, rb_cIElemsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ElementsContext*> {
  public:
    VALUE convert(ASN1Parser::ElementsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ElementsContext>(x, false, rb_cElementsContext);
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
  class To_Ruby<ASN1Parser::ElemsContext*> {
  public:
    VALUE convert(ASN1Parser::ElemsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ElemsContext>(x, false, rb_cElemsContext);
    }
  };

  template <>
  class To_Ruby<ElemsContextProxy*> {
  public:
    VALUE convert(ElemsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ElemsContextProxy>(x, false, rb_cElemsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::SubtypeElementsContext*> {
  public:
    VALUE convert(ASN1Parser::SubtypeElementsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SubtypeElementsContext>(x, false, rb_cSubtypeElementsContext);
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
  class To_Ruby<ASN1Parser::ObjectSetElementsContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectSetElementsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectSetElementsContext>(x, false, rb_cObjectSetElementsContext);
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
  class To_Ruby<ASN1Parser::SingleValueContext*> {
  public:
    VALUE convert(ASN1Parser::SingleValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SingleValueContext>(x, false, rb_cSingleValueContext);
    }
  };

  template <>
  class To_Ruby<SingleValueContextProxy*> {
  public:
    VALUE convert(SingleValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SingleValueContextProxy>(x, false, rb_cSingleValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ContainedSubtypeContext*> {
  public:
    VALUE convert(ASN1Parser::ContainedSubtypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ContainedSubtypeContext>(x, false, rb_cContainedSubtypeContext);
    }
  };

  template <>
  class To_Ruby<ContainedSubtypeContextProxy*> {
  public:
    VALUE convert(ContainedSubtypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ContainedSubtypeContextProxy>(x, false, rb_cContainedSubtypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ValueRangeContext*> {
  public:
    VALUE convert(ASN1Parser::ValueRangeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ValueRangeContext>(x, false, rb_cValueRangeContext);
    }
  };

  template <>
  class To_Ruby<ValueRangeContextProxy*> {
  public:
    VALUE convert(ValueRangeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ValueRangeContextProxy>(x, false, rb_cValueRangeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::PermittedAlphabetContext*> {
  public:
    VALUE convert(ASN1Parser::PermittedAlphabetContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::PermittedAlphabetContext>(x, false, rb_cPermittedAlphabetContext);
    }
  };

  template <>
  class To_Ruby<PermittedAlphabetContextProxy*> {
  public:
    VALUE convert(PermittedAlphabetContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<PermittedAlphabetContextProxy>(x, false, rb_cPermittedAlphabetContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::IncludesContext*> {
  public:
    VALUE convert(ASN1Parser::IncludesContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::IncludesContext>(x, false, rb_cIncludesContext);
    }
  };

  template <>
  class To_Ruby<IncludesContextProxy*> {
  public:
    VALUE convert(IncludesContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<IncludesContextProxy>(x, false, rb_cIncludesContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::LowerEndpointContext*> {
  public:
    VALUE convert(ASN1Parser::LowerEndpointContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::LowerEndpointContext>(x, false, rb_cLowerEndpointContext);
    }
  };

  template <>
  class To_Ruby<LowerEndpointContextProxy*> {
  public:
    VALUE convert(LowerEndpointContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<LowerEndpointContextProxy>(x, false, rb_cLowerEndpointContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::UpperEndpointContext*> {
  public:
    VALUE convert(ASN1Parser::UpperEndpointContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::UpperEndpointContext>(x, false, rb_cUpperEndpointContext);
    }
  };

  template <>
  class To_Ruby<UpperEndpointContextProxy*> {
  public:
    VALUE convert(UpperEndpointContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<UpperEndpointContextProxy>(x, false, rb_cUpperEndpointContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::LowerEndValueContext*> {
  public:
    VALUE convert(ASN1Parser::LowerEndValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::LowerEndValueContext>(x, false, rb_cLowerEndValueContext);
    }
  };

  template <>
  class To_Ruby<LowerEndValueContextProxy*> {
  public:
    VALUE convert(LowerEndValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<LowerEndValueContextProxy>(x, false, rb_cLowerEndValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::UpperEndValueContext*> {
  public:
    VALUE convert(ASN1Parser::UpperEndValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::UpperEndValueContext>(x, false, rb_cUpperEndValueContext);
    }
  };

  template <>
  class To_Ruby<UpperEndValueContextProxy*> {
  public:
    VALUE convert(UpperEndValueContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<UpperEndValueContextProxy>(x, false, rb_cUpperEndValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::UserDefinedConstraintParameterContext*> {
  public:
    VALUE convert(ASN1Parser::UserDefinedConstraintParameterContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::UserDefinedConstraintParameterContext>(x, false, rb_cUserDefinedConstraintParameterContext);
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
  class To_Ruby<ASN1Parser::GovernorContext*> {
  public:
    VALUE convert(ASN1Parser::GovernorContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::GovernorContext>(x, false, rb_cGovernorContext);
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
  class To_Ruby<ASN1Parser::ObjectContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectContext>(x, false, rb_cObjectContext);
    }
  };

  template <>
  class To_Ruby<ObjectContextProxy*> {
  public:
    VALUE convert(ObjectContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectContextProxy>(x, false, rb_cObjectContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ObjectSetContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectSetContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectSetContext>(x, false, rb_cObjectSetContext);
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
  class To_Ruby<ASN1Parser::DefinedObjectClassContext*> {
  public:
    VALUE convert(ASN1Parser::DefinedObjectClassContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::DefinedObjectClassContext>(x, false, rb_cDefinedObjectClassContext);
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
  class To_Ruby<ASN1Parser::SimpleTableConstraintContext*> {
  public:
    VALUE convert(ASN1Parser::SimpleTableConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SimpleTableConstraintContext>(x, false, rb_cSimpleTableConstraintContext);
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
  class To_Ruby<ASN1Parser::ComponentRelationConstraintContext*> {
  public:
    VALUE convert(ASN1Parser::ComponentRelationConstraintContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ComponentRelationConstraintContext>(x, false, rb_cComponentRelationConstraintContext);
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
  class To_Ruby<ASN1Parser::DefinedObjectSetContext*> {
  public:
    VALUE convert(ASN1Parser::DefinedObjectSetContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::DefinedObjectSetContext>(x, false, rb_cDefinedObjectSetContext);
    }
  };

  template <>
  class To_Ruby<DefinedObjectSetContextProxy*> {
  public:
    VALUE convert(DefinedObjectSetContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<DefinedObjectSetContextProxy>(x, false, rb_cDefinedObjectSetContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::AtNotationContext*> {
  public:
    VALUE convert(ASN1Parser::AtNotationContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::AtNotationContext>(x, false, rb_cAtNotationContext);
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
  class To_Ruby<ASN1Parser::ComponentIdListContext*> {
  public:
    VALUE convert(ASN1Parser::ComponentIdListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ComponentIdListContext>(x, false, rb_cComponentIdListContext);
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
  class To_Ruby<ASN1Parser::LevelContext*> {
  public:
    VALUE convert(ASN1Parser::LevelContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::LevelContext>(x, false, rb_cLevelContext);
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
  class To_Ruby<ASN1Parser::ExternalObjectClassReferenceContext*> {
  public:
    VALUE convert(ASN1Parser::ExternalObjectClassReferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExternalObjectClassReferenceContext>(x, false, rb_cExternalObjectClassReferenceContext);
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
  class To_Ruby<ASN1Parser::UsefulObjectClassReferenceContext*> {
  public:
    VALUE convert(ASN1Parser::UsefulObjectClassReferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::UsefulObjectClassReferenceContext>(x, false, rb_cUsefulObjectClassReferenceContext);
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
  class To_Ruby<ASN1Parser::DefinedObjectContext*> {
  public:
    VALUE convert(ASN1Parser::DefinedObjectContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::DefinedObjectContext>(x, false, rb_cDefinedObjectContext);
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
  class To_Ruby<ASN1Parser::ExternalObjectReferenceContext*> {
  public:
    VALUE convert(ASN1Parser::ExternalObjectReferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExternalObjectReferenceContext>(x, false, rb_cExternalObjectReferenceContext);
    }
  };

  template <>
  class To_Ruby<ExternalObjectReferenceContextProxy*> {
  public:
    VALUE convert(ExternalObjectReferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExternalObjectReferenceContextProxy>(x, false, rb_cExternalObjectReferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ExternalObjectSetReferenceContext*> {
  public:
    VALUE convert(ASN1Parser::ExternalObjectSetReferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ExternalObjectSetReferenceContext>(x, false, rb_cExternalObjectSetReferenceContext);
    }
  };

  template <>
  class To_Ruby<ExternalObjectSetReferenceContextProxy*> {
  public:
    VALUE convert(ExternalObjectSetReferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ExternalObjectSetReferenceContextProxy>(x, false, rb_cExternalObjectSetReferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ObjectClassContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectClassContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectClassContext>(x, false, rb_cObjectClassContext);
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
  class To_Ruby<ASN1Parser::ObjectClassDefnContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectClassDefnContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectClassDefnContext>(x, false, rb_cObjectClassDefnContext);
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
  class To_Ruby<ASN1Parser::ParameterizedObjectClassContext*> {
  public:
    VALUE convert(ASN1Parser::ParameterizedObjectClassContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ParameterizedObjectClassContext>(x, false, rb_cParameterizedObjectClassContext);
    }
  };

  template <>
  class To_Ruby<ParameterizedObjectClassContextProxy*> {
  public:
    VALUE convert(ParameterizedObjectClassContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ParameterizedObjectClassContextProxy>(x, false, rb_cParameterizedObjectClassContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::FieldSpecContext*> {
  public:
    VALUE convert(ASN1Parser::FieldSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::FieldSpecContext>(x, false, rb_cFieldSpecContext);
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
  class To_Ruby<ASN1Parser::WithSyntaxSpecContext*> {
  public:
    VALUE convert(ASN1Parser::WithSyntaxSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::WithSyntaxSpecContext>(x, false, rb_cWithSyntaxSpecContext);
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
  class To_Ruby<ASN1Parser::SyntaxListContext*> {
  public:
    VALUE convert(ASN1Parser::SyntaxListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SyntaxListContext>(x, false, rb_cSyntaxListContext);
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
  class To_Ruby<ASN1Parser::TypeFieldSpecContext*> {
  public:
    VALUE convert(ASN1Parser::TypeFieldSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::TypeFieldSpecContext>(x, false, rb_cTypeFieldSpecContext);
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
  class To_Ruby<ASN1Parser::FixedTypeValueFieldSpecContext*> {
  public:
    VALUE convert(ASN1Parser::FixedTypeValueFieldSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::FixedTypeValueFieldSpecContext>(x, false, rb_cFixedTypeValueFieldSpecContext);
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
  class To_Ruby<ASN1Parser::VariableTypeValueFieldSpecContext*> {
  public:
    VALUE convert(ASN1Parser::VariableTypeValueFieldSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::VariableTypeValueFieldSpecContext>(x, false, rb_cVariableTypeValueFieldSpecContext);
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
  class To_Ruby<ASN1Parser::FixedTypeValueSetFieldSpecContext*> {
  public:
    VALUE convert(ASN1Parser::FixedTypeValueSetFieldSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::FixedTypeValueSetFieldSpecContext>(x, false, rb_cFixedTypeValueSetFieldSpecContext);
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
  class To_Ruby<ASN1Parser::VariableTypeValueSetFieldSpecContext*> {
  public:
    VALUE convert(ASN1Parser::VariableTypeValueSetFieldSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::VariableTypeValueSetFieldSpecContext>(x, false, rb_cVariableTypeValueSetFieldSpecContext);
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
  class To_Ruby<ASN1Parser::ObjectFieldSpecContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectFieldSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectFieldSpecContext>(x, false, rb_cObjectFieldSpecContext);
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
  class To_Ruby<ASN1Parser::ObjectSetFieldSpecContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectSetFieldSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectSetFieldSpecContext>(x, false, rb_cObjectSetFieldSpecContext);
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
  class To_Ruby<ASN1Parser::TypefieldreferenceContext*> {
  public:
    VALUE convert(ASN1Parser::TypefieldreferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::TypefieldreferenceContext>(x, false, rb_cTypefieldreferenceContext);
    }
  };

  template <>
  class To_Ruby<TypefieldreferenceContextProxy*> {
  public:
    VALUE convert(TypefieldreferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<TypefieldreferenceContextProxy>(x, false, rb_cTypefieldreferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::TypeOptionalitySpecContext*> {
  public:
    VALUE convert(ASN1Parser::TypeOptionalitySpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::TypeOptionalitySpecContext>(x, false, rb_cTypeOptionalitySpecContext);
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
  class To_Ruby<ASN1Parser::ValuefieldreferenceContext*> {
  public:
    VALUE convert(ASN1Parser::ValuefieldreferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ValuefieldreferenceContext>(x, false, rb_cValuefieldreferenceContext);
    }
  };

  template <>
  class To_Ruby<ValuefieldreferenceContextProxy*> {
  public:
    VALUE convert(ValuefieldreferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ValuefieldreferenceContextProxy>(x, false, rb_cValuefieldreferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ValueOptionalitySpecContext*> {
  public:
    VALUE convert(ASN1Parser::ValueOptionalitySpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ValueOptionalitySpecContext>(x, false, rb_cValueOptionalitySpecContext);
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
  class To_Ruby<ASN1Parser::FieldNameContext*> {
  public:
    VALUE convert(ASN1Parser::FieldNameContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::FieldNameContext>(x, false, rb_cFieldNameContext);
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
  class To_Ruby<ASN1Parser::ValuesetfieldreferenceContext*> {
  public:
    VALUE convert(ASN1Parser::ValuesetfieldreferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ValuesetfieldreferenceContext>(x, false, rb_cValuesetfieldreferenceContext);
    }
  };

  template <>
  class To_Ruby<ValuesetfieldreferenceContextProxy*> {
  public:
    VALUE convert(ValuesetfieldreferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ValuesetfieldreferenceContextProxy>(x, false, rb_cValuesetfieldreferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ValueSetOptionalitySpecContext*> {
  public:
    VALUE convert(ASN1Parser::ValueSetOptionalitySpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ValueSetOptionalitySpecContext>(x, false, rb_cValueSetOptionalitySpecContext);
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
  class To_Ruby<ASN1Parser::ObjectfieldreferenceContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectfieldreferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectfieldreferenceContext>(x, false, rb_cObjectfieldreferenceContext);
    }
  };

  template <>
  class To_Ruby<ObjectfieldreferenceContextProxy*> {
  public:
    VALUE convert(ObjectfieldreferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectfieldreferenceContextProxy>(x, false, rb_cObjectfieldreferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ObjectOptionalitySpecContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectOptionalitySpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectOptionalitySpecContext>(x, false, rb_cObjectOptionalitySpecContext);
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
  class To_Ruby<ASN1Parser::ObjectsetfieldreferenceContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectsetfieldreferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectsetfieldreferenceContext>(x, false, rb_cObjectsetfieldreferenceContext);
    }
  };

  template <>
  class To_Ruby<ObjectsetfieldreferenceContextProxy*> {
  public:
    VALUE convert(ObjectsetfieldreferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectsetfieldreferenceContextProxy>(x, false, rb_cObjectsetfieldreferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ObjectSetOptionalitySpecContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectSetOptionalitySpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectSetOptionalitySpecContext>(x, false, rb_cObjectSetOptionalitySpecContext);
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
  class To_Ruby<ASN1Parser::PrimitiveFieldNameContext*> {
  public:
    VALUE convert(ASN1Parser::PrimitiveFieldNameContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::PrimitiveFieldNameContext>(x, false, rb_cPrimitiveFieldNameContext);
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
  class To_Ruby<ASN1Parser::TokenOrGroupSpecContext*> {
  public:
    VALUE convert(ASN1Parser::TokenOrGroupSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::TokenOrGroupSpecContext>(x, false, rb_cTokenOrGroupSpecContext);
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
  class To_Ruby<ASN1Parser::RequiredTokenContext*> {
  public:
    VALUE convert(ASN1Parser::RequiredTokenContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::RequiredTokenContext>(x, false, rb_cRequiredTokenContext);
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
  class To_Ruby<ASN1Parser::OptionalGroupContext*> {
  public:
    VALUE convert(ASN1Parser::OptionalGroupContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::OptionalGroupContext>(x, false, rb_cOptionalGroupContext);
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
  class To_Ruby<ASN1Parser::LiteralContext*> {
  public:
    VALUE convert(ASN1Parser::LiteralContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::LiteralContext>(x, false, rb_cLiteralContext);
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
  class To_Ruby<ASN1Parser::WordContext*> {
  public:
    VALUE convert(ASN1Parser::WordContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::WordContext>(x, false, rb_cWordContext);
    }
  };

  template <>
  class To_Ruby<WordContextProxy*> {
  public:
    VALUE convert(WordContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<WordContextProxy>(x, false, rb_cWordContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ObjectDefnContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectDefnContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectDefnContext>(x, false, rb_cObjectDefnContext);
    }
  };

  template <>
  class To_Ruby<ObjectDefnContextProxy*> {
  public:
    VALUE convert(ObjectDefnContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectDefnContextProxy>(x, false, rb_cObjectDefnContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ObjectFromObjectContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectFromObjectContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectFromObjectContext>(x, false, rb_cObjectFromObjectContext);
    }
  };

  template <>
  class To_Ruby<ObjectFromObjectContextProxy*> {
  public:
    VALUE convert(ObjectFromObjectContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectFromObjectContextProxy>(x, false, rb_cObjectFromObjectContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ParameterizedObjectContext*> {
  public:
    VALUE convert(ASN1Parser::ParameterizedObjectContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ParameterizedObjectContext>(x, false, rb_cParameterizedObjectContext);
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
  class To_Ruby<ASN1Parser::DefaultSyntaxContext*> {
  public:
    VALUE convert(ASN1Parser::DefaultSyntaxContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::DefaultSyntaxContext>(x, false, rb_cDefaultSyntaxContext);
    }
  };

  template <>
  class To_Ruby<DefaultSyntaxContextProxy*> {
  public:
    VALUE convert(DefaultSyntaxContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<DefaultSyntaxContextProxy>(x, false, rb_cDefaultSyntaxContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::DefinedSyntaxContext*> {
  public:
    VALUE convert(ASN1Parser::DefinedSyntaxContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::DefinedSyntaxContext>(x, false, rb_cDefinedSyntaxContext);
    }
  };

  template <>
  class To_Ruby<DefinedSyntaxContextProxy*> {
  public:
    VALUE convert(DefinedSyntaxContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<DefinedSyntaxContextProxy>(x, false, rb_cDefinedSyntaxContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::FieldSettingContext*> {
  public:
    VALUE convert(ASN1Parser::FieldSettingContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::FieldSettingContext>(x, false, rb_cFieldSettingContext);
    }
  };

  template <>
  class To_Ruby<FieldSettingContextProxy*> {
  public:
    VALUE convert(FieldSettingContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<FieldSettingContextProxy>(x, false, rb_cFieldSettingContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::SettingContext*> {
  public:
    VALUE convert(ASN1Parser::SettingContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SettingContext>(x, false, rb_cSettingContext);
    }
  };

  template <>
  class To_Ruby<SettingContextProxy*> {
  public:
    VALUE convert(SettingContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SettingContextProxy>(x, false, rb_cSettingContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::DefinedSyntaxTokenContext*> {
  public:
    VALUE convert(ASN1Parser::DefinedSyntaxTokenContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::DefinedSyntaxTokenContext>(x, false, rb_cDefinedSyntaxTokenContext);
    }
  };

  template <>
  class To_Ruby<DefinedSyntaxTokenContextProxy*> {
  public:
    VALUE convert(DefinedSyntaxTokenContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<DefinedSyntaxTokenContextProxy>(x, false, rb_cDefinedSyntaxTokenContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ObjectSetSpecContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectSetSpecContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectSetSpecContext>(x, false, rb_cObjectSetSpecContext);
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
  class To_Ruby<ASN1Parser::ObjectSetFromObjectsContext*> {
  public:
    VALUE convert(ASN1Parser::ObjectSetFromObjectsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ObjectSetFromObjectsContext>(x, false, rb_cObjectSetFromObjectsContext);
    }
  };

  template <>
  class To_Ruby<ObjectSetFromObjectsContextProxy*> {
  public:
    VALUE convert(ObjectSetFromObjectsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ObjectSetFromObjectsContextProxy>(x, false, rb_cObjectSetFromObjectsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ParameterizedObjectSetContext*> {
  public:
    VALUE convert(ASN1Parser::ParameterizedObjectSetContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ParameterizedObjectSetContext>(x, false, rb_cParameterizedObjectSetContext);
    }
  };

  template <>
  class To_Ruby<ParameterizedObjectSetContextProxy*> {
  public:
    VALUE convert(ParameterizedObjectSetContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ParameterizedObjectSetContextProxy>(x, false, rb_cParameterizedObjectSetContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::OpenTypeFieldValContext*> {
  public:
    VALUE convert(ASN1Parser::OpenTypeFieldValContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::OpenTypeFieldValContext>(x, false, rb_cOpenTypeFieldValContext);
    }
  };

  template <>
  class To_Ruby<OpenTypeFieldValContextProxy*> {
  public:
    VALUE convert(OpenTypeFieldValContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<OpenTypeFieldValContextProxy>(x, false, rb_cOpenTypeFieldValContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::FixedTypeFieldValContext*> {
  public:
    VALUE convert(ASN1Parser::FixedTypeFieldValContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::FixedTypeFieldValContext>(x, false, rb_cFixedTypeFieldValContext);
    }
  };

  template <>
  class To_Ruby<FixedTypeFieldValContextProxy*> {
  public:
    VALUE convert(FixedTypeFieldValContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<FixedTypeFieldValContextProxy>(x, false, rb_cFixedTypeFieldValContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ReferencedObjectsContext*> {
  public:
    VALUE convert(ASN1Parser::ReferencedObjectsContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ReferencedObjectsContext>(x, false, rb_cReferencedObjectsContext);
    }
  };

  template <>
  class To_Ruby<ReferencedObjectsContextProxy*> {
  public:
    VALUE convert(ReferencedObjectsContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ReferencedObjectsContextProxy>(x, false, rb_cReferencedObjectsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ParameterizedTypeAssignmentContext*> {
  public:
    VALUE convert(ASN1Parser::ParameterizedTypeAssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ParameterizedTypeAssignmentContext>(x, false, rb_cParameterizedTypeAssignmentContext);
    }
  };

  template <>
  class To_Ruby<ParameterizedTypeAssignmentContextProxy*> {
  public:
    VALUE convert(ParameterizedTypeAssignmentContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ParameterizedTypeAssignmentContextProxy>(x, false, rb_cParameterizedTypeAssignmentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ParameterizedValueAssignmentContext*> {
  public:
    VALUE convert(ASN1Parser::ParameterizedValueAssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ParameterizedValueAssignmentContext>(x, false, rb_cParameterizedValueAssignmentContext);
    }
  };

  template <>
  class To_Ruby<ParameterizedValueAssignmentContextProxy*> {
  public:
    VALUE convert(ParameterizedValueAssignmentContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ParameterizedValueAssignmentContextProxy>(x, false, rb_cParameterizedValueAssignmentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ParameterizedValueSetTypeAssignmentContext*> {
  public:
    VALUE convert(ASN1Parser::ParameterizedValueSetTypeAssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ParameterizedValueSetTypeAssignmentContext>(x, false, rb_cParameterizedValueSetTypeAssignmentContext);
    }
  };

  template <>
  class To_Ruby<ParameterizedValueSetTypeAssignmentContextProxy*> {
  public:
    VALUE convert(ParameterizedValueSetTypeAssignmentContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ParameterizedValueSetTypeAssignmentContextProxy>(x, false, rb_cParameterizedValueSetTypeAssignmentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ParameterizedObjectClassAssignmentContext*> {
  public:
    VALUE convert(ASN1Parser::ParameterizedObjectClassAssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ParameterizedObjectClassAssignmentContext>(x, false, rb_cParameterizedObjectClassAssignmentContext);
    }
  };

  template <>
  class To_Ruby<ParameterizedObjectClassAssignmentContextProxy*> {
  public:
    VALUE convert(ParameterizedObjectClassAssignmentContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ParameterizedObjectClassAssignmentContextProxy>(x, false, rb_cParameterizedObjectClassAssignmentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ParameterizedObjectAssignmentContext*> {
  public:
    VALUE convert(ASN1Parser::ParameterizedObjectAssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ParameterizedObjectAssignmentContext>(x, false, rb_cParameterizedObjectAssignmentContext);
    }
  };

  template <>
  class To_Ruby<ParameterizedObjectAssignmentContextProxy*> {
  public:
    VALUE convert(ParameterizedObjectAssignmentContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ParameterizedObjectAssignmentContextProxy>(x, false, rb_cParameterizedObjectAssignmentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ParameterizedObjectSetAssignmentContext*> {
  public:
    VALUE convert(ASN1Parser::ParameterizedObjectSetAssignmentContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ParameterizedObjectSetAssignmentContext>(x, false, rb_cParameterizedObjectSetAssignmentContext);
    }
  };

  template <>
  class To_Ruby<ParameterizedObjectSetAssignmentContextProxy*> {
  public:
    VALUE convert(ParameterizedObjectSetAssignmentContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<ParameterizedObjectSetAssignmentContextProxy>(x, false, rb_cParameterizedObjectSetAssignmentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ParameterListContext*> {
  public:
    VALUE convert(ASN1Parser::ParameterListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ParameterListContext>(x, false, rb_cParameterListContext);
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
  class To_Ruby<ASN1Parser::ParameterContext*> {
  public:
    VALUE convert(ASN1Parser::ParameterContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ParameterContext>(x, false, rb_cParameterContext);
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
  class To_Ruby<ASN1Parser::ParamGovernorContext*> {
  public:
    VALUE convert(ASN1Parser::ParamGovernorContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ParamGovernorContext>(x, false, rb_cParamGovernorContext);
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
  class To_Ruby<ASN1Parser::DummyReferenceContext*> {
  public:
    VALUE convert(ASN1Parser::DummyReferenceContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::DummyReferenceContext>(x, false, rb_cDummyReferenceContext);
    }
  };

  template <>
  class To_Ruby<DummyReferenceContextProxy*> {
  public:
    VALUE convert(DummyReferenceContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<DummyReferenceContextProxy>(x, false, rb_cDummyReferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::DummyGovernorContext*> {
  public:
    VALUE convert(ASN1Parser::DummyGovernorContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::DummyGovernorContext>(x, false, rb_cDummyGovernorContext);
    }
  };

  template <>
  class To_Ruby<DummyGovernorContextProxy*> {
  public:
    VALUE convert(DummyGovernorContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<DummyGovernorContextProxy>(x, false, rb_cDummyGovernorContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::SimpleDefinedTypeContext*> {
  public:
    VALUE convert(ASN1Parser::SimpleDefinedTypeContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SimpleDefinedTypeContext>(x, false, rb_cSimpleDefinedTypeContext);
    }
  };

  template <>
  class To_Ruby<SimpleDefinedTypeContextProxy*> {
  public:
    VALUE convert(SimpleDefinedTypeContextProxy* const &x) {
      if (!x) return Qnil;
      return Data_Object<SimpleDefinedTypeContextProxy>(x, false, rb_cSimpleDefinedTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<ASN1Parser::ActualParameterListContext*> {
  public:
    VALUE convert(ASN1Parser::ActualParameterListContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ActualParameterListContext>(x, false, rb_cActualParameterListContext);
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
  class To_Ruby<ASN1Parser::SimpleDefinedValueContext*> {
  public:
    VALUE convert(ASN1Parser::SimpleDefinedValueContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::SimpleDefinedValueContext>(x, false, rb_cSimpleDefinedValueContext);
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
  class To_Ruby<ASN1Parser::ActualParameterContext*> {
  public:
    VALUE convert(ASN1Parser::ActualParameterContext* const &x) {
      if (!x) return Qnil;
      return Data_Object<ASN1Parser::ActualParameterContext>(x, false, rb_cActualParameterContext);
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


Object ModuleDefinitionContextProxy::moduleIdentifier() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::ModuleDefinitionContext*)orig) -> moduleIdentifier().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(moduleIdentifierAt(i));
    }
  }

  return std::move(a);
}

Object ModuleDefinitionContextProxy::moduleIdentifierAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ModuleDefinitionContext*)orig) -> moduleIdentifier(i);

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

Object ModuleDefinitionContextProxy::tagDefault() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::ModuleDefinitionContext*)orig) -> tagDefault().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(tagDefaultAt(i));
    }
  }

  return std::move(a);
}

Object ModuleDefinitionContextProxy::tagDefaultAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ModuleDefinitionContext*)orig) -> tagDefault(i);

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
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::ModuleDefinitionContext*)orig) -> extensionDefault().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(extensionDefaultAt(i));
    }
  }

  return std::move(a);
}

Object ModuleDefinitionContextProxy::extensionDefaultAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ModuleDefinitionContext*)orig) -> extensionDefault(i);

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
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::ModuleDefinitionContext*)orig) -> moduleBody().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(moduleBodyAt(i));
    }
  }

  return std::move(a);
}

Object ModuleDefinitionContextProxy::moduleBodyAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ModuleDefinitionContext*)orig) -> moduleBody(i);

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

Object ModuleDefinitionContextProxy::EOF() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ModuleDefinitionContext*)orig) -> EOF();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ModuleDefinitionContextProxy::DEFINITIONS_WORD() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASN1Parser::ModuleDefinitionContext*)orig) -> DEFINITIONS_WORD();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ModuleDefinitionContextProxy::DEFINITIONS_WORDAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ModuleDefinitionContext*)orig) -> DEFINITIONS_WORD(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ModuleDefinitionContextProxy::ASSIGN() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASN1Parser::ModuleDefinitionContext*)orig) -> ASSIGN();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ModuleDefinitionContextProxy::ASSIGNAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ModuleDefinitionContext*)orig) -> ASSIGN(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ModuleDefinitionContextProxy::BEGIN_WORD() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASN1Parser::ModuleDefinitionContext*)orig) -> BEGIN_WORD();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ModuleDefinitionContextProxy::BEGIN_WORDAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ModuleDefinitionContext*)orig) -> BEGIN_WORD(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ModuleDefinitionContextProxy::END_WORD() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASN1Parser::ModuleDefinitionContext*)orig) -> END_WORD();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ModuleDefinitionContextProxy::END_WORDAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ModuleDefinitionContext*)orig) -> END_WORD(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ModuleIdentifierContextProxy::modulereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ModuleIdentifierContext*)orig) -> modulereference();

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

Object ModuleIdentifierContextProxy::definitiveIdentifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ModuleIdentifierContext*)orig) -> definitiveIdentifier();

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

Object TagDefaultContextProxy::TAGS_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::TagDefaultContext*)orig) -> TAGS_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TagDefaultContextProxy::EXPLICIT_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::TagDefaultContext*)orig) -> EXPLICIT_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TagDefaultContextProxy::IMPLICIT_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::TagDefaultContext*)orig) -> IMPLICIT_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TagDefaultContextProxy::AUTOMATIC_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::TagDefaultContext*)orig) -> AUTOMATIC_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtensionDefaultContextProxy::EXTENSIBILITY_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ExtensionDefaultContext*)orig) -> EXTENSIBILITY_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtensionDefaultContextProxy::IMPLIED_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ExtensionDefaultContext*)orig) -> IMPLIED_WORD();

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

  auto ctx = ((ASN1Parser::ModuleBodyContext*)orig) -> exports();

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

  auto ctx = ((ASN1Parser::ModuleBodyContext*)orig) -> imports();

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

  auto ctx = ((ASN1Parser::ModuleBodyContext*)orig) -> assignmentList();

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

Object ModulereferenceContextProxy::ReferenceItem() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ModulereferenceContext*)orig) -> ReferenceItem();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinitiveIdentifierContextProxy::definitiveObjIdComponentList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinitiveIdentifierContext*)orig) -> definitiveObjIdComponentList();

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

Object DefinitiveIdentifierContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::DefinitiveIdentifierContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinitiveIdentifierContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::DefinitiveIdentifierContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinitiveObjIdComponentListContextProxy::definitiveObjIdComponent() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::DefinitiveObjIdComponentListContext*)orig) -> definitiveObjIdComponent().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(definitiveObjIdComponentAt(i));
    }
  }

  return std::move(a);
}

Object DefinitiveObjIdComponentListContextProxy::definitiveObjIdComponentAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinitiveObjIdComponentListContext*)orig) -> definitiveObjIdComponent(i);

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

Object DefinitiveObjIdComponentContextProxy::nameForm() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinitiveObjIdComponentContext*)orig) -> nameForm();

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

Object DefinitiveObjIdComponentContextProxy::definitiveNumberForm() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinitiveObjIdComponentContext*)orig) -> definitiveNumberForm();

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

Object DefinitiveObjIdComponentContextProxy::definitiveNameAndNumberForm() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinitiveObjIdComponentContext*)orig) -> definitiveNameAndNumberForm();

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

Object NameFormContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::NameFormContext*)orig) -> identifier();

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

Object DefinitiveNumberFormContextProxy::number() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinitiveNumberFormContext*)orig) -> number();

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

Object DefinitiveNameAndNumberFormContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinitiveNameAndNumberFormContext*)orig) -> identifier();

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

Object DefinitiveNameAndNumberFormContextProxy::definitiveNumberForm() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinitiveNameAndNumberFormContext*)orig) -> definitiveNumberForm();

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

Object DefinitiveNameAndNumberFormContextProxy::L_PAREN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::DefinitiveNameAndNumberFormContext*)orig) -> L_PAREN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinitiveNameAndNumberFormContextProxy::R_PAREN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::DefinitiveNameAndNumberFormContext*)orig) -> R_PAREN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NumberContextProxy::NumberItem() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::NumberContext*)orig) -> NumberItem();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IdentifierContextProxy::IdentifierOrValueItem() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::IdentifierContext*)orig) -> IdentifierOrValueItem();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExportsContextProxy::symbolsExported() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ExportsContext*)orig) -> symbolsExported();

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

Object ExportsContextProxy::EXPORTS_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ExportsContext*)orig) -> EXPORTS_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExportsContextProxy::ALL_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ExportsContext*)orig) -> ALL_WORD();

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

  auto ctx = ((ASN1Parser::ImportsContext*)orig) -> symbolsImported();

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

Object ImportsContextProxy::IMPORTS_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ImportsContext*)orig) -> IMPORTS_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object AssignmentListContextProxy::assignment() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::AssignmentListContext*)orig) -> assignment().size();

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

  auto ctx = ((ASN1Parser::AssignmentListContext*)orig) -> assignment(i);

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

  auto ctx = ((ASN1Parser::SymbolsExportedContext*)orig) -> symbolList();

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
    size_t count = ((ASN1Parser::SymbolListContext*)orig) -> symbol().size();

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

  auto ctx = ((ASN1Parser::SymbolListContext*)orig) -> symbol(i);

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

  auto vec = ((ASN1Parser::SymbolListContext*)orig) -> COMMA();

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

  auto token = ((ASN1Parser::SymbolListContext*)orig) -> COMMA(i);

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

  auto ctx = ((ASN1Parser::SymbolsImportedContext*)orig) -> symbolsFromModuleList();

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
    size_t count = ((ASN1Parser::SymbolsFromModuleListContext*)orig) -> symbolsFromModule().size();

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

  auto ctx = ((ASN1Parser::SymbolsFromModuleListContext*)orig) -> symbolsFromModule(i);

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

  auto ctx = ((ASN1Parser::SymbolsFromModuleContext*)orig) -> symbolList();

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

  auto ctx = ((ASN1Parser::SymbolsFromModuleContext*)orig) -> globalModuleReference();

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

Object SymbolsFromModuleContextProxy::FROM_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::SymbolsFromModuleContext*)orig) -> FROM_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object GlobalModuleReferenceContextProxy::modulereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::GlobalModuleReferenceContext*)orig) -> modulereference();

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

Object GlobalModuleReferenceContextProxy::assignedIdentifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::GlobalModuleReferenceContext*)orig) -> assignedIdentifier();

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

Object AssignedIdentifierContextProxy::objectIdentifierValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::AssignedIdentifierContext*)orig) -> objectIdentifierValue();

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

Object AssignedIdentifierContextProxy::definedValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::AssignedIdentifierContext*)orig) -> definedValue();

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

Object ObjectIdentifierValueContextProxy::objIdComponentsList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectIdentifierValueContext*)orig) -> objIdComponentsList();

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

Object ObjectIdentifierValueContextProxy::definedValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectIdentifierValueContext*)orig) -> definedValue();

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

  auto token = ((ASN1Parser::ObjectIdentifierValueContext*)orig) -> L_BRACE();

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

  auto token = ((ASN1Parser::ObjectIdentifierValueContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinedValueContextProxy::externalValueReference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinedValueContext*)orig) -> externalValueReference();

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

Object DefinedValueContextProxy::valuereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinedValueContext*)orig) -> valuereference();

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

Object DefinedValueContextProxy::parameterizedValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinedValueContext*)orig) -> parameterizedValue();

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

Object SymbolContextProxy::reference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SymbolContext*)orig) -> reference();

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

Object SymbolContextProxy::parameterizedReference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SymbolContext*)orig) -> parameterizedReference();

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

Object ReferenceContextProxy::typereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ReferenceContext*)orig) -> typereference();

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

Object ReferenceContextProxy::valuereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ReferenceContext*)orig) -> valuereference();

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

Object ReferenceContextProxy::objectclassreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ReferenceContext*)orig) -> objectclassreference();

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

Object ReferenceContextProxy::objectreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ReferenceContext*)orig) -> objectreference();

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

Object ReferenceContextProxy::objectsetreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ReferenceContext*)orig) -> objectsetreference();

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

Object ParameterizedReferenceContextProxy::reference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedReferenceContext*)orig) -> reference();

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

Object ParameterizedReferenceContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ParameterizedReferenceContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterizedReferenceContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ParameterizedReferenceContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypereferenceContextProxy::ReferenceItem() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::TypereferenceContext*)orig) -> ReferenceItem();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValuereferenceContextProxy::IdentifierOrValueItem() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ValuereferenceContext*)orig) -> IdentifierOrValueItem();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectclassreferenceContextProxy::ReferenceItem() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ObjectclassreferenceContext*)orig) -> ReferenceItem();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectreferenceContextProxy::IdentifierOrValueItem() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ObjectreferenceContext*)orig) -> IdentifierOrValueItem();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectsetreferenceContextProxy::ReferenceItem() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ObjectsetreferenceContext*)orig) -> ReferenceItem();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object AssignmentContextProxy::typeAssignment() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::AssignmentContext*)orig) -> typeAssignment();

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

Object AssignmentContextProxy::valueAssignment() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::AssignmentContext*)orig) -> valueAssignment();

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

Object AssignmentContextProxy::valueSetTypeAssignment() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::AssignmentContext*)orig) -> valueSetTypeAssignment();

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

  auto ctx = ((ASN1Parser::AssignmentContext*)orig) -> objectClassAssignment();

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

Object AssignmentContextProxy::objectAssignment() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::AssignmentContext*)orig) -> objectAssignment();

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

Object AssignmentContextProxy::objectSetAssignment() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::AssignmentContext*)orig) -> objectSetAssignment();

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

  auto ctx = ((ASN1Parser::AssignmentContext*)orig) -> parameterizedAssignment();

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

Object TypeAssignmentContextProxy::typereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TypeAssignmentContext*)orig) -> typereference();

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

Object TypeAssignmentContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TypeAssignmentContext*)orig) -> type();

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

Object TypeAssignmentContextProxy::ASSIGN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::TypeAssignmentContext*)orig) -> ASSIGN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValueAssignmentContextProxy::valuereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ValueAssignmentContext*)orig) -> valuereference();

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

Object ValueAssignmentContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ValueAssignmentContext*)orig) -> type();

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

  auto ctx = ((ASN1Parser::ValueAssignmentContext*)orig) -> value();

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

Object ValueAssignmentContextProxy::ASSIGN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ValueAssignmentContext*)orig) -> ASSIGN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValueSetTypeAssignmentContextProxy::typereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ValueSetTypeAssignmentContext*)orig) -> typereference();

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

Object ValueSetTypeAssignmentContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ValueSetTypeAssignmentContext*)orig) -> type();

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

Object ValueSetTypeAssignmentContextProxy::valueSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ValueSetTypeAssignmentContext*)orig) -> valueSet();

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

Object ValueSetTypeAssignmentContextProxy::ASSIGN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ValueSetTypeAssignmentContext*)orig) -> ASSIGN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectClassAssignmentContextProxy::objectclassreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectClassAssignmentContext*)orig) -> objectclassreference();

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

Object ObjectClassAssignmentContextProxy::objectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectClassAssignmentContext*)orig) -> objectClass();

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

Object ObjectClassAssignmentContextProxy::ASSIGN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ObjectClassAssignmentContext*)orig) -> ASSIGN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectAssignmentContextProxy::objectreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectAssignmentContext*)orig) -> objectreference();

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

Object ObjectAssignmentContextProxy::definedObjectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectAssignmentContext*)orig) -> definedObjectClass();

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

Object ObjectAssignmentContextProxy::object() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectAssignmentContext*)orig) -> object();

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

Object ObjectAssignmentContextProxy::ASSIGN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ObjectAssignmentContext*)orig) -> ASSIGN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectSetAssignmentContextProxy::objectsetreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectSetAssignmentContext*)orig) -> objectsetreference();

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

Object ObjectSetAssignmentContextProxy::definedObjectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectSetAssignmentContext*)orig) -> definedObjectClass();

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

Object ObjectSetAssignmentContextProxy::objectSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectSetAssignmentContext*)orig) -> objectSet();

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

Object ObjectSetAssignmentContextProxy::ASSIGN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ObjectSetAssignmentContext*)orig) -> ASSIGN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterizedAssignmentContextProxy::parameterizedTypeAssignment() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedAssignmentContext*)orig) -> parameterizedTypeAssignment();

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

Object ParameterizedAssignmentContextProxy::parameterizedValueAssignment() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedAssignmentContext*)orig) -> parameterizedValueAssignment();

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

Object ParameterizedAssignmentContextProxy::parameterizedValueSetTypeAssignment() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedAssignmentContext*)orig) -> parameterizedValueSetTypeAssignment();

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

Object ParameterizedAssignmentContextProxy::parameterizedObjectClassAssignment() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedAssignmentContext*)orig) -> parameterizedObjectClassAssignment();

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

Object ParameterizedAssignmentContextProxy::parameterizedObjectAssignment() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedAssignmentContext*)orig) -> parameterizedObjectAssignment();

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

Object ParameterizedAssignmentContextProxy::parameterizedObjectSetAssignment() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedAssignmentContext*)orig) -> parameterizedObjectSetAssignment();

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

Object DefinedTypeContextProxy::externalTypeReference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinedTypeContext*)orig) -> externalTypeReference();

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

Object DefinedTypeContextProxy::typereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinedTypeContext*)orig) -> typereference();

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

Object DefinedTypeContextProxy::parameterizedType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinedTypeContext*)orig) -> parameterizedType();

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

Object DefinedTypeContextProxy::parameterizedValueSetType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinedTypeContext*)orig) -> parameterizedValueSetType();

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

Object ExternalTypeReferenceContextProxy::modulereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ExternalTypeReferenceContext*)orig) -> modulereference();

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

Object ExternalTypeReferenceContextProxy::typereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ExternalTypeReferenceContext*)orig) -> typereference();

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

Object ExternalTypeReferenceContextProxy::DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ExternalTypeReferenceContext*)orig) -> DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterizedTypeContextProxy::simpleDefinedType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedTypeContext*)orig) -> simpleDefinedType();

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

Object ParameterizedTypeContextProxy::actualParameterList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedTypeContext*)orig) -> actualParameterList();

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

Object ParameterizedValueSetTypeContextProxy::simpleDefinedType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedValueSetTypeContext*)orig) -> simpleDefinedType();

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

Object ParameterizedValueSetTypeContextProxy::actualParameterList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedValueSetTypeContext*)orig) -> actualParameterList();

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

Object ExternalValueReferenceContextProxy::modulereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ExternalValueReferenceContext*)orig) -> modulereference();

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

Object ExternalValueReferenceContextProxy::valuereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ExternalValueReferenceContext*)orig) -> valuereference();

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

Object ExternalValueReferenceContextProxy::DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ExternalValueReferenceContext*)orig) -> DOT();

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

  auto ctx = ((ASN1Parser::ParameterizedValueContext*)orig) -> simpleDefinedValue();

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

  auto ctx = ((ASN1Parser::ParameterizedValueContext*)orig) -> actualParameterList();

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

Object TypeContextProxy::builtinType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TypeContext*)orig) -> builtinType();

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

Object TypeContextProxy::referencedType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TypeContext*)orig) -> referencedType();

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

Object TypeContextProxy::constrainedType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TypeContext*)orig) -> constrainedType();

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

Object ValueContextProxy::builtinValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ValueContext*)orig) -> builtinValue();

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

Object ValueContextProxy::referencedValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ValueContext*)orig) -> referencedValue();

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

Object ValueContextProxy::objectClassFieldValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ValueContext*)orig) -> objectClassFieldValue();

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

Object ValueSetContextProxy::elementSetSpecs() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ValueSetContext*)orig) -> elementSetSpecs();

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

  auto token = ((ASN1Parser::ValueSetContext*)orig) -> L_BRACE();

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

  auto token = ((ASN1Parser::ValueSetContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ElementSetSpecsContextProxy::rootElementSetSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ElementSetSpecsContext*)orig) -> rootElementSetSpec();

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

  auto ctx = ((ASN1Parser::ElementSetSpecsContext*)orig) -> additionalElementSetSpec();

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

  auto vec = ((ASN1Parser::ElementSetSpecsContext*)orig) -> COMMA();

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

  auto token = ((ASN1Parser::ElementSetSpecsContext*)orig) -> COMMA(i);

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

  auto token = ((ASN1Parser::ElementSetSpecsContext*)orig) -> ELLIPSIS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BuiltinTypeContextProxy::bitStringType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BuiltinTypeContext*)orig) -> bitStringType();

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

Object BuiltinTypeContextProxy::booleanType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BuiltinTypeContext*)orig) -> booleanType();

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

Object BuiltinTypeContextProxy::characterStringType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BuiltinTypeContext*)orig) -> characterStringType();

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

  auto ctx = ((ASN1Parser::BuiltinTypeContext*)orig) -> choiceType();

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

  auto ctx = ((ASN1Parser::BuiltinTypeContext*)orig) -> enumeratedType();

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

  auto ctx = ((ASN1Parser::BuiltinTypeContext*)orig) -> integerType();

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

Object BuiltinTypeContextProxy::nullType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BuiltinTypeContext*)orig) -> nullType();

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

  auto ctx = ((ASN1Parser::BuiltinTypeContext*)orig) -> objectClassFieldType();

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

Object BuiltinTypeContextProxy::objectIdentifierType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BuiltinTypeContext*)orig) -> objectIdentifierType();

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

Object BuiltinTypeContextProxy::octetStringType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BuiltinTypeContext*)orig) -> octetStringType();

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

  auto ctx = ((ASN1Parser::BuiltinTypeContext*)orig) -> sequenceType();

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

  auto ctx = ((ASN1Parser::BuiltinTypeContext*)orig) -> sequenceOfType();

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

  auto ctx = ((ASN1Parser::BuiltinTypeContext*)orig) -> setType();

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

  auto ctx = ((ASN1Parser::BuiltinTypeContext*)orig) -> setOfType();

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

Object BuiltinTypeContextProxy::taggedType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BuiltinTypeContext*)orig) -> taggedType();

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

Object BuiltinTypeContextProxy::anyType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BuiltinTypeContext*)orig) -> anyType();

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

Object ReferencedTypeContextProxy::definedType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ReferencedTypeContext*)orig) -> definedType();

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

Object ReferencedTypeContextProxy::usefulType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ReferencedTypeContext*)orig) -> usefulType();

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

Object ReferencedTypeContextProxy::typeFromObject() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ReferencedTypeContext*)orig) -> typeFromObject();

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

Object ReferencedTypeContextProxy::valueSetFromObjects() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ReferencedTypeContext*)orig) -> valueSetFromObjects();

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

Object ConstrainedTypeContextProxy::constraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ConstrainedTypeContext*)orig) -> constraint();

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

Object ConstrainedTypeContextProxy::builtinType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ConstrainedTypeContext*)orig) -> builtinType();

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

Object ConstrainedTypeContextProxy::referencedType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ConstrainedTypeContext*)orig) -> referencedType();

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

Object ConstrainedTypeContextProxy::typeWithConstraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ConstrainedTypeContext*)orig) -> typeWithConstraint();

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

Object BitStringTypeContextProxy::namedBitList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BitStringTypeContext*)orig) -> namedBitList();

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

Object BitStringTypeContextProxy::BIT_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::BitStringTypeContext*)orig) -> BIT_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BitStringTypeContextProxy::STRING_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::BitStringTypeContext*)orig) -> STRING_WORD();

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

  auto token = ((ASN1Parser::BitStringTypeContext*)orig) -> L_BRACE();

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

  auto token = ((ASN1Parser::BitStringTypeContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BooleanTypeContextProxy::BOOLEAN_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::BooleanTypeContext*)orig) -> BOOLEAN_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object CharacterStringTypeContextProxy::restrictedCharacterStringType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::CharacterStringTypeContext*)orig) -> restrictedCharacterStringType();

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

Object CharacterStringTypeContextProxy::unrestrictedCharacterStringType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::CharacterStringTypeContext*)orig) -> unrestrictedCharacterStringType();

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

Object ChoiceTypeContextProxy::alternativeTypeLists() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ChoiceTypeContext*)orig) -> alternativeTypeLists();

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

Object ChoiceTypeContextProxy::CHOICE_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ChoiceTypeContext*)orig) -> CHOICE_WORD();

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

  auto token = ((ASN1Parser::ChoiceTypeContext*)orig) -> L_BRACE();

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

  auto token = ((ASN1Parser::ChoiceTypeContext*)orig) -> R_BRACE();

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

  auto ctx = ((ASN1Parser::EnumeratedTypeContext*)orig) -> enumerations();

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

Object EnumeratedTypeContextProxy::ENUMERATED_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::EnumeratedTypeContext*)orig) -> ENUMERATED_WORD();

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

  auto token = ((ASN1Parser::EnumeratedTypeContext*)orig) -> L_BRACE();

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

  auto token = ((ASN1Parser::EnumeratedTypeContext*)orig) -> R_BRACE();

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

  auto ctx = ((ASN1Parser::IntegerTypeContext*)orig) -> namedNumberList();

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

Object IntegerTypeContextProxy::INTEGER_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::IntegerTypeContext*)orig) -> INTEGER_WORD();

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

  auto token = ((ASN1Parser::IntegerTypeContext*)orig) -> L_BRACE();

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

  auto token = ((ASN1Parser::IntegerTypeContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NullTypeContextProxy::NULL_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::NullTypeContext*)orig) -> NULL_WORD();

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

  auto ctx = ((ASN1Parser::ObjectClassFieldTypeContext*)orig) -> definedObjectClass();

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

  auto ctx = ((ASN1Parser::ObjectClassFieldTypeContext*)orig) -> fieldName();

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

  auto token = ((ASN1Parser::ObjectClassFieldTypeContext*)orig) -> DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectIdentifierTypeContextProxy::OBJECT_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ObjectIdentifierTypeContext*)orig) -> OBJECT_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectIdentifierTypeContextProxy::IDENTIFIER_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ObjectIdentifierTypeContext*)orig) -> IDENTIFIER_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object OctetStringTypeContextProxy::OCTET_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::OctetStringTypeContext*)orig) -> OCTET_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object OctetStringTypeContextProxy::STRING_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::OctetStringTypeContext*)orig) -> STRING_WORD();

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

  auto ctx = ((ASN1Parser::SequenceTypeContext*)orig) -> extensionAndException();

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

  auto ctx = ((ASN1Parser::SequenceTypeContext*)orig) -> componentTypeLists();

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

Object SequenceTypeContextProxy::SEQUENCE_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::SequenceTypeContext*)orig) -> SEQUENCE_WORD();

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

  auto token = ((ASN1Parser::SequenceTypeContext*)orig) -> L_BRACE();

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

  auto token = ((ASN1Parser::SequenceTypeContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SequenceOfTypeContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SequenceOfTypeContext*)orig) -> type();

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

  auto ctx = ((ASN1Parser::SequenceOfTypeContext*)orig) -> namedType();

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

Object SequenceOfTypeContextProxy::SEQUENCE_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::SequenceOfTypeContext*)orig) -> SEQUENCE_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SequenceOfTypeContextProxy::OF_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::SequenceOfTypeContext*)orig) -> OF_WORD();

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

  auto ctx = ((ASN1Parser::SetTypeContext*)orig) -> extensionAndException();

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

  auto ctx = ((ASN1Parser::SetTypeContext*)orig) -> optionalExtensionMarker();

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

  auto ctx = ((ASN1Parser::SetTypeContext*)orig) -> componentTypeLists();

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

Object SetTypeContextProxy::SET_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::SetTypeContext*)orig) -> SET_WORD();

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

  auto token = ((ASN1Parser::SetTypeContext*)orig) -> L_BRACE();

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

  auto token = ((ASN1Parser::SetTypeContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SetOfTypeContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SetOfTypeContext*)orig) -> type();

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

  auto ctx = ((ASN1Parser::SetOfTypeContext*)orig) -> namedType();

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

Object SetOfTypeContextProxy::SET_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::SetOfTypeContext*)orig) -> SET_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SetOfTypeContextProxy::OF_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::SetOfTypeContext*)orig) -> OF_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TaggedTypeContextProxy::tag() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TaggedTypeContext*)orig) -> tag();

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

Object TaggedTypeContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TaggedTypeContext*)orig) -> type();

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

Object TaggedTypeContextProxy::IMPLICIT_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::TaggedTypeContext*)orig) -> IMPLICIT_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TaggedTypeContextProxy::EXPLICIT_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::TaggedTypeContext*)orig) -> EXPLICIT_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object AnyTypeContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::AnyTypeContext*)orig) -> identifier();

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

Object AnyTypeContextProxy::ANY_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::AnyTypeContext*)orig) -> ANY_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object AnyTypeContextProxy::DEFINED_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::AnyTypeContext*)orig) -> DEFINED_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object AnyTypeContextProxy::BY_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::AnyTypeContext*)orig) -> BY_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeFromObjectContextProxy::referencedObjects() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TypeFromObjectContext*)orig) -> referencedObjects();

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

Object TypeFromObjectContextProxy::fieldName() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TypeFromObjectContext*)orig) -> fieldName();

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

Object TypeFromObjectContextProxy::DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::TypeFromObjectContext*)orig) -> DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValueSetFromObjectsContextProxy::referencedObjects() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ValueSetFromObjectsContext*)orig) -> referencedObjects();

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

Object ValueSetFromObjectsContextProxy::fieldName() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ValueSetFromObjectsContext*)orig) -> fieldName();

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

Object ValueSetFromObjectsContextProxy::DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ValueSetFromObjectsContext*)orig) -> DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NamedTypeContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::NamedTypeContext*)orig) -> identifier();

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

Object NamedTypeContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::NamedTypeContext*)orig) -> type();

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

Object BuiltinValueContextProxy::bitStringValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BuiltinValueContext*)orig) -> bitStringValue();

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

  auto ctx = ((ASN1Parser::BuiltinValueContext*)orig) -> booleanValue();

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

Object BuiltinValueContextProxy::characterStringValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BuiltinValueContext*)orig) -> characterStringValue();

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

Object BuiltinValueContextProxy::enumeratedValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BuiltinValueContext*)orig) -> enumeratedValue();

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

  auto ctx = ((ASN1Parser::BuiltinValueContext*)orig) -> integerValue();

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

Object BuiltinValueContextProxy::nullValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BuiltinValueContext*)orig) -> nullValue();

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

  auto ctx = ((ASN1Parser::BuiltinValueContext*)orig) -> objectIdentifierValue();

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

Object BuiltinValueContextProxy::octetStringValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BuiltinValueContext*)orig) -> octetStringValue();

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

Object BuiltinValueContextProxy::sequenceValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BuiltinValueContext*)orig) -> sequenceValue();

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

Object BuiltinValueContextProxy::sequenceOfValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BuiltinValueContext*)orig) -> sequenceOfValue();

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

Object BuiltinValueContextProxy::setValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BuiltinValueContext*)orig) -> setValue();

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

Object BuiltinValueContextProxy::setOfValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BuiltinValueContext*)orig) -> setOfValue();

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

Object ReferencedValueContextProxy::definedValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ReferencedValueContext*)orig) -> definedValue();

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

Object ReferencedValueContextProxy::valueFromObject() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ReferencedValueContext*)orig) -> valueFromObject();

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

Object ObjectClassFieldValueContextProxy::openTypeFieldVal() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectClassFieldValueContext*)orig) -> openTypeFieldVal();

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

Object ObjectClassFieldValueContextProxy::fixedTypeFieldVal() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectClassFieldValueContext*)orig) -> fixedTypeFieldVal();

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

Object BitStringValueContextProxy::bstring() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BitStringValueContext*)orig) -> bstring();

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

Object BitStringValueContextProxy::hstring() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BitStringValueContext*)orig) -> hstring();

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

Object BitStringValueContextProxy::identifierList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BitStringValueContext*)orig) -> identifierList();

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

Object BitStringValueContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::BitStringValueContext*)orig) -> value();

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

Object BitStringValueContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::BitStringValueContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BitStringValueContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::BitStringValueContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BitStringValueContextProxy::CONTAINING_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::BitStringValueContext*)orig) -> CONTAINING_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BooleanValueContextProxy::TRUE_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::BooleanValueContext*)orig) -> TRUE_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BooleanValueContextProxy::FALSE_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::BooleanValueContext*)orig) -> FALSE_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object CharacterStringValueContextProxy::restrictedCharacterStringValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::CharacterStringValueContext*)orig) -> restrictedCharacterStringValue();

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

Object EnumeratedValueContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::EnumeratedValueContext*)orig) -> identifier();

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

Object IntegerValueContextProxy::signedNumber() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::IntegerValueContext*)orig) -> signedNumber();

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

Object IntegerValueContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::IntegerValueContext*)orig) -> identifier();

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

Object NullValueContextProxy::NULL_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::NullValueContext*)orig) -> NULL_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object OctetStringValueContextProxy::bstring() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::OctetStringValueContext*)orig) -> bstring();

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

Object OctetStringValueContextProxy::hstring() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::OctetStringValueContext*)orig) -> hstring();

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

Object OctetStringValueContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::OctetStringValueContext*)orig) -> value();

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

Object OctetStringValueContextProxy::CONTAINING_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::OctetStringValueContext*)orig) -> CONTAINING_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SequenceValueContextProxy::componentValueList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SequenceValueContext*)orig) -> componentValueList();

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

Object SequenceValueContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::SequenceValueContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SequenceValueContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::SequenceValueContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SequenceOfValueContextProxy::valueList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SequenceOfValueContext*)orig) -> valueList();

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

Object SequenceOfValueContextProxy::namedValueList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SequenceOfValueContext*)orig) -> namedValueList();

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

Object SequenceOfValueContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::SequenceOfValueContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SequenceOfValueContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::SequenceOfValueContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SetValueContextProxy::componentValueList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SetValueContext*)orig) -> componentValueList();

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

Object SetValueContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::SetValueContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SetValueContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::SetValueContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SetOfValueContextProxy::valueList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SetOfValueContext*)orig) -> valueList();

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

Object SetOfValueContextProxy::namedValueList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SetOfValueContext*)orig) -> namedValueList();

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

Object SetOfValueContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::SetOfValueContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SetOfValueContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::SetOfValueContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValueFromObjectContextProxy::referencedObjects() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ValueFromObjectContext*)orig) -> referencedObjects();

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

Object ValueFromObjectContextProxy::fieldName() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ValueFromObjectContext*)orig) -> fieldName();

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

Object ValueFromObjectContextProxy::DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ValueFromObjectContext*)orig) -> DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NamedValueContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::NamedValueContext*)orig) -> identifier();

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

Object NamedValueContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::NamedValueContext*)orig) -> value();

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

Object NamedNumberListContextProxy::namedNumber() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::NamedNumberListContext*)orig) -> namedNumber().size();

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

  auto ctx = ((ASN1Parser::NamedNumberListContext*)orig) -> namedNumber(i);

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

  auto vec = ((ASN1Parser::NamedNumberListContext*)orig) -> COMMA();

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

  auto token = ((ASN1Parser::NamedNumberListContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NamedNumberContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::NamedNumberContext*)orig) -> identifier();

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

Object NamedNumberContextProxy::signedNumber() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::NamedNumberContext*)orig) -> signedNumber();

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

  auto ctx = ((ASN1Parser::NamedNumberContext*)orig) -> definedValue();

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

Object NamedNumberContextProxy::L_PAREN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::NamedNumberContext*)orig) -> L_PAREN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NamedNumberContextProxy::R_PAREN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::NamedNumberContext*)orig) -> R_PAREN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SignedNumberContextProxy::number() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SignedNumberContext*)orig) -> number();

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

Object SignedNumberContextProxy::MINUS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::SignedNumberContext*)orig) -> MINUS();

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

  auto ctx = ((ASN1Parser::EnumerationsContext*)orig) -> rootEnumeration();

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

  auto ctx = ((ASN1Parser::EnumerationsContext*)orig) -> exceptionSpec();

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

  auto ctx = ((ASN1Parser::EnumerationsContext*)orig) -> additionalEnumeration();

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

  auto vec = ((ASN1Parser::EnumerationsContext*)orig) -> COMMA();

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

  auto token = ((ASN1Parser::EnumerationsContext*)orig) -> COMMA(i);

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

  auto token = ((ASN1Parser::EnumerationsContext*)orig) -> ELLIPSIS();

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

  auto ctx = ((ASN1Parser::RootEnumerationContext*)orig) -> enumeration();

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

Object ExceptionSpecContextProxy::exceptionIdentification() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ExceptionSpecContext*)orig) -> exceptionIdentification();

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

  auto ctx = ((ASN1Parser::AdditionalEnumerationContext*)orig) -> enumeration();

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
    size_t count = ((ASN1Parser::EnumerationContext*)orig) -> enumerationItem().size();

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

  auto ctx = ((ASN1Parser::EnumerationContext*)orig) -> enumerationItem(i);

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

  auto vec = ((ASN1Parser::EnumerationContext*)orig) -> COMMA();

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

  auto token = ((ASN1Parser::EnumerationContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object EnumerationItemContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::EnumerationItemContext*)orig) -> identifier();

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

Object EnumerationItemContextProxy::namedNumber() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::EnumerationItemContext*)orig) -> namedNumber();

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

Object NamedBitListContextProxy::namedBit() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::NamedBitListContext*)orig) -> namedBit().size();

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

  auto ctx = ((ASN1Parser::NamedBitListContext*)orig) -> namedBit(i);

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

  auto vec = ((ASN1Parser::NamedBitListContext*)orig) -> COMMA();

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

  auto token = ((ASN1Parser::NamedBitListContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NamedBitContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::NamedBitContext*)orig) -> identifier();

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

Object NamedBitContextProxy::number() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::NamedBitContext*)orig) -> number();

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

Object NamedBitContextProxy::definedValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::NamedBitContext*)orig) -> definedValue();

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

Object NamedBitContextProxy::L_PAREN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::NamedBitContext*)orig) -> L_PAREN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NamedBitContextProxy::R_PAREN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::NamedBitContext*)orig) -> R_PAREN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BstringContextProxy::BStringItem() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::BstringContext*)orig) -> BStringItem();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object HstringContextProxy::HStringItem() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::HstringContext*)orig) -> HStringItem();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IdentifierListContextProxy::identifier() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::IdentifierListContext*)orig) -> identifier().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(identifierAt(i));
    }
  }

  return std::move(a);
}

Object IdentifierListContextProxy::identifierAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::IdentifierListContext*)orig) -> identifier(i);

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

Object IdentifierListContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASN1Parser::IdentifierListContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object IdentifierListContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::IdentifierListContext*)orig) -> COMMA(i);

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

  auto ctx = ((ASN1Parser::ExtensionAndExceptionContext*)orig) -> exceptionSpec();

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

  auto token = ((ASN1Parser::ExtensionAndExceptionContext*)orig) -> ELLIPSIS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentTypeListsContextProxy::rootComponentTypeList() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::ComponentTypeListsContext*)orig) -> rootComponentTypeList().size();

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

  auto ctx = ((ASN1Parser::ComponentTypeListsContext*)orig) -> rootComponentTypeList(i);

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

  auto ctx = ((ASN1Parser::ComponentTypeListsContext*)orig) -> extensionAndException();

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

  auto ctx = ((ASN1Parser::ComponentTypeListsContext*)orig) -> extensionAdditions();

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

  auto ctx = ((ASN1Parser::ComponentTypeListsContext*)orig) -> optionalExtensionMarker();

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

Object ComponentTypeListsContextProxy::extensionEndMarker() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ComponentTypeListsContext*)orig) -> extensionEndMarker();

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

  auto vec = ((ASN1Parser::ComponentTypeListsContext*)orig) -> COMMA();

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

  auto token = ((ASN1Parser::ComponentTypeListsContext*)orig) -> COMMA(i);

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

  auto ctx = ((ASN1Parser::RootComponentTypeListContext*)orig) -> componentTypeList();

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

  auto ctx = ((ASN1Parser::ExtensionAdditionsContext*)orig) -> extensionAdditionList();

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

  auto token = ((ASN1Parser::ExtensionAdditionsContext*)orig) -> COMMA();

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

  auto token = ((ASN1Parser::OptionalExtensionMarkerContext*)orig) -> COMMA();

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

  auto token = ((ASN1Parser::OptionalExtensionMarkerContext*)orig) -> ELLIPSIS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtensionEndMarkerContextProxy::COMMA() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ExtensionEndMarkerContext*)orig) -> COMMA();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtensionEndMarkerContextProxy::ELLIPSIS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ExtensionEndMarkerContext*)orig) -> ELLIPSIS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentTypeListContextProxy::componentType() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::ComponentTypeListContext*)orig) -> componentType().size();

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

  auto ctx = ((ASN1Parser::ComponentTypeListContext*)orig) -> componentType(i);

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

  auto vec = ((ASN1Parser::ComponentTypeListContext*)orig) -> COMMA();

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

  auto token = ((ASN1Parser::ComponentTypeListContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtensionAdditionListContextProxy::extensionAddition() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::ExtensionAdditionListContext*)orig) -> extensionAddition().size();

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

  auto ctx = ((ASN1Parser::ExtensionAdditionListContext*)orig) -> extensionAddition(i);

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

  auto vec = ((ASN1Parser::ExtensionAdditionListContext*)orig) -> COMMA();

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

  auto token = ((ASN1Parser::ExtensionAdditionListContext*)orig) -> COMMA(i);

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

  auto ctx = ((ASN1Parser::ExtensionAdditionContext*)orig) -> componentType();

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

  auto ctx = ((ASN1Parser::ExtensionAdditionContext*)orig) -> extensionAdditionGroup();

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

Object ComponentTypeContextProxy::namedType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ComponentTypeContext*)orig) -> namedType();

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

  auto ctx = ((ASN1Parser::ComponentTypeContext*)orig) -> value();

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

Object ComponentTypeContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ComponentTypeContext*)orig) -> type();

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

Object ComponentTypeContextProxy::OPTIONAL_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ComponentTypeContext*)orig) -> OPTIONAL_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentTypeContextProxy::DEFAULT_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ComponentTypeContext*)orig) -> DEFAULT_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentTypeContextProxy::COMPONENTS_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ComponentTypeContext*)orig) -> COMPONENTS_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentTypeContextProxy::OF_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ComponentTypeContext*)orig) -> OF_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtensionAdditionGroupContextProxy::versionNumber() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ExtensionAdditionGroupContext*)orig) -> versionNumber();

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

  auto ctx = ((ASN1Parser::ExtensionAdditionGroupContext*)orig) -> componentTypeList();

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

Object ExtensionAdditionGroupContextProxy::LV_BRACKET() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ExtensionAdditionGroupContext*)orig) -> LV_BRACKET();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtensionAdditionGroupContextProxy::RV_BRACKET() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ExtensionAdditionGroupContext*)orig) -> RV_BRACKET();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object VersionNumberContextProxy::number() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::VersionNumberContext*)orig) -> number();

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

Object VersionNumberContextProxy::COLON() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::VersionNumberContext*)orig) -> COLON();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComponentValueListContextProxy::namedValue() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::ComponentValueListContext*)orig) -> namedValue().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(namedValueAt(i));
    }
  }

  return std::move(a);
}

Object ComponentValueListContextProxy::namedValueAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ComponentValueListContext*)orig) -> namedValue(i);

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

Object ComponentValueListContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASN1Parser::ComponentValueListContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ComponentValueListContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ComponentValueListContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValueListContextProxy::value() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::ValueListContext*)orig) -> value().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(valueAt(i));
    }
  }

  return std::move(a);
}

Object ValueListContextProxy::valueAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ValueListContext*)orig) -> value(i);

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

Object ValueListContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASN1Parser::ValueListContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ValueListContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ValueListContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NamedValueListContextProxy::namedValue() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::NamedValueListContext*)orig) -> namedValue().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(namedValueAt(i));
    }
  }

  return std::move(a);
}

Object NamedValueListContextProxy::namedValueAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::NamedValueListContext*)orig) -> namedValue(i);

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

Object NamedValueListContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASN1Parser::NamedValueListContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object NamedValueListContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::NamedValueListContext*)orig) -> COMMA(i);

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

  auto ctx = ((ASN1Parser::AlternativeTypeListsContext*)orig) -> rootAlternativeTypeList();

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

  auto ctx = ((ASN1Parser::AlternativeTypeListsContext*)orig) -> extensionAndException();

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

  auto ctx = ((ASN1Parser::AlternativeTypeListsContext*)orig) -> extensionAdditionAlternatives();

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

  auto ctx = ((ASN1Parser::AlternativeTypeListsContext*)orig) -> optionalExtensionMarker();

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

  auto token = ((ASN1Parser::AlternativeTypeListsContext*)orig) -> COMMA();

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

  auto ctx = ((ASN1Parser::RootAlternativeTypeListContext*)orig) -> alternativeTypeList();

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
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::ExtensionAdditionAlternativesContext*)orig) -> extensionAdditionAlternativesList().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(extensionAdditionAlternativesListAt(i));
    }
  }

  return std::move(a);
}

Object ExtensionAdditionAlternativesContextProxy::extensionAdditionAlternativesListAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ExtensionAdditionAlternativesContext*)orig) -> extensionAdditionAlternativesList(i);

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
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASN1Parser::ExtensionAdditionAlternativesContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object ExtensionAdditionAlternativesContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ExtensionAdditionAlternativesContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object AlternativeTypeListContextProxy::namedType() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::AlternativeTypeListContext*)orig) -> namedType().size();

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

  auto ctx = ((ASN1Parser::AlternativeTypeListContext*)orig) -> namedType(i);

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

  auto vec = ((ASN1Parser::AlternativeTypeListContext*)orig) -> COMMA();

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

  auto token = ((ASN1Parser::AlternativeTypeListContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtensionAdditionAlternativesListContextProxy::extensionAdditionAlternative() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ExtensionAdditionAlternativesListContext*)orig) -> extensionAdditionAlternative();

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

Object ExtensionAdditionAlternativesListContextProxy::extensionAdditionAlternativesList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ExtensionAdditionAlternativesListContext*)orig) -> extensionAdditionAlternativesList();

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
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ExtensionAdditionAlternativesListContext*)orig) -> COMMA();

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

  auto ctx = ((ASN1Parser::ExtensionAdditionAlternativeContext*)orig) -> extensionAdditionAlternativesGroup();

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

  auto ctx = ((ASN1Parser::ExtensionAdditionAlternativeContext*)orig) -> namedType();

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

  auto ctx = ((ASN1Parser::ExtensionAdditionAlternativesGroupContext*)orig) -> versionNumber();

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

  auto ctx = ((ASN1Parser::ExtensionAdditionAlternativesGroupContext*)orig) -> alternativeTypeList();

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

Object ExtensionAdditionAlternativesGroupContextProxy::LV_BRACKET() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ExtensionAdditionAlternativesGroupContext*)orig) -> LV_BRACKET();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtensionAdditionAlternativesGroupContextProxy::RV_BRACKET() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ExtensionAdditionAlternativesGroupContext*)orig) -> RV_BRACKET();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TagContextProxy::classP() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TagContext*)orig) -> classP();

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

Object TagContextProxy::classNumber() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TagContext*)orig) -> classNumber();

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

Object ClassPContextProxy::UNIVERSAL_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ClassPContext*)orig) -> UNIVERSAL_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ClassPContextProxy::APPLICATION_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ClassPContext*)orig) -> APPLICATION_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ClassPContextProxy::PRIVATE_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ClassPContext*)orig) -> PRIVATE_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ClassNumberContextProxy::number() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ClassNumberContext*)orig) -> number();

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

Object ClassNumberContextProxy::definedValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ClassNumberContext*)orig) -> definedValue();

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

Object ObjIdComponentsListContextProxy::objIdComponents() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::ObjIdComponentsListContext*)orig) -> objIdComponents().size();

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

  auto ctx = ((ASN1Parser::ObjIdComponentsListContext*)orig) -> objIdComponents(i);

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

Object ObjIdComponentsContextProxy::nameForm() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjIdComponentsContext*)orig) -> nameForm();

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

Object ObjIdComponentsContextProxy::numberForm() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjIdComponentsContext*)orig) -> numberForm();

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

Object ObjIdComponentsContextProxy::nameAndNumberForm() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjIdComponentsContext*)orig) -> nameAndNumberForm();

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

  auto ctx = ((ASN1Parser::ObjIdComponentsContext*)orig) -> definedValue();

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

Object NumberFormContextProxy::number() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::NumberFormContext*)orig) -> number();

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

Object NumberFormContextProxy::definedValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::NumberFormContext*)orig) -> definedValue();

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

Object NameAndNumberFormContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::NameAndNumberFormContext*)orig) -> identifier();

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

Object NameAndNumberFormContextProxy::numberForm() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::NameAndNumberFormContext*)orig) -> numberForm();

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

Object NameAndNumberFormContextProxy::L_PAREN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::NameAndNumberFormContext*)orig) -> L_PAREN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NameAndNumberFormContextProxy::R_PAREN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::NameAndNumberFormContext*)orig) -> R_PAREN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExceptionIdentificationContextProxy::signedNumber() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ExceptionIdentificationContext*)orig) -> signedNumber();

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

  auto ctx = ((ASN1Parser::ExceptionIdentificationContext*)orig) -> definedValue();

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

Object ExceptionIdentificationContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ExceptionIdentificationContext*)orig) -> type();

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

  auto ctx = ((ASN1Parser::ExceptionIdentificationContext*)orig) -> value();

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

  auto token = ((ASN1Parser::ExceptionIdentificationContext*)orig) -> COLON();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RestrictedCharacterStringTypeContextProxy::BMPString_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::RestrictedCharacterStringTypeContext*)orig) -> BMPString_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RestrictedCharacterStringTypeContextProxy::GeneralString_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::RestrictedCharacterStringTypeContext*)orig) -> GeneralString_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RestrictedCharacterStringTypeContextProxy::GraphicString_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::RestrictedCharacterStringTypeContext*)orig) -> GraphicString_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RestrictedCharacterStringTypeContextProxy::IA5String_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::RestrictedCharacterStringTypeContext*)orig) -> IA5String_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RestrictedCharacterStringTypeContextProxy::ISO646String_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::RestrictedCharacterStringTypeContext*)orig) -> ISO646String_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RestrictedCharacterStringTypeContextProxy::NumericString_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::RestrictedCharacterStringTypeContext*)orig) -> NumericString_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RestrictedCharacterStringTypeContextProxy::PrintableString_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::RestrictedCharacterStringTypeContext*)orig) -> PrintableString_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RestrictedCharacterStringTypeContextProxy::TeletexString_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::RestrictedCharacterStringTypeContext*)orig) -> TeletexString_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RestrictedCharacterStringTypeContextProxy::T61String_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::RestrictedCharacterStringTypeContext*)orig) -> T61String_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RestrictedCharacterStringTypeContextProxy::UniversalString_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::RestrictedCharacterStringTypeContext*)orig) -> UniversalString_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RestrictedCharacterStringTypeContextProxy::UTF8String_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::RestrictedCharacterStringTypeContext*)orig) -> UTF8String_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RestrictedCharacterStringTypeContextProxy::VideotexString_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::RestrictedCharacterStringTypeContext*)orig) -> VideotexString_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RestrictedCharacterStringTypeContextProxy::VisibleString_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::RestrictedCharacterStringTypeContext*)orig) -> VisibleString_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UnrestrictedCharacterStringTypeContextProxy::CHARACTER_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::UnrestrictedCharacterStringTypeContext*)orig) -> CHARACTER_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UnrestrictedCharacterStringTypeContextProxy::STRING_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::UnrestrictedCharacterStringTypeContext*)orig) -> STRING_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RestrictedCharacterStringValueContextProxy::cstring() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::RestrictedCharacterStringValueContext*)orig) -> cstring();

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

Object RestrictedCharacterStringValueContextProxy::characterStringList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::RestrictedCharacterStringValueContext*)orig) -> characterStringList();

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

Object RestrictedCharacterStringValueContextProxy::quadruple() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::RestrictedCharacterStringValueContext*)orig) -> quadruple();

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

Object RestrictedCharacterStringValueContextProxy::tuple() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::RestrictedCharacterStringValueContext*)orig) -> tuple();

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

Object CstringContextProxy::CStringItem() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::CstringContext*)orig) -> CStringItem();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object CharacterStringListContextProxy::charSyms() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::CharacterStringListContext*)orig) -> charSyms();

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

Object CharacterStringListContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::CharacterStringListContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object CharacterStringListContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::CharacterStringListContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QuadrupleContextProxy::group() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::QuadrupleContext*)orig) -> group();

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

Object QuadrupleContextProxy::plane() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::QuadrupleContext*)orig) -> plane();

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

Object QuadrupleContextProxy::row() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::QuadrupleContext*)orig) -> row();

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

Object QuadrupleContextProxy::cell() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::QuadrupleContext*)orig) -> cell();

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

Object QuadrupleContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::QuadrupleContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QuadrupleContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASN1Parser::QuadrupleContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object QuadrupleContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::QuadrupleContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QuadrupleContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::QuadrupleContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TupleContextProxy::tableColumn() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TupleContext*)orig) -> tableColumn();

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

Object TupleContextProxy::tableRow() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TupleContext*)orig) -> tableRow();

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

Object TupleContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::TupleContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TupleContextProxy::COMMA() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::TupleContext*)orig) -> COMMA();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TupleContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::TupleContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object CharSymsContextProxy::charsDefn() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::CharSymsContext*)orig) -> charsDefn().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(charsDefnAt(i));
    }
  }

  return std::move(a);
}

Object CharSymsContextProxy::charsDefnAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::CharSymsContext*)orig) -> charsDefn(i);

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

Object CharSymsContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASN1Parser::CharSymsContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object CharSymsContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::CharSymsContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object CharsDefnContextProxy::cstring() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::CharsDefnContext*)orig) -> cstring();

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

Object CharsDefnContextProxy::quadruple() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::CharsDefnContext*)orig) -> quadruple();

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

Object CharsDefnContextProxy::tuple() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::CharsDefnContext*)orig) -> tuple();

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

Object CharsDefnContextProxy::definedValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::CharsDefnContext*)orig) -> definedValue();

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

Object GroupContextProxy::number() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::GroupContext*)orig) -> number();

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

Object PlaneContextProxy::number() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::PlaneContext*)orig) -> number();

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

Object RowContextProxy::number() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::RowContext*)orig) -> number();

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

Object CellContextProxy::number() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::CellContext*)orig) -> number();

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

Object TableColumnContextProxy::number() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TableColumnContext*)orig) -> number();

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

Object TableRowContextProxy::number() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TableRowContext*)orig) -> number();

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

Object UTCTimeTypeContextProxy::UTCTime_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::UTCTimeTypeContext*)orig) -> UTCTime_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object GeneralizedTimeTypeContextProxy::GeneralizedTime_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::GeneralizedTimeTypeContext*)orig) -> GeneralizedTime_WORD();

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

  auto ctx = ((ASN1Parser::ConstraintContext*)orig) -> constraintSpec();

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

  auto ctx = ((ASN1Parser::ConstraintContext*)orig) -> exceptionSpec();

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

Object ConstraintContextProxy::L_PAREN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ConstraintContext*)orig) -> L_PAREN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ConstraintContextProxy::R_PAREN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ConstraintContext*)orig) -> R_PAREN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeWithConstraintContextProxy::constraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TypeWithConstraintContext*)orig) -> constraint();

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

Object TypeWithConstraintContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TypeWithConstraintContext*)orig) -> type();

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

Object TypeWithConstraintContextProxy::sizeConstraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TypeWithConstraintContext*)orig) -> sizeConstraint();

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

Object TypeWithConstraintContextProxy::namedType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TypeWithConstraintContext*)orig) -> namedType();

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

Object TypeWithConstraintContextProxy::SET_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::TypeWithConstraintContext*)orig) -> SET_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeWithConstraintContextProxy::OF_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::TypeWithConstraintContext*)orig) -> OF_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeWithConstraintContextProxy::SEQUENCE_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::TypeWithConstraintContext*)orig) -> SEQUENCE_WORD();

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

  auto ctx = ((ASN1Parser::SizeConstraintContext*)orig) -> constraint();

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

Object SizeConstraintContextProxy::SIZE_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::SizeConstraintContext*)orig) -> SIZE_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ConstraintSpecContextProxy::subtypeConstraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ConstraintSpecContext*)orig) -> subtypeConstraint();

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

Object ConstraintSpecContextProxy::generalConstraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ConstraintSpecContext*)orig) -> generalConstraint();

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

  auto ctx = ((ASN1Parser::SubtypeConstraintContext*)orig) -> elementSetSpecs();

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

  auto ctx = ((ASN1Parser::GeneralConstraintContext*)orig) -> userDefinedConstraint();

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

  auto ctx = ((ASN1Parser::GeneralConstraintContext*)orig) -> tableConstraint();

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

  auto ctx = ((ASN1Parser::GeneralConstraintContext*)orig) -> contentsConstraint();

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
    size_t count = ((ASN1Parser::UserDefinedConstraintContext*)orig) -> userDefinedConstraintParameter().size();

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

  auto ctx = ((ASN1Parser::UserDefinedConstraintContext*)orig) -> userDefinedConstraintParameter(i);

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

Object UserDefinedConstraintContextProxy::CONSTRAINED_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::UserDefinedConstraintContext*)orig) -> CONSTRAINED_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UserDefinedConstraintContextProxy::BY_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::UserDefinedConstraintContext*)orig) -> BY_WORD();

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

  auto token = ((ASN1Parser::UserDefinedConstraintContext*)orig) -> L_BRACE();

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

  auto token = ((ASN1Parser::UserDefinedConstraintContext*)orig) -> R_BRACE();

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

  auto vec = ((ASN1Parser::UserDefinedConstraintContext*)orig) -> COMMA();

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

  auto token = ((ASN1Parser::UserDefinedConstraintContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TableConstraintContextProxy::simpleTableConstraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TableConstraintContext*)orig) -> simpleTableConstraint();

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

Object TableConstraintContextProxy::componentRelationConstraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TableConstraintContext*)orig) -> componentRelationConstraint();

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

Object ContentsConstraintContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ContentsConstraintContext*)orig) -> type();

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

  auto ctx = ((ASN1Parser::ContentsConstraintContext*)orig) -> value();

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

Object ContentsConstraintContextProxy::CONTAINING_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ContentsConstraintContext*)orig) -> CONTAINING_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ContentsConstraintContextProxy::ENCODED_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ContentsConstraintContext*)orig) -> ENCODED_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ContentsConstraintContextProxy::BY_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ContentsConstraintContext*)orig) -> BY_WORD();

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

  auto ctx = ((ASN1Parser::RootElementSetSpecContext*)orig) -> elementSetSpec();

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

  auto ctx = ((ASN1Parser::AdditionalElementSetSpecContext*)orig) -> elementSetSpec();

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

Object ElementSetSpecContextProxy::unions() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ElementSetSpecContext*)orig) -> unions();

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

  auto ctx = ((ASN1Parser::ElementSetSpecContext*)orig) -> exclusions();

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

Object ElementSetSpecContextProxy::ALL_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ElementSetSpecContext*)orig) -> ALL_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UnionsContextProxy::intersections() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::UnionsContext*)orig) -> intersections();

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

Object UnionsContextProxy::unions() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::UnionsContext*)orig) -> unions();

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
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::UnionsContext*)orig) -> unionMark();

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

  auto ctx = ((ASN1Parser::ExclusionsContext*)orig) -> elements();

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

Object ExclusionsContextProxy::EXCEPT_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ExclusionsContext*)orig) -> EXCEPT_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntersectionsContextProxy::intersectionElements() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::IntersectionsContext*)orig) -> intersectionElements();

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

Object IntersectionsContextProxy::intersections() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::IntersectionsContext*)orig) -> intersections();

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
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::IntersectionsContext*)orig) -> intersectionMark();

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

Object UnionMarkContextProxy::UNION_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::UnionMarkContext*)orig) -> UNION_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UElemsContextProxy::unions() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::UElemsContext*)orig) -> unions();

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

  auto ctx = ((ASN1Parser::IntersectionElementsContext*)orig) -> elements();

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

Object IntersectionElementsContextProxy::elems() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::IntersectionElementsContext*)orig) -> elems();

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

  auto ctx = ((ASN1Parser::IntersectionElementsContext*)orig) -> exclusions();

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

Object IntersectionMarkContextProxy::INTERSECTION_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::IntersectionMarkContext*)orig) -> INTERSECTION_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IElemsContextProxy::intersections() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::IElemsContext*)orig) -> intersections();

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

Object ElementsContextProxy::subtypeElements() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ElementsContext*)orig) -> subtypeElements();

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

Object ElementsContextProxy::objectSetElements() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ElementsContext*)orig) -> objectSetElements();

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

Object ElementsContextProxy::elementSetSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ElementsContext*)orig) -> elementSetSpec();

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

Object ElementsContextProxy::L_PAREN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ElementsContext*)orig) -> L_PAREN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ElementsContextProxy::R_PAREN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ElementsContext*)orig) -> R_PAREN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ElemsContextProxy::elements() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ElemsContext*)orig) -> elements();

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

Object SubtypeElementsContextProxy::singleValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SubtypeElementsContext*)orig) -> singleValue();

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

Object SubtypeElementsContextProxy::containedSubtype() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SubtypeElementsContext*)orig) -> containedSubtype();

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

Object SubtypeElementsContextProxy::valueRange() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SubtypeElementsContext*)orig) -> valueRange();

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

Object SubtypeElementsContextProxy::permittedAlphabet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SubtypeElementsContext*)orig) -> permittedAlphabet();

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

  auto ctx = ((ASN1Parser::SubtypeElementsContext*)orig) -> sizeConstraint();

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

Object ObjectSetElementsContextProxy::object() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectSetElementsContext*)orig) -> object();

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

Object ObjectSetElementsContextProxy::definedObjectSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectSetElementsContext*)orig) -> definedObjectSet();

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

Object ObjectSetElementsContextProxy::objectSetFromObjects() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectSetElementsContext*)orig) -> objectSetFromObjects();

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

Object ObjectSetElementsContextProxy::parameterizedObjectSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectSetElementsContext*)orig) -> parameterizedObjectSet();

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

Object SingleValueContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SingleValueContext*)orig) -> value();

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

Object ContainedSubtypeContextProxy::includes() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ContainedSubtypeContext*)orig) -> includes();

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

Object ContainedSubtypeContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ContainedSubtypeContext*)orig) -> type();

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

Object ValueRangeContextProxy::lowerEndpoint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ValueRangeContext*)orig) -> lowerEndpoint();

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

Object ValueRangeContextProxy::upperEndpoint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ValueRangeContext*)orig) -> upperEndpoint();

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

Object ValueRangeContextProxy::RANGE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ValueRangeContext*)orig) -> RANGE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object PermittedAlphabetContextProxy::constraint() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::PermittedAlphabetContext*)orig) -> constraint();

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

Object PermittedAlphabetContextProxy::FROM_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::PermittedAlphabetContext*)orig) -> FROM_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IncludesContextProxy::INCLUDES_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::IncludesContext*)orig) -> INCLUDES_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object LowerEndpointContextProxy::lowerEndValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::LowerEndpointContext*)orig) -> lowerEndValue();

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

Object UpperEndpointContextProxy::upperEndValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::UpperEndpointContext*)orig) -> upperEndValue();

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

Object LowerEndValueContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::LowerEndValueContext*)orig) -> value();

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

Object LowerEndValueContextProxy::MIN_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::LowerEndValueContext*)orig) -> MIN_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UpperEndValueContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::UpperEndValueContext*)orig) -> value();

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

Object UpperEndValueContextProxy::MAX_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::UpperEndValueContext*)orig) -> MAX_WORD();

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

  auto ctx = ((ASN1Parser::UserDefinedConstraintParameterContext*)orig) -> governor();

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

  auto ctx = ((ASN1Parser::UserDefinedConstraintParameterContext*)orig) -> value();

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

  auto ctx = ((ASN1Parser::UserDefinedConstraintParameterContext*)orig) -> valueSet();

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

Object UserDefinedConstraintParameterContextProxy::object() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::UserDefinedConstraintParameterContext*)orig) -> object();

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

  auto ctx = ((ASN1Parser::UserDefinedConstraintParameterContext*)orig) -> objectSet();

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

Object UserDefinedConstraintParameterContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::UserDefinedConstraintParameterContext*)orig) -> type();

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

Object UserDefinedConstraintParameterContextProxy::definedObjectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::UserDefinedConstraintParameterContext*)orig) -> definedObjectClass();

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

  auto token = ((ASN1Parser::UserDefinedConstraintParameterContext*)orig) -> COLON();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object GovernorContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::GovernorContext*)orig) -> type();

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

  auto ctx = ((ASN1Parser::GovernorContext*)orig) -> definedObjectClass();

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

Object ObjectContextProxy::definedObject() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectContext*)orig) -> definedObject();

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

Object ObjectContextProxy::objectDefn() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectContext*)orig) -> objectDefn();

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

Object ObjectContextProxy::objectFromObject() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectContext*)orig) -> objectFromObject();

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

Object ObjectContextProxy::parameterizedObject() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectContext*)orig) -> parameterizedObject();

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

  auto ctx = ((ASN1Parser::ObjectSetContext*)orig) -> objectSetSpec();

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

  auto token = ((ASN1Parser::ObjectSetContext*)orig) -> L_BRACE();

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

  auto token = ((ASN1Parser::ObjectSetContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinedObjectClassContextProxy::externalObjectClassReference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinedObjectClassContext*)orig) -> externalObjectClassReference();

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

Object DefinedObjectClassContextProxy::objectclassreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinedObjectClassContext*)orig) -> objectclassreference();

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

Object DefinedObjectClassContextProxy::usefulObjectClassReference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinedObjectClassContext*)orig) -> usefulObjectClassReference();

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

Object SimpleTableConstraintContextProxy::objectSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SimpleTableConstraintContext*)orig) -> objectSet();

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

Object ComponentRelationConstraintContextProxy::definedObjectSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ComponentRelationConstraintContext*)orig) -> definedObjectSet();

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

Object ComponentRelationConstraintContextProxy::atNotation() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::ComponentRelationConstraintContext*)orig) -> atNotation().size();

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

  auto ctx = ((ASN1Parser::ComponentRelationConstraintContext*)orig) -> atNotation(i);

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

  auto vec = ((ASN1Parser::ComponentRelationConstraintContext*)orig) -> L_BRACE();

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

  auto token = ((ASN1Parser::ComponentRelationConstraintContext*)orig) -> L_BRACE(i);

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

  auto vec = ((ASN1Parser::ComponentRelationConstraintContext*)orig) -> R_BRACE();

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

  auto token = ((ASN1Parser::ComponentRelationConstraintContext*)orig) -> R_BRACE(i);

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

  auto vec = ((ASN1Parser::ComponentRelationConstraintContext*)orig) -> COMMA();

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

  auto token = ((ASN1Parser::ComponentRelationConstraintContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinedObjectSetContextProxy::externalObjectSetReference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinedObjectSetContext*)orig) -> externalObjectSetReference();

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

Object DefinedObjectSetContextProxy::objectsetreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinedObjectSetContext*)orig) -> objectsetreference();

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

Object AtNotationContextProxy::componentIdList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::AtNotationContext*)orig) -> componentIdList();

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

  auto ctx = ((ASN1Parser::AtNotationContext*)orig) -> level();

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

Object ComponentIdListContextProxy::identifier() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::ComponentIdListContext*)orig) -> identifier().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(identifierAt(i));
    }
  }

  return std::move(a);
}

Object ComponentIdListContextProxy::identifierAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ComponentIdListContext*)orig) -> identifier(i);

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

Object ComponentIdListContextProxy::DOT() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASN1Parser::ComponentIdListContext*)orig) -> DOT();

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

  auto token = ((ASN1Parser::ComponentIdListContext*)orig) -> DOT(i);

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

  auto ctx = ((ASN1Parser::LevelContext*)orig) -> level();

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

  auto token = ((ASN1Parser::LevelContext*)orig) -> DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExternalObjectClassReferenceContextProxy::modulereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ExternalObjectClassReferenceContext*)orig) -> modulereference();

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

Object ExternalObjectClassReferenceContextProxy::objectclassreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ExternalObjectClassReferenceContext*)orig) -> objectclassreference();

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

Object ExternalObjectClassReferenceContextProxy::DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ExternalObjectClassReferenceContext*)orig) -> DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UsefulObjectClassReferenceContextProxy::TYPE_IDENTIFIER_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::UsefulObjectClassReferenceContext*)orig) -> TYPE_IDENTIFIER_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UsefulObjectClassReferenceContextProxy::ABSTRACT_SYNTAX_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::UsefulObjectClassReferenceContext*)orig) -> ABSTRACT_SYNTAX_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinedObjectContextProxy::externalObjectReference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinedObjectContext*)orig) -> externalObjectReference();

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

Object DefinedObjectContextProxy::objectreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinedObjectContext*)orig) -> objectreference();

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

Object ExternalObjectReferenceContextProxy::modulereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ExternalObjectReferenceContext*)orig) -> modulereference();

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

Object ExternalObjectReferenceContextProxy::objectreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ExternalObjectReferenceContext*)orig) -> objectreference();

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

Object ExternalObjectReferenceContextProxy::DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ExternalObjectReferenceContext*)orig) -> DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExternalObjectSetReferenceContextProxy::modulereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ExternalObjectSetReferenceContext*)orig) -> modulereference();

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

Object ExternalObjectSetReferenceContextProxy::objectsetreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ExternalObjectSetReferenceContext*)orig) -> objectsetreference();

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

Object ExternalObjectSetReferenceContextProxy::DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ExternalObjectSetReferenceContext*)orig) -> DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectClassContextProxy::definedObjectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectClassContext*)orig) -> definedObjectClass();

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

  auto ctx = ((ASN1Parser::ObjectClassContext*)orig) -> objectClassDefn();

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

Object ObjectClassContextProxy::parameterizedObjectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectClassContext*)orig) -> parameterizedObjectClass();

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
    size_t count = ((ASN1Parser::ObjectClassDefnContext*)orig) -> fieldSpec().size();

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

  auto ctx = ((ASN1Parser::ObjectClassDefnContext*)orig) -> fieldSpec(i);

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

  auto ctx = ((ASN1Parser::ObjectClassDefnContext*)orig) -> withSyntaxSpec();

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

Object ObjectClassDefnContextProxy::CLASS_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ObjectClassDefnContext*)orig) -> CLASS_WORD();

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

  auto token = ((ASN1Parser::ObjectClassDefnContext*)orig) -> L_BRACE();

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

  auto token = ((ASN1Parser::ObjectClassDefnContext*)orig) -> R_BRACE();

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

  auto vec = ((ASN1Parser::ObjectClassDefnContext*)orig) -> COMMA();

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

  auto token = ((ASN1Parser::ObjectClassDefnContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterizedObjectClassContextProxy::definedObjectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedObjectClassContext*)orig) -> definedObjectClass();

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

Object ParameterizedObjectClassContextProxy::actualParameterList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedObjectClassContext*)orig) -> actualParameterList();

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

Object FieldSpecContextProxy::typeFieldSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::FieldSpecContext*)orig) -> typeFieldSpec();

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

Object FieldSpecContextProxy::fixedTypeValueFieldSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::FieldSpecContext*)orig) -> fixedTypeValueFieldSpec();

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

Object FieldSpecContextProxy::variableTypeValueFieldSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::FieldSpecContext*)orig) -> variableTypeValueFieldSpec();

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

Object FieldSpecContextProxy::fixedTypeValueSetFieldSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::FieldSpecContext*)orig) -> fixedTypeValueSetFieldSpec();

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

Object FieldSpecContextProxy::variableTypeValueSetFieldSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::FieldSpecContext*)orig) -> variableTypeValueSetFieldSpec();

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

Object FieldSpecContextProxy::objectFieldSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::FieldSpecContext*)orig) -> objectFieldSpec();

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

Object FieldSpecContextProxy::objectSetFieldSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::FieldSpecContext*)orig) -> objectSetFieldSpec();

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

Object WithSyntaxSpecContextProxy::syntaxList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::WithSyntaxSpecContext*)orig) -> syntaxList();

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

Object WithSyntaxSpecContextProxy::WITH_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::WithSyntaxSpecContext*)orig) -> WITH_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object WithSyntaxSpecContextProxy::SYNTAX_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::WithSyntaxSpecContext*)orig) -> SYNTAX_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SyntaxListContextProxy::tokenOrGroupSpec() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::SyntaxListContext*)orig) -> tokenOrGroupSpec().size();

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

  auto ctx = ((ASN1Parser::SyntaxListContext*)orig) -> tokenOrGroupSpec(i);

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

  auto token = ((ASN1Parser::SyntaxListContext*)orig) -> L_BRACE();

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

  auto token = ((ASN1Parser::SyntaxListContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeFieldSpecContextProxy::typefieldreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TypeFieldSpecContext*)orig) -> typefieldreference();

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

Object TypeFieldSpecContextProxy::typeOptionalitySpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TypeFieldSpecContext*)orig) -> typeOptionalitySpec();

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

Object FixedTypeValueFieldSpecContextProxy::valuefieldreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::FixedTypeValueFieldSpecContext*)orig) -> valuefieldreference();

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

Object FixedTypeValueFieldSpecContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::FixedTypeValueFieldSpecContext*)orig) -> type();

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

  auto ctx = ((ASN1Parser::FixedTypeValueFieldSpecContext*)orig) -> valueOptionalitySpec();

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

Object FixedTypeValueFieldSpecContextProxy::UNIQUE_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::FixedTypeValueFieldSpecContext*)orig) -> UNIQUE_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object VariableTypeValueFieldSpecContextProxy::valuefieldreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::VariableTypeValueFieldSpecContext*)orig) -> valuefieldreference();

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

Object VariableTypeValueFieldSpecContextProxy::fieldName() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::VariableTypeValueFieldSpecContext*)orig) -> fieldName();

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

  auto ctx = ((ASN1Parser::VariableTypeValueFieldSpecContext*)orig) -> valueOptionalitySpec();

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

Object FixedTypeValueSetFieldSpecContextProxy::valuesetfieldreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::FixedTypeValueSetFieldSpecContext*)orig) -> valuesetfieldreference();

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

Object FixedTypeValueSetFieldSpecContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::FixedTypeValueSetFieldSpecContext*)orig) -> type();

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

  auto ctx = ((ASN1Parser::FixedTypeValueSetFieldSpecContext*)orig) -> valueSetOptionalitySpec();

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

Object VariableTypeValueSetFieldSpecContextProxy::valuesetfieldreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::VariableTypeValueSetFieldSpecContext*)orig) -> valuesetfieldreference();

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

  auto ctx = ((ASN1Parser::VariableTypeValueSetFieldSpecContext*)orig) -> fieldName();

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

  auto ctx = ((ASN1Parser::VariableTypeValueSetFieldSpecContext*)orig) -> valueSetOptionalitySpec();

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

Object ObjectFieldSpecContextProxy::objectfieldreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectFieldSpecContext*)orig) -> objectfieldreference();

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

Object ObjectFieldSpecContextProxy::definedObjectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectFieldSpecContext*)orig) -> definedObjectClass();

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

  auto ctx = ((ASN1Parser::ObjectFieldSpecContext*)orig) -> objectOptionalitySpec();

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

Object ObjectSetFieldSpecContextProxy::objectsetfieldreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectSetFieldSpecContext*)orig) -> objectsetfieldreference();

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

Object ObjectSetFieldSpecContextProxy::definedObjectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectSetFieldSpecContext*)orig) -> definedObjectClass();

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

  auto ctx = ((ASN1Parser::ObjectSetFieldSpecContext*)orig) -> objectSetOptionalitySpec();

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

Object TypefieldreferenceContextProxy::ReferenceItem() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::TypefieldreferenceContext*)orig) -> ReferenceItem();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeOptionalitySpecContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TypeOptionalitySpecContext*)orig) -> type();

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

Object TypeOptionalitySpecContextProxy::OPTIONAL_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::TypeOptionalitySpecContext*)orig) -> OPTIONAL_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeOptionalitySpecContextProxy::DEFAULT_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::TypeOptionalitySpecContext*)orig) -> DEFAULT_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValuefieldreferenceContextProxy::IdentifierOrValueItem() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ValuefieldreferenceContext*)orig) -> IdentifierOrValueItem();

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

  auto ctx = ((ASN1Parser::ValueOptionalitySpecContext*)orig) -> value();

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

Object ValueOptionalitySpecContextProxy::OPTIONAL_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ValueOptionalitySpecContext*)orig) -> OPTIONAL_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValueOptionalitySpecContextProxy::DEFAULT_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ValueOptionalitySpecContext*)orig) -> DEFAULT_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FieldNameContextProxy::primitiveFieldName() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::FieldNameContext*)orig) -> primitiveFieldName().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(primitiveFieldNameAt(i));
    }
  }

  return std::move(a);
}

Object FieldNameContextProxy::primitiveFieldNameAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::FieldNameContext*)orig) -> primitiveFieldName(i);

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

Object FieldNameContextProxy::DOT() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASN1Parser::FieldNameContext*)orig) -> DOT();

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

  auto token = ((ASN1Parser::FieldNameContext*)orig) -> DOT(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValuesetfieldreferenceContextProxy::ReferenceItem() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ValuesetfieldreferenceContext*)orig) -> ReferenceItem();

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

  auto ctx = ((ASN1Parser::ValueSetOptionalitySpecContext*)orig) -> valueSet();

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

Object ValueSetOptionalitySpecContextProxy::OPTIONAL_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ValueSetOptionalitySpecContext*)orig) -> OPTIONAL_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValueSetOptionalitySpecContextProxy::DEFAULT_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ValueSetOptionalitySpecContext*)orig) -> DEFAULT_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectfieldreferenceContextProxy::IdentifierOrValueItem() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ObjectfieldreferenceContext*)orig) -> IdentifierOrValueItem();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectOptionalitySpecContextProxy::object() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectOptionalitySpecContext*)orig) -> object();

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

Object ObjectOptionalitySpecContextProxy::OPTIONAL_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ObjectOptionalitySpecContext*)orig) -> OPTIONAL_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectOptionalitySpecContextProxy::DEFAULT_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ObjectOptionalitySpecContext*)orig) -> DEFAULT_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectsetfieldreferenceContextProxy::ReferenceItem() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ObjectsetfieldreferenceContext*)orig) -> ReferenceItem();

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

  auto ctx = ((ASN1Parser::ObjectSetOptionalitySpecContext*)orig) -> objectSet();

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

Object ObjectSetOptionalitySpecContextProxy::OPTIONAL_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ObjectSetOptionalitySpecContext*)orig) -> OPTIONAL_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectSetOptionalitySpecContextProxy::DEFAULT_WORD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ObjectSetOptionalitySpecContext*)orig) -> DEFAULT_WORD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object PrimitiveFieldNameContextProxy::typefieldreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::PrimitiveFieldNameContext*)orig) -> typefieldreference();

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

Object PrimitiveFieldNameContextProxy::valuefieldreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::PrimitiveFieldNameContext*)orig) -> valuefieldreference();

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

Object PrimitiveFieldNameContextProxy::valuesetfieldreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::PrimitiveFieldNameContext*)orig) -> valuesetfieldreference();

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

Object PrimitiveFieldNameContextProxy::objectfieldreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::PrimitiveFieldNameContext*)orig) -> objectfieldreference();

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

Object PrimitiveFieldNameContextProxy::objectsetfieldreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::PrimitiveFieldNameContext*)orig) -> objectsetfieldreference();

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

Object TokenOrGroupSpecContextProxy::requiredToken() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::TokenOrGroupSpecContext*)orig) -> requiredToken();

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

  auto ctx = ((ASN1Parser::TokenOrGroupSpecContext*)orig) -> optionalGroup();

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

  auto ctx = ((ASN1Parser::RequiredTokenContext*)orig) -> literal();

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

  auto ctx = ((ASN1Parser::RequiredTokenContext*)orig) -> primitiveFieldName();

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
    size_t count = ((ASN1Parser::OptionalGroupContext*)orig) -> tokenOrGroupSpec().size();

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

  auto ctx = ((ASN1Parser::OptionalGroupContext*)orig) -> tokenOrGroupSpec(i);

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

Object LiteralContextProxy::word() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::LiteralContext*)orig) -> word();

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

Object LiteralContextProxy::COMMA() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::LiteralContext*)orig) -> COMMA();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object WordContextProxy::ReferenceItem() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::WordContext*)orig) -> ReferenceItem();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectDefnContextProxy::defaultSyntax() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectDefnContext*)orig) -> defaultSyntax();

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

Object ObjectDefnContextProxy::definedSyntax() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectDefnContext*)orig) -> definedSyntax();

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

Object ObjectFromObjectContextProxy::referencedObjects() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectFromObjectContext*)orig) -> referencedObjects();

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

Object ObjectFromObjectContextProxy::fieldName() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectFromObjectContext*)orig) -> fieldName();

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

Object ObjectFromObjectContextProxy::DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ObjectFromObjectContext*)orig) -> DOT();

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

  auto ctx = ((ASN1Parser::ParameterizedObjectContext*)orig) -> definedObject();

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

  auto ctx = ((ASN1Parser::ParameterizedObjectContext*)orig) -> actualParameterList();

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

Object DefaultSyntaxContextProxy::fieldSetting() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::DefaultSyntaxContext*)orig) -> fieldSetting().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(fieldSettingAt(i));
    }
  }

  return std::move(a);
}

Object DefaultSyntaxContextProxy::fieldSettingAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefaultSyntaxContext*)orig) -> fieldSetting(i);

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

Object DefaultSyntaxContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::DefaultSyntaxContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefaultSyntaxContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::DefaultSyntaxContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefaultSyntaxContextProxy::COMMA() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((ASN1Parser::DefaultSyntaxContext*)orig) -> COMMA();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object DefaultSyntaxContextProxy::COMMAAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::DefaultSyntaxContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinedSyntaxContextProxy::definedSyntaxToken() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::DefinedSyntaxContext*)orig) -> definedSyntaxToken().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(definedSyntaxTokenAt(i));
    }
  }

  return std::move(a);
}

Object DefinedSyntaxContextProxy::definedSyntaxTokenAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinedSyntaxContext*)orig) -> definedSyntaxToken(i);

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

Object DefinedSyntaxContextProxy::L_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::DefinedSyntaxContext*)orig) -> L_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DefinedSyntaxContextProxy::R_BRACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::DefinedSyntaxContext*)orig) -> R_BRACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FieldSettingContextProxy::primitiveFieldName() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::FieldSettingContext*)orig) -> primitiveFieldName();

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

Object FieldSettingContextProxy::setting() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::FieldSettingContext*)orig) -> setting();

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

Object SettingContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SettingContext*)orig) -> type();

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

Object SettingContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SettingContext*)orig) -> value();

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

Object SettingContextProxy::valueSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SettingContext*)orig) -> valueSet();

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

Object SettingContextProxy::object() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SettingContext*)orig) -> object();

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

Object SettingContextProxy::objectSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SettingContext*)orig) -> objectSet();

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

Object DefinedSyntaxTokenContextProxy::literal() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinedSyntaxTokenContext*)orig) -> literal();

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

Object DefinedSyntaxTokenContextProxy::setting() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DefinedSyntaxTokenContext*)orig) -> setting();

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

Object ObjectSetSpecContextProxy::rootElementSetSpec() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectSetSpecContext*)orig) -> rootElementSetSpec();

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

  auto ctx = ((ASN1Parser::ObjectSetSpecContext*)orig) -> additionalElementSetSpec();

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

  auto vec = ((ASN1Parser::ObjectSetSpecContext*)orig) -> COMMA();

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

  auto token = ((ASN1Parser::ObjectSetSpecContext*)orig) -> COMMA(i);

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

  auto token = ((ASN1Parser::ObjectSetSpecContext*)orig) -> ELLIPSIS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ObjectSetFromObjectsContextProxy::referencedObjects() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectSetFromObjectsContext*)orig) -> referencedObjects();

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

Object ObjectSetFromObjectsContextProxy::fieldName() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ObjectSetFromObjectsContext*)orig) -> fieldName();

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

Object ObjectSetFromObjectsContextProxy::DOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ObjectSetFromObjectsContext*)orig) -> DOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterizedObjectSetContextProxy::definedObjectSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedObjectSetContext*)orig) -> definedObjectSet();

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

Object ParameterizedObjectSetContextProxy::actualParameterList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedObjectSetContext*)orig) -> actualParameterList();

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

Object OpenTypeFieldValContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::OpenTypeFieldValContext*)orig) -> type();

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

Object OpenTypeFieldValContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::OpenTypeFieldValContext*)orig) -> value();

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

Object OpenTypeFieldValContextProxy::COLON() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::OpenTypeFieldValContext*)orig) -> COLON();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FixedTypeFieldValContextProxy::builtinValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::FixedTypeFieldValContext*)orig) -> builtinValue();

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

Object FixedTypeFieldValContextProxy::referencedValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::FixedTypeFieldValContext*)orig) -> referencedValue();

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

Object ReferencedObjectsContextProxy::definedObject() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ReferencedObjectsContext*)orig) -> definedObject();

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

Object ReferencedObjectsContextProxy::parameterizedObject() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ReferencedObjectsContext*)orig) -> parameterizedObject();

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

Object ReferencedObjectsContextProxy::definedObjectSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ReferencedObjectsContext*)orig) -> definedObjectSet();

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

Object ReferencedObjectsContextProxy::parameterizedObjectSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ReferencedObjectsContext*)orig) -> parameterizedObjectSet();

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

Object ParameterizedTypeAssignmentContextProxy::typereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedTypeAssignmentContext*)orig) -> typereference();

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

Object ParameterizedTypeAssignmentContextProxy::parameterList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedTypeAssignmentContext*)orig) -> parameterList();

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

Object ParameterizedTypeAssignmentContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedTypeAssignmentContext*)orig) -> type();

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

Object ParameterizedTypeAssignmentContextProxy::ASSIGN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ParameterizedTypeAssignmentContext*)orig) -> ASSIGN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterizedValueAssignmentContextProxy::valuereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedValueAssignmentContext*)orig) -> valuereference();

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

Object ParameterizedValueAssignmentContextProxy::parameterList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedValueAssignmentContext*)orig) -> parameterList();

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

Object ParameterizedValueAssignmentContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedValueAssignmentContext*)orig) -> type();

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

Object ParameterizedValueAssignmentContextProxy::value() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedValueAssignmentContext*)orig) -> value();

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

Object ParameterizedValueAssignmentContextProxy::ASSIGN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ParameterizedValueAssignmentContext*)orig) -> ASSIGN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterizedValueSetTypeAssignmentContextProxy::typereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedValueSetTypeAssignmentContext*)orig) -> typereference();

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

Object ParameterizedValueSetTypeAssignmentContextProxy::parameterList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedValueSetTypeAssignmentContext*)orig) -> parameterList();

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

Object ParameterizedValueSetTypeAssignmentContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedValueSetTypeAssignmentContext*)orig) -> type();

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

Object ParameterizedValueSetTypeAssignmentContextProxy::valueSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedValueSetTypeAssignmentContext*)orig) -> valueSet();

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

Object ParameterizedValueSetTypeAssignmentContextProxy::ASSIGN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ParameterizedValueSetTypeAssignmentContext*)orig) -> ASSIGN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterizedObjectClassAssignmentContextProxy::objectclassreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedObjectClassAssignmentContext*)orig) -> objectclassreference();

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

Object ParameterizedObjectClassAssignmentContextProxy::parameterList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedObjectClassAssignmentContext*)orig) -> parameterList();

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

Object ParameterizedObjectClassAssignmentContextProxy::objectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedObjectClassAssignmentContext*)orig) -> objectClass();

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

Object ParameterizedObjectClassAssignmentContextProxy::ASSIGN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ParameterizedObjectClassAssignmentContext*)orig) -> ASSIGN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterizedObjectAssignmentContextProxy::objectreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedObjectAssignmentContext*)orig) -> objectreference();

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

Object ParameterizedObjectAssignmentContextProxy::parameterList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedObjectAssignmentContext*)orig) -> parameterList();

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

Object ParameterizedObjectAssignmentContextProxy::definedObjectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedObjectAssignmentContext*)orig) -> definedObjectClass();

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

Object ParameterizedObjectAssignmentContextProxy::object() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedObjectAssignmentContext*)orig) -> object();

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

Object ParameterizedObjectAssignmentContextProxy::ASSIGN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ParameterizedObjectAssignmentContext*)orig) -> ASSIGN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterizedObjectSetAssignmentContextProxy::objectsetreference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedObjectSetAssignmentContext*)orig) -> objectsetreference();

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

Object ParameterizedObjectSetAssignmentContextProxy::parameterList() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedObjectSetAssignmentContext*)orig) -> parameterList();

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

Object ParameterizedObjectSetAssignmentContextProxy::definedObjectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedObjectSetAssignmentContext*)orig) -> definedObjectClass();

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

Object ParameterizedObjectSetAssignmentContextProxy::objectSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterizedObjectSetAssignmentContext*)orig) -> objectSet();

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

Object ParameterizedObjectSetAssignmentContextProxy::ASSIGN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ParameterizedObjectSetAssignmentContext*)orig) -> ASSIGN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ParameterListContextProxy::parameter() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((ASN1Parser::ParameterListContext*)orig) -> parameter().size();

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

  auto ctx = ((ASN1Parser::ParameterListContext*)orig) -> parameter(i);

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

  auto token = ((ASN1Parser::ParameterListContext*)orig) -> L_BRACE();

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

  auto token = ((ASN1Parser::ParameterListContext*)orig) -> R_BRACE();

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

  auto vec = ((ASN1Parser::ParameterListContext*)orig) -> COMMA();

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

  auto token = ((ASN1Parser::ParameterListContext*)orig) -> COMMA(i);

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

  auto ctx = ((ASN1Parser::ParameterContext*)orig) -> paramGovernor();

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

Object ParameterContextProxy::dummyReference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParameterContext*)orig) -> dummyReference();

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

Object ParameterContextProxy::COLON() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((ASN1Parser::ParameterContext*)orig) -> COLON();

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

  auto ctx = ((ASN1Parser::ParamGovernorContext*)orig) -> governor();

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

Object ParamGovernorContextProxy::dummyGovernor() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ParamGovernorContext*)orig) -> dummyGovernor();

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

Object DummyReferenceContextProxy::reference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DummyReferenceContext*)orig) -> reference();

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

Object DummyGovernorContextProxy::dummyReference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::DummyGovernorContext*)orig) -> dummyReference();

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

Object SimpleDefinedTypeContextProxy::externalTypeReference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SimpleDefinedTypeContext*)orig) -> externalTypeReference();

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

Object SimpleDefinedTypeContextProxy::typereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SimpleDefinedTypeContext*)orig) -> typereference();

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
    size_t count = ((ASN1Parser::ActualParameterListContext*)orig) -> actualParameter().size();

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

  auto ctx = ((ASN1Parser::ActualParameterListContext*)orig) -> actualParameter(i);

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

  auto token = ((ASN1Parser::ActualParameterListContext*)orig) -> L_BRACE();

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

  auto token = ((ASN1Parser::ActualParameterListContext*)orig) -> R_BRACE();

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

  auto vec = ((ASN1Parser::ActualParameterListContext*)orig) -> COMMA();

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

  auto token = ((ASN1Parser::ActualParameterListContext*)orig) -> COMMA(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SimpleDefinedValueContextProxy::externalValueReference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SimpleDefinedValueContext*)orig) -> externalValueReference();

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

Object SimpleDefinedValueContextProxy::valuereference() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::SimpleDefinedValueContext*)orig) -> valuereference();

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

Object ActualParameterContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ActualParameterContext*)orig) -> type();

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

  auto ctx = ((ASN1Parser::ActualParameterContext*)orig) -> value();

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

Object ActualParameterContextProxy::valueSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ActualParameterContext*)orig) -> valueSet();

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

Object ActualParameterContextProxy::definedObjectClass() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ActualParameterContext*)orig) -> definedObjectClass();

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

Object ActualParameterContextProxy::object() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ActualParameterContext*)orig) -> object();

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

Object ActualParameterContextProxy::objectSet() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((ASN1Parser::ActualParameterContext*)orig) -> objectSet();

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


class VisitorProxy : public ASN1BaseVisitor, public Director {
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

  virtual antlrcpp::Any visitModuleDefinition(ASN1Parser::ModuleDefinitionContext *ctx) override {
    ModuleDefinitionContextProxy proxy(ctx);
    return getSelf().call("visit_module_definition", &proxy);
  }

  virtual antlrcpp::Any visitModuleIdentifier(ASN1Parser::ModuleIdentifierContext *ctx) override {
    ModuleIdentifierContextProxy proxy(ctx);
    return getSelf().call("visit_module_identifier", &proxy);
  }

  virtual antlrcpp::Any visitDefinitiveIdentifier(ASN1Parser::DefinitiveIdentifierContext *ctx) override {
    DefinitiveIdentifierContextProxy proxy(ctx);
    return getSelf().call("visit_definitive_identifier", &proxy);
  }

  virtual antlrcpp::Any visitDefinitiveObjIdComponentList(ASN1Parser::DefinitiveObjIdComponentListContext *ctx) override {
    DefinitiveObjIdComponentListContextProxy proxy(ctx);
    return getSelf().call("visit_definitive_obj_id_component_list", &proxy);
  }

  virtual antlrcpp::Any visitDefinitiveObjIdComponent(ASN1Parser::DefinitiveObjIdComponentContext *ctx) override {
    DefinitiveObjIdComponentContextProxy proxy(ctx);
    return getSelf().call("visit_definitive_obj_id_component", &proxy);
  }

  virtual antlrcpp::Any visitDefinitiveNumberForm(ASN1Parser::DefinitiveNumberFormContext *ctx) override {
    DefinitiveNumberFormContextProxy proxy(ctx);
    return getSelf().call("visit_definitive_number_form", &proxy);
  }

  virtual antlrcpp::Any visitDefinitiveNameAndNumberForm(ASN1Parser::DefinitiveNameAndNumberFormContext *ctx) override {
    DefinitiveNameAndNumberFormContextProxy proxy(ctx);
    return getSelf().call("visit_definitive_name_and_number_form", &proxy);
  }

  virtual antlrcpp::Any visitTagDefault(ASN1Parser::TagDefaultContext *ctx) override {
    TagDefaultContextProxy proxy(ctx);
    return getSelf().call("visit_tag_default", &proxy);
  }

  virtual antlrcpp::Any visitExtensionDefault(ASN1Parser::ExtensionDefaultContext *ctx) override {
    ExtensionDefaultContextProxy proxy(ctx);
    return getSelf().call("visit_extension_default", &proxy);
  }

  virtual antlrcpp::Any visitModuleBody(ASN1Parser::ModuleBodyContext *ctx) override {
    ModuleBodyContextProxy proxy(ctx);
    return getSelf().call("visit_module_body", &proxy);
  }

  virtual antlrcpp::Any visitExports(ASN1Parser::ExportsContext *ctx) override {
    ExportsContextProxy proxy(ctx);
    return getSelf().call("visit_exports", &proxy);
  }

  virtual antlrcpp::Any visitSymbolsExported(ASN1Parser::SymbolsExportedContext *ctx) override {
    SymbolsExportedContextProxy proxy(ctx);
    return getSelf().call("visit_symbols_exported", &proxy);
  }

  virtual antlrcpp::Any visitImports(ASN1Parser::ImportsContext *ctx) override {
    ImportsContextProxy proxy(ctx);
    return getSelf().call("visit_imports", &proxy);
  }

  virtual antlrcpp::Any visitSymbolsImported(ASN1Parser::SymbolsImportedContext *ctx) override {
    SymbolsImportedContextProxy proxy(ctx);
    return getSelf().call("visit_symbols_imported", &proxy);
  }

  virtual antlrcpp::Any visitSymbolsFromModuleList(ASN1Parser::SymbolsFromModuleListContext *ctx) override {
    SymbolsFromModuleListContextProxy proxy(ctx);
    return getSelf().call("visit_symbols_from_module_list", &proxy);
  }

  virtual antlrcpp::Any visitSymbolsFromModule(ASN1Parser::SymbolsFromModuleContext *ctx) override {
    SymbolsFromModuleContextProxy proxy(ctx);
    return getSelf().call("visit_symbols_from_module", &proxy);
  }

  virtual antlrcpp::Any visitGlobalModuleReference(ASN1Parser::GlobalModuleReferenceContext *ctx) override {
    GlobalModuleReferenceContextProxy proxy(ctx);
    return getSelf().call("visit_global_module_reference", &proxy);
  }

  virtual antlrcpp::Any visitAssignedIdentifier(ASN1Parser::AssignedIdentifierContext *ctx) override {
    AssignedIdentifierContextProxy proxy(ctx);
    return getSelf().call("visit_assigned_identifier", &proxy);
  }

  virtual antlrcpp::Any visitSymbolList(ASN1Parser::SymbolListContext *ctx) override {
    SymbolListContextProxy proxy(ctx);
    return getSelf().call("visit_symbol_list", &proxy);
  }

  virtual antlrcpp::Any visitSymbol(ASN1Parser::SymbolContext *ctx) override {
    SymbolContextProxy proxy(ctx);
    return getSelf().call("visit_symbol", &proxy);
  }

  virtual antlrcpp::Any visitReference(ASN1Parser::ReferenceContext *ctx) override {
    ReferenceContextProxy proxy(ctx);
    return getSelf().call("visit_reference", &proxy);
  }

  virtual antlrcpp::Any visitAssignmentList(ASN1Parser::AssignmentListContext *ctx) override {
    AssignmentListContextProxy proxy(ctx);
    return getSelf().call("visit_assignment_list", &proxy);
  }

  virtual antlrcpp::Any visitAssignment(ASN1Parser::AssignmentContext *ctx) override {
    AssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_assignment", &proxy);
  }

  virtual antlrcpp::Any visitDefinedType(ASN1Parser::DefinedTypeContext *ctx) override {
    DefinedTypeContextProxy proxy(ctx);
    return getSelf().call("visit_defined_type", &proxy);
  }

  virtual antlrcpp::Any visitDefinedValue(ASN1Parser::DefinedValueContext *ctx) override {
    DefinedValueContextProxy proxy(ctx);
    return getSelf().call("visit_defined_value", &proxy);
  }

  virtual antlrcpp::Any visitExternalTypeReference(ASN1Parser::ExternalTypeReferenceContext *ctx) override {
    ExternalTypeReferenceContextProxy proxy(ctx);
    return getSelf().call("visit_external_type_reference", &proxy);
  }

  virtual antlrcpp::Any visitExternalValueReference(ASN1Parser::ExternalValueReferenceContext *ctx) override {
    ExternalValueReferenceContextProxy proxy(ctx);
    return getSelf().call("visit_external_value_reference", &proxy);
  }

  virtual antlrcpp::Any visitTypeAssignment(ASN1Parser::TypeAssignmentContext *ctx) override {
    TypeAssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_type_assignment", &proxy);
  }

  virtual antlrcpp::Any visitValueAssignment(ASN1Parser::ValueAssignmentContext *ctx) override {
    ValueAssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_value_assignment", &proxy);
  }

  virtual antlrcpp::Any visitValueSetTypeAssignment(ASN1Parser::ValueSetTypeAssignmentContext *ctx) override {
    ValueSetTypeAssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_value_set_type_assignment", &proxy);
  }

  virtual antlrcpp::Any visitValueSet(ASN1Parser::ValueSetContext *ctx) override {
    ValueSetContextProxy proxy(ctx);
    return getSelf().call("visit_value_set", &proxy);
  }

  virtual antlrcpp::Any visitType(ASN1Parser::TypeContext *ctx) override {
    TypeContextProxy proxy(ctx);
    return getSelf().call("visit_type", &proxy);
  }

  virtual antlrcpp::Any visitBuiltinType(ASN1Parser::BuiltinTypeContext *ctx) override {
    BuiltinTypeContextProxy proxy(ctx);
    return getSelf().call("visit_builtin_type", &proxy);
  }

  virtual antlrcpp::Any visitReferencedType(ASN1Parser::ReferencedTypeContext *ctx) override {
    ReferencedTypeContextProxy proxy(ctx);
    return getSelf().call("visit_referenced_type", &proxy);
  }

  virtual antlrcpp::Any visitNamedType(ASN1Parser::NamedTypeContext *ctx) override {
    NamedTypeContextProxy proxy(ctx);
    return getSelf().call("visit_named_type", &proxy);
  }

  virtual antlrcpp::Any visitValue(ASN1Parser::ValueContext *ctx) override {
    ValueContextProxy proxy(ctx);
    return getSelf().call("visit_value", &proxy);
  }

  virtual antlrcpp::Any visitBuiltinValue(ASN1Parser::BuiltinValueContext *ctx) override {
    BuiltinValueContextProxy proxy(ctx);
    return getSelf().call("visit_builtin_value", &proxy);
  }

  virtual antlrcpp::Any visitReferencedValue(ASN1Parser::ReferencedValueContext *ctx) override {
    ReferencedValueContextProxy proxy(ctx);
    return getSelf().call("visit_referenced_value", &proxy);
  }

  virtual antlrcpp::Any visitNamedValue(ASN1Parser::NamedValueContext *ctx) override {
    NamedValueContextProxy proxy(ctx);
    return getSelf().call("visit_named_value", &proxy);
  }

  virtual antlrcpp::Any visitBooleanType(ASN1Parser::BooleanTypeContext *ctx) override {
    BooleanTypeContextProxy proxy(ctx);
    return getSelf().call("visit_boolean_type", &proxy);
  }

  virtual antlrcpp::Any visitBooleanValue(ASN1Parser::BooleanValueContext *ctx) override {
    BooleanValueContextProxy proxy(ctx);
    return getSelf().call("visit_boolean_value", &proxy);
  }

  virtual antlrcpp::Any visitIntegerType(ASN1Parser::IntegerTypeContext *ctx) override {
    IntegerTypeContextProxy proxy(ctx);
    return getSelf().call("visit_integer_type", &proxy);
  }

  virtual antlrcpp::Any visitNamedNumberList(ASN1Parser::NamedNumberListContext *ctx) override {
    NamedNumberListContextProxy proxy(ctx);
    return getSelf().call("visit_named_number_list", &proxy);
  }

  virtual antlrcpp::Any visitNamedNumber(ASN1Parser::NamedNumberContext *ctx) override {
    NamedNumberContextProxy proxy(ctx);
    return getSelf().call("visit_named_number", &proxy);
  }

  virtual antlrcpp::Any visitSignedNumber(ASN1Parser::SignedNumberContext *ctx) override {
    SignedNumberContextProxy proxy(ctx);
    return getSelf().call("visit_signed_number", &proxy);
  }

  virtual antlrcpp::Any visitIntegerValue(ASN1Parser::IntegerValueContext *ctx) override {
    IntegerValueContextProxy proxy(ctx);
    return getSelf().call("visit_integer_value", &proxy);
  }

  virtual antlrcpp::Any visitEnumeratedType(ASN1Parser::EnumeratedTypeContext *ctx) override {
    EnumeratedTypeContextProxy proxy(ctx);
    return getSelf().call("visit_enumerated_type", &proxy);
  }

  virtual antlrcpp::Any visitEnumerations(ASN1Parser::EnumerationsContext *ctx) override {
    EnumerationsContextProxy proxy(ctx);
    return getSelf().call("visit_enumerations", &proxy);
  }

  virtual antlrcpp::Any visitRootEnumeration(ASN1Parser::RootEnumerationContext *ctx) override {
    RootEnumerationContextProxy proxy(ctx);
    return getSelf().call("visit_root_enumeration", &proxy);
  }

  virtual antlrcpp::Any visitAdditionalEnumeration(ASN1Parser::AdditionalEnumerationContext *ctx) override {
    AdditionalEnumerationContextProxy proxy(ctx);
    return getSelf().call("visit_additional_enumeration", &proxy);
  }

  virtual antlrcpp::Any visitEnumeration(ASN1Parser::EnumerationContext *ctx) override {
    EnumerationContextProxy proxy(ctx);
    return getSelf().call("visit_enumeration", &proxy);
  }

  virtual antlrcpp::Any visitEnumerationItem(ASN1Parser::EnumerationItemContext *ctx) override {
    EnumerationItemContextProxy proxy(ctx);
    return getSelf().call("visit_enumeration_item", &proxy);
  }

  virtual antlrcpp::Any visitEnumeratedValue(ASN1Parser::EnumeratedValueContext *ctx) override {
    EnumeratedValueContextProxy proxy(ctx);
    return getSelf().call("visit_enumerated_value", &proxy);
  }

  virtual antlrcpp::Any visitBitStringType(ASN1Parser::BitStringTypeContext *ctx) override {
    BitStringTypeContextProxy proxy(ctx);
    return getSelf().call("visit_bit_string_type", &proxy);
  }

  virtual antlrcpp::Any visitNamedBitList(ASN1Parser::NamedBitListContext *ctx) override {
    NamedBitListContextProxy proxy(ctx);
    return getSelf().call("visit_named_bit_list", &proxy);
  }

  virtual antlrcpp::Any visitNamedBit(ASN1Parser::NamedBitContext *ctx) override {
    NamedBitContextProxy proxy(ctx);
    return getSelf().call("visit_named_bit", &proxy);
  }

  virtual antlrcpp::Any visitBitStringValue(ASN1Parser::BitStringValueContext *ctx) override {
    BitStringValueContextProxy proxy(ctx);
    return getSelf().call("visit_bit_string_value", &proxy);
  }

  virtual antlrcpp::Any visitIdentifierList(ASN1Parser::IdentifierListContext *ctx) override {
    IdentifierListContextProxy proxy(ctx);
    return getSelf().call("visit_identifier_list", &proxy);
  }

  virtual antlrcpp::Any visitOctetStringType(ASN1Parser::OctetStringTypeContext *ctx) override {
    OctetStringTypeContextProxy proxy(ctx);
    return getSelf().call("visit_octet_string_type", &proxy);
  }

  virtual antlrcpp::Any visitOctetStringValue(ASN1Parser::OctetStringValueContext *ctx) override {
    OctetStringValueContextProxy proxy(ctx);
    return getSelf().call("visit_octet_string_value", &proxy);
  }

  virtual antlrcpp::Any visitNullType(ASN1Parser::NullTypeContext *ctx) override {
    NullTypeContextProxy proxy(ctx);
    return getSelf().call("visit_null_type", &proxy);
  }

  virtual antlrcpp::Any visitNullValue(ASN1Parser::NullValueContext *ctx) override {
    NullValueContextProxy proxy(ctx);
    return getSelf().call("visit_null_value", &proxy);
  }

  virtual antlrcpp::Any visitSequenceType(ASN1Parser::SequenceTypeContext *ctx) override {
    SequenceTypeContextProxy proxy(ctx);
    return getSelf().call("visit_sequence_type", &proxy);
  }

  virtual antlrcpp::Any visitComponentTypeLists(ASN1Parser::ComponentTypeListsContext *ctx) override {
    ComponentTypeListsContextProxy proxy(ctx);
    return getSelf().call("visit_component_type_lists", &proxy);
  }

  virtual antlrcpp::Any visitRootComponentTypeList(ASN1Parser::RootComponentTypeListContext *ctx) override {
    RootComponentTypeListContextProxy proxy(ctx);
    return getSelf().call("visit_root_component_type_list", &proxy);
  }

  virtual antlrcpp::Any visitExtensionEndMarker(ASN1Parser::ExtensionEndMarkerContext *ctx) override {
    ExtensionEndMarkerContextProxy proxy(ctx);
    return getSelf().call("visit_extension_end_marker", &proxy);
  }

  virtual antlrcpp::Any visitExtensionAdditions(ASN1Parser::ExtensionAdditionsContext *ctx) override {
    ExtensionAdditionsContextProxy proxy(ctx);
    return getSelf().call("visit_extension_additions", &proxy);
  }

  virtual antlrcpp::Any visitExtensionAdditionList(ASN1Parser::ExtensionAdditionListContext *ctx) override {
    ExtensionAdditionListContextProxy proxy(ctx);
    return getSelf().call("visit_extension_addition_list", &proxy);
  }

  virtual antlrcpp::Any visitExtensionAddition(ASN1Parser::ExtensionAdditionContext *ctx) override {
    ExtensionAdditionContextProxy proxy(ctx);
    return getSelf().call("visit_extension_addition", &proxy);
  }

  virtual antlrcpp::Any visitExtensionAdditionGroup(ASN1Parser::ExtensionAdditionGroupContext *ctx) override {
    ExtensionAdditionGroupContextProxy proxy(ctx);
    return getSelf().call("visit_extension_addition_group", &proxy);
  }

  virtual antlrcpp::Any visitVersionNumber(ASN1Parser::VersionNumberContext *ctx) override {
    VersionNumberContextProxy proxy(ctx);
    return getSelf().call("visit_version_number", &proxy);
  }

  virtual antlrcpp::Any visitComponentTypeList(ASN1Parser::ComponentTypeListContext *ctx) override {
    ComponentTypeListContextProxy proxy(ctx);
    return getSelf().call("visit_component_type_list", &proxy);
  }

  virtual antlrcpp::Any visitComponentType(ASN1Parser::ComponentTypeContext *ctx) override {
    ComponentTypeContextProxy proxy(ctx);
    return getSelf().call("visit_component_type", &proxy);
  }

  virtual antlrcpp::Any visitSequenceValue(ASN1Parser::SequenceValueContext *ctx) override {
    SequenceValueContextProxy proxy(ctx);
    return getSelf().call("visit_sequence_value", &proxy);
  }

  virtual antlrcpp::Any visitComponentValueList(ASN1Parser::ComponentValueListContext *ctx) override {
    ComponentValueListContextProxy proxy(ctx);
    return getSelf().call("visit_component_value_list", &proxy);
  }

  virtual antlrcpp::Any visitSequenceOfType(ASN1Parser::SequenceOfTypeContext *ctx) override {
    SequenceOfTypeContextProxy proxy(ctx);
    return getSelf().call("visit_sequence_of_type", &proxy);
  }

  virtual antlrcpp::Any visitSequenceOfValue(ASN1Parser::SequenceOfValueContext *ctx) override {
    SequenceOfValueContextProxy proxy(ctx);
    return getSelf().call("visit_sequence_of_value", &proxy);
  }

  virtual antlrcpp::Any visitValueList(ASN1Parser::ValueListContext *ctx) override {
    ValueListContextProxy proxy(ctx);
    return getSelf().call("visit_value_list", &proxy);
  }

  virtual antlrcpp::Any visitNamedValueList(ASN1Parser::NamedValueListContext *ctx) override {
    NamedValueListContextProxy proxy(ctx);
    return getSelf().call("visit_named_value_list", &proxy);
  }

  virtual antlrcpp::Any visitSetType(ASN1Parser::SetTypeContext *ctx) override {
    SetTypeContextProxy proxy(ctx);
    return getSelf().call("visit_set_type", &proxy);
  }

  virtual antlrcpp::Any visitSetValue(ASN1Parser::SetValueContext *ctx) override {
    SetValueContextProxy proxy(ctx);
    return getSelf().call("visit_set_value", &proxy);
  }

  virtual antlrcpp::Any visitSetOfType(ASN1Parser::SetOfTypeContext *ctx) override {
    SetOfTypeContextProxy proxy(ctx);
    return getSelf().call("visit_set_of_type", &proxy);
  }

  virtual antlrcpp::Any visitSetOfValue(ASN1Parser::SetOfValueContext *ctx) override {
    SetOfValueContextProxy proxy(ctx);
    return getSelf().call("visit_set_of_value", &proxy);
  }

  virtual antlrcpp::Any visitChoiceType(ASN1Parser::ChoiceTypeContext *ctx) override {
    ChoiceTypeContextProxy proxy(ctx);
    return getSelf().call("visit_choice_type", &proxy);
  }

  virtual antlrcpp::Any visitAlternativeTypeLists(ASN1Parser::AlternativeTypeListsContext *ctx) override {
    AlternativeTypeListsContextProxy proxy(ctx);
    return getSelf().call("visit_alternative_type_lists", &proxy);
  }

  virtual antlrcpp::Any visitRootAlternativeTypeList(ASN1Parser::RootAlternativeTypeListContext *ctx) override {
    RootAlternativeTypeListContextProxy proxy(ctx);
    return getSelf().call("visit_root_alternative_type_list", &proxy);
  }

  virtual antlrcpp::Any visitExtensionAdditionAlternatives(ASN1Parser::ExtensionAdditionAlternativesContext *ctx) override {
    ExtensionAdditionAlternativesContextProxy proxy(ctx);
    return getSelf().call("visit_extension_addition_alternatives", &proxy);
  }

  virtual antlrcpp::Any visitExtensionAdditionAlternativesList(ASN1Parser::ExtensionAdditionAlternativesListContext *ctx) override {
    ExtensionAdditionAlternativesListContextProxy proxy(ctx);
    return getSelf().call("visit_extension_addition_alternatives_list", &proxy);
  }

  virtual antlrcpp::Any visitExtensionAdditionAlternative(ASN1Parser::ExtensionAdditionAlternativeContext *ctx) override {
    ExtensionAdditionAlternativeContextProxy proxy(ctx);
    return getSelf().call("visit_extension_addition_alternative", &proxy);
  }

  virtual antlrcpp::Any visitExtensionAdditionAlternativesGroup(ASN1Parser::ExtensionAdditionAlternativesGroupContext *ctx) override {
    ExtensionAdditionAlternativesGroupContextProxy proxy(ctx);
    return getSelf().call("visit_extension_addition_alternatives_group", &proxy);
  }

  virtual antlrcpp::Any visitAlternativeTypeList(ASN1Parser::AlternativeTypeListContext *ctx) override {
    AlternativeTypeListContextProxy proxy(ctx);
    return getSelf().call("visit_alternative_type_list", &proxy);
  }

  virtual antlrcpp::Any visitTaggedType(ASN1Parser::TaggedTypeContext *ctx) override {
    TaggedTypeContextProxy proxy(ctx);
    return getSelf().call("visit_tagged_type", &proxy);
  }

  virtual antlrcpp::Any visitTag(ASN1Parser::TagContext *ctx) override {
    TagContextProxy proxy(ctx);
    return getSelf().call("visit_tag", &proxy);
  }

  virtual antlrcpp::Any visitClassNumber(ASN1Parser::ClassNumberContext *ctx) override {
    ClassNumberContextProxy proxy(ctx);
    return getSelf().call("visit_class_number", &proxy);
  }

  virtual antlrcpp::Any visitClassP(ASN1Parser::ClassPContext *ctx) override {
    ClassPContextProxy proxy(ctx);
    return getSelf().call("visit_class_p", &proxy);
  }

  virtual antlrcpp::Any visitObjectIdentifierType(ASN1Parser::ObjectIdentifierTypeContext *ctx) override {
    ObjectIdentifierTypeContextProxy proxy(ctx);
    return getSelf().call("visit_object_identifier_type", &proxy);
  }

  virtual antlrcpp::Any visitObjectIdentifierValue(ASN1Parser::ObjectIdentifierValueContext *ctx) override {
    ObjectIdentifierValueContextProxy proxy(ctx);
    return getSelf().call("visit_object_identifier_value", &proxy);
  }

  virtual antlrcpp::Any visitObjIdComponentsList(ASN1Parser::ObjIdComponentsListContext *ctx) override {
    ObjIdComponentsListContextProxy proxy(ctx);
    return getSelf().call("visit_obj_id_components_list", &proxy);
  }

  virtual antlrcpp::Any visitObjIdComponents(ASN1Parser::ObjIdComponentsContext *ctx) override {
    ObjIdComponentsContextProxy proxy(ctx);
    return getSelf().call("visit_obj_id_components", &proxy);
  }

  virtual antlrcpp::Any visitNameForm(ASN1Parser::NameFormContext *ctx) override {
    NameFormContextProxy proxy(ctx);
    return getSelf().call("visit_name_form", &proxy);
  }

  virtual antlrcpp::Any visitNumberForm(ASN1Parser::NumberFormContext *ctx) override {
    NumberFormContextProxy proxy(ctx);
    return getSelf().call("visit_number_form", &proxy);
  }

  virtual antlrcpp::Any visitNameAndNumberForm(ASN1Parser::NameAndNumberFormContext *ctx) override {
    NameAndNumberFormContextProxy proxy(ctx);
    return getSelf().call("visit_name_and_number_form", &proxy);
  }

  virtual antlrcpp::Any visitExtensionAndException(ASN1Parser::ExtensionAndExceptionContext *ctx) override {
    ExtensionAndExceptionContextProxy proxy(ctx);
    return getSelf().call("visit_extension_and_exception", &proxy);
  }

  virtual antlrcpp::Any visitExceptionSpec(ASN1Parser::ExceptionSpecContext *ctx) override {
    ExceptionSpecContextProxy proxy(ctx);
    return getSelf().call("visit_exception_spec", &proxy);
  }

  virtual antlrcpp::Any visitExceptionIdentification(ASN1Parser::ExceptionIdentificationContext *ctx) override {
    ExceptionIdentificationContextProxy proxy(ctx);
    return getSelf().call("visit_exception_identification", &proxy);
  }

  virtual antlrcpp::Any visitOptionalExtensionMarker(ASN1Parser::OptionalExtensionMarkerContext *ctx) override {
    OptionalExtensionMarkerContextProxy proxy(ctx);
    return getSelf().call("visit_optional_extension_marker", &proxy);
  }

  virtual antlrcpp::Any visitCharacterStringType(ASN1Parser::CharacterStringTypeContext *ctx) override {
    CharacterStringTypeContextProxy proxy(ctx);
    return getSelf().call("visit_character_string_type", &proxy);
  }

  virtual antlrcpp::Any visitCharacterStringValue(ASN1Parser::CharacterStringValueContext *ctx) override {
    CharacterStringValueContextProxy proxy(ctx);
    return getSelf().call("visit_character_string_value", &proxy);
  }

  virtual antlrcpp::Any visitRestrictedCharacterStringType(ASN1Parser::RestrictedCharacterStringTypeContext *ctx) override {
    RestrictedCharacterStringTypeContextProxy proxy(ctx);
    return getSelf().call("visit_restricted_character_string_type", &proxy);
  }

  virtual antlrcpp::Any visitRestrictedCharacterStringValue(ASN1Parser::RestrictedCharacterStringValueContext *ctx) override {
    RestrictedCharacterStringValueContextProxy proxy(ctx);
    return getSelf().call("visit_restricted_character_string_value", &proxy);
  }

  virtual antlrcpp::Any visitCharacterStringList(ASN1Parser::CharacterStringListContext *ctx) override {
    CharacterStringListContextProxy proxy(ctx);
    return getSelf().call("visit_character_string_list", &proxy);
  }

  virtual antlrcpp::Any visitCharSyms(ASN1Parser::CharSymsContext *ctx) override {
    CharSymsContextProxy proxy(ctx);
    return getSelf().call("visit_char_syms", &proxy);
  }

  virtual antlrcpp::Any visitCharsDefn(ASN1Parser::CharsDefnContext *ctx) override {
    CharsDefnContextProxy proxy(ctx);
    return getSelf().call("visit_chars_defn", &proxy);
  }

  virtual antlrcpp::Any visitQuadruple(ASN1Parser::QuadrupleContext *ctx) override {
    QuadrupleContextProxy proxy(ctx);
    return getSelf().call("visit_quadruple", &proxy);
  }

  virtual antlrcpp::Any visitGroup(ASN1Parser::GroupContext *ctx) override {
    GroupContextProxy proxy(ctx);
    return getSelf().call("visit_group", &proxy);
  }

  virtual antlrcpp::Any visitPlane(ASN1Parser::PlaneContext *ctx) override {
    PlaneContextProxy proxy(ctx);
    return getSelf().call("visit_plane", &proxy);
  }

  virtual antlrcpp::Any visitRow(ASN1Parser::RowContext *ctx) override {
    RowContextProxy proxy(ctx);
    return getSelf().call("visit_row", &proxy);
  }

  virtual antlrcpp::Any visitCell(ASN1Parser::CellContext *ctx) override {
    CellContextProxy proxy(ctx);
    return getSelf().call("visit_cell", &proxy);
  }

  virtual antlrcpp::Any visitTuple(ASN1Parser::TupleContext *ctx) override {
    TupleContextProxy proxy(ctx);
    return getSelf().call("visit_tuple", &proxy);
  }

  virtual antlrcpp::Any visitTableColumn(ASN1Parser::TableColumnContext *ctx) override {
    TableColumnContextProxy proxy(ctx);
    return getSelf().call("visit_table_column", &proxy);
  }

  virtual antlrcpp::Any visitTableRow(ASN1Parser::TableRowContext *ctx) override {
    TableRowContextProxy proxy(ctx);
    return getSelf().call("visit_table_row", &proxy);
  }

  virtual antlrcpp::Any visitUnrestrictedCharacterStringType(ASN1Parser::UnrestrictedCharacterStringTypeContext *ctx) override {
    UnrestrictedCharacterStringTypeContextProxy proxy(ctx);
    return getSelf().call("visit_unrestricted_character_string_type", &proxy);
  }

  virtual antlrcpp::Any visitGeneralizedTimeType(ASN1Parser::GeneralizedTimeTypeContext *ctx) override {
    GeneralizedTimeTypeContextProxy proxy(ctx);
    return getSelf().call("visit_generalized_time_type", &proxy);
  }

  virtual antlrcpp::Any visitUTCTimeType(ASN1Parser::UTCTimeTypeContext *ctx) override {
    UTCTimeTypeContextProxy proxy(ctx);
    return getSelf().call("visit_utc_time_type", &proxy);
  }

  virtual antlrcpp::Any visitConstrainedType(ASN1Parser::ConstrainedTypeContext *ctx) override {
    ConstrainedTypeContextProxy proxy(ctx);
    return getSelf().call("visit_constrained_type", &proxy);
  }

  virtual antlrcpp::Any visitTypeWithConstraint(ASN1Parser::TypeWithConstraintContext *ctx) override {
    TypeWithConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_type_with_constraint", &proxy);
  }

  virtual antlrcpp::Any visitConstraint(ASN1Parser::ConstraintContext *ctx) override {
    ConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_constraint", &proxy);
  }

  virtual antlrcpp::Any visitConstraintSpec(ASN1Parser::ConstraintSpecContext *ctx) override {
    ConstraintSpecContextProxy proxy(ctx);
    return getSelf().call("visit_constraint_spec", &proxy);
  }

  virtual antlrcpp::Any visitSubtypeConstraint(ASN1Parser::SubtypeConstraintContext *ctx) override {
    SubtypeConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_subtype_constraint", &proxy);
  }

  virtual antlrcpp::Any visitGeneralConstraint(ASN1Parser::GeneralConstraintContext *ctx) override {
    GeneralConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_general_constraint", &proxy);
  }

  virtual antlrcpp::Any visitElementSetSpecs(ASN1Parser::ElementSetSpecsContext *ctx) override {
    ElementSetSpecsContextProxy proxy(ctx);
    return getSelf().call("visit_element_set_specs", &proxy);
  }

  virtual antlrcpp::Any visitRootElementSetSpec(ASN1Parser::RootElementSetSpecContext *ctx) override {
    RootElementSetSpecContextProxy proxy(ctx);
    return getSelf().call("visit_root_element_set_spec", &proxy);
  }

  virtual antlrcpp::Any visitAdditionalElementSetSpec(ASN1Parser::AdditionalElementSetSpecContext *ctx) override {
    AdditionalElementSetSpecContextProxy proxy(ctx);
    return getSelf().call("visit_additional_element_set_spec", &proxy);
  }

  virtual antlrcpp::Any visitElementSetSpec(ASN1Parser::ElementSetSpecContext *ctx) override {
    ElementSetSpecContextProxy proxy(ctx);
    return getSelf().call("visit_element_set_spec", &proxy);
  }

  virtual antlrcpp::Any visitUnions(ASN1Parser::UnionsContext *ctx) override {
    UnionsContextProxy proxy(ctx);
    return getSelf().call("visit_unions", &proxy);
  }

  virtual antlrcpp::Any visitUElems(ASN1Parser::UElemsContext *ctx) override {
    UElemsContextProxy proxy(ctx);
    return getSelf().call("visit_u_elems", &proxy);
  }

  virtual antlrcpp::Any visitIntersections(ASN1Parser::IntersectionsContext *ctx) override {
    IntersectionsContextProxy proxy(ctx);
    return getSelf().call("visit_intersections", &proxy);
  }

  virtual antlrcpp::Any visitIElems(ASN1Parser::IElemsContext *ctx) override {
    IElemsContextProxy proxy(ctx);
    return getSelf().call("visit_i_elems", &proxy);
  }

  virtual antlrcpp::Any visitIntersectionElements(ASN1Parser::IntersectionElementsContext *ctx) override {
    IntersectionElementsContextProxy proxy(ctx);
    return getSelf().call("visit_intersection_elements", &proxy);
  }

  virtual antlrcpp::Any visitElems(ASN1Parser::ElemsContext *ctx) override {
    ElemsContextProxy proxy(ctx);
    return getSelf().call("visit_elems", &proxy);
  }

  virtual antlrcpp::Any visitExclusions(ASN1Parser::ExclusionsContext *ctx) override {
    ExclusionsContextProxy proxy(ctx);
    return getSelf().call("visit_exclusions", &proxy);
  }

  virtual antlrcpp::Any visitUnionMark(ASN1Parser::UnionMarkContext *ctx) override {
    UnionMarkContextProxy proxy(ctx);
    return getSelf().call("visit_union_mark", &proxy);
  }

  virtual antlrcpp::Any visitIntersectionMark(ASN1Parser::IntersectionMarkContext *ctx) override {
    IntersectionMarkContextProxy proxy(ctx);
    return getSelf().call("visit_intersection_mark", &proxy);
  }

  virtual antlrcpp::Any visitElements(ASN1Parser::ElementsContext *ctx) override {
    ElementsContextProxy proxy(ctx);
    return getSelf().call("visit_elements", &proxy);
  }

  virtual antlrcpp::Any visitSubtypeElements(ASN1Parser::SubtypeElementsContext *ctx) override {
    SubtypeElementsContextProxy proxy(ctx);
    return getSelf().call("visit_subtype_elements", &proxy);
  }

  virtual antlrcpp::Any visitSingleValue(ASN1Parser::SingleValueContext *ctx) override {
    SingleValueContextProxy proxy(ctx);
    return getSelf().call("visit_single_value", &proxy);
  }

  virtual antlrcpp::Any visitContainedSubtype(ASN1Parser::ContainedSubtypeContext *ctx) override {
    ContainedSubtypeContextProxy proxy(ctx);
    return getSelf().call("visit_contained_subtype", &proxy);
  }

  virtual antlrcpp::Any visitIncludes(ASN1Parser::IncludesContext *ctx) override {
    IncludesContextProxy proxy(ctx);
    return getSelf().call("visit_includes", &proxy);
  }

  virtual antlrcpp::Any visitValueRange(ASN1Parser::ValueRangeContext *ctx) override {
    ValueRangeContextProxy proxy(ctx);
    return getSelf().call("visit_value_range", &proxy);
  }

  virtual antlrcpp::Any visitLowerEndpoint(ASN1Parser::LowerEndpointContext *ctx) override {
    LowerEndpointContextProxy proxy(ctx);
    return getSelf().call("visit_lower_endpoint", &proxy);
  }

  virtual antlrcpp::Any visitUpperEndpoint(ASN1Parser::UpperEndpointContext *ctx) override {
    UpperEndpointContextProxy proxy(ctx);
    return getSelf().call("visit_upper_endpoint", &proxy);
  }

  virtual antlrcpp::Any visitLowerEndValue(ASN1Parser::LowerEndValueContext *ctx) override {
    LowerEndValueContextProxy proxy(ctx);
    return getSelf().call("visit_lower_end_value", &proxy);
  }

  virtual antlrcpp::Any visitUpperEndValue(ASN1Parser::UpperEndValueContext *ctx) override {
    UpperEndValueContextProxy proxy(ctx);
    return getSelf().call("visit_upper_end_value", &proxy);
  }

  virtual antlrcpp::Any visitSizeConstraint(ASN1Parser::SizeConstraintContext *ctx) override {
    SizeConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_size_constraint", &proxy);
  }

  virtual antlrcpp::Any visitPermittedAlphabet(ASN1Parser::PermittedAlphabetContext *ctx) override {
    PermittedAlphabetContextProxy proxy(ctx);
    return getSelf().call("visit_permitted_alphabet", &proxy);
  }

  virtual antlrcpp::Any visitUserDefinedConstraint(ASN1Parser::UserDefinedConstraintContext *ctx) override {
    UserDefinedConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_user_defined_constraint", &proxy);
  }

  virtual antlrcpp::Any visitUserDefinedConstraintParameter(ASN1Parser::UserDefinedConstraintParameterContext *ctx) override {
    UserDefinedConstraintParameterContextProxy proxy(ctx);
    return getSelf().call("visit_user_defined_constraint_parameter", &proxy);
  }

  virtual antlrcpp::Any visitTableConstraint(ASN1Parser::TableConstraintContext *ctx) override {
    TableConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_table_constraint", &proxy);
  }

  virtual antlrcpp::Any visitSimpleTableConstraint(ASN1Parser::SimpleTableConstraintContext *ctx) override {
    SimpleTableConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_simple_table_constraint", &proxy);
  }

  virtual antlrcpp::Any visitComponentRelationConstraint(ASN1Parser::ComponentRelationConstraintContext *ctx) override {
    ComponentRelationConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_component_relation_constraint", &proxy);
  }

  virtual antlrcpp::Any visitAtNotation(ASN1Parser::AtNotationContext *ctx) override {
    AtNotationContextProxy proxy(ctx);
    return getSelf().call("visit_at_notation", &proxy);
  }

  virtual antlrcpp::Any visitLevel(ASN1Parser::LevelContext *ctx) override {
    LevelContextProxy proxy(ctx);
    return getSelf().call("visit_level", &proxy);
  }

  virtual antlrcpp::Any visitComponentIdList(ASN1Parser::ComponentIdListContext *ctx) override {
    ComponentIdListContextProxy proxy(ctx);
    return getSelf().call("visit_component_id_list", &proxy);
  }

  virtual antlrcpp::Any visitContentsConstraint(ASN1Parser::ContentsConstraintContext *ctx) override {
    ContentsConstraintContextProxy proxy(ctx);
    return getSelf().call("visit_contents_constraint", &proxy);
  }

  virtual antlrcpp::Any visitDefinedObjectClass(ASN1Parser::DefinedObjectClassContext *ctx) override {
    DefinedObjectClassContextProxy proxy(ctx);
    return getSelf().call("visit_defined_object_class", &proxy);
  }

  virtual antlrcpp::Any visitDefinedObject(ASN1Parser::DefinedObjectContext *ctx) override {
    DefinedObjectContextProxy proxy(ctx);
    return getSelf().call("visit_defined_object", &proxy);
  }

  virtual antlrcpp::Any visitDefinedObjectSet(ASN1Parser::DefinedObjectSetContext *ctx) override {
    DefinedObjectSetContextProxy proxy(ctx);
    return getSelf().call("visit_defined_object_set", &proxy);
  }

  virtual antlrcpp::Any visitExternalObjectClassReference(ASN1Parser::ExternalObjectClassReferenceContext *ctx) override {
    ExternalObjectClassReferenceContextProxy proxy(ctx);
    return getSelf().call("visit_external_object_class_reference", &proxy);
  }

  virtual antlrcpp::Any visitExternalObjectReference(ASN1Parser::ExternalObjectReferenceContext *ctx) override {
    ExternalObjectReferenceContextProxy proxy(ctx);
    return getSelf().call("visit_external_object_reference", &proxy);
  }

  virtual antlrcpp::Any visitExternalObjectSetReference(ASN1Parser::ExternalObjectSetReferenceContext *ctx) override {
    ExternalObjectSetReferenceContextProxy proxy(ctx);
    return getSelf().call("visit_external_object_set_reference", &proxy);
  }

  virtual antlrcpp::Any visitUsefulObjectClassReference(ASN1Parser::UsefulObjectClassReferenceContext *ctx) override {
    UsefulObjectClassReferenceContextProxy proxy(ctx);
    return getSelf().call("visit_useful_object_class_reference", &proxy);
  }

  virtual antlrcpp::Any visitObjectClassAssignment(ASN1Parser::ObjectClassAssignmentContext *ctx) override {
    ObjectClassAssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_object_class_assignment", &proxy);
  }

  virtual antlrcpp::Any visitObjectClass(ASN1Parser::ObjectClassContext *ctx) override {
    ObjectClassContextProxy proxy(ctx);
    return getSelf().call("visit_object_class", &proxy);
  }

  virtual antlrcpp::Any visitObjectClassDefn(ASN1Parser::ObjectClassDefnContext *ctx) override {
    ObjectClassDefnContextProxy proxy(ctx);
    return getSelf().call("visit_object_class_defn", &proxy);
  }

  virtual antlrcpp::Any visitWithSyntaxSpec(ASN1Parser::WithSyntaxSpecContext *ctx) override {
    WithSyntaxSpecContextProxy proxy(ctx);
    return getSelf().call("visit_with_syntax_spec", &proxy);
  }

  virtual antlrcpp::Any visitFieldSpec(ASN1Parser::FieldSpecContext *ctx) override {
    FieldSpecContextProxy proxy(ctx);
    return getSelf().call("visit_field_spec", &proxy);
  }

  virtual antlrcpp::Any visitTypeFieldSpec(ASN1Parser::TypeFieldSpecContext *ctx) override {
    TypeFieldSpecContextProxy proxy(ctx);
    return getSelf().call("visit_type_field_spec", &proxy);
  }

  virtual antlrcpp::Any visitTypeOptionalitySpec(ASN1Parser::TypeOptionalitySpecContext *ctx) override {
    TypeOptionalitySpecContextProxy proxy(ctx);
    return getSelf().call("visit_type_optionality_spec", &proxy);
  }

  virtual antlrcpp::Any visitFixedTypeValueFieldSpec(ASN1Parser::FixedTypeValueFieldSpecContext *ctx) override {
    FixedTypeValueFieldSpecContextProxy proxy(ctx);
    return getSelf().call("visit_fixed_type_value_field_spec", &proxy);
  }

  virtual antlrcpp::Any visitValueOptionalitySpec(ASN1Parser::ValueOptionalitySpecContext *ctx) override {
    ValueOptionalitySpecContextProxy proxy(ctx);
    return getSelf().call("visit_value_optionality_spec", &proxy);
  }

  virtual antlrcpp::Any visitVariableTypeValueFieldSpec(ASN1Parser::VariableTypeValueFieldSpecContext *ctx) override {
    VariableTypeValueFieldSpecContextProxy proxy(ctx);
    return getSelf().call("visit_variable_type_value_field_spec", &proxy);
  }

  virtual antlrcpp::Any visitFixedTypeValueSetFieldSpec(ASN1Parser::FixedTypeValueSetFieldSpecContext *ctx) override {
    FixedTypeValueSetFieldSpecContextProxy proxy(ctx);
    return getSelf().call("visit_fixed_type_value_set_field_spec", &proxy);
  }

  virtual antlrcpp::Any visitValueSetOptionalitySpec(ASN1Parser::ValueSetOptionalitySpecContext *ctx) override {
    ValueSetOptionalitySpecContextProxy proxy(ctx);
    return getSelf().call("visit_value_set_optionality_spec", &proxy);
  }

  virtual antlrcpp::Any visitVariableTypeValueSetFieldSpec(ASN1Parser::VariableTypeValueSetFieldSpecContext *ctx) override {
    VariableTypeValueSetFieldSpecContextProxy proxy(ctx);
    return getSelf().call("visit_variable_type_value_set_field_spec", &proxy);
  }

  virtual antlrcpp::Any visitObjectFieldSpec(ASN1Parser::ObjectFieldSpecContext *ctx) override {
    ObjectFieldSpecContextProxy proxy(ctx);
    return getSelf().call("visit_object_field_spec", &proxy);
  }

  virtual antlrcpp::Any visitObjectOptionalitySpec(ASN1Parser::ObjectOptionalitySpecContext *ctx) override {
    ObjectOptionalitySpecContextProxy proxy(ctx);
    return getSelf().call("visit_object_optionality_spec", &proxy);
  }

  virtual antlrcpp::Any visitObjectSetFieldSpec(ASN1Parser::ObjectSetFieldSpecContext *ctx) override {
    ObjectSetFieldSpecContextProxy proxy(ctx);
    return getSelf().call("visit_object_set_field_spec", &proxy);
  }

  virtual antlrcpp::Any visitObjectSetOptionalitySpec(ASN1Parser::ObjectSetOptionalitySpecContext *ctx) override {
    ObjectSetOptionalitySpecContextProxy proxy(ctx);
    return getSelf().call("visit_object_set_optionality_spec", &proxy);
  }

  virtual antlrcpp::Any visitPrimitiveFieldName(ASN1Parser::PrimitiveFieldNameContext *ctx) override {
    PrimitiveFieldNameContextProxy proxy(ctx);
    return getSelf().call("visit_primitive_field_name", &proxy);
  }

  virtual antlrcpp::Any visitFieldName(ASN1Parser::FieldNameContext *ctx) override {
    FieldNameContextProxy proxy(ctx);
    return getSelf().call("visit_field_name", &proxy);
  }

  virtual antlrcpp::Any visitSyntaxList(ASN1Parser::SyntaxListContext *ctx) override {
    SyntaxListContextProxy proxy(ctx);
    return getSelf().call("visit_syntax_list", &proxy);
  }

  virtual antlrcpp::Any visitTokenOrGroupSpec(ASN1Parser::TokenOrGroupSpecContext *ctx) override {
    TokenOrGroupSpecContextProxy proxy(ctx);
    return getSelf().call("visit_token_or_group_spec", &proxy);
  }

  virtual antlrcpp::Any visitOptionalGroup(ASN1Parser::OptionalGroupContext *ctx) override {
    OptionalGroupContextProxy proxy(ctx);
    return getSelf().call("visit_optional_group", &proxy);
  }

  virtual antlrcpp::Any visitRequiredToken(ASN1Parser::RequiredTokenContext *ctx) override {
    RequiredTokenContextProxy proxy(ctx);
    return getSelf().call("visit_required_token", &proxy);
  }

  virtual antlrcpp::Any visitLiteral(ASN1Parser::LiteralContext *ctx) override {
    LiteralContextProxy proxy(ctx);
    return getSelf().call("visit_literal", &proxy);
  }

  virtual antlrcpp::Any visitObjectAssignment(ASN1Parser::ObjectAssignmentContext *ctx) override {
    ObjectAssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_object_assignment", &proxy);
  }

  virtual antlrcpp::Any visitObject(ASN1Parser::ObjectContext *ctx) override {
    ObjectContextProxy proxy(ctx);
    return getSelf().call("visit_object", &proxy);
  }

  virtual antlrcpp::Any visitObjectDefn(ASN1Parser::ObjectDefnContext *ctx) override {
    ObjectDefnContextProxy proxy(ctx);
    return getSelf().call("visit_object_defn", &proxy);
  }

  virtual antlrcpp::Any visitDefaultSyntax(ASN1Parser::DefaultSyntaxContext *ctx) override {
    DefaultSyntaxContextProxy proxy(ctx);
    return getSelf().call("visit_default_syntax", &proxy);
  }

  virtual antlrcpp::Any visitFieldSetting(ASN1Parser::FieldSettingContext *ctx) override {
    FieldSettingContextProxy proxy(ctx);
    return getSelf().call("visit_field_setting", &proxy);
  }

  virtual antlrcpp::Any visitDefinedSyntax(ASN1Parser::DefinedSyntaxContext *ctx) override {
    DefinedSyntaxContextProxy proxy(ctx);
    return getSelf().call("visit_defined_syntax", &proxy);
  }

  virtual antlrcpp::Any visitDefinedSyntaxToken(ASN1Parser::DefinedSyntaxTokenContext *ctx) override {
    DefinedSyntaxTokenContextProxy proxy(ctx);
    return getSelf().call("visit_defined_syntax_token", &proxy);
  }

  virtual antlrcpp::Any visitSetting(ASN1Parser::SettingContext *ctx) override {
    SettingContextProxy proxy(ctx);
    return getSelf().call("visit_setting", &proxy);
  }

  virtual antlrcpp::Any visitObjectSetAssignment(ASN1Parser::ObjectSetAssignmentContext *ctx) override {
    ObjectSetAssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_object_set_assignment", &proxy);
  }

  virtual antlrcpp::Any visitObjectSet(ASN1Parser::ObjectSetContext *ctx) override {
    ObjectSetContextProxy proxy(ctx);
    return getSelf().call("visit_object_set", &proxy);
  }

  virtual antlrcpp::Any visitObjectSetSpec(ASN1Parser::ObjectSetSpecContext *ctx) override {
    ObjectSetSpecContextProxy proxy(ctx);
    return getSelf().call("visit_object_set_spec", &proxy);
  }

  virtual antlrcpp::Any visitObjectSetElements(ASN1Parser::ObjectSetElementsContext *ctx) override {
    ObjectSetElementsContextProxy proxy(ctx);
    return getSelf().call("visit_object_set_elements", &proxy);
  }

  virtual antlrcpp::Any visitObjectClassFieldType(ASN1Parser::ObjectClassFieldTypeContext *ctx) override {
    ObjectClassFieldTypeContextProxy proxy(ctx);
    return getSelf().call("visit_object_class_field_type", &proxy);
  }

  virtual antlrcpp::Any visitObjectClassFieldValue(ASN1Parser::ObjectClassFieldValueContext *ctx) override {
    ObjectClassFieldValueContextProxy proxy(ctx);
    return getSelf().call("visit_object_class_field_value", &proxy);
  }

  virtual antlrcpp::Any visitOpenTypeFieldVal(ASN1Parser::OpenTypeFieldValContext *ctx) override {
    OpenTypeFieldValContextProxy proxy(ctx);
    return getSelf().call("visit_open_type_field_val", &proxy);
  }

  virtual antlrcpp::Any visitFixedTypeFieldVal(ASN1Parser::FixedTypeFieldValContext *ctx) override {
    FixedTypeFieldValContextProxy proxy(ctx);
    return getSelf().call("visit_fixed_type_field_val", &proxy);
  }

  virtual antlrcpp::Any visitValueFromObject(ASN1Parser::ValueFromObjectContext *ctx) override {
    ValueFromObjectContextProxy proxy(ctx);
    return getSelf().call("visit_value_from_object", &proxy);
  }

  virtual antlrcpp::Any visitValueSetFromObjects(ASN1Parser::ValueSetFromObjectsContext *ctx) override {
    ValueSetFromObjectsContextProxy proxy(ctx);
    return getSelf().call("visit_value_set_from_objects", &proxy);
  }

  virtual antlrcpp::Any visitTypeFromObject(ASN1Parser::TypeFromObjectContext *ctx) override {
    TypeFromObjectContextProxy proxy(ctx);
    return getSelf().call("visit_type_from_object", &proxy);
  }

  virtual antlrcpp::Any visitObjectFromObject(ASN1Parser::ObjectFromObjectContext *ctx) override {
    ObjectFromObjectContextProxy proxy(ctx);
    return getSelf().call("visit_object_from_object", &proxy);
  }

  virtual antlrcpp::Any visitObjectSetFromObjects(ASN1Parser::ObjectSetFromObjectsContext *ctx) override {
    ObjectSetFromObjectsContextProxy proxy(ctx);
    return getSelf().call("visit_object_set_from_objects", &proxy);
  }

  virtual antlrcpp::Any visitReferencedObjects(ASN1Parser::ReferencedObjectsContext *ctx) override {
    ReferencedObjectsContextProxy proxy(ctx);
    return getSelf().call("visit_referenced_objects", &proxy);
  }

  virtual antlrcpp::Any visitAnyType(ASN1Parser::AnyTypeContext *ctx) override {
    AnyTypeContextProxy proxy(ctx);
    return getSelf().call("visit_any_type", &proxy);
  }

  virtual antlrcpp::Any visitObjectclassreference(ASN1Parser::ObjectclassreferenceContext *ctx) override {
    ObjectclassreferenceContextProxy proxy(ctx);
    return getSelf().call("visit_objectclassreference", &proxy);
  }

  virtual antlrcpp::Any visitObjectreference(ASN1Parser::ObjectreferenceContext *ctx) override {
    ObjectreferenceContextProxy proxy(ctx);
    return getSelf().call("visit_objectreference", &proxy);
  }

  virtual antlrcpp::Any visitObjectsetreference(ASN1Parser::ObjectsetreferenceContext *ctx) override {
    ObjectsetreferenceContextProxy proxy(ctx);
    return getSelf().call("visit_objectsetreference", &proxy);
  }

  virtual antlrcpp::Any visitTypefieldreference(ASN1Parser::TypefieldreferenceContext *ctx) override {
    TypefieldreferenceContextProxy proxy(ctx);
    return getSelf().call("visit_typefieldreference", &proxy);
  }

  virtual antlrcpp::Any visitValuefieldreference(ASN1Parser::ValuefieldreferenceContext *ctx) override {
    ValuefieldreferenceContextProxy proxy(ctx);
    return getSelf().call("visit_valuefieldreference", &proxy);
  }

  virtual antlrcpp::Any visitValuesetfieldreference(ASN1Parser::ValuesetfieldreferenceContext *ctx) override {
    ValuesetfieldreferenceContextProxy proxy(ctx);
    return getSelf().call("visit_valuesetfieldreference", &proxy);
  }

  virtual antlrcpp::Any visitObjectfieldreference(ASN1Parser::ObjectfieldreferenceContext *ctx) override {
    ObjectfieldreferenceContextProxy proxy(ctx);
    return getSelf().call("visit_objectfieldreference", &proxy);
  }

  virtual antlrcpp::Any visitObjectsetfieldreference(ASN1Parser::ObjectsetfieldreferenceContext *ctx) override {
    ObjectsetfieldreferenceContextProxy proxy(ctx);
    return getSelf().call("visit_objectsetfieldreference", &proxy);
  }

  virtual antlrcpp::Any visitWord(ASN1Parser::WordContext *ctx) override {
    WordContextProxy proxy(ctx);
    return getSelf().call("visit_word", &proxy);
  }

  virtual antlrcpp::Any visitParameterizedAssignment(ASN1Parser::ParameterizedAssignmentContext *ctx) override {
    ParameterizedAssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_parameterized_assignment", &proxy);
  }

  virtual antlrcpp::Any visitParameterizedTypeAssignment(ASN1Parser::ParameterizedTypeAssignmentContext *ctx) override {
    ParameterizedTypeAssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_parameterized_type_assignment", &proxy);
  }

  virtual antlrcpp::Any visitParameterizedValueAssignment(ASN1Parser::ParameterizedValueAssignmentContext *ctx) override {
    ParameterizedValueAssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_parameterized_value_assignment", &proxy);
  }

  virtual antlrcpp::Any visitParameterizedValueSetTypeAssignment(ASN1Parser::ParameterizedValueSetTypeAssignmentContext *ctx) override {
    ParameterizedValueSetTypeAssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_parameterized_value_set_type_assignment", &proxy);
  }

  virtual antlrcpp::Any visitParameterizedObjectClassAssignment(ASN1Parser::ParameterizedObjectClassAssignmentContext *ctx) override {
    ParameterizedObjectClassAssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_parameterized_object_class_assignment", &proxy);
  }

  virtual antlrcpp::Any visitParameterizedObjectAssignment(ASN1Parser::ParameterizedObjectAssignmentContext *ctx) override {
    ParameterizedObjectAssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_parameterized_object_assignment", &proxy);
  }

  virtual antlrcpp::Any visitParameterizedObjectSetAssignment(ASN1Parser::ParameterizedObjectSetAssignmentContext *ctx) override {
    ParameterizedObjectSetAssignmentContextProxy proxy(ctx);
    return getSelf().call("visit_parameterized_object_set_assignment", &proxy);
  }

  virtual antlrcpp::Any visitParameterList(ASN1Parser::ParameterListContext *ctx) override {
    ParameterListContextProxy proxy(ctx);
    return getSelf().call("visit_parameter_list", &proxy);
  }

  virtual antlrcpp::Any visitParameter(ASN1Parser::ParameterContext *ctx) override {
    ParameterContextProxy proxy(ctx);
    return getSelf().call("visit_parameter", &proxy);
  }

  virtual antlrcpp::Any visitParamGovernor(ASN1Parser::ParamGovernorContext *ctx) override {
    ParamGovernorContextProxy proxy(ctx);
    return getSelf().call("visit_param_governor", &proxy);
  }

  virtual antlrcpp::Any visitGovernor(ASN1Parser::GovernorContext *ctx) override {
    GovernorContextProxy proxy(ctx);
    return getSelf().call("visit_governor", &proxy);
  }

  virtual antlrcpp::Any visitDummyGovernor(ASN1Parser::DummyGovernorContext *ctx) override {
    DummyGovernorContextProxy proxy(ctx);
    return getSelf().call("visit_dummy_governor", &proxy);
  }

  virtual antlrcpp::Any visitDummyReference(ASN1Parser::DummyReferenceContext *ctx) override {
    DummyReferenceContextProxy proxy(ctx);
    return getSelf().call("visit_dummy_reference", &proxy);
  }

  virtual antlrcpp::Any visitParameterizedReference(ASN1Parser::ParameterizedReferenceContext *ctx) override {
    ParameterizedReferenceContextProxy proxy(ctx);
    return getSelf().call("visit_parameterized_reference", &proxy);
  }

  virtual antlrcpp::Any visitParameterizedType(ASN1Parser::ParameterizedTypeContext *ctx) override {
    ParameterizedTypeContextProxy proxy(ctx);
    return getSelf().call("visit_parameterized_type", &proxy);
  }

  virtual antlrcpp::Any visitSimpleDefinedType(ASN1Parser::SimpleDefinedTypeContext *ctx) override {
    SimpleDefinedTypeContextProxy proxy(ctx);
    return getSelf().call("visit_simple_defined_type", &proxy);
  }

  virtual antlrcpp::Any visitParameterizedValue(ASN1Parser::ParameterizedValueContext *ctx) override {
    ParameterizedValueContextProxy proxy(ctx);
    return getSelf().call("visit_parameterized_value", &proxy);
  }

  virtual antlrcpp::Any visitSimpleDefinedValue(ASN1Parser::SimpleDefinedValueContext *ctx) override {
    SimpleDefinedValueContextProxy proxy(ctx);
    return getSelf().call("visit_simple_defined_value", &proxy);
  }

  virtual antlrcpp::Any visitParameterizedValueSetType(ASN1Parser::ParameterizedValueSetTypeContext *ctx) override {
    ParameterizedValueSetTypeContextProxy proxy(ctx);
    return getSelf().call("visit_parameterized_value_set_type", &proxy);
  }

  virtual antlrcpp::Any visitParameterizedObjectClass(ASN1Parser::ParameterizedObjectClassContext *ctx) override {
    ParameterizedObjectClassContextProxy proxy(ctx);
    return getSelf().call("visit_parameterized_object_class", &proxy);
  }

  virtual antlrcpp::Any visitParameterizedObjectSet(ASN1Parser::ParameterizedObjectSetContext *ctx) override {
    ParameterizedObjectSetContextProxy proxy(ctx);
    return getSelf().call("visit_parameterized_object_set", &proxy);
  }

  virtual antlrcpp::Any visitParameterizedObject(ASN1Parser::ParameterizedObjectContext *ctx) override {
    ParameterizedObjectContextProxy proxy(ctx);
    return getSelf().call("visit_parameterized_object", &proxy);
  }

  virtual antlrcpp::Any visitActualParameterList(ASN1Parser::ActualParameterListContext *ctx) override {
    ActualParameterListContextProxy proxy(ctx);
    return getSelf().call("visit_actual_parameter_list", &proxy);
  }

  virtual antlrcpp::Any visitActualParameter(ASN1Parser::ActualParameterContext *ctx) override {
    ActualParameterContextProxy proxy(ctx);
    return getSelf().call("visit_actual_parameter", &proxy);
  }

  virtual antlrcpp::Any visitTypereference(ASN1Parser::TypereferenceContext *ctx) override {
    TypereferenceContextProxy proxy(ctx);
    return getSelf().call("visit_typereference", &proxy);
  }

  virtual antlrcpp::Any visitIdentifier(ASN1Parser::IdentifierContext *ctx) override {
    IdentifierContextProxy proxy(ctx);
    return getSelf().call("visit_identifier", &proxy);
  }

  virtual antlrcpp::Any visitValuereference(ASN1Parser::ValuereferenceContext *ctx) override {
    ValuereferenceContextProxy proxy(ctx);
    return getSelf().call("visit_valuereference", &proxy);
  }

  virtual antlrcpp::Any visitModulereference(ASN1Parser::ModulereferenceContext *ctx) override {
    ModulereferenceContextProxy proxy(ctx);
    return getSelf().call("visit_modulereference", &proxy);
  }

  virtual antlrcpp::Any visitNumber(ASN1Parser::NumberContext *ctx) override {
    NumberContextProxy proxy(ctx);
    return getSelf().call("visit_number", &proxy);
  }

  virtual antlrcpp::Any visitBstring(ASN1Parser::BstringContext *ctx) override {
    BstringContextProxy proxy(ctx);
    return getSelf().call("visit_bstring", &proxy);
  }

  virtual antlrcpp::Any visitHstring(ASN1Parser::HstringContext *ctx) override {
    HstringContextProxy proxy(ctx);
    return getSelf().call("visit_hstring", &proxy);
  }

  virtual antlrcpp::Any visitCstring(ASN1Parser::CstringContext *ctx) override {
    CstringContextProxy proxy(ctx);
    return getSelf().call("visit_cstring", &proxy);
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

  Object moduleDefinition() {
    auto ctx = this -> parser -> moduleDefinition();

    ModuleDefinitionContextProxy proxy((ASN1Parser::ModuleDefinitionContext*) ctx);
    return detail::To_Ruby<ModuleDefinitionContextProxy>().convert(proxy);
  }

  Object visit(VisitorProxy* visitor) {
    auto result = visitor -> visit(this -> parser -> moduleDefinition());

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
    parser -> lexer = new ASN1Lexer(parser -> input);
    parser -> tokens = new CommonTokenStream(parser -> lexer);
    parser -> parser = new ASN1Parser(parser -> tokens);

    return parser;
  }

  ParserProxy() {};

  ANTLRInputStream* input;
  ASN1Lexer* lexer;
  CommonTokenStream* tokens;
  ASN1Parser* parser;
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
  if (antlrcpp::is<ASN1Parser::ModuleDefinitionContext*>(node)) {
    ModuleDefinitionContextProxy proxy((ASN1Parser::ModuleDefinitionContext*)node);
    return detail::To_Ruby<ModuleDefinitionContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ModuleIdentifierContext*>(node)) {
    ModuleIdentifierContextProxy proxy((ASN1Parser::ModuleIdentifierContext*)node);
    return detail::To_Ruby<ModuleIdentifierContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::TagDefaultContext*>(node)) {
    TagDefaultContextProxy proxy((ASN1Parser::TagDefaultContext*)node);
    return detail::To_Ruby<TagDefaultContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExtensionDefaultContext*>(node)) {
    ExtensionDefaultContextProxy proxy((ASN1Parser::ExtensionDefaultContext*)node);
    return detail::To_Ruby<ExtensionDefaultContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ModuleBodyContext*>(node)) {
    ModuleBodyContextProxy proxy((ASN1Parser::ModuleBodyContext*)node);
    return detail::To_Ruby<ModuleBodyContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ModulereferenceContext*>(node)) {
    ModulereferenceContextProxy proxy((ASN1Parser::ModulereferenceContext*)node);
    return detail::To_Ruby<ModulereferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::DefinitiveIdentifierContext*>(node)) {
    DefinitiveIdentifierContextProxy proxy((ASN1Parser::DefinitiveIdentifierContext*)node);
    return detail::To_Ruby<DefinitiveIdentifierContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::DefinitiveObjIdComponentListContext*>(node)) {
    DefinitiveObjIdComponentListContextProxy proxy((ASN1Parser::DefinitiveObjIdComponentListContext*)node);
    return detail::To_Ruby<DefinitiveObjIdComponentListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::DefinitiveObjIdComponentContext*>(node)) {
    DefinitiveObjIdComponentContextProxy proxy((ASN1Parser::DefinitiveObjIdComponentContext*)node);
    return detail::To_Ruby<DefinitiveObjIdComponentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::NameFormContext*>(node)) {
    NameFormContextProxy proxy((ASN1Parser::NameFormContext*)node);
    return detail::To_Ruby<NameFormContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::DefinitiveNumberFormContext*>(node)) {
    DefinitiveNumberFormContextProxy proxy((ASN1Parser::DefinitiveNumberFormContext*)node);
    return detail::To_Ruby<DefinitiveNumberFormContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::DefinitiveNameAndNumberFormContext*>(node)) {
    DefinitiveNameAndNumberFormContextProxy proxy((ASN1Parser::DefinitiveNameAndNumberFormContext*)node);
    return detail::To_Ruby<DefinitiveNameAndNumberFormContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::NumberContext*>(node)) {
    NumberContextProxy proxy((ASN1Parser::NumberContext*)node);
    return detail::To_Ruby<NumberContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::IdentifierContext*>(node)) {
    IdentifierContextProxy proxy((ASN1Parser::IdentifierContext*)node);
    return detail::To_Ruby<IdentifierContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExportsContext*>(node)) {
    ExportsContextProxy proxy((ASN1Parser::ExportsContext*)node);
    return detail::To_Ruby<ExportsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ImportsContext*>(node)) {
    ImportsContextProxy proxy((ASN1Parser::ImportsContext*)node);
    return detail::To_Ruby<ImportsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::AssignmentListContext*>(node)) {
    AssignmentListContextProxy proxy((ASN1Parser::AssignmentListContext*)node);
    return detail::To_Ruby<AssignmentListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SymbolsExportedContext*>(node)) {
    SymbolsExportedContextProxy proxy((ASN1Parser::SymbolsExportedContext*)node);
    return detail::To_Ruby<SymbolsExportedContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SymbolListContext*>(node)) {
    SymbolListContextProxy proxy((ASN1Parser::SymbolListContext*)node);
    return detail::To_Ruby<SymbolListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SymbolsImportedContext*>(node)) {
    SymbolsImportedContextProxy proxy((ASN1Parser::SymbolsImportedContext*)node);
    return detail::To_Ruby<SymbolsImportedContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SymbolsFromModuleListContext*>(node)) {
    SymbolsFromModuleListContextProxy proxy((ASN1Parser::SymbolsFromModuleListContext*)node);
    return detail::To_Ruby<SymbolsFromModuleListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SymbolsFromModuleContext*>(node)) {
    SymbolsFromModuleContextProxy proxy((ASN1Parser::SymbolsFromModuleContext*)node);
    return detail::To_Ruby<SymbolsFromModuleContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::GlobalModuleReferenceContext*>(node)) {
    GlobalModuleReferenceContextProxy proxy((ASN1Parser::GlobalModuleReferenceContext*)node);
    return detail::To_Ruby<GlobalModuleReferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::AssignedIdentifierContext*>(node)) {
    AssignedIdentifierContextProxy proxy((ASN1Parser::AssignedIdentifierContext*)node);
    return detail::To_Ruby<AssignedIdentifierContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectIdentifierValueContext*>(node)) {
    ObjectIdentifierValueContextProxy proxy((ASN1Parser::ObjectIdentifierValueContext*)node);
    return detail::To_Ruby<ObjectIdentifierValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::DefinedValueContext*>(node)) {
    DefinedValueContextProxy proxy((ASN1Parser::DefinedValueContext*)node);
    return detail::To_Ruby<DefinedValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SymbolContext*>(node)) {
    SymbolContextProxy proxy((ASN1Parser::SymbolContext*)node);
    return detail::To_Ruby<SymbolContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ReferenceContext*>(node)) {
    ReferenceContextProxy proxy((ASN1Parser::ReferenceContext*)node);
    return detail::To_Ruby<ReferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ParameterizedReferenceContext*>(node)) {
    ParameterizedReferenceContextProxy proxy((ASN1Parser::ParameterizedReferenceContext*)node);
    return detail::To_Ruby<ParameterizedReferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::TypereferenceContext*>(node)) {
    TypereferenceContextProxy proxy((ASN1Parser::TypereferenceContext*)node);
    return detail::To_Ruby<TypereferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ValuereferenceContext*>(node)) {
    ValuereferenceContextProxy proxy((ASN1Parser::ValuereferenceContext*)node);
    return detail::To_Ruby<ValuereferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectclassreferenceContext*>(node)) {
    ObjectclassreferenceContextProxy proxy((ASN1Parser::ObjectclassreferenceContext*)node);
    return detail::To_Ruby<ObjectclassreferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectreferenceContext*>(node)) {
    ObjectreferenceContextProxy proxy((ASN1Parser::ObjectreferenceContext*)node);
    return detail::To_Ruby<ObjectreferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectsetreferenceContext*>(node)) {
    ObjectsetreferenceContextProxy proxy((ASN1Parser::ObjectsetreferenceContext*)node);
    return detail::To_Ruby<ObjectsetreferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::AssignmentContext*>(node)) {
    AssignmentContextProxy proxy((ASN1Parser::AssignmentContext*)node);
    return detail::To_Ruby<AssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::TypeAssignmentContext*>(node)) {
    TypeAssignmentContextProxy proxy((ASN1Parser::TypeAssignmentContext*)node);
    return detail::To_Ruby<TypeAssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ValueAssignmentContext*>(node)) {
    ValueAssignmentContextProxy proxy((ASN1Parser::ValueAssignmentContext*)node);
    return detail::To_Ruby<ValueAssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ValueSetTypeAssignmentContext*>(node)) {
    ValueSetTypeAssignmentContextProxy proxy((ASN1Parser::ValueSetTypeAssignmentContext*)node);
    return detail::To_Ruby<ValueSetTypeAssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectClassAssignmentContext*>(node)) {
    ObjectClassAssignmentContextProxy proxy((ASN1Parser::ObjectClassAssignmentContext*)node);
    return detail::To_Ruby<ObjectClassAssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectAssignmentContext*>(node)) {
    ObjectAssignmentContextProxy proxy((ASN1Parser::ObjectAssignmentContext*)node);
    return detail::To_Ruby<ObjectAssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectSetAssignmentContext*>(node)) {
    ObjectSetAssignmentContextProxy proxy((ASN1Parser::ObjectSetAssignmentContext*)node);
    return detail::To_Ruby<ObjectSetAssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ParameterizedAssignmentContext*>(node)) {
    ParameterizedAssignmentContextProxy proxy((ASN1Parser::ParameterizedAssignmentContext*)node);
    return detail::To_Ruby<ParameterizedAssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::DefinedTypeContext*>(node)) {
    DefinedTypeContextProxy proxy((ASN1Parser::DefinedTypeContext*)node);
    return detail::To_Ruby<DefinedTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExternalTypeReferenceContext*>(node)) {
    ExternalTypeReferenceContextProxy proxy((ASN1Parser::ExternalTypeReferenceContext*)node);
    return detail::To_Ruby<ExternalTypeReferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ParameterizedTypeContext*>(node)) {
    ParameterizedTypeContextProxy proxy((ASN1Parser::ParameterizedTypeContext*)node);
    return detail::To_Ruby<ParameterizedTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ParameterizedValueSetTypeContext*>(node)) {
    ParameterizedValueSetTypeContextProxy proxy((ASN1Parser::ParameterizedValueSetTypeContext*)node);
    return detail::To_Ruby<ParameterizedValueSetTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExternalValueReferenceContext*>(node)) {
    ExternalValueReferenceContextProxy proxy((ASN1Parser::ExternalValueReferenceContext*)node);
    return detail::To_Ruby<ExternalValueReferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ParameterizedValueContext*>(node)) {
    ParameterizedValueContextProxy proxy((ASN1Parser::ParameterizedValueContext*)node);
    return detail::To_Ruby<ParameterizedValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::TypeContext*>(node)) {
    TypeContextProxy proxy((ASN1Parser::TypeContext*)node);
    return detail::To_Ruby<TypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ValueContext*>(node)) {
    ValueContextProxy proxy((ASN1Parser::ValueContext*)node);
    return detail::To_Ruby<ValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ValueSetContext*>(node)) {
    ValueSetContextProxy proxy((ASN1Parser::ValueSetContext*)node);
    return detail::To_Ruby<ValueSetContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ElementSetSpecsContext*>(node)) {
    ElementSetSpecsContextProxy proxy((ASN1Parser::ElementSetSpecsContext*)node);
    return detail::To_Ruby<ElementSetSpecsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::BuiltinTypeContext*>(node)) {
    BuiltinTypeContextProxy proxy((ASN1Parser::BuiltinTypeContext*)node);
    return detail::To_Ruby<BuiltinTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ReferencedTypeContext*>(node)) {
    ReferencedTypeContextProxy proxy((ASN1Parser::ReferencedTypeContext*)node);
    return detail::To_Ruby<ReferencedTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ConstrainedTypeContext*>(node)) {
    ConstrainedTypeContextProxy proxy((ASN1Parser::ConstrainedTypeContext*)node);
    return detail::To_Ruby<ConstrainedTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::BitStringTypeContext*>(node)) {
    BitStringTypeContextProxy proxy((ASN1Parser::BitStringTypeContext*)node);
    return detail::To_Ruby<BitStringTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::BooleanTypeContext*>(node)) {
    BooleanTypeContextProxy proxy((ASN1Parser::BooleanTypeContext*)node);
    return detail::To_Ruby<BooleanTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::CharacterStringTypeContext*>(node)) {
    CharacterStringTypeContextProxy proxy((ASN1Parser::CharacterStringTypeContext*)node);
    return detail::To_Ruby<CharacterStringTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ChoiceTypeContext*>(node)) {
    ChoiceTypeContextProxy proxy((ASN1Parser::ChoiceTypeContext*)node);
    return detail::To_Ruby<ChoiceTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::EnumeratedTypeContext*>(node)) {
    EnumeratedTypeContextProxy proxy((ASN1Parser::EnumeratedTypeContext*)node);
    return detail::To_Ruby<EnumeratedTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::IntegerTypeContext*>(node)) {
    IntegerTypeContextProxy proxy((ASN1Parser::IntegerTypeContext*)node);
    return detail::To_Ruby<IntegerTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::NullTypeContext*>(node)) {
    NullTypeContextProxy proxy((ASN1Parser::NullTypeContext*)node);
    return detail::To_Ruby<NullTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectClassFieldTypeContext*>(node)) {
    ObjectClassFieldTypeContextProxy proxy((ASN1Parser::ObjectClassFieldTypeContext*)node);
    return detail::To_Ruby<ObjectClassFieldTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectIdentifierTypeContext*>(node)) {
    ObjectIdentifierTypeContextProxy proxy((ASN1Parser::ObjectIdentifierTypeContext*)node);
    return detail::To_Ruby<ObjectIdentifierTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::OctetStringTypeContext*>(node)) {
    OctetStringTypeContextProxy proxy((ASN1Parser::OctetStringTypeContext*)node);
    return detail::To_Ruby<OctetStringTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SequenceTypeContext*>(node)) {
    SequenceTypeContextProxy proxy((ASN1Parser::SequenceTypeContext*)node);
    return detail::To_Ruby<SequenceTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SequenceOfTypeContext*>(node)) {
    SequenceOfTypeContextProxy proxy((ASN1Parser::SequenceOfTypeContext*)node);
    return detail::To_Ruby<SequenceOfTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SetTypeContext*>(node)) {
    SetTypeContextProxy proxy((ASN1Parser::SetTypeContext*)node);
    return detail::To_Ruby<SetTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SetOfTypeContext*>(node)) {
    SetOfTypeContextProxy proxy((ASN1Parser::SetOfTypeContext*)node);
    return detail::To_Ruby<SetOfTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::TaggedTypeContext*>(node)) {
    TaggedTypeContextProxy proxy((ASN1Parser::TaggedTypeContext*)node);
    return detail::To_Ruby<TaggedTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::AnyTypeContext*>(node)) {
    AnyTypeContextProxy proxy((ASN1Parser::AnyTypeContext*)node);
    return detail::To_Ruby<AnyTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::UsefulTypeContext*>(node)) {
    UsefulTypeContextProxy proxy((ASN1Parser::UsefulTypeContext*)node);
    return detail::To_Ruby<UsefulTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::TypeFromObjectContext*>(node)) {
    TypeFromObjectContextProxy proxy((ASN1Parser::TypeFromObjectContext*)node);
    return detail::To_Ruby<TypeFromObjectContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ValueSetFromObjectsContext*>(node)) {
    ValueSetFromObjectsContextProxy proxy((ASN1Parser::ValueSetFromObjectsContext*)node);
    return detail::To_Ruby<ValueSetFromObjectsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::NamedTypeContext*>(node)) {
    NamedTypeContextProxy proxy((ASN1Parser::NamedTypeContext*)node);
    return detail::To_Ruby<NamedTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::BuiltinValueContext*>(node)) {
    BuiltinValueContextProxy proxy((ASN1Parser::BuiltinValueContext*)node);
    return detail::To_Ruby<BuiltinValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ReferencedValueContext*>(node)) {
    ReferencedValueContextProxy proxy((ASN1Parser::ReferencedValueContext*)node);
    return detail::To_Ruby<ReferencedValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectClassFieldValueContext*>(node)) {
    ObjectClassFieldValueContextProxy proxy((ASN1Parser::ObjectClassFieldValueContext*)node);
    return detail::To_Ruby<ObjectClassFieldValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::BitStringValueContext*>(node)) {
    BitStringValueContextProxy proxy((ASN1Parser::BitStringValueContext*)node);
    return detail::To_Ruby<BitStringValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::BooleanValueContext*>(node)) {
    BooleanValueContextProxy proxy((ASN1Parser::BooleanValueContext*)node);
    return detail::To_Ruby<BooleanValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::CharacterStringValueContext*>(node)) {
    CharacterStringValueContextProxy proxy((ASN1Parser::CharacterStringValueContext*)node);
    return detail::To_Ruby<CharacterStringValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::EnumeratedValueContext*>(node)) {
    EnumeratedValueContextProxy proxy((ASN1Parser::EnumeratedValueContext*)node);
    return detail::To_Ruby<EnumeratedValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::IntegerValueContext*>(node)) {
    IntegerValueContextProxy proxy((ASN1Parser::IntegerValueContext*)node);
    return detail::To_Ruby<IntegerValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::NullValueContext*>(node)) {
    NullValueContextProxy proxy((ASN1Parser::NullValueContext*)node);
    return detail::To_Ruby<NullValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::OctetStringValueContext*>(node)) {
    OctetStringValueContextProxy proxy((ASN1Parser::OctetStringValueContext*)node);
    return detail::To_Ruby<OctetStringValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SequenceValueContext*>(node)) {
    SequenceValueContextProxy proxy((ASN1Parser::SequenceValueContext*)node);
    return detail::To_Ruby<SequenceValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SequenceOfValueContext*>(node)) {
    SequenceOfValueContextProxy proxy((ASN1Parser::SequenceOfValueContext*)node);
    return detail::To_Ruby<SequenceOfValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SetValueContext*>(node)) {
    SetValueContextProxy proxy((ASN1Parser::SetValueContext*)node);
    return detail::To_Ruby<SetValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SetOfValueContext*>(node)) {
    SetOfValueContextProxy proxy((ASN1Parser::SetOfValueContext*)node);
    return detail::To_Ruby<SetOfValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ValueFromObjectContext*>(node)) {
    ValueFromObjectContextProxy proxy((ASN1Parser::ValueFromObjectContext*)node);
    return detail::To_Ruby<ValueFromObjectContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::NamedValueContext*>(node)) {
    NamedValueContextProxy proxy((ASN1Parser::NamedValueContext*)node);
    return detail::To_Ruby<NamedValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::NamedNumberListContext*>(node)) {
    NamedNumberListContextProxy proxy((ASN1Parser::NamedNumberListContext*)node);
    return detail::To_Ruby<NamedNumberListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::NamedNumberContext*>(node)) {
    NamedNumberContextProxy proxy((ASN1Parser::NamedNumberContext*)node);
    return detail::To_Ruby<NamedNumberContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SignedNumberContext*>(node)) {
    SignedNumberContextProxy proxy((ASN1Parser::SignedNumberContext*)node);
    return detail::To_Ruby<SignedNumberContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::EnumerationsContext*>(node)) {
    EnumerationsContextProxy proxy((ASN1Parser::EnumerationsContext*)node);
    return detail::To_Ruby<EnumerationsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::RootEnumerationContext*>(node)) {
    RootEnumerationContextProxy proxy((ASN1Parser::RootEnumerationContext*)node);
    return detail::To_Ruby<RootEnumerationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExceptionSpecContext*>(node)) {
    ExceptionSpecContextProxy proxy((ASN1Parser::ExceptionSpecContext*)node);
    return detail::To_Ruby<ExceptionSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::AdditionalEnumerationContext*>(node)) {
    AdditionalEnumerationContextProxy proxy((ASN1Parser::AdditionalEnumerationContext*)node);
    return detail::To_Ruby<AdditionalEnumerationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::EnumerationContext*>(node)) {
    EnumerationContextProxy proxy((ASN1Parser::EnumerationContext*)node);
    return detail::To_Ruby<EnumerationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::EnumerationItemContext*>(node)) {
    EnumerationItemContextProxy proxy((ASN1Parser::EnumerationItemContext*)node);
    return detail::To_Ruby<EnumerationItemContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::NamedBitListContext*>(node)) {
    NamedBitListContextProxy proxy((ASN1Parser::NamedBitListContext*)node);
    return detail::To_Ruby<NamedBitListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::NamedBitContext*>(node)) {
    NamedBitContextProxy proxy((ASN1Parser::NamedBitContext*)node);
    return detail::To_Ruby<NamedBitContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::BstringContext*>(node)) {
    BstringContextProxy proxy((ASN1Parser::BstringContext*)node);
    return detail::To_Ruby<BstringContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::HstringContext*>(node)) {
    HstringContextProxy proxy((ASN1Parser::HstringContext*)node);
    return detail::To_Ruby<HstringContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::IdentifierListContext*>(node)) {
    IdentifierListContextProxy proxy((ASN1Parser::IdentifierListContext*)node);
    return detail::To_Ruby<IdentifierListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExtensionAndExceptionContext*>(node)) {
    ExtensionAndExceptionContextProxy proxy((ASN1Parser::ExtensionAndExceptionContext*)node);
    return detail::To_Ruby<ExtensionAndExceptionContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ComponentTypeListsContext*>(node)) {
    ComponentTypeListsContextProxy proxy((ASN1Parser::ComponentTypeListsContext*)node);
    return detail::To_Ruby<ComponentTypeListsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::RootComponentTypeListContext*>(node)) {
    RootComponentTypeListContextProxy proxy((ASN1Parser::RootComponentTypeListContext*)node);
    return detail::To_Ruby<RootComponentTypeListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExtensionAdditionsContext*>(node)) {
    ExtensionAdditionsContextProxy proxy((ASN1Parser::ExtensionAdditionsContext*)node);
    return detail::To_Ruby<ExtensionAdditionsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::OptionalExtensionMarkerContext*>(node)) {
    OptionalExtensionMarkerContextProxy proxy((ASN1Parser::OptionalExtensionMarkerContext*)node);
    return detail::To_Ruby<OptionalExtensionMarkerContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExtensionEndMarkerContext*>(node)) {
    ExtensionEndMarkerContextProxy proxy((ASN1Parser::ExtensionEndMarkerContext*)node);
    return detail::To_Ruby<ExtensionEndMarkerContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ComponentTypeListContext*>(node)) {
    ComponentTypeListContextProxy proxy((ASN1Parser::ComponentTypeListContext*)node);
    return detail::To_Ruby<ComponentTypeListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExtensionAdditionListContext*>(node)) {
    ExtensionAdditionListContextProxy proxy((ASN1Parser::ExtensionAdditionListContext*)node);
    return detail::To_Ruby<ExtensionAdditionListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExtensionAdditionContext*>(node)) {
    ExtensionAdditionContextProxy proxy((ASN1Parser::ExtensionAdditionContext*)node);
    return detail::To_Ruby<ExtensionAdditionContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ComponentTypeContext*>(node)) {
    ComponentTypeContextProxy proxy((ASN1Parser::ComponentTypeContext*)node);
    return detail::To_Ruby<ComponentTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExtensionAdditionGroupContext*>(node)) {
    ExtensionAdditionGroupContextProxy proxy((ASN1Parser::ExtensionAdditionGroupContext*)node);
    return detail::To_Ruby<ExtensionAdditionGroupContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::VersionNumberContext*>(node)) {
    VersionNumberContextProxy proxy((ASN1Parser::VersionNumberContext*)node);
    return detail::To_Ruby<VersionNumberContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ComponentValueListContext*>(node)) {
    ComponentValueListContextProxy proxy((ASN1Parser::ComponentValueListContext*)node);
    return detail::To_Ruby<ComponentValueListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ValueListContext*>(node)) {
    ValueListContextProxy proxy((ASN1Parser::ValueListContext*)node);
    return detail::To_Ruby<ValueListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::NamedValueListContext*>(node)) {
    NamedValueListContextProxy proxy((ASN1Parser::NamedValueListContext*)node);
    return detail::To_Ruby<NamedValueListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::AlternativeTypeListsContext*>(node)) {
    AlternativeTypeListsContextProxy proxy((ASN1Parser::AlternativeTypeListsContext*)node);
    return detail::To_Ruby<AlternativeTypeListsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::RootAlternativeTypeListContext*>(node)) {
    RootAlternativeTypeListContextProxy proxy((ASN1Parser::RootAlternativeTypeListContext*)node);
    return detail::To_Ruby<RootAlternativeTypeListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExtensionAdditionAlternativesContext*>(node)) {
    ExtensionAdditionAlternativesContextProxy proxy((ASN1Parser::ExtensionAdditionAlternativesContext*)node);
    return detail::To_Ruby<ExtensionAdditionAlternativesContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::AlternativeTypeListContext*>(node)) {
    AlternativeTypeListContextProxy proxy((ASN1Parser::AlternativeTypeListContext*)node);
    return detail::To_Ruby<AlternativeTypeListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExtensionAdditionAlternativesListContext*>(node)) {
    ExtensionAdditionAlternativesListContextProxy proxy((ASN1Parser::ExtensionAdditionAlternativesListContext*)node);
    return detail::To_Ruby<ExtensionAdditionAlternativesListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExtensionAdditionAlternativeContext*>(node)) {
    ExtensionAdditionAlternativeContextProxy proxy((ASN1Parser::ExtensionAdditionAlternativeContext*)node);
    return detail::To_Ruby<ExtensionAdditionAlternativeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExtensionAdditionAlternativesGroupContext*>(node)) {
    ExtensionAdditionAlternativesGroupContextProxy proxy((ASN1Parser::ExtensionAdditionAlternativesGroupContext*)node);
    return detail::To_Ruby<ExtensionAdditionAlternativesGroupContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::TagContext*>(node)) {
    TagContextProxy proxy((ASN1Parser::TagContext*)node);
    return detail::To_Ruby<TagContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ClassPContext*>(node)) {
    ClassPContextProxy proxy((ASN1Parser::ClassPContext*)node);
    return detail::To_Ruby<ClassPContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ClassNumberContext*>(node)) {
    ClassNumberContextProxy proxy((ASN1Parser::ClassNumberContext*)node);
    return detail::To_Ruby<ClassNumberContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjIdComponentsListContext*>(node)) {
    ObjIdComponentsListContextProxy proxy((ASN1Parser::ObjIdComponentsListContext*)node);
    return detail::To_Ruby<ObjIdComponentsListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjIdComponentsContext*>(node)) {
    ObjIdComponentsContextProxy proxy((ASN1Parser::ObjIdComponentsContext*)node);
    return detail::To_Ruby<ObjIdComponentsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::NumberFormContext*>(node)) {
    NumberFormContextProxy proxy((ASN1Parser::NumberFormContext*)node);
    return detail::To_Ruby<NumberFormContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::NameAndNumberFormContext*>(node)) {
    NameAndNumberFormContextProxy proxy((ASN1Parser::NameAndNumberFormContext*)node);
    return detail::To_Ruby<NameAndNumberFormContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExceptionIdentificationContext*>(node)) {
    ExceptionIdentificationContextProxy proxy((ASN1Parser::ExceptionIdentificationContext*)node);
    return detail::To_Ruby<ExceptionIdentificationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::RestrictedCharacterStringTypeContext*>(node)) {
    RestrictedCharacterStringTypeContextProxy proxy((ASN1Parser::RestrictedCharacterStringTypeContext*)node);
    return detail::To_Ruby<RestrictedCharacterStringTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::UnrestrictedCharacterStringTypeContext*>(node)) {
    UnrestrictedCharacterStringTypeContextProxy proxy((ASN1Parser::UnrestrictedCharacterStringTypeContext*)node);
    return detail::To_Ruby<UnrestrictedCharacterStringTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::RestrictedCharacterStringValueContext*>(node)) {
    RestrictedCharacterStringValueContextProxy proxy((ASN1Parser::RestrictedCharacterStringValueContext*)node);
    return detail::To_Ruby<RestrictedCharacterStringValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::CstringContext*>(node)) {
    CstringContextProxy proxy((ASN1Parser::CstringContext*)node);
    return detail::To_Ruby<CstringContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::CharacterStringListContext*>(node)) {
    CharacterStringListContextProxy proxy((ASN1Parser::CharacterStringListContext*)node);
    return detail::To_Ruby<CharacterStringListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::QuadrupleContext*>(node)) {
    QuadrupleContextProxy proxy((ASN1Parser::QuadrupleContext*)node);
    return detail::To_Ruby<QuadrupleContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::TupleContext*>(node)) {
    TupleContextProxy proxy((ASN1Parser::TupleContext*)node);
    return detail::To_Ruby<TupleContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::CharSymsContext*>(node)) {
    CharSymsContextProxy proxy((ASN1Parser::CharSymsContext*)node);
    return detail::To_Ruby<CharSymsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::CharsDefnContext*>(node)) {
    CharsDefnContextProxy proxy((ASN1Parser::CharsDefnContext*)node);
    return detail::To_Ruby<CharsDefnContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::GroupContext*>(node)) {
    GroupContextProxy proxy((ASN1Parser::GroupContext*)node);
    return detail::To_Ruby<GroupContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::PlaneContext*>(node)) {
    PlaneContextProxy proxy((ASN1Parser::PlaneContext*)node);
    return detail::To_Ruby<PlaneContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::RowContext*>(node)) {
    RowContextProxy proxy((ASN1Parser::RowContext*)node);
    return detail::To_Ruby<RowContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::CellContext*>(node)) {
    CellContextProxy proxy((ASN1Parser::CellContext*)node);
    return detail::To_Ruby<CellContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::TableColumnContext*>(node)) {
    TableColumnContextProxy proxy((ASN1Parser::TableColumnContext*)node);
    return detail::To_Ruby<TableColumnContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::TableRowContext*>(node)) {
    TableRowContextProxy proxy((ASN1Parser::TableRowContext*)node);
    return detail::To_Ruby<TableRowContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::UTCTimeTypeContext*>(node)) {
    UTCTimeTypeContextProxy proxy((ASN1Parser::UTCTimeTypeContext*)node);
    return detail::To_Ruby<UTCTimeTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::GeneralizedTimeTypeContext*>(node)) {
    GeneralizedTimeTypeContextProxy proxy((ASN1Parser::GeneralizedTimeTypeContext*)node);
    return detail::To_Ruby<GeneralizedTimeTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ConstraintContext*>(node)) {
    ConstraintContextProxy proxy((ASN1Parser::ConstraintContext*)node);
    return detail::To_Ruby<ConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::TypeWithConstraintContext*>(node)) {
    TypeWithConstraintContextProxy proxy((ASN1Parser::TypeWithConstraintContext*)node);
    return detail::To_Ruby<TypeWithConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SizeConstraintContext*>(node)) {
    SizeConstraintContextProxy proxy((ASN1Parser::SizeConstraintContext*)node);
    return detail::To_Ruby<SizeConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ConstraintSpecContext*>(node)) {
    ConstraintSpecContextProxy proxy((ASN1Parser::ConstraintSpecContext*)node);
    return detail::To_Ruby<ConstraintSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SubtypeConstraintContext*>(node)) {
    SubtypeConstraintContextProxy proxy((ASN1Parser::SubtypeConstraintContext*)node);
    return detail::To_Ruby<SubtypeConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::GeneralConstraintContext*>(node)) {
    GeneralConstraintContextProxy proxy((ASN1Parser::GeneralConstraintContext*)node);
    return detail::To_Ruby<GeneralConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::UserDefinedConstraintContext*>(node)) {
    UserDefinedConstraintContextProxy proxy((ASN1Parser::UserDefinedConstraintContext*)node);
    return detail::To_Ruby<UserDefinedConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::TableConstraintContext*>(node)) {
    TableConstraintContextProxy proxy((ASN1Parser::TableConstraintContext*)node);
    return detail::To_Ruby<TableConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ContentsConstraintContext*>(node)) {
    ContentsConstraintContextProxy proxy((ASN1Parser::ContentsConstraintContext*)node);
    return detail::To_Ruby<ContentsConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::RootElementSetSpecContext*>(node)) {
    RootElementSetSpecContextProxy proxy((ASN1Parser::RootElementSetSpecContext*)node);
    return detail::To_Ruby<RootElementSetSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::AdditionalElementSetSpecContext*>(node)) {
    AdditionalElementSetSpecContextProxy proxy((ASN1Parser::AdditionalElementSetSpecContext*)node);
    return detail::To_Ruby<AdditionalElementSetSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ElementSetSpecContext*>(node)) {
    ElementSetSpecContextProxy proxy((ASN1Parser::ElementSetSpecContext*)node);
    return detail::To_Ruby<ElementSetSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::UnionsContext*>(node)) {
    UnionsContextProxy proxy((ASN1Parser::UnionsContext*)node);
    return detail::To_Ruby<UnionsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExclusionsContext*>(node)) {
    ExclusionsContextProxy proxy((ASN1Parser::ExclusionsContext*)node);
    return detail::To_Ruby<ExclusionsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::IntersectionsContext*>(node)) {
    IntersectionsContextProxy proxy((ASN1Parser::IntersectionsContext*)node);
    return detail::To_Ruby<IntersectionsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::UnionMarkContext*>(node)) {
    UnionMarkContextProxy proxy((ASN1Parser::UnionMarkContext*)node);
    return detail::To_Ruby<UnionMarkContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::UElemsContext*>(node)) {
    UElemsContextProxy proxy((ASN1Parser::UElemsContext*)node);
    return detail::To_Ruby<UElemsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::IntersectionElementsContext*>(node)) {
    IntersectionElementsContextProxy proxy((ASN1Parser::IntersectionElementsContext*)node);
    return detail::To_Ruby<IntersectionElementsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::IntersectionMarkContext*>(node)) {
    IntersectionMarkContextProxy proxy((ASN1Parser::IntersectionMarkContext*)node);
    return detail::To_Ruby<IntersectionMarkContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::IElemsContext*>(node)) {
    IElemsContextProxy proxy((ASN1Parser::IElemsContext*)node);
    return detail::To_Ruby<IElemsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ElementsContext*>(node)) {
    ElementsContextProxy proxy((ASN1Parser::ElementsContext*)node);
    return detail::To_Ruby<ElementsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ElemsContext*>(node)) {
    ElemsContextProxy proxy((ASN1Parser::ElemsContext*)node);
    return detail::To_Ruby<ElemsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SubtypeElementsContext*>(node)) {
    SubtypeElementsContextProxy proxy((ASN1Parser::SubtypeElementsContext*)node);
    return detail::To_Ruby<SubtypeElementsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectSetElementsContext*>(node)) {
    ObjectSetElementsContextProxy proxy((ASN1Parser::ObjectSetElementsContext*)node);
    return detail::To_Ruby<ObjectSetElementsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SingleValueContext*>(node)) {
    SingleValueContextProxy proxy((ASN1Parser::SingleValueContext*)node);
    return detail::To_Ruby<SingleValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ContainedSubtypeContext*>(node)) {
    ContainedSubtypeContextProxy proxy((ASN1Parser::ContainedSubtypeContext*)node);
    return detail::To_Ruby<ContainedSubtypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ValueRangeContext*>(node)) {
    ValueRangeContextProxy proxy((ASN1Parser::ValueRangeContext*)node);
    return detail::To_Ruby<ValueRangeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::PermittedAlphabetContext*>(node)) {
    PermittedAlphabetContextProxy proxy((ASN1Parser::PermittedAlphabetContext*)node);
    return detail::To_Ruby<PermittedAlphabetContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::IncludesContext*>(node)) {
    IncludesContextProxy proxy((ASN1Parser::IncludesContext*)node);
    return detail::To_Ruby<IncludesContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::LowerEndpointContext*>(node)) {
    LowerEndpointContextProxy proxy((ASN1Parser::LowerEndpointContext*)node);
    return detail::To_Ruby<LowerEndpointContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::UpperEndpointContext*>(node)) {
    UpperEndpointContextProxy proxy((ASN1Parser::UpperEndpointContext*)node);
    return detail::To_Ruby<UpperEndpointContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::LowerEndValueContext*>(node)) {
    LowerEndValueContextProxy proxy((ASN1Parser::LowerEndValueContext*)node);
    return detail::To_Ruby<LowerEndValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::UpperEndValueContext*>(node)) {
    UpperEndValueContextProxy proxy((ASN1Parser::UpperEndValueContext*)node);
    return detail::To_Ruby<UpperEndValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::UserDefinedConstraintParameterContext*>(node)) {
    UserDefinedConstraintParameterContextProxy proxy((ASN1Parser::UserDefinedConstraintParameterContext*)node);
    return detail::To_Ruby<UserDefinedConstraintParameterContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::GovernorContext*>(node)) {
    GovernorContextProxy proxy((ASN1Parser::GovernorContext*)node);
    return detail::To_Ruby<GovernorContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectContext*>(node)) {
    ObjectContextProxy proxy((ASN1Parser::ObjectContext*)node);
    return detail::To_Ruby<ObjectContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectSetContext*>(node)) {
    ObjectSetContextProxy proxy((ASN1Parser::ObjectSetContext*)node);
    return detail::To_Ruby<ObjectSetContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::DefinedObjectClassContext*>(node)) {
    DefinedObjectClassContextProxy proxy((ASN1Parser::DefinedObjectClassContext*)node);
    return detail::To_Ruby<DefinedObjectClassContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SimpleTableConstraintContext*>(node)) {
    SimpleTableConstraintContextProxy proxy((ASN1Parser::SimpleTableConstraintContext*)node);
    return detail::To_Ruby<SimpleTableConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ComponentRelationConstraintContext*>(node)) {
    ComponentRelationConstraintContextProxy proxy((ASN1Parser::ComponentRelationConstraintContext*)node);
    return detail::To_Ruby<ComponentRelationConstraintContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::DefinedObjectSetContext*>(node)) {
    DefinedObjectSetContextProxy proxy((ASN1Parser::DefinedObjectSetContext*)node);
    return detail::To_Ruby<DefinedObjectSetContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::AtNotationContext*>(node)) {
    AtNotationContextProxy proxy((ASN1Parser::AtNotationContext*)node);
    return detail::To_Ruby<AtNotationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ComponentIdListContext*>(node)) {
    ComponentIdListContextProxy proxy((ASN1Parser::ComponentIdListContext*)node);
    return detail::To_Ruby<ComponentIdListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::LevelContext*>(node)) {
    LevelContextProxy proxy((ASN1Parser::LevelContext*)node);
    return detail::To_Ruby<LevelContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExternalObjectClassReferenceContext*>(node)) {
    ExternalObjectClassReferenceContextProxy proxy((ASN1Parser::ExternalObjectClassReferenceContext*)node);
    return detail::To_Ruby<ExternalObjectClassReferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::UsefulObjectClassReferenceContext*>(node)) {
    UsefulObjectClassReferenceContextProxy proxy((ASN1Parser::UsefulObjectClassReferenceContext*)node);
    return detail::To_Ruby<UsefulObjectClassReferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::DefinedObjectContext*>(node)) {
    DefinedObjectContextProxy proxy((ASN1Parser::DefinedObjectContext*)node);
    return detail::To_Ruby<DefinedObjectContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExternalObjectReferenceContext*>(node)) {
    ExternalObjectReferenceContextProxy proxy((ASN1Parser::ExternalObjectReferenceContext*)node);
    return detail::To_Ruby<ExternalObjectReferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ExternalObjectSetReferenceContext*>(node)) {
    ExternalObjectSetReferenceContextProxy proxy((ASN1Parser::ExternalObjectSetReferenceContext*)node);
    return detail::To_Ruby<ExternalObjectSetReferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectClassContext*>(node)) {
    ObjectClassContextProxy proxy((ASN1Parser::ObjectClassContext*)node);
    return detail::To_Ruby<ObjectClassContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectClassDefnContext*>(node)) {
    ObjectClassDefnContextProxy proxy((ASN1Parser::ObjectClassDefnContext*)node);
    return detail::To_Ruby<ObjectClassDefnContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ParameterizedObjectClassContext*>(node)) {
    ParameterizedObjectClassContextProxy proxy((ASN1Parser::ParameterizedObjectClassContext*)node);
    return detail::To_Ruby<ParameterizedObjectClassContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::FieldSpecContext*>(node)) {
    FieldSpecContextProxy proxy((ASN1Parser::FieldSpecContext*)node);
    return detail::To_Ruby<FieldSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::WithSyntaxSpecContext*>(node)) {
    WithSyntaxSpecContextProxy proxy((ASN1Parser::WithSyntaxSpecContext*)node);
    return detail::To_Ruby<WithSyntaxSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SyntaxListContext*>(node)) {
    SyntaxListContextProxy proxy((ASN1Parser::SyntaxListContext*)node);
    return detail::To_Ruby<SyntaxListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::TypeFieldSpecContext*>(node)) {
    TypeFieldSpecContextProxy proxy((ASN1Parser::TypeFieldSpecContext*)node);
    return detail::To_Ruby<TypeFieldSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::FixedTypeValueFieldSpecContext*>(node)) {
    FixedTypeValueFieldSpecContextProxy proxy((ASN1Parser::FixedTypeValueFieldSpecContext*)node);
    return detail::To_Ruby<FixedTypeValueFieldSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::VariableTypeValueFieldSpecContext*>(node)) {
    VariableTypeValueFieldSpecContextProxy proxy((ASN1Parser::VariableTypeValueFieldSpecContext*)node);
    return detail::To_Ruby<VariableTypeValueFieldSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::FixedTypeValueSetFieldSpecContext*>(node)) {
    FixedTypeValueSetFieldSpecContextProxy proxy((ASN1Parser::FixedTypeValueSetFieldSpecContext*)node);
    return detail::To_Ruby<FixedTypeValueSetFieldSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::VariableTypeValueSetFieldSpecContext*>(node)) {
    VariableTypeValueSetFieldSpecContextProxy proxy((ASN1Parser::VariableTypeValueSetFieldSpecContext*)node);
    return detail::To_Ruby<VariableTypeValueSetFieldSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectFieldSpecContext*>(node)) {
    ObjectFieldSpecContextProxy proxy((ASN1Parser::ObjectFieldSpecContext*)node);
    return detail::To_Ruby<ObjectFieldSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectSetFieldSpecContext*>(node)) {
    ObjectSetFieldSpecContextProxy proxy((ASN1Parser::ObjectSetFieldSpecContext*)node);
    return detail::To_Ruby<ObjectSetFieldSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::TypefieldreferenceContext*>(node)) {
    TypefieldreferenceContextProxy proxy((ASN1Parser::TypefieldreferenceContext*)node);
    return detail::To_Ruby<TypefieldreferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::TypeOptionalitySpecContext*>(node)) {
    TypeOptionalitySpecContextProxy proxy((ASN1Parser::TypeOptionalitySpecContext*)node);
    return detail::To_Ruby<TypeOptionalitySpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ValuefieldreferenceContext*>(node)) {
    ValuefieldreferenceContextProxy proxy((ASN1Parser::ValuefieldreferenceContext*)node);
    return detail::To_Ruby<ValuefieldreferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ValueOptionalitySpecContext*>(node)) {
    ValueOptionalitySpecContextProxy proxy((ASN1Parser::ValueOptionalitySpecContext*)node);
    return detail::To_Ruby<ValueOptionalitySpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::FieldNameContext*>(node)) {
    FieldNameContextProxy proxy((ASN1Parser::FieldNameContext*)node);
    return detail::To_Ruby<FieldNameContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ValuesetfieldreferenceContext*>(node)) {
    ValuesetfieldreferenceContextProxy proxy((ASN1Parser::ValuesetfieldreferenceContext*)node);
    return detail::To_Ruby<ValuesetfieldreferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ValueSetOptionalitySpecContext*>(node)) {
    ValueSetOptionalitySpecContextProxy proxy((ASN1Parser::ValueSetOptionalitySpecContext*)node);
    return detail::To_Ruby<ValueSetOptionalitySpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectfieldreferenceContext*>(node)) {
    ObjectfieldreferenceContextProxy proxy((ASN1Parser::ObjectfieldreferenceContext*)node);
    return detail::To_Ruby<ObjectfieldreferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectOptionalitySpecContext*>(node)) {
    ObjectOptionalitySpecContextProxy proxy((ASN1Parser::ObjectOptionalitySpecContext*)node);
    return detail::To_Ruby<ObjectOptionalitySpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectsetfieldreferenceContext*>(node)) {
    ObjectsetfieldreferenceContextProxy proxy((ASN1Parser::ObjectsetfieldreferenceContext*)node);
    return detail::To_Ruby<ObjectsetfieldreferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectSetOptionalitySpecContext*>(node)) {
    ObjectSetOptionalitySpecContextProxy proxy((ASN1Parser::ObjectSetOptionalitySpecContext*)node);
    return detail::To_Ruby<ObjectSetOptionalitySpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::PrimitiveFieldNameContext*>(node)) {
    PrimitiveFieldNameContextProxy proxy((ASN1Parser::PrimitiveFieldNameContext*)node);
    return detail::To_Ruby<PrimitiveFieldNameContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::TokenOrGroupSpecContext*>(node)) {
    TokenOrGroupSpecContextProxy proxy((ASN1Parser::TokenOrGroupSpecContext*)node);
    return detail::To_Ruby<TokenOrGroupSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::RequiredTokenContext*>(node)) {
    RequiredTokenContextProxy proxy((ASN1Parser::RequiredTokenContext*)node);
    return detail::To_Ruby<RequiredTokenContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::OptionalGroupContext*>(node)) {
    OptionalGroupContextProxy proxy((ASN1Parser::OptionalGroupContext*)node);
    return detail::To_Ruby<OptionalGroupContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::LiteralContext*>(node)) {
    LiteralContextProxy proxy((ASN1Parser::LiteralContext*)node);
    return detail::To_Ruby<LiteralContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::WordContext*>(node)) {
    WordContextProxy proxy((ASN1Parser::WordContext*)node);
    return detail::To_Ruby<WordContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectDefnContext*>(node)) {
    ObjectDefnContextProxy proxy((ASN1Parser::ObjectDefnContext*)node);
    return detail::To_Ruby<ObjectDefnContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectFromObjectContext*>(node)) {
    ObjectFromObjectContextProxy proxy((ASN1Parser::ObjectFromObjectContext*)node);
    return detail::To_Ruby<ObjectFromObjectContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ParameterizedObjectContext*>(node)) {
    ParameterizedObjectContextProxy proxy((ASN1Parser::ParameterizedObjectContext*)node);
    return detail::To_Ruby<ParameterizedObjectContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::DefaultSyntaxContext*>(node)) {
    DefaultSyntaxContextProxy proxy((ASN1Parser::DefaultSyntaxContext*)node);
    return detail::To_Ruby<DefaultSyntaxContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::DefinedSyntaxContext*>(node)) {
    DefinedSyntaxContextProxy proxy((ASN1Parser::DefinedSyntaxContext*)node);
    return detail::To_Ruby<DefinedSyntaxContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::FieldSettingContext*>(node)) {
    FieldSettingContextProxy proxy((ASN1Parser::FieldSettingContext*)node);
    return detail::To_Ruby<FieldSettingContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SettingContext*>(node)) {
    SettingContextProxy proxy((ASN1Parser::SettingContext*)node);
    return detail::To_Ruby<SettingContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::DefinedSyntaxTokenContext*>(node)) {
    DefinedSyntaxTokenContextProxy proxy((ASN1Parser::DefinedSyntaxTokenContext*)node);
    return detail::To_Ruby<DefinedSyntaxTokenContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectSetSpecContext*>(node)) {
    ObjectSetSpecContextProxy proxy((ASN1Parser::ObjectSetSpecContext*)node);
    return detail::To_Ruby<ObjectSetSpecContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ObjectSetFromObjectsContext*>(node)) {
    ObjectSetFromObjectsContextProxy proxy((ASN1Parser::ObjectSetFromObjectsContext*)node);
    return detail::To_Ruby<ObjectSetFromObjectsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ParameterizedObjectSetContext*>(node)) {
    ParameterizedObjectSetContextProxy proxy((ASN1Parser::ParameterizedObjectSetContext*)node);
    return detail::To_Ruby<ParameterizedObjectSetContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::OpenTypeFieldValContext*>(node)) {
    OpenTypeFieldValContextProxy proxy((ASN1Parser::OpenTypeFieldValContext*)node);
    return detail::To_Ruby<OpenTypeFieldValContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::FixedTypeFieldValContext*>(node)) {
    FixedTypeFieldValContextProxy proxy((ASN1Parser::FixedTypeFieldValContext*)node);
    return detail::To_Ruby<FixedTypeFieldValContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ReferencedObjectsContext*>(node)) {
    ReferencedObjectsContextProxy proxy((ASN1Parser::ReferencedObjectsContext*)node);
    return detail::To_Ruby<ReferencedObjectsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ParameterizedTypeAssignmentContext*>(node)) {
    ParameterizedTypeAssignmentContextProxy proxy((ASN1Parser::ParameterizedTypeAssignmentContext*)node);
    return detail::To_Ruby<ParameterizedTypeAssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ParameterizedValueAssignmentContext*>(node)) {
    ParameterizedValueAssignmentContextProxy proxy((ASN1Parser::ParameterizedValueAssignmentContext*)node);
    return detail::To_Ruby<ParameterizedValueAssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ParameterizedValueSetTypeAssignmentContext*>(node)) {
    ParameterizedValueSetTypeAssignmentContextProxy proxy((ASN1Parser::ParameterizedValueSetTypeAssignmentContext*)node);
    return detail::To_Ruby<ParameterizedValueSetTypeAssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ParameterizedObjectClassAssignmentContext*>(node)) {
    ParameterizedObjectClassAssignmentContextProxy proxy((ASN1Parser::ParameterizedObjectClassAssignmentContext*)node);
    return detail::To_Ruby<ParameterizedObjectClassAssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ParameterizedObjectAssignmentContext*>(node)) {
    ParameterizedObjectAssignmentContextProxy proxy((ASN1Parser::ParameterizedObjectAssignmentContext*)node);
    return detail::To_Ruby<ParameterizedObjectAssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ParameterizedObjectSetAssignmentContext*>(node)) {
    ParameterizedObjectSetAssignmentContextProxy proxy((ASN1Parser::ParameterizedObjectSetAssignmentContext*)node);
    return detail::To_Ruby<ParameterizedObjectSetAssignmentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ParameterListContext*>(node)) {
    ParameterListContextProxy proxy((ASN1Parser::ParameterListContext*)node);
    return detail::To_Ruby<ParameterListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ParameterContext*>(node)) {
    ParameterContextProxy proxy((ASN1Parser::ParameterContext*)node);
    return detail::To_Ruby<ParameterContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ParamGovernorContext*>(node)) {
    ParamGovernorContextProxy proxy((ASN1Parser::ParamGovernorContext*)node);
    return detail::To_Ruby<ParamGovernorContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::DummyReferenceContext*>(node)) {
    DummyReferenceContextProxy proxy((ASN1Parser::DummyReferenceContext*)node);
    return detail::To_Ruby<DummyReferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::DummyGovernorContext*>(node)) {
    DummyGovernorContextProxy proxy((ASN1Parser::DummyGovernorContext*)node);
    return detail::To_Ruby<DummyGovernorContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SimpleDefinedTypeContext*>(node)) {
    SimpleDefinedTypeContextProxy proxy((ASN1Parser::SimpleDefinedTypeContext*)node);
    return detail::To_Ruby<SimpleDefinedTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ActualParameterListContext*>(node)) {
    ActualParameterListContextProxy proxy((ASN1Parser::ActualParameterListContext*)node);
    return detail::To_Ruby<ActualParameterListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::SimpleDefinedValueContext*>(node)) {
    SimpleDefinedValueContextProxy proxy((ASN1Parser::SimpleDefinedValueContext*)node);
    return detail::To_Ruby<SimpleDefinedValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<ASN1Parser::ActualParameterContext*>(node)) {
    ActualParameterContextProxy proxy((ASN1Parser::ActualParameterContext*)node);
    return detail::To_Ruby<ActualParameterContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<tree::TerminalNodeImpl*>(node)) {
    TerminalNodeProxy proxy(node);
    return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
  } else {
    return Qnil;
  }
}


extern "C"
void Init_asn1_parser() {
  Module rb_mASN1Parser = define_module("ASN1Parser");

  rb_cToken = define_class_under<Token>(rb_mASN1Parser, "Token")
    .define_method("text", &Token::getText)
    .define_method("channel", &Token::getChannel)
    .define_method("token_index", &Token::getTokenIndex);

  rb_cParseTree = define_class_under<tree::ParseTree>(rb_mASN1Parser, "ParseTree");

  rb_cContextProxy = define_class_under<ContextProxy>(rb_mASN1Parser, "Context")
    .define_method("children", &ContextProxy::getChildren)
    .define_method("child_count", &ContextProxy::childCount)
    .define_method("text", &ContextProxy::getText)
    .define_method("start", &ContextProxy::getStart)
    .define_method("stop", &ContextProxy::getStop)
    .define_method("parent", &ContextProxy::getParent)
    .define_method("==", &ContextProxy::doubleEquals);

  rb_cTerminalNode = define_class_under<TerminalNodeProxy, ContextProxy>(rb_mASN1Parser, "TerminalNodeImpl");

  define_class_under<ASN1BaseVisitor>(rb_mASN1Parser, "Visitor")
    .define_director<VisitorProxy>()
    .define_constructor(Constructor<VisitorProxy, Object>())
    .define_method("visit", &VisitorProxy::ruby_visit)
    .define_method("visit_children", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_module_definition", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_module_identifier", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_definitive_identifier", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_definitive_obj_id_component_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_definitive_obj_id_component", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_definitive_number_form", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_definitive_name_and_number_form", &VisitorProxy::ruby_visitChildren)
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
    .define_method("visit_reference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_assignment_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_defined_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_defined_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_external_type_reference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_external_value_reference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_type_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_value_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_value_set_type_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_value_set", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_builtin_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_referenced_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_named_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_builtin_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_referenced_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_named_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_boolean_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_boolean_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_integer_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_named_number_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_named_number", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_signed_number", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_integer_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_enumerated_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_enumerations", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_root_enumeration", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_additional_enumeration", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_enumeration", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_enumeration_item", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_enumerated_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_bit_string_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_named_bit_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_named_bit", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_bit_string_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_identifier_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_octet_string_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_octet_string_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_null_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_null_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_sequence_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_component_type_lists", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_root_component_type_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_end_marker", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_additions", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_addition_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_addition", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_addition_group", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_version_number", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_component_type_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_component_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_sequence_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_component_value_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_sequence_of_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_sequence_of_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_value_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_named_value_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_set_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_set_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_set_of_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_set_of_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_choice_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_alternative_type_lists", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_root_alternative_type_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_addition_alternatives", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_addition_alternatives_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_addition_alternative", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_addition_alternatives_group", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_alternative_type_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_tagged_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_tag", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_class_number", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_class_p", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_identifier_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_identifier_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_obj_id_components_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_obj_id_components", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_name_form", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_number_form", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_name_and_number_form", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extension_and_exception", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_exception_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_exception_identification", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_optional_extension_marker", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_character_string_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_character_string_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_restricted_character_string_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_restricted_character_string_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_character_string_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_char_syms", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_chars_defn", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_quadruple", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_group", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_plane", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_row", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_cell", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_tuple", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_table_column", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_table_row", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_unrestricted_character_string_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_generalized_time_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_utc_time_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_constrained_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_type_with_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_constraint_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_subtype_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_general_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_element_set_specs", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_root_element_set_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_additional_element_set_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_element_set_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_unions", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_u_elems", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_intersections", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_i_elems", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_intersection_elements", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_elems", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_exclusions", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_union_mark", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_intersection_mark", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_elements", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_subtype_elements", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_single_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_contained_subtype", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_includes", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_value_range", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_lower_endpoint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_upper_endpoint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_lower_end_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_upper_end_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_size_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_permitted_alphabet", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_user_defined_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_user_defined_constraint_parameter", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_table_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_simple_table_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_component_relation_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_at_notation", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_level", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_component_id_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_contents_constraint", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_defined_object_class", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_defined_object", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_defined_object_set", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_external_object_class_reference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_external_object_reference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_external_object_set_reference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_useful_object_class_reference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_class_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_class", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_class_defn", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_with_syntax_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_field_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_type_field_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_type_optionality_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_fixed_type_value_field_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_value_optionality_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_variable_type_value_field_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_fixed_type_value_set_field_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_value_set_optionality_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_variable_type_value_set_field_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_field_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_optionality_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_set_field_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_set_optionality_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_primitive_field_name", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_field_name", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_syntax_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_token_or_group_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_optional_group", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_required_token", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_literal", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_defn", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_default_syntax", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_field_setting", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_defined_syntax", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_defined_syntax_token", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_setting", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_set_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_set", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_set_spec", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_set_elements", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_class_field_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_class_field_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_open_type_field_val", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_fixed_type_field_val", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_value_from_object", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_value_set_from_objects", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_type_from_object", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_from_object", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_object_set_from_objects", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_referenced_objects", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_any_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_objectclassreference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_objectreference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_objectsetreference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_typefieldreference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_valuefieldreference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_valuesetfieldreference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_objectfieldreference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_objectsetfieldreference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_word", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameterized_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameterized_type_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameterized_value_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameterized_value_set_type_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameterized_object_class_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameterized_object_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameterized_object_set_assignment", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameter_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameter", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_param_governor", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_governor", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_dummy_governor", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_dummy_reference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameterized_reference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameterized_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_simple_defined_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameterized_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_simple_defined_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameterized_value_set_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameterized_object_class", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameterized_object_set", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameterized_object", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_actual_parameter_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_actual_parameter", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_typereference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_identifier", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_valuereference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_modulereference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_number", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_bstring", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_hstring", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_cstring", &VisitorProxy::ruby_visitChildren);

  rb_cParser = define_class_under<ParserProxy>(rb_mASN1Parser, "Parser")
    .define_singleton_function("parse", &ParserProxy::parse)
    .define_singleton_function("parse_file", &ParserProxy::parseFile)
    .define_method("moduleDefinition", &ParserProxy::moduleDefinition)
    .define_method("visit", &ParserProxy::visit);

  rb_cModuleDefinitionContext = define_class_under<ModuleDefinitionContextProxy, ContextProxy>(rb_mASN1Parser, "ModuleDefinitionContext")
    .define_method("module_identifier", &ModuleDefinitionContextProxy::moduleIdentifier)
    .define_method("module_identifier_at", &ModuleDefinitionContextProxy::moduleIdentifierAt)
    .define_method("tag_default", &ModuleDefinitionContextProxy::tagDefault)
    .define_method("tag_default_at", &ModuleDefinitionContextProxy::tagDefaultAt)
    .define_method("extension_default", &ModuleDefinitionContextProxy::extensionDefault)
    .define_method("extension_default_at", &ModuleDefinitionContextProxy::extensionDefaultAt)
    .define_method("module_body", &ModuleDefinitionContextProxy::moduleBody)
    .define_method("module_body_at", &ModuleDefinitionContextProxy::moduleBodyAt)
    .define_method("EOF", &ModuleDefinitionContextProxy::EOF)
    .define_method("DEFINITIONS_WORD", &ModuleDefinitionContextProxy::DEFINITIONS_WORD)
    .define_method("DEFINITIONS_WORDAt", &ModuleDefinitionContextProxy::DEFINITIONS_WORD)
    .define_method("ASSIGN", &ModuleDefinitionContextProxy::ASSIGN)
    .define_method("ASSIGNAt", &ModuleDefinitionContextProxy::ASSIGN)
    .define_method("BEGIN_WORD", &ModuleDefinitionContextProxy::BEGIN_WORD)
    .define_method("BEGIN_WORDAt", &ModuleDefinitionContextProxy::BEGIN_WORD)
    .define_method("END_WORD", &ModuleDefinitionContextProxy::END_WORD)
    .define_method("END_WORDAt", &ModuleDefinitionContextProxy::END_WORD);

  rb_cModuleIdentifierContext = define_class_under<ModuleIdentifierContextProxy, ContextProxy>(rb_mASN1Parser, "ModuleIdentifierContext")
    .define_method("modulereference", &ModuleIdentifierContextProxy::modulereference)
    .define_method("definitive_identifier", &ModuleIdentifierContextProxy::definitiveIdentifier);

  rb_cTagDefaultContext = define_class_under<TagDefaultContextProxy, ContextProxy>(rb_mASN1Parser, "TagDefaultContext")
    .define_method("TAGS_WORD", &TagDefaultContextProxy::TAGS_WORD)
    .define_method("EXPLICIT_WORD", &TagDefaultContextProxy::EXPLICIT_WORD)
    .define_method("IMPLICIT_WORD", &TagDefaultContextProxy::IMPLICIT_WORD)
    .define_method("AUTOMATIC_WORD", &TagDefaultContextProxy::AUTOMATIC_WORD);

  rb_cExtensionDefaultContext = define_class_under<ExtensionDefaultContextProxy, ContextProxy>(rb_mASN1Parser, "ExtensionDefaultContext")
    .define_method("EXTENSIBILITY_WORD", &ExtensionDefaultContextProxy::EXTENSIBILITY_WORD)
    .define_method("IMPLIED_WORD", &ExtensionDefaultContextProxy::IMPLIED_WORD);

  rb_cModuleBodyContext = define_class_under<ModuleBodyContextProxy, ContextProxy>(rb_mASN1Parser, "ModuleBodyContext")
    .define_method("exports", &ModuleBodyContextProxy::exports)
    .define_method("imports", &ModuleBodyContextProxy::imports)
    .define_method("assignment_list", &ModuleBodyContextProxy::assignmentList);

  rb_cModulereferenceContext = define_class_under<ModulereferenceContextProxy, ContextProxy>(rb_mASN1Parser, "ModulereferenceContext")
    .define_method("ReferenceItem", &ModulereferenceContextProxy::ReferenceItem);

  rb_cDefinitiveIdentifierContext = define_class_under<DefinitiveIdentifierContextProxy, ContextProxy>(rb_mASN1Parser, "DefinitiveIdentifierContext")
    .define_method("definitive_obj_id_component_list", &DefinitiveIdentifierContextProxy::definitiveObjIdComponentList)
    .define_method("L_BRACE", &DefinitiveIdentifierContextProxy::L_BRACE)
    .define_method("R_BRACE", &DefinitiveIdentifierContextProxy::R_BRACE);

  rb_cDefinitiveObjIdComponentListContext = define_class_under<DefinitiveObjIdComponentListContextProxy, ContextProxy>(rb_mASN1Parser, "DefinitiveObjIdComponentListContext")
    .define_method("definitive_obj_id_component", &DefinitiveObjIdComponentListContextProxy::definitiveObjIdComponent)
    .define_method("definitive_obj_id_component_at", &DefinitiveObjIdComponentListContextProxy::definitiveObjIdComponentAt);

  rb_cDefinitiveObjIdComponentContext = define_class_under<DefinitiveObjIdComponentContextProxy, ContextProxy>(rb_mASN1Parser, "DefinitiveObjIdComponentContext")
    .define_method("name_form", &DefinitiveObjIdComponentContextProxy::nameForm)
    .define_method("definitive_number_form", &DefinitiveObjIdComponentContextProxy::definitiveNumberForm)
    .define_method("definitive_name_and_number_form", &DefinitiveObjIdComponentContextProxy::definitiveNameAndNumberForm);

  rb_cNameFormContext = define_class_under<NameFormContextProxy, ContextProxy>(rb_mASN1Parser, "NameFormContext")
    .define_method("identifier", &NameFormContextProxy::identifier);

  rb_cDefinitiveNumberFormContext = define_class_under<DefinitiveNumberFormContextProxy, ContextProxy>(rb_mASN1Parser, "DefinitiveNumberFormContext")
    .define_method("number", &DefinitiveNumberFormContextProxy::number);

  rb_cDefinitiveNameAndNumberFormContext = define_class_under<DefinitiveNameAndNumberFormContextProxy, ContextProxy>(rb_mASN1Parser, "DefinitiveNameAndNumberFormContext")
    .define_method("identifier", &DefinitiveNameAndNumberFormContextProxy::identifier)
    .define_method("definitive_number_form", &DefinitiveNameAndNumberFormContextProxy::definitiveNumberForm)
    .define_method("L_PAREN", &DefinitiveNameAndNumberFormContextProxy::L_PAREN)
    .define_method("R_PAREN", &DefinitiveNameAndNumberFormContextProxy::R_PAREN);

  rb_cNumberContext = define_class_under<NumberContextProxy, ContextProxy>(rb_mASN1Parser, "NumberContext")
    .define_method("NumberItem", &NumberContextProxy::NumberItem);

  rb_cIdentifierContext = define_class_under<IdentifierContextProxy, ContextProxy>(rb_mASN1Parser, "IdentifierContext")
    .define_method("IdentifierOrValueItem", &IdentifierContextProxy::IdentifierOrValueItem);

  rb_cExportsContext = define_class_under<ExportsContextProxy, ContextProxy>(rb_mASN1Parser, "ExportsContext")
    .define_method("symbols_exported", &ExportsContextProxy::symbolsExported)
    .define_method("EXPORTS_WORD", &ExportsContextProxy::EXPORTS_WORD)
    .define_method("ALL_WORD", &ExportsContextProxy::ALL_WORD);

  rb_cImportsContext = define_class_under<ImportsContextProxy, ContextProxy>(rb_mASN1Parser, "ImportsContext")
    .define_method("symbols_imported", &ImportsContextProxy::symbolsImported)
    .define_method("IMPORTS_WORD", &ImportsContextProxy::IMPORTS_WORD);

  rb_cAssignmentListContext = define_class_under<AssignmentListContextProxy, ContextProxy>(rb_mASN1Parser, "AssignmentListContext")
    .define_method("assignment", &AssignmentListContextProxy::assignment)
    .define_method("assignment_at", &AssignmentListContextProxy::assignmentAt);

  rb_cSymbolsExportedContext = define_class_under<SymbolsExportedContextProxy, ContextProxy>(rb_mASN1Parser, "SymbolsExportedContext")
    .define_method("symbol_list", &SymbolsExportedContextProxy::symbolList);

  rb_cSymbolListContext = define_class_under<SymbolListContextProxy, ContextProxy>(rb_mASN1Parser, "SymbolListContext")
    .define_method("symbol", &SymbolListContextProxy::symbol)
    .define_method("symbol_at", &SymbolListContextProxy::symbolAt)
    .define_method("COMMA", &SymbolListContextProxy::COMMA)
    .define_method("COMMAAt", &SymbolListContextProxy::COMMA);

  rb_cSymbolsImportedContext = define_class_under<SymbolsImportedContextProxy, ContextProxy>(rb_mASN1Parser, "SymbolsImportedContext")
    .define_method("symbols_from_module_list", &SymbolsImportedContextProxy::symbolsFromModuleList);

  rb_cSymbolsFromModuleListContext = define_class_under<SymbolsFromModuleListContextProxy, ContextProxy>(rb_mASN1Parser, "SymbolsFromModuleListContext")
    .define_method("symbols_from_module", &SymbolsFromModuleListContextProxy::symbolsFromModule)
    .define_method("symbols_from_module_at", &SymbolsFromModuleListContextProxy::symbolsFromModuleAt);

  rb_cSymbolsFromModuleContext = define_class_under<SymbolsFromModuleContextProxy, ContextProxy>(rb_mASN1Parser, "SymbolsFromModuleContext")
    .define_method("symbol_list", &SymbolsFromModuleContextProxy::symbolList)
    .define_method("global_module_reference", &SymbolsFromModuleContextProxy::globalModuleReference)
    .define_method("FROM_WORD", &SymbolsFromModuleContextProxy::FROM_WORD);

  rb_cGlobalModuleReferenceContext = define_class_under<GlobalModuleReferenceContextProxy, ContextProxy>(rb_mASN1Parser, "GlobalModuleReferenceContext")
    .define_method("modulereference", &GlobalModuleReferenceContextProxy::modulereference)
    .define_method("assigned_identifier", &GlobalModuleReferenceContextProxy::assignedIdentifier);

  rb_cAssignedIdentifierContext = define_class_under<AssignedIdentifierContextProxy, ContextProxy>(rb_mASN1Parser, "AssignedIdentifierContext")
    .define_method("object_identifier_value", &AssignedIdentifierContextProxy::objectIdentifierValue)
    .define_method("defined_value", &AssignedIdentifierContextProxy::definedValue);

  rb_cObjectIdentifierValueContext = define_class_under<ObjectIdentifierValueContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectIdentifierValueContext")
    .define_method("obj_id_components_list", &ObjectIdentifierValueContextProxy::objIdComponentsList)
    .define_method("defined_value", &ObjectIdentifierValueContextProxy::definedValue)
    .define_method("L_BRACE", &ObjectIdentifierValueContextProxy::L_BRACE)
    .define_method("R_BRACE", &ObjectIdentifierValueContextProxy::R_BRACE);

  rb_cDefinedValueContext = define_class_under<DefinedValueContextProxy, ContextProxy>(rb_mASN1Parser, "DefinedValueContext")
    .define_method("external_value_reference", &DefinedValueContextProxy::externalValueReference)
    .define_method("valuereference", &DefinedValueContextProxy::valuereference)
    .define_method("parameterized_value", &DefinedValueContextProxy::parameterizedValue);

  rb_cSymbolContext = define_class_under<SymbolContextProxy, ContextProxy>(rb_mASN1Parser, "SymbolContext")
    .define_method("reference", &SymbolContextProxy::reference)
    .define_method("parameterized_reference", &SymbolContextProxy::parameterizedReference);

  rb_cReferenceContext = define_class_under<ReferenceContextProxy, ContextProxy>(rb_mASN1Parser, "ReferenceContext")
    .define_method("typereference", &ReferenceContextProxy::typereference)
    .define_method("valuereference", &ReferenceContextProxy::valuereference)
    .define_method("objectclassreference", &ReferenceContextProxy::objectclassreference)
    .define_method("objectreference", &ReferenceContextProxy::objectreference)
    .define_method("objectsetreference", &ReferenceContextProxy::objectsetreference);

  rb_cParameterizedReferenceContext = define_class_under<ParameterizedReferenceContextProxy, ContextProxy>(rb_mASN1Parser, "ParameterizedReferenceContext")
    .define_method("reference", &ParameterizedReferenceContextProxy::reference)
    .define_method("L_BRACE", &ParameterizedReferenceContextProxy::L_BRACE)
    .define_method("R_BRACE", &ParameterizedReferenceContextProxy::R_BRACE);

  rb_cTypereferenceContext = define_class_under<TypereferenceContextProxy, ContextProxy>(rb_mASN1Parser, "TypereferenceContext")
    .define_method("ReferenceItem", &TypereferenceContextProxy::ReferenceItem);

  rb_cValuereferenceContext = define_class_under<ValuereferenceContextProxy, ContextProxy>(rb_mASN1Parser, "ValuereferenceContext")
    .define_method("IdentifierOrValueItem", &ValuereferenceContextProxy::IdentifierOrValueItem);

  rb_cObjectclassreferenceContext = define_class_under<ObjectclassreferenceContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectclassreferenceContext")
    .define_method("ReferenceItem", &ObjectclassreferenceContextProxy::ReferenceItem);

  rb_cObjectreferenceContext = define_class_under<ObjectreferenceContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectreferenceContext")
    .define_method("IdentifierOrValueItem", &ObjectreferenceContextProxy::IdentifierOrValueItem);

  rb_cObjectsetreferenceContext = define_class_under<ObjectsetreferenceContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectsetreferenceContext")
    .define_method("ReferenceItem", &ObjectsetreferenceContextProxy::ReferenceItem);

  rb_cAssignmentContext = define_class_under<AssignmentContextProxy, ContextProxy>(rb_mASN1Parser, "AssignmentContext")
    .define_method("type_assignment", &AssignmentContextProxy::typeAssignment)
    .define_method("value_assignment", &AssignmentContextProxy::valueAssignment)
    .define_method("value_set_type_assignment", &AssignmentContextProxy::valueSetTypeAssignment)
    .define_method("object_class_assignment", &AssignmentContextProxy::objectClassAssignment)
    .define_method("object_assignment", &AssignmentContextProxy::objectAssignment)
    .define_method("object_set_assignment", &AssignmentContextProxy::objectSetAssignment)
    .define_method("parameterized_assignment", &AssignmentContextProxy::parameterizedAssignment);

  rb_cTypeAssignmentContext = define_class_under<TypeAssignmentContextProxy, ContextProxy>(rb_mASN1Parser, "TypeAssignmentContext")
    .define_method("typereference", &TypeAssignmentContextProxy::typereference)
    .define_method("type", &TypeAssignmentContextProxy::type)
    .define_method("ASSIGN", &TypeAssignmentContextProxy::ASSIGN);

  rb_cValueAssignmentContext = define_class_under<ValueAssignmentContextProxy, ContextProxy>(rb_mASN1Parser, "ValueAssignmentContext")
    .define_method("valuereference", &ValueAssignmentContextProxy::valuereference)
    .define_method("type", &ValueAssignmentContextProxy::type)
    .define_method("value", &ValueAssignmentContextProxy::value)
    .define_method("ASSIGN", &ValueAssignmentContextProxy::ASSIGN);

  rb_cValueSetTypeAssignmentContext = define_class_under<ValueSetTypeAssignmentContextProxy, ContextProxy>(rb_mASN1Parser, "ValueSetTypeAssignmentContext")
    .define_method("typereference", &ValueSetTypeAssignmentContextProxy::typereference)
    .define_method("type", &ValueSetTypeAssignmentContextProxy::type)
    .define_method("value_set", &ValueSetTypeAssignmentContextProxy::valueSet)
    .define_method("ASSIGN", &ValueSetTypeAssignmentContextProxy::ASSIGN);

  rb_cObjectClassAssignmentContext = define_class_under<ObjectClassAssignmentContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectClassAssignmentContext")
    .define_method("objectclassreference", &ObjectClassAssignmentContextProxy::objectclassreference)
    .define_method("object_class", &ObjectClassAssignmentContextProxy::objectClass)
    .define_method("ASSIGN", &ObjectClassAssignmentContextProxy::ASSIGN);

  rb_cObjectAssignmentContext = define_class_under<ObjectAssignmentContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectAssignmentContext")
    .define_method("objectreference", &ObjectAssignmentContextProxy::objectreference)
    .define_method("defined_object_class", &ObjectAssignmentContextProxy::definedObjectClass)
    .define_method("object", &ObjectAssignmentContextProxy::object)
    .define_method("ASSIGN", &ObjectAssignmentContextProxy::ASSIGN);

  rb_cObjectSetAssignmentContext = define_class_under<ObjectSetAssignmentContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectSetAssignmentContext")
    .define_method("objectsetreference", &ObjectSetAssignmentContextProxy::objectsetreference)
    .define_method("defined_object_class", &ObjectSetAssignmentContextProxy::definedObjectClass)
    .define_method("object_set", &ObjectSetAssignmentContextProxy::objectSet)
    .define_method("ASSIGN", &ObjectSetAssignmentContextProxy::ASSIGN);

  rb_cParameterizedAssignmentContext = define_class_under<ParameterizedAssignmentContextProxy, ContextProxy>(rb_mASN1Parser, "ParameterizedAssignmentContext")
    .define_method("parameterized_type_assignment", &ParameterizedAssignmentContextProxy::parameterizedTypeAssignment)
    .define_method("parameterized_value_assignment", &ParameterizedAssignmentContextProxy::parameterizedValueAssignment)
    .define_method("parameterized_value_set_type_assignment", &ParameterizedAssignmentContextProxy::parameterizedValueSetTypeAssignment)
    .define_method("parameterized_object_class_assignment", &ParameterizedAssignmentContextProxy::parameterizedObjectClassAssignment)
    .define_method("parameterized_object_assignment", &ParameterizedAssignmentContextProxy::parameterizedObjectAssignment)
    .define_method("parameterized_object_set_assignment", &ParameterizedAssignmentContextProxy::parameterizedObjectSetAssignment);

  rb_cDefinedTypeContext = define_class_under<DefinedTypeContextProxy, ContextProxy>(rb_mASN1Parser, "DefinedTypeContext")
    .define_method("external_type_reference", &DefinedTypeContextProxy::externalTypeReference)
    .define_method("typereference", &DefinedTypeContextProxy::typereference)
    .define_method("parameterized_type", &DefinedTypeContextProxy::parameterizedType)
    .define_method("parameterized_value_set_type", &DefinedTypeContextProxy::parameterizedValueSetType);

  rb_cExternalTypeReferenceContext = define_class_under<ExternalTypeReferenceContextProxy, ContextProxy>(rb_mASN1Parser, "ExternalTypeReferenceContext")
    .define_method("modulereference", &ExternalTypeReferenceContextProxy::modulereference)
    .define_method("typereference", &ExternalTypeReferenceContextProxy::typereference)
    .define_method("DOT", &ExternalTypeReferenceContextProxy::DOT);

  rb_cParameterizedTypeContext = define_class_under<ParameterizedTypeContextProxy, ContextProxy>(rb_mASN1Parser, "ParameterizedTypeContext")
    .define_method("simple_defined_type", &ParameterizedTypeContextProxy::simpleDefinedType)
    .define_method("actual_parameter_list", &ParameterizedTypeContextProxy::actualParameterList);

  rb_cParameterizedValueSetTypeContext = define_class_under<ParameterizedValueSetTypeContextProxy, ContextProxy>(rb_mASN1Parser, "ParameterizedValueSetTypeContext")
    .define_method("simple_defined_type", &ParameterizedValueSetTypeContextProxy::simpleDefinedType)
    .define_method("actual_parameter_list", &ParameterizedValueSetTypeContextProxy::actualParameterList);

  rb_cExternalValueReferenceContext = define_class_under<ExternalValueReferenceContextProxy, ContextProxy>(rb_mASN1Parser, "ExternalValueReferenceContext")
    .define_method("modulereference", &ExternalValueReferenceContextProxy::modulereference)
    .define_method("valuereference", &ExternalValueReferenceContextProxy::valuereference)
    .define_method("DOT", &ExternalValueReferenceContextProxy::DOT);

  rb_cParameterizedValueContext = define_class_under<ParameterizedValueContextProxy, ContextProxy>(rb_mASN1Parser, "ParameterizedValueContext")
    .define_method("simple_defined_value", &ParameterizedValueContextProxy::simpleDefinedValue)
    .define_method("actual_parameter_list", &ParameterizedValueContextProxy::actualParameterList);

  rb_cTypeContext = define_class_under<TypeContextProxy, ContextProxy>(rb_mASN1Parser, "TypeContext")
    .define_method("builtin_type", &TypeContextProxy::builtinType)
    .define_method("referenced_type", &TypeContextProxy::referencedType)
    .define_method("constrained_type", &TypeContextProxy::constrainedType);

  rb_cValueContext = define_class_under<ValueContextProxy, ContextProxy>(rb_mASN1Parser, "ValueContext")
    .define_method("builtin_value", &ValueContextProxy::builtinValue)
    .define_method("referenced_value", &ValueContextProxy::referencedValue)
    .define_method("object_class_field_value", &ValueContextProxy::objectClassFieldValue);

  rb_cValueSetContext = define_class_under<ValueSetContextProxy, ContextProxy>(rb_mASN1Parser, "ValueSetContext")
    .define_method("element_set_specs", &ValueSetContextProxy::elementSetSpecs)
    .define_method("L_BRACE", &ValueSetContextProxy::L_BRACE)
    .define_method("R_BRACE", &ValueSetContextProxy::R_BRACE);

  rb_cElementSetSpecsContext = define_class_under<ElementSetSpecsContextProxy, ContextProxy>(rb_mASN1Parser, "ElementSetSpecsContext")
    .define_method("root_element_set_spec", &ElementSetSpecsContextProxy::rootElementSetSpec)
    .define_method("additional_element_set_spec", &ElementSetSpecsContextProxy::additionalElementSetSpec)
    .define_method("COMMA", &ElementSetSpecsContextProxy::COMMA)
    .define_method("COMMAAt", &ElementSetSpecsContextProxy::COMMA)
    .define_method("ELLIPSIS", &ElementSetSpecsContextProxy::ELLIPSIS);

  rb_cBuiltinTypeContext = define_class_under<BuiltinTypeContextProxy, ContextProxy>(rb_mASN1Parser, "BuiltinTypeContext")
    .define_method("bit_string_type", &BuiltinTypeContextProxy::bitStringType)
    .define_method("boolean_type", &BuiltinTypeContextProxy::booleanType)
    .define_method("character_string_type", &BuiltinTypeContextProxy::characterStringType)
    .define_method("choice_type", &BuiltinTypeContextProxy::choiceType)
    .define_method("enumerated_type", &BuiltinTypeContextProxy::enumeratedType)
    .define_method("integer_type", &BuiltinTypeContextProxy::integerType)
    .define_method("null_type", &BuiltinTypeContextProxy::nullType)
    .define_method("object_class_field_type", &BuiltinTypeContextProxy::objectClassFieldType)
    .define_method("object_identifier_type", &BuiltinTypeContextProxy::objectIdentifierType)
    .define_method("octet_string_type", &BuiltinTypeContextProxy::octetStringType)
    .define_method("sequence_type", &BuiltinTypeContextProxy::sequenceType)
    .define_method("sequence_of_type", &BuiltinTypeContextProxy::sequenceOfType)
    .define_method("set_type", &BuiltinTypeContextProxy::setType)
    .define_method("set_of_type", &BuiltinTypeContextProxy::setOfType)
    .define_method("tagged_type", &BuiltinTypeContextProxy::taggedType)
    .define_method("any_type", &BuiltinTypeContextProxy::anyType);

  rb_cReferencedTypeContext = define_class_under<ReferencedTypeContextProxy, ContextProxy>(rb_mASN1Parser, "ReferencedTypeContext")
    .define_method("defined_type", &ReferencedTypeContextProxy::definedType)
    .define_method("useful_type", &ReferencedTypeContextProxy::usefulType)
    .define_method("type_from_object", &ReferencedTypeContextProxy::typeFromObject)
    .define_method("value_set_from_objects", &ReferencedTypeContextProxy::valueSetFromObjects);

  rb_cConstrainedTypeContext = define_class_under<ConstrainedTypeContextProxy, ContextProxy>(rb_mASN1Parser, "ConstrainedTypeContext")
    .define_method("constraint", &ConstrainedTypeContextProxy::constraint)
    .define_method("builtin_type", &ConstrainedTypeContextProxy::builtinType)
    .define_method("referenced_type", &ConstrainedTypeContextProxy::referencedType)
    .define_method("type_with_constraint", &ConstrainedTypeContextProxy::typeWithConstraint);

  rb_cBitStringTypeContext = define_class_under<BitStringTypeContextProxy, ContextProxy>(rb_mASN1Parser, "BitStringTypeContext")
    .define_method("named_bit_list", &BitStringTypeContextProxy::namedBitList)
    .define_method("BIT_WORD", &BitStringTypeContextProxy::BIT_WORD)
    .define_method("STRING_WORD", &BitStringTypeContextProxy::STRING_WORD)
    .define_method("L_BRACE", &BitStringTypeContextProxy::L_BRACE)
    .define_method("R_BRACE", &BitStringTypeContextProxy::R_BRACE);

  rb_cBooleanTypeContext = define_class_under<BooleanTypeContextProxy, ContextProxy>(rb_mASN1Parser, "BooleanTypeContext")
    .define_method("BOOLEAN_WORD", &BooleanTypeContextProxy::BOOLEAN_WORD);

  rb_cCharacterStringTypeContext = define_class_under<CharacterStringTypeContextProxy, ContextProxy>(rb_mASN1Parser, "CharacterStringTypeContext")
    .define_method("restricted_character_string_type", &CharacterStringTypeContextProxy::restrictedCharacterStringType)
    .define_method("unrestricted_character_string_type", &CharacterStringTypeContextProxy::unrestrictedCharacterStringType);

  rb_cChoiceTypeContext = define_class_under<ChoiceTypeContextProxy, ContextProxy>(rb_mASN1Parser, "ChoiceTypeContext")
    .define_method("alternative_type_lists", &ChoiceTypeContextProxy::alternativeTypeLists)
    .define_method("CHOICE_WORD", &ChoiceTypeContextProxy::CHOICE_WORD)
    .define_method("L_BRACE", &ChoiceTypeContextProxy::L_BRACE)
    .define_method("R_BRACE", &ChoiceTypeContextProxy::R_BRACE);

  rb_cEnumeratedTypeContext = define_class_under<EnumeratedTypeContextProxy, ContextProxy>(rb_mASN1Parser, "EnumeratedTypeContext")
    .define_method("enumerations", &EnumeratedTypeContextProxy::enumerations)
    .define_method("ENUMERATED_WORD", &EnumeratedTypeContextProxy::ENUMERATED_WORD)
    .define_method("L_BRACE", &EnumeratedTypeContextProxy::L_BRACE)
    .define_method("R_BRACE", &EnumeratedTypeContextProxy::R_BRACE);

  rb_cIntegerTypeContext = define_class_under<IntegerTypeContextProxy, ContextProxy>(rb_mASN1Parser, "IntegerTypeContext")
    .define_method("named_number_list", &IntegerTypeContextProxy::namedNumberList)
    .define_method("INTEGER_WORD", &IntegerTypeContextProxy::INTEGER_WORD)
    .define_method("L_BRACE", &IntegerTypeContextProxy::L_BRACE)
    .define_method("R_BRACE", &IntegerTypeContextProxy::R_BRACE);

  rb_cNullTypeContext = define_class_under<NullTypeContextProxy, ContextProxy>(rb_mASN1Parser, "NullTypeContext")
    .define_method("NULL_WORD", &NullTypeContextProxy::NULL_WORD);

  rb_cObjectClassFieldTypeContext = define_class_under<ObjectClassFieldTypeContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectClassFieldTypeContext")
    .define_method("defined_object_class", &ObjectClassFieldTypeContextProxy::definedObjectClass)
    .define_method("field_name", &ObjectClassFieldTypeContextProxy::fieldName)
    .define_method("DOT", &ObjectClassFieldTypeContextProxy::DOT);

  rb_cObjectIdentifierTypeContext = define_class_under<ObjectIdentifierTypeContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectIdentifierTypeContext")
    .define_method("OBJECT_WORD", &ObjectIdentifierTypeContextProxy::OBJECT_WORD)
    .define_method("IDENTIFIER_WORD", &ObjectIdentifierTypeContextProxy::IDENTIFIER_WORD);

  rb_cOctetStringTypeContext = define_class_under<OctetStringTypeContextProxy, ContextProxy>(rb_mASN1Parser, "OctetStringTypeContext")
    .define_method("OCTET_WORD", &OctetStringTypeContextProxy::OCTET_WORD)
    .define_method("STRING_WORD", &OctetStringTypeContextProxy::STRING_WORD);

  rb_cSequenceTypeContext = define_class_under<SequenceTypeContextProxy, ContextProxy>(rb_mASN1Parser, "SequenceTypeContext")
    .define_method("extension_and_exception", &SequenceTypeContextProxy::extensionAndException)
    .define_method("component_type_lists", &SequenceTypeContextProxy::componentTypeLists)
    .define_method("SEQUENCE_WORD", &SequenceTypeContextProxy::SEQUENCE_WORD)
    .define_method("L_BRACE", &SequenceTypeContextProxy::L_BRACE)
    .define_method("R_BRACE", &SequenceTypeContextProxy::R_BRACE);

  rb_cSequenceOfTypeContext = define_class_under<SequenceOfTypeContextProxy, ContextProxy>(rb_mASN1Parser, "SequenceOfTypeContext")
    .define_method("type", &SequenceOfTypeContextProxy::type)
    .define_method("named_type", &SequenceOfTypeContextProxy::namedType)
    .define_method("SEQUENCE_WORD", &SequenceOfTypeContextProxy::SEQUENCE_WORD)
    .define_method("OF_WORD", &SequenceOfTypeContextProxy::OF_WORD);

  rb_cSetTypeContext = define_class_under<SetTypeContextProxy, ContextProxy>(rb_mASN1Parser, "SetTypeContext")
    .define_method("extension_and_exception", &SetTypeContextProxy::extensionAndException)
    .define_method("optional_extension_marker", &SetTypeContextProxy::optionalExtensionMarker)
    .define_method("component_type_lists", &SetTypeContextProxy::componentTypeLists)
    .define_method("SET_WORD", &SetTypeContextProxy::SET_WORD)
    .define_method("L_BRACE", &SetTypeContextProxy::L_BRACE)
    .define_method("R_BRACE", &SetTypeContextProxy::R_BRACE);

  rb_cSetOfTypeContext = define_class_under<SetOfTypeContextProxy, ContextProxy>(rb_mASN1Parser, "SetOfTypeContext")
    .define_method("type", &SetOfTypeContextProxy::type)
    .define_method("named_type", &SetOfTypeContextProxy::namedType)
    .define_method("SET_WORD", &SetOfTypeContextProxy::SET_WORD)
    .define_method("OF_WORD", &SetOfTypeContextProxy::OF_WORD);

  rb_cTaggedTypeContext = define_class_under<TaggedTypeContextProxy, ContextProxy>(rb_mASN1Parser, "TaggedTypeContext")
    .define_method("tag", &TaggedTypeContextProxy::tag)
    .define_method("type", &TaggedTypeContextProxy::type)
    .define_method("IMPLICIT_WORD", &TaggedTypeContextProxy::IMPLICIT_WORD)
    .define_method("EXPLICIT_WORD", &TaggedTypeContextProxy::EXPLICIT_WORD);

  rb_cAnyTypeContext = define_class_under<AnyTypeContextProxy, ContextProxy>(rb_mASN1Parser, "AnyTypeContext")
    .define_method("identifier", &AnyTypeContextProxy::identifier)
    .define_method("ANY_WORD", &AnyTypeContextProxy::ANY_WORD)
    .define_method("DEFINED_WORD", &AnyTypeContextProxy::DEFINED_WORD)
    .define_method("BY_WORD", &AnyTypeContextProxy::BY_WORD);

  rb_cUsefulTypeContext = define_class_under<UsefulTypeContextProxy, ContextProxy>(rb_mASN1Parser, "UsefulTypeContext");

  rb_cTypeFromObjectContext = define_class_under<TypeFromObjectContextProxy, ContextProxy>(rb_mASN1Parser, "TypeFromObjectContext")
    .define_method("referenced_objects", &TypeFromObjectContextProxy::referencedObjects)
    .define_method("field_name", &TypeFromObjectContextProxy::fieldName)
    .define_method("DOT", &TypeFromObjectContextProxy::DOT);

  rb_cValueSetFromObjectsContext = define_class_under<ValueSetFromObjectsContextProxy, ContextProxy>(rb_mASN1Parser, "ValueSetFromObjectsContext")
    .define_method("referenced_objects", &ValueSetFromObjectsContextProxy::referencedObjects)
    .define_method("field_name", &ValueSetFromObjectsContextProxy::fieldName)
    .define_method("DOT", &ValueSetFromObjectsContextProxy::DOT);

  rb_cNamedTypeContext = define_class_under<NamedTypeContextProxy, ContextProxy>(rb_mASN1Parser, "NamedTypeContext")
    .define_method("identifier", &NamedTypeContextProxy::identifier)
    .define_method("type", &NamedTypeContextProxy::type);

  rb_cBuiltinValueContext = define_class_under<BuiltinValueContextProxy, ContextProxy>(rb_mASN1Parser, "BuiltinValueContext")
    .define_method("bit_string_value", &BuiltinValueContextProxy::bitStringValue)
    .define_method("boolean_value", &BuiltinValueContextProxy::booleanValue)
    .define_method("character_string_value", &BuiltinValueContextProxy::characterStringValue)
    .define_method("enumerated_value", &BuiltinValueContextProxy::enumeratedValue)
    .define_method("integer_value", &BuiltinValueContextProxy::integerValue)
    .define_method("null_value", &BuiltinValueContextProxy::nullValue)
    .define_method("object_identifier_value", &BuiltinValueContextProxy::objectIdentifierValue)
    .define_method("octet_string_value", &BuiltinValueContextProxy::octetStringValue)
    .define_method("sequence_value", &BuiltinValueContextProxy::sequenceValue)
    .define_method("sequence_of_value", &BuiltinValueContextProxy::sequenceOfValue)
    .define_method("set_value", &BuiltinValueContextProxy::setValue)
    .define_method("set_of_value", &BuiltinValueContextProxy::setOfValue);

  rb_cReferencedValueContext = define_class_under<ReferencedValueContextProxy, ContextProxy>(rb_mASN1Parser, "ReferencedValueContext")
    .define_method("defined_value", &ReferencedValueContextProxy::definedValue)
    .define_method("value_from_object", &ReferencedValueContextProxy::valueFromObject);

  rb_cObjectClassFieldValueContext = define_class_under<ObjectClassFieldValueContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectClassFieldValueContext")
    .define_method("open_type_field_val", &ObjectClassFieldValueContextProxy::openTypeFieldVal)
    .define_method("fixed_type_field_val", &ObjectClassFieldValueContextProxy::fixedTypeFieldVal);

  rb_cBitStringValueContext = define_class_under<BitStringValueContextProxy, ContextProxy>(rb_mASN1Parser, "BitStringValueContext")
    .define_method("bstring", &BitStringValueContextProxy::bstring)
    .define_method("hstring", &BitStringValueContextProxy::hstring)
    .define_method("identifier_list", &BitStringValueContextProxy::identifierList)
    .define_method("value", &BitStringValueContextProxy::value)
    .define_method("L_BRACE", &BitStringValueContextProxy::L_BRACE)
    .define_method("R_BRACE", &BitStringValueContextProxy::R_BRACE)
    .define_method("CONTAINING_WORD", &BitStringValueContextProxy::CONTAINING_WORD);

  rb_cBooleanValueContext = define_class_under<BooleanValueContextProxy, ContextProxy>(rb_mASN1Parser, "BooleanValueContext")
    .define_method("TRUE_WORD", &BooleanValueContextProxy::TRUE_WORD)
    .define_method("FALSE_WORD", &BooleanValueContextProxy::FALSE_WORD);

  rb_cCharacterStringValueContext = define_class_under<CharacterStringValueContextProxy, ContextProxy>(rb_mASN1Parser, "CharacterStringValueContext")
    .define_method("restricted_character_string_value", &CharacterStringValueContextProxy::restrictedCharacterStringValue);

  rb_cEnumeratedValueContext = define_class_under<EnumeratedValueContextProxy, ContextProxy>(rb_mASN1Parser, "EnumeratedValueContext")
    .define_method("identifier", &EnumeratedValueContextProxy::identifier);

  rb_cIntegerValueContext = define_class_under<IntegerValueContextProxy, ContextProxy>(rb_mASN1Parser, "IntegerValueContext")
    .define_method("signed_number", &IntegerValueContextProxy::signedNumber)
    .define_method("identifier", &IntegerValueContextProxy::identifier);

  rb_cNullValueContext = define_class_under<NullValueContextProxy, ContextProxy>(rb_mASN1Parser, "NullValueContext")
    .define_method("NULL_WORD", &NullValueContextProxy::NULL_WORD);

  rb_cOctetStringValueContext = define_class_under<OctetStringValueContextProxy, ContextProxy>(rb_mASN1Parser, "OctetStringValueContext")
    .define_method("bstring", &OctetStringValueContextProxy::bstring)
    .define_method("hstring", &OctetStringValueContextProxy::hstring)
    .define_method("value", &OctetStringValueContextProxy::value)
    .define_method("CONTAINING_WORD", &OctetStringValueContextProxy::CONTAINING_WORD);

  rb_cSequenceValueContext = define_class_under<SequenceValueContextProxy, ContextProxy>(rb_mASN1Parser, "SequenceValueContext")
    .define_method("component_value_list", &SequenceValueContextProxy::componentValueList)
    .define_method("L_BRACE", &SequenceValueContextProxy::L_BRACE)
    .define_method("R_BRACE", &SequenceValueContextProxy::R_BRACE);

  rb_cSequenceOfValueContext = define_class_under<SequenceOfValueContextProxy, ContextProxy>(rb_mASN1Parser, "SequenceOfValueContext")
    .define_method("value_list", &SequenceOfValueContextProxy::valueList)
    .define_method("named_value_list", &SequenceOfValueContextProxy::namedValueList)
    .define_method("L_BRACE", &SequenceOfValueContextProxy::L_BRACE)
    .define_method("R_BRACE", &SequenceOfValueContextProxy::R_BRACE);

  rb_cSetValueContext = define_class_under<SetValueContextProxy, ContextProxy>(rb_mASN1Parser, "SetValueContext")
    .define_method("component_value_list", &SetValueContextProxy::componentValueList)
    .define_method("L_BRACE", &SetValueContextProxy::L_BRACE)
    .define_method("R_BRACE", &SetValueContextProxy::R_BRACE);

  rb_cSetOfValueContext = define_class_under<SetOfValueContextProxy, ContextProxy>(rb_mASN1Parser, "SetOfValueContext")
    .define_method("value_list", &SetOfValueContextProxy::valueList)
    .define_method("named_value_list", &SetOfValueContextProxy::namedValueList)
    .define_method("L_BRACE", &SetOfValueContextProxy::L_BRACE)
    .define_method("R_BRACE", &SetOfValueContextProxy::R_BRACE);

  rb_cValueFromObjectContext = define_class_under<ValueFromObjectContextProxy, ContextProxy>(rb_mASN1Parser, "ValueFromObjectContext")
    .define_method("referenced_objects", &ValueFromObjectContextProxy::referencedObjects)
    .define_method("field_name", &ValueFromObjectContextProxy::fieldName)
    .define_method("DOT", &ValueFromObjectContextProxy::DOT);

  rb_cNamedValueContext = define_class_under<NamedValueContextProxy, ContextProxy>(rb_mASN1Parser, "NamedValueContext")
    .define_method("identifier", &NamedValueContextProxy::identifier)
    .define_method("value", &NamedValueContextProxy::value);

  rb_cNamedNumberListContext = define_class_under<NamedNumberListContextProxy, ContextProxy>(rb_mASN1Parser, "NamedNumberListContext")
    .define_method("named_number", &NamedNumberListContextProxy::namedNumber)
    .define_method("named_number_at", &NamedNumberListContextProxy::namedNumberAt)
    .define_method("COMMA", &NamedNumberListContextProxy::COMMA)
    .define_method("COMMAAt", &NamedNumberListContextProxy::COMMA);

  rb_cNamedNumberContext = define_class_under<NamedNumberContextProxy, ContextProxy>(rb_mASN1Parser, "NamedNumberContext")
    .define_method("identifier", &NamedNumberContextProxy::identifier)
    .define_method("signed_number", &NamedNumberContextProxy::signedNumber)
    .define_method("defined_value", &NamedNumberContextProxy::definedValue)
    .define_method("L_PAREN", &NamedNumberContextProxy::L_PAREN)
    .define_method("R_PAREN", &NamedNumberContextProxy::R_PAREN);

  rb_cSignedNumberContext = define_class_under<SignedNumberContextProxy, ContextProxy>(rb_mASN1Parser, "SignedNumberContext")
    .define_method("number", &SignedNumberContextProxy::number)
    .define_method("MINUS", &SignedNumberContextProxy::MINUS);

  rb_cEnumerationsContext = define_class_under<EnumerationsContextProxy, ContextProxy>(rb_mASN1Parser, "EnumerationsContext")
    .define_method("root_enumeration", &EnumerationsContextProxy::rootEnumeration)
    .define_method("exception_spec", &EnumerationsContextProxy::exceptionSpec)
    .define_method("additional_enumeration", &EnumerationsContextProxy::additionalEnumeration)
    .define_method("COMMA", &EnumerationsContextProxy::COMMA)
    .define_method("COMMAAt", &EnumerationsContextProxy::COMMA)
    .define_method("ELLIPSIS", &EnumerationsContextProxy::ELLIPSIS);

  rb_cRootEnumerationContext = define_class_under<RootEnumerationContextProxy, ContextProxy>(rb_mASN1Parser, "RootEnumerationContext")
    .define_method("enumeration", &RootEnumerationContextProxy::enumeration);

  rb_cExceptionSpecContext = define_class_under<ExceptionSpecContextProxy, ContextProxy>(rb_mASN1Parser, "ExceptionSpecContext")
    .define_method("exception_identification", &ExceptionSpecContextProxy::exceptionIdentification);

  rb_cAdditionalEnumerationContext = define_class_under<AdditionalEnumerationContextProxy, ContextProxy>(rb_mASN1Parser, "AdditionalEnumerationContext")
    .define_method("enumeration", &AdditionalEnumerationContextProxy::enumeration);

  rb_cEnumerationContext = define_class_under<EnumerationContextProxy, ContextProxy>(rb_mASN1Parser, "EnumerationContext")
    .define_method("enumeration_item", &EnumerationContextProxy::enumerationItem)
    .define_method("enumeration_item_at", &EnumerationContextProxy::enumerationItemAt)
    .define_method("COMMA", &EnumerationContextProxy::COMMA)
    .define_method("COMMAAt", &EnumerationContextProxy::COMMA);

  rb_cEnumerationItemContext = define_class_under<EnumerationItemContextProxy, ContextProxy>(rb_mASN1Parser, "EnumerationItemContext")
    .define_method("identifier", &EnumerationItemContextProxy::identifier)
    .define_method("named_number", &EnumerationItemContextProxy::namedNumber);

  rb_cNamedBitListContext = define_class_under<NamedBitListContextProxy, ContextProxy>(rb_mASN1Parser, "NamedBitListContext")
    .define_method("named_bit", &NamedBitListContextProxy::namedBit)
    .define_method("named_bit_at", &NamedBitListContextProxy::namedBitAt)
    .define_method("COMMA", &NamedBitListContextProxy::COMMA)
    .define_method("COMMAAt", &NamedBitListContextProxy::COMMA);

  rb_cNamedBitContext = define_class_under<NamedBitContextProxy, ContextProxy>(rb_mASN1Parser, "NamedBitContext")
    .define_method("identifier", &NamedBitContextProxy::identifier)
    .define_method("number", &NamedBitContextProxy::number)
    .define_method("defined_value", &NamedBitContextProxy::definedValue)
    .define_method("L_PAREN", &NamedBitContextProxy::L_PAREN)
    .define_method("R_PAREN", &NamedBitContextProxy::R_PAREN);

  rb_cBstringContext = define_class_under<BstringContextProxy, ContextProxy>(rb_mASN1Parser, "BstringContext")
    .define_method("BStringItem", &BstringContextProxy::BStringItem);

  rb_cHstringContext = define_class_under<HstringContextProxy, ContextProxy>(rb_mASN1Parser, "HstringContext")
    .define_method("HStringItem", &HstringContextProxy::HStringItem);

  rb_cIdentifierListContext = define_class_under<IdentifierListContextProxy, ContextProxy>(rb_mASN1Parser, "IdentifierListContext")
    .define_method("identifier", &IdentifierListContextProxy::identifier)
    .define_method("identifier_at", &IdentifierListContextProxy::identifierAt)
    .define_method("COMMA", &IdentifierListContextProxy::COMMA)
    .define_method("COMMAAt", &IdentifierListContextProxy::COMMA);

  rb_cExtensionAndExceptionContext = define_class_under<ExtensionAndExceptionContextProxy, ContextProxy>(rb_mASN1Parser, "ExtensionAndExceptionContext")
    .define_method("exception_spec", &ExtensionAndExceptionContextProxy::exceptionSpec)
    .define_method("ELLIPSIS", &ExtensionAndExceptionContextProxy::ELLIPSIS);

  rb_cComponentTypeListsContext = define_class_under<ComponentTypeListsContextProxy, ContextProxy>(rb_mASN1Parser, "ComponentTypeListsContext")
    .define_method("root_component_type_list", &ComponentTypeListsContextProxy::rootComponentTypeList)
    .define_method("root_component_type_list_at", &ComponentTypeListsContextProxy::rootComponentTypeListAt)
    .define_method("extension_and_exception", &ComponentTypeListsContextProxy::extensionAndException)
    .define_method("extension_additions", &ComponentTypeListsContextProxy::extensionAdditions)
    .define_method("optional_extension_marker", &ComponentTypeListsContextProxy::optionalExtensionMarker)
    .define_method("extension_end_marker", &ComponentTypeListsContextProxy::extensionEndMarker)
    .define_method("COMMA", &ComponentTypeListsContextProxy::COMMA)
    .define_method("COMMAAt", &ComponentTypeListsContextProxy::COMMA);

  rb_cRootComponentTypeListContext = define_class_under<RootComponentTypeListContextProxy, ContextProxy>(rb_mASN1Parser, "RootComponentTypeListContext")
    .define_method("component_type_list", &RootComponentTypeListContextProxy::componentTypeList);

  rb_cExtensionAdditionsContext = define_class_under<ExtensionAdditionsContextProxy, ContextProxy>(rb_mASN1Parser, "ExtensionAdditionsContext")
    .define_method("extension_addition_list", &ExtensionAdditionsContextProxy::extensionAdditionList)
    .define_method("COMMA", &ExtensionAdditionsContextProxy::COMMA);

  rb_cOptionalExtensionMarkerContext = define_class_under<OptionalExtensionMarkerContextProxy, ContextProxy>(rb_mASN1Parser, "OptionalExtensionMarkerContext")
    .define_method("COMMA", &OptionalExtensionMarkerContextProxy::COMMA)
    .define_method("ELLIPSIS", &OptionalExtensionMarkerContextProxy::ELLIPSIS);

  rb_cExtensionEndMarkerContext = define_class_under<ExtensionEndMarkerContextProxy, ContextProxy>(rb_mASN1Parser, "ExtensionEndMarkerContext")
    .define_method("COMMA", &ExtensionEndMarkerContextProxy::COMMA)
    .define_method("ELLIPSIS", &ExtensionEndMarkerContextProxy::ELLIPSIS);

  rb_cComponentTypeListContext = define_class_under<ComponentTypeListContextProxy, ContextProxy>(rb_mASN1Parser, "ComponentTypeListContext")
    .define_method("component_type", &ComponentTypeListContextProxy::componentType)
    .define_method("component_type_at", &ComponentTypeListContextProxy::componentTypeAt)
    .define_method("COMMA", &ComponentTypeListContextProxy::COMMA)
    .define_method("COMMAAt", &ComponentTypeListContextProxy::COMMA);

  rb_cExtensionAdditionListContext = define_class_under<ExtensionAdditionListContextProxy, ContextProxy>(rb_mASN1Parser, "ExtensionAdditionListContext")
    .define_method("extension_addition", &ExtensionAdditionListContextProxy::extensionAddition)
    .define_method("extension_addition_at", &ExtensionAdditionListContextProxy::extensionAdditionAt)
    .define_method("COMMA", &ExtensionAdditionListContextProxy::COMMA)
    .define_method("COMMAAt", &ExtensionAdditionListContextProxy::COMMA);

  rb_cExtensionAdditionContext = define_class_under<ExtensionAdditionContextProxy, ContextProxy>(rb_mASN1Parser, "ExtensionAdditionContext")
    .define_method("component_type", &ExtensionAdditionContextProxy::componentType)
    .define_method("extension_addition_group", &ExtensionAdditionContextProxy::extensionAdditionGroup);

  rb_cComponentTypeContext = define_class_under<ComponentTypeContextProxy, ContextProxy>(rb_mASN1Parser, "ComponentTypeContext")
    .define_method("named_type", &ComponentTypeContextProxy::namedType)
    .define_method("value", &ComponentTypeContextProxy::value)
    .define_method("type", &ComponentTypeContextProxy::type)
    .define_method("OPTIONAL_WORD", &ComponentTypeContextProxy::OPTIONAL_WORD)
    .define_method("DEFAULT_WORD", &ComponentTypeContextProxy::DEFAULT_WORD)
    .define_method("COMPONENTS_WORD", &ComponentTypeContextProxy::COMPONENTS_WORD)
    .define_method("OF_WORD", &ComponentTypeContextProxy::OF_WORD);

  rb_cExtensionAdditionGroupContext = define_class_under<ExtensionAdditionGroupContextProxy, ContextProxy>(rb_mASN1Parser, "ExtensionAdditionGroupContext")
    .define_method("version_number", &ExtensionAdditionGroupContextProxy::versionNumber)
    .define_method("component_type_list", &ExtensionAdditionGroupContextProxy::componentTypeList)
    .define_method("LV_BRACKET", &ExtensionAdditionGroupContextProxy::LV_BRACKET)
    .define_method("RV_BRACKET", &ExtensionAdditionGroupContextProxy::RV_BRACKET);

  rb_cVersionNumberContext = define_class_under<VersionNumberContextProxy, ContextProxy>(rb_mASN1Parser, "VersionNumberContext")
    .define_method("number", &VersionNumberContextProxy::number)
    .define_method("COLON", &VersionNumberContextProxy::COLON);

  rb_cComponentValueListContext = define_class_under<ComponentValueListContextProxy, ContextProxy>(rb_mASN1Parser, "ComponentValueListContext")
    .define_method("named_value", &ComponentValueListContextProxy::namedValue)
    .define_method("named_value_at", &ComponentValueListContextProxy::namedValueAt)
    .define_method("COMMA", &ComponentValueListContextProxy::COMMA)
    .define_method("COMMAAt", &ComponentValueListContextProxy::COMMA);

  rb_cValueListContext = define_class_under<ValueListContextProxy, ContextProxy>(rb_mASN1Parser, "ValueListContext")
    .define_method("value", &ValueListContextProxy::value)
    .define_method("value_at", &ValueListContextProxy::valueAt)
    .define_method("COMMA", &ValueListContextProxy::COMMA)
    .define_method("COMMAAt", &ValueListContextProxy::COMMA);

  rb_cNamedValueListContext = define_class_under<NamedValueListContextProxy, ContextProxy>(rb_mASN1Parser, "NamedValueListContext")
    .define_method("named_value", &NamedValueListContextProxy::namedValue)
    .define_method("named_value_at", &NamedValueListContextProxy::namedValueAt)
    .define_method("COMMA", &NamedValueListContextProxy::COMMA)
    .define_method("COMMAAt", &NamedValueListContextProxy::COMMA);

  rb_cAlternativeTypeListsContext = define_class_under<AlternativeTypeListsContextProxy, ContextProxy>(rb_mASN1Parser, "AlternativeTypeListsContext")
    .define_method("root_alternative_type_list", &AlternativeTypeListsContextProxy::rootAlternativeTypeList)
    .define_method("extension_and_exception", &AlternativeTypeListsContextProxy::extensionAndException)
    .define_method("extension_addition_alternatives", &AlternativeTypeListsContextProxy::extensionAdditionAlternatives)
    .define_method("optional_extension_marker", &AlternativeTypeListsContextProxy::optionalExtensionMarker)
    .define_method("COMMA", &AlternativeTypeListsContextProxy::COMMA);

  rb_cRootAlternativeTypeListContext = define_class_under<RootAlternativeTypeListContextProxy, ContextProxy>(rb_mASN1Parser, "RootAlternativeTypeListContext")
    .define_method("alternative_type_list", &RootAlternativeTypeListContextProxy::alternativeTypeList);

  rb_cExtensionAdditionAlternativesContext = define_class_under<ExtensionAdditionAlternativesContextProxy, ContextProxy>(rb_mASN1Parser, "ExtensionAdditionAlternativesContext")
    .define_method("extension_addition_alternatives_list", &ExtensionAdditionAlternativesContextProxy::extensionAdditionAlternativesList)
    .define_method("extension_addition_alternatives_list_at", &ExtensionAdditionAlternativesContextProxy::extensionAdditionAlternativesListAt)
    .define_method("COMMA", &ExtensionAdditionAlternativesContextProxy::COMMA)
    .define_method("COMMAAt", &ExtensionAdditionAlternativesContextProxy::COMMA);

  rb_cAlternativeTypeListContext = define_class_under<AlternativeTypeListContextProxy, ContextProxy>(rb_mASN1Parser, "AlternativeTypeListContext")
    .define_method("named_type", &AlternativeTypeListContextProxy::namedType)
    .define_method("named_type_at", &AlternativeTypeListContextProxy::namedTypeAt)
    .define_method("COMMA", &AlternativeTypeListContextProxy::COMMA)
    .define_method("COMMAAt", &AlternativeTypeListContextProxy::COMMA);

  rb_cExtensionAdditionAlternativesListContext = define_class_under<ExtensionAdditionAlternativesListContextProxy, ContextProxy>(rb_mASN1Parser, "ExtensionAdditionAlternativesListContext")
    .define_method("extension_addition_alternative", &ExtensionAdditionAlternativesListContextProxy::extensionAdditionAlternative)
    .define_method("extension_addition_alternatives_list", &ExtensionAdditionAlternativesListContextProxy::extensionAdditionAlternativesList)
    .define_method("COMMA", &ExtensionAdditionAlternativesListContextProxy::COMMA);

  rb_cExtensionAdditionAlternativeContext = define_class_under<ExtensionAdditionAlternativeContextProxy, ContextProxy>(rb_mASN1Parser, "ExtensionAdditionAlternativeContext")
    .define_method("extension_addition_alternatives_group", &ExtensionAdditionAlternativeContextProxy::extensionAdditionAlternativesGroup)
    .define_method("named_type", &ExtensionAdditionAlternativeContextProxy::namedType);

  rb_cExtensionAdditionAlternativesGroupContext = define_class_under<ExtensionAdditionAlternativesGroupContextProxy, ContextProxy>(rb_mASN1Parser, "ExtensionAdditionAlternativesGroupContext")
    .define_method("version_number", &ExtensionAdditionAlternativesGroupContextProxy::versionNumber)
    .define_method("alternative_type_list", &ExtensionAdditionAlternativesGroupContextProxy::alternativeTypeList)
    .define_method("LV_BRACKET", &ExtensionAdditionAlternativesGroupContextProxy::LV_BRACKET)
    .define_method("RV_BRACKET", &ExtensionAdditionAlternativesGroupContextProxy::RV_BRACKET);

  rb_cTagContext = define_class_under<TagContextProxy, ContextProxy>(rb_mASN1Parser, "TagContext")
    .define_method("class_p", &TagContextProxy::classP)
    .define_method("class_number", &TagContextProxy::classNumber);

  rb_cClassPContext = define_class_under<ClassPContextProxy, ContextProxy>(rb_mASN1Parser, "ClassPContext")
    .define_method("UNIVERSAL_WORD", &ClassPContextProxy::UNIVERSAL_WORD)
    .define_method("APPLICATION_WORD", &ClassPContextProxy::APPLICATION_WORD)
    .define_method("PRIVATE_WORD", &ClassPContextProxy::PRIVATE_WORD);

  rb_cClassNumberContext = define_class_under<ClassNumberContextProxy, ContextProxy>(rb_mASN1Parser, "ClassNumberContext")
    .define_method("number", &ClassNumberContextProxy::number)
    .define_method("defined_value", &ClassNumberContextProxy::definedValue);

  rb_cObjIdComponentsListContext = define_class_under<ObjIdComponentsListContextProxy, ContextProxy>(rb_mASN1Parser, "ObjIdComponentsListContext")
    .define_method("obj_id_components", &ObjIdComponentsListContextProxy::objIdComponents)
    .define_method("obj_id_components_at", &ObjIdComponentsListContextProxy::objIdComponentsAt);

  rb_cObjIdComponentsContext = define_class_under<ObjIdComponentsContextProxy, ContextProxy>(rb_mASN1Parser, "ObjIdComponentsContext")
    .define_method("name_form", &ObjIdComponentsContextProxy::nameForm)
    .define_method("number_form", &ObjIdComponentsContextProxy::numberForm)
    .define_method("name_and_number_form", &ObjIdComponentsContextProxy::nameAndNumberForm)
    .define_method("defined_value", &ObjIdComponentsContextProxy::definedValue);

  rb_cNumberFormContext = define_class_under<NumberFormContextProxy, ContextProxy>(rb_mASN1Parser, "NumberFormContext")
    .define_method("number", &NumberFormContextProxy::number)
    .define_method("defined_value", &NumberFormContextProxy::definedValue);

  rb_cNameAndNumberFormContext = define_class_under<NameAndNumberFormContextProxy, ContextProxy>(rb_mASN1Parser, "NameAndNumberFormContext")
    .define_method("identifier", &NameAndNumberFormContextProxy::identifier)
    .define_method("number_form", &NameAndNumberFormContextProxy::numberForm)
    .define_method("L_PAREN", &NameAndNumberFormContextProxy::L_PAREN)
    .define_method("R_PAREN", &NameAndNumberFormContextProxy::R_PAREN);

  rb_cExceptionIdentificationContext = define_class_under<ExceptionIdentificationContextProxy, ContextProxy>(rb_mASN1Parser, "ExceptionIdentificationContext")
    .define_method("signed_number", &ExceptionIdentificationContextProxy::signedNumber)
    .define_method("defined_value", &ExceptionIdentificationContextProxy::definedValue)
    .define_method("type", &ExceptionIdentificationContextProxy::type)
    .define_method("value", &ExceptionIdentificationContextProxy::value)
    .define_method("COLON", &ExceptionIdentificationContextProxy::COLON);

  rb_cRestrictedCharacterStringTypeContext = define_class_under<RestrictedCharacterStringTypeContextProxy, ContextProxy>(rb_mASN1Parser, "RestrictedCharacterStringTypeContext")
    .define_method("BMPString_WORD", &RestrictedCharacterStringTypeContextProxy::BMPString_WORD)
    .define_method("GeneralString_WORD", &RestrictedCharacterStringTypeContextProxy::GeneralString_WORD)
    .define_method("GraphicString_WORD", &RestrictedCharacterStringTypeContextProxy::GraphicString_WORD)
    .define_method("IA5String_WORD", &RestrictedCharacterStringTypeContextProxy::IA5String_WORD)
    .define_method("ISO646String_WORD", &RestrictedCharacterStringTypeContextProxy::ISO646String_WORD)
    .define_method("NumericString_WORD", &RestrictedCharacterStringTypeContextProxy::NumericString_WORD)
    .define_method("PrintableString_WORD", &RestrictedCharacterStringTypeContextProxy::PrintableString_WORD)
    .define_method("TeletexString_WORD", &RestrictedCharacterStringTypeContextProxy::TeletexString_WORD)
    .define_method("T61String_WORD", &RestrictedCharacterStringTypeContextProxy::T61String_WORD)
    .define_method("UniversalString_WORD", &RestrictedCharacterStringTypeContextProxy::UniversalString_WORD)
    .define_method("UTF8String_WORD", &RestrictedCharacterStringTypeContextProxy::UTF8String_WORD)
    .define_method("VideotexString_WORD", &RestrictedCharacterStringTypeContextProxy::VideotexString_WORD)
    .define_method("VisibleString_WORD", &RestrictedCharacterStringTypeContextProxy::VisibleString_WORD);

  rb_cUnrestrictedCharacterStringTypeContext = define_class_under<UnrestrictedCharacterStringTypeContextProxy, ContextProxy>(rb_mASN1Parser, "UnrestrictedCharacterStringTypeContext")
    .define_method("CHARACTER_WORD", &UnrestrictedCharacterStringTypeContextProxy::CHARACTER_WORD)
    .define_method("STRING_WORD", &UnrestrictedCharacterStringTypeContextProxy::STRING_WORD);

  rb_cRestrictedCharacterStringValueContext = define_class_under<RestrictedCharacterStringValueContextProxy, ContextProxy>(rb_mASN1Parser, "RestrictedCharacterStringValueContext")
    .define_method("cstring", &RestrictedCharacterStringValueContextProxy::cstring)
    .define_method("character_string_list", &RestrictedCharacterStringValueContextProxy::characterStringList)
    .define_method("quadruple", &RestrictedCharacterStringValueContextProxy::quadruple)
    .define_method("tuple", &RestrictedCharacterStringValueContextProxy::tuple);

  rb_cCstringContext = define_class_under<CstringContextProxy, ContextProxy>(rb_mASN1Parser, "CstringContext")
    .define_method("CStringItem", &CstringContextProxy::CStringItem);

  rb_cCharacterStringListContext = define_class_under<CharacterStringListContextProxy, ContextProxy>(rb_mASN1Parser, "CharacterStringListContext")
    .define_method("char_syms", &CharacterStringListContextProxy::charSyms)
    .define_method("L_BRACE", &CharacterStringListContextProxy::L_BRACE)
    .define_method("R_BRACE", &CharacterStringListContextProxy::R_BRACE);

  rb_cQuadrupleContext = define_class_under<QuadrupleContextProxy, ContextProxy>(rb_mASN1Parser, "QuadrupleContext")
    .define_method("group", &QuadrupleContextProxy::group)
    .define_method("plane", &QuadrupleContextProxy::plane)
    .define_method("row", &QuadrupleContextProxy::row)
    .define_method("cell", &QuadrupleContextProxy::cell)
    .define_method("L_BRACE", &QuadrupleContextProxy::L_BRACE)
    .define_method("COMMA", &QuadrupleContextProxy::COMMA)
    .define_method("COMMAAt", &QuadrupleContextProxy::COMMA)
    .define_method("R_BRACE", &QuadrupleContextProxy::R_BRACE);

  rb_cTupleContext = define_class_under<TupleContextProxy, ContextProxy>(rb_mASN1Parser, "TupleContext")
    .define_method("table_column", &TupleContextProxy::tableColumn)
    .define_method("table_row", &TupleContextProxy::tableRow)
    .define_method("L_BRACE", &TupleContextProxy::L_BRACE)
    .define_method("COMMA", &TupleContextProxy::COMMA)
    .define_method("R_BRACE", &TupleContextProxy::R_BRACE);

  rb_cCharSymsContext = define_class_under<CharSymsContextProxy, ContextProxy>(rb_mASN1Parser, "CharSymsContext")
    .define_method("chars_defn", &CharSymsContextProxy::charsDefn)
    .define_method("chars_defn_at", &CharSymsContextProxy::charsDefnAt)
    .define_method("COMMA", &CharSymsContextProxy::COMMA)
    .define_method("COMMAAt", &CharSymsContextProxy::COMMA);

  rb_cCharsDefnContext = define_class_under<CharsDefnContextProxy, ContextProxy>(rb_mASN1Parser, "CharsDefnContext")
    .define_method("cstring", &CharsDefnContextProxy::cstring)
    .define_method("quadruple", &CharsDefnContextProxy::quadruple)
    .define_method("tuple", &CharsDefnContextProxy::tuple)
    .define_method("defined_value", &CharsDefnContextProxy::definedValue);

  rb_cGroupContext = define_class_under<GroupContextProxy, ContextProxy>(rb_mASN1Parser, "GroupContext")
    .define_method("number", &GroupContextProxy::number);

  rb_cPlaneContext = define_class_under<PlaneContextProxy, ContextProxy>(rb_mASN1Parser, "PlaneContext")
    .define_method("number", &PlaneContextProxy::number);

  rb_cRowContext = define_class_under<RowContextProxy, ContextProxy>(rb_mASN1Parser, "RowContext")
    .define_method("number", &RowContextProxy::number);

  rb_cCellContext = define_class_under<CellContextProxy, ContextProxy>(rb_mASN1Parser, "CellContext")
    .define_method("number", &CellContextProxy::number);

  rb_cTableColumnContext = define_class_under<TableColumnContextProxy, ContextProxy>(rb_mASN1Parser, "TableColumnContext")
    .define_method("number", &TableColumnContextProxy::number);

  rb_cTableRowContext = define_class_under<TableRowContextProxy, ContextProxy>(rb_mASN1Parser, "TableRowContext")
    .define_method("number", &TableRowContextProxy::number);

  rb_cUTCTimeTypeContext = define_class_under<UTCTimeTypeContextProxy, ContextProxy>(rb_mASN1Parser, "UTCTimeTypeContext")
    .define_method("UTCTime_WORD", &UTCTimeTypeContextProxy::UTCTime_WORD);

  rb_cGeneralizedTimeTypeContext = define_class_under<GeneralizedTimeTypeContextProxy, ContextProxy>(rb_mASN1Parser, "GeneralizedTimeTypeContext")
    .define_method("GeneralizedTime_WORD", &GeneralizedTimeTypeContextProxy::GeneralizedTime_WORD);

  rb_cConstraintContext = define_class_under<ConstraintContextProxy, ContextProxy>(rb_mASN1Parser, "ConstraintContext")
    .define_method("constraint_spec", &ConstraintContextProxy::constraintSpec)
    .define_method("exception_spec", &ConstraintContextProxy::exceptionSpec)
    .define_method("L_PAREN", &ConstraintContextProxy::L_PAREN)
    .define_method("R_PAREN", &ConstraintContextProxy::R_PAREN);

  rb_cTypeWithConstraintContext = define_class_under<TypeWithConstraintContextProxy, ContextProxy>(rb_mASN1Parser, "TypeWithConstraintContext")
    .define_method("constraint", &TypeWithConstraintContextProxy::constraint)
    .define_method("type", &TypeWithConstraintContextProxy::type)
    .define_method("size_constraint", &TypeWithConstraintContextProxy::sizeConstraint)
    .define_method("named_type", &TypeWithConstraintContextProxy::namedType)
    .define_method("SET_WORD", &TypeWithConstraintContextProxy::SET_WORD)
    .define_method("OF_WORD", &TypeWithConstraintContextProxy::OF_WORD)
    .define_method("SEQUENCE_WORD", &TypeWithConstraintContextProxy::SEQUENCE_WORD);

  rb_cSizeConstraintContext = define_class_under<SizeConstraintContextProxy, ContextProxy>(rb_mASN1Parser, "SizeConstraintContext")
    .define_method("constraint", &SizeConstraintContextProxy::constraint)
    .define_method("SIZE_WORD", &SizeConstraintContextProxy::SIZE_WORD);

  rb_cConstraintSpecContext = define_class_under<ConstraintSpecContextProxy, ContextProxy>(rb_mASN1Parser, "ConstraintSpecContext")
    .define_method("subtype_constraint", &ConstraintSpecContextProxy::subtypeConstraint)
    .define_method("general_constraint", &ConstraintSpecContextProxy::generalConstraint);

  rb_cSubtypeConstraintContext = define_class_under<SubtypeConstraintContextProxy, ContextProxy>(rb_mASN1Parser, "SubtypeConstraintContext")
    .define_method("element_set_specs", &SubtypeConstraintContextProxy::elementSetSpecs);

  rb_cGeneralConstraintContext = define_class_under<GeneralConstraintContextProxy, ContextProxy>(rb_mASN1Parser, "GeneralConstraintContext")
    .define_method("user_defined_constraint", &GeneralConstraintContextProxy::userDefinedConstraint)
    .define_method("table_constraint", &GeneralConstraintContextProxy::tableConstraint)
    .define_method("contents_constraint", &GeneralConstraintContextProxy::contentsConstraint);

  rb_cUserDefinedConstraintContext = define_class_under<UserDefinedConstraintContextProxy, ContextProxy>(rb_mASN1Parser, "UserDefinedConstraintContext")
    .define_method("user_defined_constraint_parameter", &UserDefinedConstraintContextProxy::userDefinedConstraintParameter)
    .define_method("user_defined_constraint_parameter_at", &UserDefinedConstraintContextProxy::userDefinedConstraintParameterAt)
    .define_method("CONSTRAINED_WORD", &UserDefinedConstraintContextProxy::CONSTRAINED_WORD)
    .define_method("BY_WORD", &UserDefinedConstraintContextProxy::BY_WORD)
    .define_method("L_BRACE", &UserDefinedConstraintContextProxy::L_BRACE)
    .define_method("R_BRACE", &UserDefinedConstraintContextProxy::R_BRACE)
    .define_method("COMMA", &UserDefinedConstraintContextProxy::COMMA)
    .define_method("COMMAAt", &UserDefinedConstraintContextProxy::COMMA);

  rb_cTableConstraintContext = define_class_under<TableConstraintContextProxy, ContextProxy>(rb_mASN1Parser, "TableConstraintContext")
    .define_method("simple_table_constraint", &TableConstraintContextProxy::simpleTableConstraint)
    .define_method("component_relation_constraint", &TableConstraintContextProxy::componentRelationConstraint);

  rb_cContentsConstraintContext = define_class_under<ContentsConstraintContextProxy, ContextProxy>(rb_mASN1Parser, "ContentsConstraintContext")
    .define_method("type", &ContentsConstraintContextProxy::type)
    .define_method("value", &ContentsConstraintContextProxy::value)
    .define_method("CONTAINING_WORD", &ContentsConstraintContextProxy::CONTAINING_WORD)
    .define_method("ENCODED_WORD", &ContentsConstraintContextProxy::ENCODED_WORD)
    .define_method("BY_WORD", &ContentsConstraintContextProxy::BY_WORD);

  rb_cRootElementSetSpecContext = define_class_under<RootElementSetSpecContextProxy, ContextProxy>(rb_mASN1Parser, "RootElementSetSpecContext")
    .define_method("element_set_spec", &RootElementSetSpecContextProxy::elementSetSpec);

  rb_cAdditionalElementSetSpecContext = define_class_under<AdditionalElementSetSpecContextProxy, ContextProxy>(rb_mASN1Parser, "AdditionalElementSetSpecContext")
    .define_method("element_set_spec", &AdditionalElementSetSpecContextProxy::elementSetSpec);

  rb_cElementSetSpecContext = define_class_under<ElementSetSpecContextProxy, ContextProxy>(rb_mASN1Parser, "ElementSetSpecContext")
    .define_method("unions", &ElementSetSpecContextProxy::unions)
    .define_method("exclusions", &ElementSetSpecContextProxy::exclusions)
    .define_method("ALL_WORD", &ElementSetSpecContextProxy::ALL_WORD);

  rb_cUnionsContext = define_class_under<UnionsContextProxy, ContextProxy>(rb_mASN1Parser, "UnionsContext")
    .define_method("intersections", &UnionsContextProxy::intersections)
    .define_method("unions", &UnionsContextProxy::unions)
    .define_method("union_mark", &UnionsContextProxy::unionMark);

  rb_cExclusionsContext = define_class_under<ExclusionsContextProxy, ContextProxy>(rb_mASN1Parser, "ExclusionsContext")
    .define_method("elements", &ExclusionsContextProxy::elements)
    .define_method("EXCEPT_WORD", &ExclusionsContextProxy::EXCEPT_WORD);

  rb_cIntersectionsContext = define_class_under<IntersectionsContextProxy, ContextProxy>(rb_mASN1Parser, "IntersectionsContext")
    .define_method("intersection_elements", &IntersectionsContextProxy::intersectionElements)
    .define_method("intersections", &IntersectionsContextProxy::intersections)
    .define_method("intersection_mark", &IntersectionsContextProxy::intersectionMark);

  rb_cUnionMarkContext = define_class_under<UnionMarkContextProxy, ContextProxy>(rb_mASN1Parser, "UnionMarkContext")
    .define_method("UNION_WORD", &UnionMarkContextProxy::UNION_WORD);

  rb_cUElemsContext = define_class_under<UElemsContextProxy, ContextProxy>(rb_mASN1Parser, "UElemsContext")
    .define_method("unions", &UElemsContextProxy::unions);

  rb_cIntersectionElementsContext = define_class_under<IntersectionElementsContextProxy, ContextProxy>(rb_mASN1Parser, "IntersectionElementsContext")
    .define_method("elements", &IntersectionElementsContextProxy::elements)
    .define_method("elems", &IntersectionElementsContextProxy::elems)
    .define_method("exclusions", &IntersectionElementsContextProxy::exclusions);

  rb_cIntersectionMarkContext = define_class_under<IntersectionMarkContextProxy, ContextProxy>(rb_mASN1Parser, "IntersectionMarkContext")
    .define_method("INTERSECTION_WORD", &IntersectionMarkContextProxy::INTERSECTION_WORD);

  rb_cIElemsContext = define_class_under<IElemsContextProxy, ContextProxy>(rb_mASN1Parser, "IElemsContext")
    .define_method("intersections", &IElemsContextProxy::intersections);

  rb_cElementsContext = define_class_under<ElementsContextProxy, ContextProxy>(rb_mASN1Parser, "ElementsContext")
    .define_method("subtype_elements", &ElementsContextProxy::subtypeElements)
    .define_method("object_set_elements", &ElementsContextProxy::objectSetElements)
    .define_method("element_set_spec", &ElementsContextProxy::elementSetSpec)
    .define_method("L_PAREN", &ElementsContextProxy::L_PAREN)
    .define_method("R_PAREN", &ElementsContextProxy::R_PAREN);

  rb_cElemsContext = define_class_under<ElemsContextProxy, ContextProxy>(rb_mASN1Parser, "ElemsContext")
    .define_method("elements", &ElemsContextProxy::elements);

  rb_cSubtypeElementsContext = define_class_under<SubtypeElementsContextProxy, ContextProxy>(rb_mASN1Parser, "SubtypeElementsContext")
    .define_method("single_value", &SubtypeElementsContextProxy::singleValue)
    .define_method("contained_subtype", &SubtypeElementsContextProxy::containedSubtype)
    .define_method("value_range", &SubtypeElementsContextProxy::valueRange)
    .define_method("permitted_alphabet", &SubtypeElementsContextProxy::permittedAlphabet)
    .define_method("size_constraint", &SubtypeElementsContextProxy::sizeConstraint);

  rb_cObjectSetElementsContext = define_class_under<ObjectSetElementsContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectSetElementsContext")
    .define_method("object", &ObjectSetElementsContextProxy::object)
    .define_method("defined_object_set", &ObjectSetElementsContextProxy::definedObjectSet)
    .define_method("object_set_from_objects", &ObjectSetElementsContextProxy::objectSetFromObjects)
    .define_method("parameterized_object_set", &ObjectSetElementsContextProxy::parameterizedObjectSet);

  rb_cSingleValueContext = define_class_under<SingleValueContextProxy, ContextProxy>(rb_mASN1Parser, "SingleValueContext")
    .define_method("value", &SingleValueContextProxy::value);

  rb_cContainedSubtypeContext = define_class_under<ContainedSubtypeContextProxy, ContextProxy>(rb_mASN1Parser, "ContainedSubtypeContext")
    .define_method("includes", &ContainedSubtypeContextProxy::includes)
    .define_method("type", &ContainedSubtypeContextProxy::type);

  rb_cValueRangeContext = define_class_under<ValueRangeContextProxy, ContextProxy>(rb_mASN1Parser, "ValueRangeContext")
    .define_method("lower_endpoint", &ValueRangeContextProxy::lowerEndpoint)
    .define_method("upper_endpoint", &ValueRangeContextProxy::upperEndpoint)
    .define_method("RANGE", &ValueRangeContextProxy::RANGE);

  rb_cPermittedAlphabetContext = define_class_under<PermittedAlphabetContextProxy, ContextProxy>(rb_mASN1Parser, "PermittedAlphabetContext")
    .define_method("constraint", &PermittedAlphabetContextProxy::constraint)
    .define_method("FROM_WORD", &PermittedAlphabetContextProxy::FROM_WORD);

  rb_cIncludesContext = define_class_under<IncludesContextProxy, ContextProxy>(rb_mASN1Parser, "IncludesContext")
    .define_method("INCLUDES_WORD", &IncludesContextProxy::INCLUDES_WORD);

  rb_cLowerEndpointContext = define_class_under<LowerEndpointContextProxy, ContextProxy>(rb_mASN1Parser, "LowerEndpointContext")
    .define_method("lower_end_value", &LowerEndpointContextProxy::lowerEndValue);

  rb_cUpperEndpointContext = define_class_under<UpperEndpointContextProxy, ContextProxy>(rb_mASN1Parser, "UpperEndpointContext")
    .define_method("upper_end_value", &UpperEndpointContextProxy::upperEndValue);

  rb_cLowerEndValueContext = define_class_under<LowerEndValueContextProxy, ContextProxy>(rb_mASN1Parser, "LowerEndValueContext")
    .define_method("value", &LowerEndValueContextProxy::value)
    .define_method("MIN_WORD", &LowerEndValueContextProxy::MIN_WORD);

  rb_cUpperEndValueContext = define_class_under<UpperEndValueContextProxy, ContextProxy>(rb_mASN1Parser, "UpperEndValueContext")
    .define_method("value", &UpperEndValueContextProxy::value)
    .define_method("MAX_WORD", &UpperEndValueContextProxy::MAX_WORD);

  rb_cUserDefinedConstraintParameterContext = define_class_under<UserDefinedConstraintParameterContextProxy, ContextProxy>(rb_mASN1Parser, "UserDefinedConstraintParameterContext")
    .define_method("governor", &UserDefinedConstraintParameterContextProxy::governor)
    .define_method("value", &UserDefinedConstraintParameterContextProxy::value)
    .define_method("value_set", &UserDefinedConstraintParameterContextProxy::valueSet)
    .define_method("object", &UserDefinedConstraintParameterContextProxy::object)
    .define_method("object_set", &UserDefinedConstraintParameterContextProxy::objectSet)
    .define_method("type", &UserDefinedConstraintParameterContextProxy::type)
    .define_method("defined_object_class", &UserDefinedConstraintParameterContextProxy::definedObjectClass)
    .define_method("COLON", &UserDefinedConstraintParameterContextProxy::COLON);

  rb_cGovernorContext = define_class_under<GovernorContextProxy, ContextProxy>(rb_mASN1Parser, "GovernorContext")
    .define_method("type", &GovernorContextProxy::type)
    .define_method("defined_object_class", &GovernorContextProxy::definedObjectClass);

  rb_cObjectContext = define_class_under<ObjectContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectContext")
    .define_method("defined_object", &ObjectContextProxy::definedObject)
    .define_method("object_defn", &ObjectContextProxy::objectDefn)
    .define_method("object_from_object", &ObjectContextProxy::objectFromObject)
    .define_method("parameterized_object", &ObjectContextProxy::parameterizedObject);

  rb_cObjectSetContext = define_class_under<ObjectSetContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectSetContext")
    .define_method("object_set_spec", &ObjectSetContextProxy::objectSetSpec)
    .define_method("L_BRACE", &ObjectSetContextProxy::L_BRACE)
    .define_method("R_BRACE", &ObjectSetContextProxy::R_BRACE);

  rb_cDefinedObjectClassContext = define_class_under<DefinedObjectClassContextProxy, ContextProxy>(rb_mASN1Parser, "DefinedObjectClassContext")
    .define_method("external_object_class_reference", &DefinedObjectClassContextProxy::externalObjectClassReference)
    .define_method("objectclassreference", &DefinedObjectClassContextProxy::objectclassreference)
    .define_method("useful_object_class_reference", &DefinedObjectClassContextProxy::usefulObjectClassReference);

  rb_cSimpleTableConstraintContext = define_class_under<SimpleTableConstraintContextProxy, ContextProxy>(rb_mASN1Parser, "SimpleTableConstraintContext")
    .define_method("object_set", &SimpleTableConstraintContextProxy::objectSet);

  rb_cComponentRelationConstraintContext = define_class_under<ComponentRelationConstraintContextProxy, ContextProxy>(rb_mASN1Parser, "ComponentRelationConstraintContext")
    .define_method("defined_object_set", &ComponentRelationConstraintContextProxy::definedObjectSet)
    .define_method("at_notation", &ComponentRelationConstraintContextProxy::atNotation)
    .define_method("at_notation_at", &ComponentRelationConstraintContextProxy::atNotationAt)
    .define_method("L_BRACE", &ComponentRelationConstraintContextProxy::L_BRACE)
    .define_method("L_BRACEAt", &ComponentRelationConstraintContextProxy::L_BRACE)
    .define_method("R_BRACE", &ComponentRelationConstraintContextProxy::R_BRACE)
    .define_method("R_BRACEAt", &ComponentRelationConstraintContextProxy::R_BRACE)
    .define_method("COMMA", &ComponentRelationConstraintContextProxy::COMMA)
    .define_method("COMMAAt", &ComponentRelationConstraintContextProxy::COMMA);

  rb_cDefinedObjectSetContext = define_class_under<DefinedObjectSetContextProxy, ContextProxy>(rb_mASN1Parser, "DefinedObjectSetContext")
    .define_method("external_object_set_reference", &DefinedObjectSetContextProxy::externalObjectSetReference)
    .define_method("objectsetreference", &DefinedObjectSetContextProxy::objectsetreference);

  rb_cAtNotationContext = define_class_under<AtNotationContextProxy, ContextProxy>(rb_mASN1Parser, "AtNotationContext")
    .define_method("component_id_list", &AtNotationContextProxy::componentIdList)
    .define_method("level", &AtNotationContextProxy::level);

  rb_cComponentIdListContext = define_class_under<ComponentIdListContextProxy, ContextProxy>(rb_mASN1Parser, "ComponentIdListContext")
    .define_method("identifier", &ComponentIdListContextProxy::identifier)
    .define_method("identifier_at", &ComponentIdListContextProxy::identifierAt)
    .define_method("DOT", &ComponentIdListContextProxy::DOT)
    .define_method("DOTAt", &ComponentIdListContextProxy::DOT);

  rb_cLevelContext = define_class_under<LevelContextProxy, ContextProxy>(rb_mASN1Parser, "LevelContext")
    .define_method("level", &LevelContextProxy::level)
    .define_method("DOT", &LevelContextProxy::DOT);

  rb_cExternalObjectClassReferenceContext = define_class_under<ExternalObjectClassReferenceContextProxy, ContextProxy>(rb_mASN1Parser, "ExternalObjectClassReferenceContext")
    .define_method("modulereference", &ExternalObjectClassReferenceContextProxy::modulereference)
    .define_method("objectclassreference", &ExternalObjectClassReferenceContextProxy::objectclassreference)
    .define_method("DOT", &ExternalObjectClassReferenceContextProxy::DOT);

  rb_cUsefulObjectClassReferenceContext = define_class_under<UsefulObjectClassReferenceContextProxy, ContextProxy>(rb_mASN1Parser, "UsefulObjectClassReferenceContext")
    .define_method("TYPE_IDENTIFIER_WORD", &UsefulObjectClassReferenceContextProxy::TYPE_IDENTIFIER_WORD)
    .define_method("ABSTRACT_SYNTAX_WORD", &UsefulObjectClassReferenceContextProxy::ABSTRACT_SYNTAX_WORD);

  rb_cDefinedObjectContext = define_class_under<DefinedObjectContextProxy, ContextProxy>(rb_mASN1Parser, "DefinedObjectContext")
    .define_method("external_object_reference", &DefinedObjectContextProxy::externalObjectReference)
    .define_method("objectreference", &DefinedObjectContextProxy::objectreference);

  rb_cExternalObjectReferenceContext = define_class_under<ExternalObjectReferenceContextProxy, ContextProxy>(rb_mASN1Parser, "ExternalObjectReferenceContext")
    .define_method("modulereference", &ExternalObjectReferenceContextProxy::modulereference)
    .define_method("objectreference", &ExternalObjectReferenceContextProxy::objectreference)
    .define_method("DOT", &ExternalObjectReferenceContextProxy::DOT);

  rb_cExternalObjectSetReferenceContext = define_class_under<ExternalObjectSetReferenceContextProxy, ContextProxy>(rb_mASN1Parser, "ExternalObjectSetReferenceContext")
    .define_method("modulereference", &ExternalObjectSetReferenceContextProxy::modulereference)
    .define_method("objectsetreference", &ExternalObjectSetReferenceContextProxy::objectsetreference)
    .define_method("DOT", &ExternalObjectSetReferenceContextProxy::DOT);

  rb_cObjectClassContext = define_class_under<ObjectClassContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectClassContext")
    .define_method("defined_object_class", &ObjectClassContextProxy::definedObjectClass)
    .define_method("object_class_defn", &ObjectClassContextProxy::objectClassDefn)
    .define_method("parameterized_object_class", &ObjectClassContextProxy::parameterizedObjectClass);

  rb_cObjectClassDefnContext = define_class_under<ObjectClassDefnContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectClassDefnContext")
    .define_method("field_spec", &ObjectClassDefnContextProxy::fieldSpec)
    .define_method("field_spec_at", &ObjectClassDefnContextProxy::fieldSpecAt)
    .define_method("with_syntax_spec", &ObjectClassDefnContextProxy::withSyntaxSpec)
    .define_method("CLASS_WORD", &ObjectClassDefnContextProxy::CLASS_WORD)
    .define_method("L_BRACE", &ObjectClassDefnContextProxy::L_BRACE)
    .define_method("R_BRACE", &ObjectClassDefnContextProxy::R_BRACE)
    .define_method("COMMA", &ObjectClassDefnContextProxy::COMMA)
    .define_method("COMMAAt", &ObjectClassDefnContextProxy::COMMA);

  rb_cParameterizedObjectClassContext = define_class_under<ParameterizedObjectClassContextProxy, ContextProxy>(rb_mASN1Parser, "ParameterizedObjectClassContext")
    .define_method("defined_object_class", &ParameterizedObjectClassContextProxy::definedObjectClass)
    .define_method("actual_parameter_list", &ParameterizedObjectClassContextProxy::actualParameterList);

  rb_cFieldSpecContext = define_class_under<FieldSpecContextProxy, ContextProxy>(rb_mASN1Parser, "FieldSpecContext")
    .define_method("type_field_spec", &FieldSpecContextProxy::typeFieldSpec)
    .define_method("fixed_type_value_field_spec", &FieldSpecContextProxy::fixedTypeValueFieldSpec)
    .define_method("variable_type_value_field_spec", &FieldSpecContextProxy::variableTypeValueFieldSpec)
    .define_method("fixed_type_value_set_field_spec", &FieldSpecContextProxy::fixedTypeValueSetFieldSpec)
    .define_method("variable_type_value_set_field_spec", &FieldSpecContextProxy::variableTypeValueSetFieldSpec)
    .define_method("object_field_spec", &FieldSpecContextProxy::objectFieldSpec)
    .define_method("object_set_field_spec", &FieldSpecContextProxy::objectSetFieldSpec);

  rb_cWithSyntaxSpecContext = define_class_under<WithSyntaxSpecContextProxy, ContextProxy>(rb_mASN1Parser, "WithSyntaxSpecContext")
    .define_method("syntax_list", &WithSyntaxSpecContextProxy::syntaxList)
    .define_method("WITH_WORD", &WithSyntaxSpecContextProxy::WITH_WORD)
    .define_method("SYNTAX_WORD", &WithSyntaxSpecContextProxy::SYNTAX_WORD);

  rb_cSyntaxListContext = define_class_under<SyntaxListContextProxy, ContextProxy>(rb_mASN1Parser, "SyntaxListContext")
    .define_method("token_or_group_spec", &SyntaxListContextProxy::tokenOrGroupSpec)
    .define_method("token_or_group_spec_at", &SyntaxListContextProxy::tokenOrGroupSpecAt)
    .define_method("L_BRACE", &SyntaxListContextProxy::L_BRACE)
    .define_method("R_BRACE", &SyntaxListContextProxy::R_BRACE);

  rb_cTypeFieldSpecContext = define_class_under<TypeFieldSpecContextProxy, ContextProxy>(rb_mASN1Parser, "TypeFieldSpecContext")
    .define_method("typefieldreference", &TypeFieldSpecContextProxy::typefieldreference)
    .define_method("type_optionality_spec", &TypeFieldSpecContextProxy::typeOptionalitySpec);

  rb_cFixedTypeValueFieldSpecContext = define_class_under<FixedTypeValueFieldSpecContextProxy, ContextProxy>(rb_mASN1Parser, "FixedTypeValueFieldSpecContext")
    .define_method("valuefieldreference", &FixedTypeValueFieldSpecContextProxy::valuefieldreference)
    .define_method("type", &FixedTypeValueFieldSpecContextProxy::type)
    .define_method("value_optionality_spec", &FixedTypeValueFieldSpecContextProxy::valueOptionalitySpec)
    .define_method("UNIQUE_WORD", &FixedTypeValueFieldSpecContextProxy::UNIQUE_WORD);

  rb_cVariableTypeValueFieldSpecContext = define_class_under<VariableTypeValueFieldSpecContextProxy, ContextProxy>(rb_mASN1Parser, "VariableTypeValueFieldSpecContext")
    .define_method("valuefieldreference", &VariableTypeValueFieldSpecContextProxy::valuefieldreference)
    .define_method("field_name", &VariableTypeValueFieldSpecContextProxy::fieldName)
    .define_method("value_optionality_spec", &VariableTypeValueFieldSpecContextProxy::valueOptionalitySpec);

  rb_cFixedTypeValueSetFieldSpecContext = define_class_under<FixedTypeValueSetFieldSpecContextProxy, ContextProxy>(rb_mASN1Parser, "FixedTypeValueSetFieldSpecContext")
    .define_method("valuesetfieldreference", &FixedTypeValueSetFieldSpecContextProxy::valuesetfieldreference)
    .define_method("type", &FixedTypeValueSetFieldSpecContextProxy::type)
    .define_method("value_set_optionality_spec", &FixedTypeValueSetFieldSpecContextProxy::valueSetOptionalitySpec);

  rb_cVariableTypeValueSetFieldSpecContext = define_class_under<VariableTypeValueSetFieldSpecContextProxy, ContextProxy>(rb_mASN1Parser, "VariableTypeValueSetFieldSpecContext")
    .define_method("valuesetfieldreference", &VariableTypeValueSetFieldSpecContextProxy::valuesetfieldreference)
    .define_method("field_name", &VariableTypeValueSetFieldSpecContextProxy::fieldName)
    .define_method("value_set_optionality_spec", &VariableTypeValueSetFieldSpecContextProxy::valueSetOptionalitySpec);

  rb_cObjectFieldSpecContext = define_class_under<ObjectFieldSpecContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectFieldSpecContext")
    .define_method("objectfieldreference", &ObjectFieldSpecContextProxy::objectfieldreference)
    .define_method("defined_object_class", &ObjectFieldSpecContextProxy::definedObjectClass)
    .define_method("object_optionality_spec", &ObjectFieldSpecContextProxy::objectOptionalitySpec);

  rb_cObjectSetFieldSpecContext = define_class_under<ObjectSetFieldSpecContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectSetFieldSpecContext")
    .define_method("objectsetfieldreference", &ObjectSetFieldSpecContextProxy::objectsetfieldreference)
    .define_method("defined_object_class", &ObjectSetFieldSpecContextProxy::definedObjectClass)
    .define_method("object_set_optionality_spec", &ObjectSetFieldSpecContextProxy::objectSetOptionalitySpec);

  rb_cTypefieldreferenceContext = define_class_under<TypefieldreferenceContextProxy, ContextProxy>(rb_mASN1Parser, "TypefieldreferenceContext")
    .define_method("ReferenceItem", &TypefieldreferenceContextProxy::ReferenceItem);

  rb_cTypeOptionalitySpecContext = define_class_under<TypeOptionalitySpecContextProxy, ContextProxy>(rb_mASN1Parser, "TypeOptionalitySpecContext")
    .define_method("type", &TypeOptionalitySpecContextProxy::type)
    .define_method("OPTIONAL_WORD", &TypeOptionalitySpecContextProxy::OPTIONAL_WORD)
    .define_method("DEFAULT_WORD", &TypeOptionalitySpecContextProxy::DEFAULT_WORD);

  rb_cValuefieldreferenceContext = define_class_under<ValuefieldreferenceContextProxy, ContextProxy>(rb_mASN1Parser, "ValuefieldreferenceContext")
    .define_method("IdentifierOrValueItem", &ValuefieldreferenceContextProxy::IdentifierOrValueItem);

  rb_cValueOptionalitySpecContext = define_class_under<ValueOptionalitySpecContextProxy, ContextProxy>(rb_mASN1Parser, "ValueOptionalitySpecContext")
    .define_method("value", &ValueOptionalitySpecContextProxy::value)
    .define_method("OPTIONAL_WORD", &ValueOptionalitySpecContextProxy::OPTIONAL_WORD)
    .define_method("DEFAULT_WORD", &ValueOptionalitySpecContextProxy::DEFAULT_WORD);

  rb_cFieldNameContext = define_class_under<FieldNameContextProxy, ContextProxy>(rb_mASN1Parser, "FieldNameContext")
    .define_method("primitive_field_name", &FieldNameContextProxy::primitiveFieldName)
    .define_method("primitive_field_name_at", &FieldNameContextProxy::primitiveFieldNameAt)
    .define_method("DOT", &FieldNameContextProxy::DOT)
    .define_method("DOTAt", &FieldNameContextProxy::DOT);

  rb_cValuesetfieldreferenceContext = define_class_under<ValuesetfieldreferenceContextProxy, ContextProxy>(rb_mASN1Parser, "ValuesetfieldreferenceContext")
    .define_method("ReferenceItem", &ValuesetfieldreferenceContextProxy::ReferenceItem);

  rb_cValueSetOptionalitySpecContext = define_class_under<ValueSetOptionalitySpecContextProxy, ContextProxy>(rb_mASN1Parser, "ValueSetOptionalitySpecContext")
    .define_method("value_set", &ValueSetOptionalitySpecContextProxy::valueSet)
    .define_method("OPTIONAL_WORD", &ValueSetOptionalitySpecContextProxy::OPTIONAL_WORD)
    .define_method("DEFAULT_WORD", &ValueSetOptionalitySpecContextProxy::DEFAULT_WORD);

  rb_cObjectfieldreferenceContext = define_class_under<ObjectfieldreferenceContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectfieldreferenceContext")
    .define_method("IdentifierOrValueItem", &ObjectfieldreferenceContextProxy::IdentifierOrValueItem);

  rb_cObjectOptionalitySpecContext = define_class_under<ObjectOptionalitySpecContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectOptionalitySpecContext")
    .define_method("object", &ObjectOptionalitySpecContextProxy::object)
    .define_method("OPTIONAL_WORD", &ObjectOptionalitySpecContextProxy::OPTIONAL_WORD)
    .define_method("DEFAULT_WORD", &ObjectOptionalitySpecContextProxy::DEFAULT_WORD);

  rb_cObjectsetfieldreferenceContext = define_class_under<ObjectsetfieldreferenceContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectsetfieldreferenceContext")
    .define_method("ReferenceItem", &ObjectsetfieldreferenceContextProxy::ReferenceItem);

  rb_cObjectSetOptionalitySpecContext = define_class_under<ObjectSetOptionalitySpecContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectSetOptionalitySpecContext")
    .define_method("object_set", &ObjectSetOptionalitySpecContextProxy::objectSet)
    .define_method("OPTIONAL_WORD", &ObjectSetOptionalitySpecContextProxy::OPTIONAL_WORD)
    .define_method("DEFAULT_WORD", &ObjectSetOptionalitySpecContextProxy::DEFAULT_WORD);

  rb_cPrimitiveFieldNameContext = define_class_under<PrimitiveFieldNameContextProxy, ContextProxy>(rb_mASN1Parser, "PrimitiveFieldNameContext")
    .define_method("typefieldreference", &PrimitiveFieldNameContextProxy::typefieldreference)
    .define_method("valuefieldreference", &PrimitiveFieldNameContextProxy::valuefieldreference)
    .define_method("valuesetfieldreference", &PrimitiveFieldNameContextProxy::valuesetfieldreference)
    .define_method("objectfieldreference", &PrimitiveFieldNameContextProxy::objectfieldreference)
    .define_method("objectsetfieldreference", &PrimitiveFieldNameContextProxy::objectsetfieldreference);

  rb_cTokenOrGroupSpecContext = define_class_under<TokenOrGroupSpecContextProxy, ContextProxy>(rb_mASN1Parser, "TokenOrGroupSpecContext")
    .define_method("required_token", &TokenOrGroupSpecContextProxy::requiredToken)
    .define_method("optional_group", &TokenOrGroupSpecContextProxy::optionalGroup);

  rb_cRequiredTokenContext = define_class_under<RequiredTokenContextProxy, ContextProxy>(rb_mASN1Parser, "RequiredTokenContext")
    .define_method("literal", &RequiredTokenContextProxy::literal)
    .define_method("primitive_field_name", &RequiredTokenContextProxy::primitiveFieldName);

  rb_cOptionalGroupContext = define_class_under<OptionalGroupContextProxy, ContextProxy>(rb_mASN1Parser, "OptionalGroupContext")
    .define_method("token_or_group_spec", &OptionalGroupContextProxy::tokenOrGroupSpec)
    .define_method("token_or_group_spec_at", &OptionalGroupContextProxy::tokenOrGroupSpecAt);

  rb_cLiteralContext = define_class_under<LiteralContextProxy, ContextProxy>(rb_mASN1Parser, "LiteralContext")
    .define_method("word", &LiteralContextProxy::word)
    .define_method("COMMA", &LiteralContextProxy::COMMA);

  rb_cWordContext = define_class_under<WordContextProxy, ContextProxy>(rb_mASN1Parser, "WordContext")
    .define_method("ReferenceItem", &WordContextProxy::ReferenceItem);

  rb_cObjectDefnContext = define_class_under<ObjectDefnContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectDefnContext")
    .define_method("default_syntax", &ObjectDefnContextProxy::defaultSyntax)
    .define_method("defined_syntax", &ObjectDefnContextProxy::definedSyntax);

  rb_cObjectFromObjectContext = define_class_under<ObjectFromObjectContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectFromObjectContext")
    .define_method("referenced_objects", &ObjectFromObjectContextProxy::referencedObjects)
    .define_method("field_name", &ObjectFromObjectContextProxy::fieldName)
    .define_method("DOT", &ObjectFromObjectContextProxy::DOT);

  rb_cParameterizedObjectContext = define_class_under<ParameterizedObjectContextProxy, ContextProxy>(rb_mASN1Parser, "ParameterizedObjectContext")
    .define_method("defined_object", &ParameterizedObjectContextProxy::definedObject)
    .define_method("actual_parameter_list", &ParameterizedObjectContextProxy::actualParameterList);

  rb_cDefaultSyntaxContext = define_class_under<DefaultSyntaxContextProxy, ContextProxy>(rb_mASN1Parser, "DefaultSyntaxContext")
    .define_method("field_setting", &DefaultSyntaxContextProxy::fieldSetting)
    .define_method("field_setting_at", &DefaultSyntaxContextProxy::fieldSettingAt)
    .define_method("L_BRACE", &DefaultSyntaxContextProxy::L_BRACE)
    .define_method("R_BRACE", &DefaultSyntaxContextProxy::R_BRACE)
    .define_method("COMMA", &DefaultSyntaxContextProxy::COMMA)
    .define_method("COMMAAt", &DefaultSyntaxContextProxy::COMMA);

  rb_cDefinedSyntaxContext = define_class_under<DefinedSyntaxContextProxy, ContextProxy>(rb_mASN1Parser, "DefinedSyntaxContext")
    .define_method("defined_syntax_token", &DefinedSyntaxContextProxy::definedSyntaxToken)
    .define_method("defined_syntax_token_at", &DefinedSyntaxContextProxy::definedSyntaxTokenAt)
    .define_method("L_BRACE", &DefinedSyntaxContextProxy::L_BRACE)
    .define_method("R_BRACE", &DefinedSyntaxContextProxy::R_BRACE);

  rb_cFieldSettingContext = define_class_under<FieldSettingContextProxy, ContextProxy>(rb_mASN1Parser, "FieldSettingContext")
    .define_method("primitive_field_name", &FieldSettingContextProxy::primitiveFieldName)
    .define_method("setting", &FieldSettingContextProxy::setting);

  rb_cSettingContext = define_class_under<SettingContextProxy, ContextProxy>(rb_mASN1Parser, "SettingContext")
    .define_method("type", &SettingContextProxy::type)
    .define_method("value", &SettingContextProxy::value)
    .define_method("value_set", &SettingContextProxy::valueSet)
    .define_method("object", &SettingContextProxy::object)
    .define_method("object_set", &SettingContextProxy::objectSet);

  rb_cDefinedSyntaxTokenContext = define_class_under<DefinedSyntaxTokenContextProxy, ContextProxy>(rb_mASN1Parser, "DefinedSyntaxTokenContext")
    .define_method("literal", &DefinedSyntaxTokenContextProxy::literal)
    .define_method("setting", &DefinedSyntaxTokenContextProxy::setting);

  rb_cObjectSetSpecContext = define_class_under<ObjectSetSpecContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectSetSpecContext")
    .define_method("root_element_set_spec", &ObjectSetSpecContextProxy::rootElementSetSpec)
    .define_method("additional_element_set_spec", &ObjectSetSpecContextProxy::additionalElementSetSpec)
    .define_method("COMMA", &ObjectSetSpecContextProxy::COMMA)
    .define_method("COMMAAt", &ObjectSetSpecContextProxy::COMMA)
    .define_method("ELLIPSIS", &ObjectSetSpecContextProxy::ELLIPSIS);

  rb_cObjectSetFromObjectsContext = define_class_under<ObjectSetFromObjectsContextProxy, ContextProxy>(rb_mASN1Parser, "ObjectSetFromObjectsContext")
    .define_method("referenced_objects", &ObjectSetFromObjectsContextProxy::referencedObjects)
    .define_method("field_name", &ObjectSetFromObjectsContextProxy::fieldName)
    .define_method("DOT", &ObjectSetFromObjectsContextProxy::DOT);

  rb_cParameterizedObjectSetContext = define_class_under<ParameterizedObjectSetContextProxy, ContextProxy>(rb_mASN1Parser, "ParameterizedObjectSetContext")
    .define_method("defined_object_set", &ParameterizedObjectSetContextProxy::definedObjectSet)
    .define_method("actual_parameter_list", &ParameterizedObjectSetContextProxy::actualParameterList);

  rb_cOpenTypeFieldValContext = define_class_under<OpenTypeFieldValContextProxy, ContextProxy>(rb_mASN1Parser, "OpenTypeFieldValContext")
    .define_method("type", &OpenTypeFieldValContextProxy::type)
    .define_method("value", &OpenTypeFieldValContextProxy::value)
    .define_method("COLON", &OpenTypeFieldValContextProxy::COLON);

  rb_cFixedTypeFieldValContext = define_class_under<FixedTypeFieldValContextProxy, ContextProxy>(rb_mASN1Parser, "FixedTypeFieldValContext")
    .define_method("builtin_value", &FixedTypeFieldValContextProxy::builtinValue)
    .define_method("referenced_value", &FixedTypeFieldValContextProxy::referencedValue);

  rb_cReferencedObjectsContext = define_class_under<ReferencedObjectsContextProxy, ContextProxy>(rb_mASN1Parser, "ReferencedObjectsContext")
    .define_method("defined_object", &ReferencedObjectsContextProxy::definedObject)
    .define_method("parameterized_object", &ReferencedObjectsContextProxy::parameterizedObject)
    .define_method("defined_object_set", &ReferencedObjectsContextProxy::definedObjectSet)
    .define_method("parameterized_object_set", &ReferencedObjectsContextProxy::parameterizedObjectSet);

  rb_cParameterizedTypeAssignmentContext = define_class_under<ParameterizedTypeAssignmentContextProxy, ContextProxy>(rb_mASN1Parser, "ParameterizedTypeAssignmentContext")
    .define_method("typereference", &ParameterizedTypeAssignmentContextProxy::typereference)
    .define_method("parameter_list", &ParameterizedTypeAssignmentContextProxy::parameterList)
    .define_method("type", &ParameterizedTypeAssignmentContextProxy::type)
    .define_method("ASSIGN", &ParameterizedTypeAssignmentContextProxy::ASSIGN);

  rb_cParameterizedValueAssignmentContext = define_class_under<ParameterizedValueAssignmentContextProxy, ContextProxy>(rb_mASN1Parser, "ParameterizedValueAssignmentContext")
    .define_method("valuereference", &ParameterizedValueAssignmentContextProxy::valuereference)
    .define_method("parameter_list", &ParameterizedValueAssignmentContextProxy::parameterList)
    .define_method("type", &ParameterizedValueAssignmentContextProxy::type)
    .define_method("value", &ParameterizedValueAssignmentContextProxy::value)
    .define_method("ASSIGN", &ParameterizedValueAssignmentContextProxy::ASSIGN);

  rb_cParameterizedValueSetTypeAssignmentContext = define_class_under<ParameterizedValueSetTypeAssignmentContextProxy, ContextProxy>(rb_mASN1Parser, "ParameterizedValueSetTypeAssignmentContext")
    .define_method("typereference", &ParameterizedValueSetTypeAssignmentContextProxy::typereference)
    .define_method("parameter_list", &ParameterizedValueSetTypeAssignmentContextProxy::parameterList)
    .define_method("type", &ParameterizedValueSetTypeAssignmentContextProxy::type)
    .define_method("value_set", &ParameterizedValueSetTypeAssignmentContextProxy::valueSet)
    .define_method("ASSIGN", &ParameterizedValueSetTypeAssignmentContextProxy::ASSIGN);

  rb_cParameterizedObjectClassAssignmentContext = define_class_under<ParameterizedObjectClassAssignmentContextProxy, ContextProxy>(rb_mASN1Parser, "ParameterizedObjectClassAssignmentContext")
    .define_method("objectclassreference", &ParameterizedObjectClassAssignmentContextProxy::objectclassreference)
    .define_method("parameter_list", &ParameterizedObjectClassAssignmentContextProxy::parameterList)
    .define_method("object_class", &ParameterizedObjectClassAssignmentContextProxy::objectClass)
    .define_method("ASSIGN", &ParameterizedObjectClassAssignmentContextProxy::ASSIGN);

  rb_cParameterizedObjectAssignmentContext = define_class_under<ParameterizedObjectAssignmentContextProxy, ContextProxy>(rb_mASN1Parser, "ParameterizedObjectAssignmentContext")
    .define_method("objectreference", &ParameterizedObjectAssignmentContextProxy::objectreference)
    .define_method("parameter_list", &ParameterizedObjectAssignmentContextProxy::parameterList)
    .define_method("defined_object_class", &ParameterizedObjectAssignmentContextProxy::definedObjectClass)
    .define_method("object", &ParameterizedObjectAssignmentContextProxy::object)
    .define_method("ASSIGN", &ParameterizedObjectAssignmentContextProxy::ASSIGN);

  rb_cParameterizedObjectSetAssignmentContext = define_class_under<ParameterizedObjectSetAssignmentContextProxy, ContextProxy>(rb_mASN1Parser, "ParameterizedObjectSetAssignmentContext")
    .define_method("objectsetreference", &ParameterizedObjectSetAssignmentContextProxy::objectsetreference)
    .define_method("parameter_list", &ParameterizedObjectSetAssignmentContextProxy::parameterList)
    .define_method("defined_object_class", &ParameterizedObjectSetAssignmentContextProxy::definedObjectClass)
    .define_method("object_set", &ParameterizedObjectSetAssignmentContextProxy::objectSet)
    .define_method("ASSIGN", &ParameterizedObjectSetAssignmentContextProxy::ASSIGN);

  rb_cParameterListContext = define_class_under<ParameterListContextProxy, ContextProxy>(rb_mASN1Parser, "ParameterListContext")
    .define_method("parameter", &ParameterListContextProxy::parameter)
    .define_method("parameter_at", &ParameterListContextProxy::parameterAt)
    .define_method("L_BRACE", &ParameterListContextProxy::L_BRACE)
    .define_method("R_BRACE", &ParameterListContextProxy::R_BRACE)
    .define_method("COMMA", &ParameterListContextProxy::COMMA)
    .define_method("COMMAAt", &ParameterListContextProxy::COMMA);

  rb_cParameterContext = define_class_under<ParameterContextProxy, ContextProxy>(rb_mASN1Parser, "ParameterContext")
    .define_method("param_governor", &ParameterContextProxy::paramGovernor)
    .define_method("dummy_reference", &ParameterContextProxy::dummyReference)
    .define_method("COLON", &ParameterContextProxy::COLON);

  rb_cParamGovernorContext = define_class_under<ParamGovernorContextProxy, ContextProxy>(rb_mASN1Parser, "ParamGovernorContext")
    .define_method("governor", &ParamGovernorContextProxy::governor)
    .define_method("dummy_governor", &ParamGovernorContextProxy::dummyGovernor);

  rb_cDummyReferenceContext = define_class_under<DummyReferenceContextProxy, ContextProxy>(rb_mASN1Parser, "DummyReferenceContext")
    .define_method("reference", &DummyReferenceContextProxy::reference);

  rb_cDummyGovernorContext = define_class_under<DummyGovernorContextProxy, ContextProxy>(rb_mASN1Parser, "DummyGovernorContext")
    .define_method("dummy_reference", &DummyGovernorContextProxy::dummyReference);

  rb_cSimpleDefinedTypeContext = define_class_under<SimpleDefinedTypeContextProxy, ContextProxy>(rb_mASN1Parser, "SimpleDefinedTypeContext")
    .define_method("external_type_reference", &SimpleDefinedTypeContextProxy::externalTypeReference)
    .define_method("typereference", &SimpleDefinedTypeContextProxy::typereference);

  rb_cActualParameterListContext = define_class_under<ActualParameterListContextProxy, ContextProxy>(rb_mASN1Parser, "ActualParameterListContext")
    .define_method("actual_parameter", &ActualParameterListContextProxy::actualParameter)
    .define_method("actual_parameter_at", &ActualParameterListContextProxy::actualParameterAt)
    .define_method("L_BRACE", &ActualParameterListContextProxy::L_BRACE)
    .define_method("R_BRACE", &ActualParameterListContextProxy::R_BRACE)
    .define_method("COMMA", &ActualParameterListContextProxy::COMMA)
    .define_method("COMMAAt", &ActualParameterListContextProxy::COMMA);

  rb_cSimpleDefinedValueContext = define_class_under<SimpleDefinedValueContextProxy, ContextProxy>(rb_mASN1Parser, "SimpleDefinedValueContext")
    .define_method("external_value_reference", &SimpleDefinedValueContextProxy::externalValueReference)
    .define_method("valuereference", &SimpleDefinedValueContextProxy::valuereference);

  rb_cActualParameterContext = define_class_under<ActualParameterContextProxy, ContextProxy>(rb_mASN1Parser, "ActualParameterContext")
    .define_method("type", &ActualParameterContextProxy::type)
    .define_method("value", &ActualParameterContextProxy::value)
    .define_method("value_set", &ActualParameterContextProxy::valueSet)
    .define_method("defined_object_class", &ActualParameterContextProxy::definedObjectClass)
    .define_method("object", &ActualParameterContextProxy::object)
    .define_method("object_set", &ActualParameterContextProxy::objectSet);
}

