// Generated from /Users/rickmark/Developer/rasn2_parser/ASN1.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class ASN1Parser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, ABSENT_WORD=11, ENCODED_WORD=12, INTEGER_WORD=13, RELATIVE_OID_WORD=14, 
		ABSTRACT_SYNTAX_WORD=15, END_WORD=16, INTERSECTION_WORD=17, SEQUENCE_WORD=18, 
		ALL_WORD=19, ENUMERATED_WORD=20, ISO646String_WORD=21, SET_WORD=22, APPLICATION_WORD=23, 
		EXCEPT_WORD=24, MAX_WORD=25, SIZE_WORD=26, AUTOMATIC_WORD=27, EXPLICIT_WORD=28, 
		MIN_WORD=29, STRING_WORD=30, BEGIN_WORD=31, EXPORTS_WORD=32, MINUS_INFINITY_WORD=33, 
		SYNTAX_WORD=34, BIT_WORD=35, EXTENSIBILITY_WORD=36, NULL_WORD=37, T61String_WORD=38, 
		BMPString_WORD=39, EXTERNAL_WORD=40, NumericString_WORD=41, TAGS_WORD=42, 
		BOOLEAN_WORD=43, FALSE_WORD=44, OBJECT_WORD=45, TeletexString_WORD=46, 
		BY_WORD=47, FROM_WORD=48, ObjectDescriptor_WORD=49, TRUE_WORD=50, CHARACTER_WORD=51, 
		GeneralizedTime_WORD=52, OCTET_WORD=53, TYPE_IDENTIFIER_WORD=54, CHOICE_WORD=55, 
		GeneralString_WORD=56, OF_WORD=57, UNION_WORD=58, CLASS_WORD=59, GraphicString_WORD=60, 
		OPTIONAL_WORD=61, UNIQUE_WORD=62, COMPONENT_WORD=63, IA5String_WORD=64, 
		PATTERN_WORD=65, UNIVERSAL_WORD=66, COMPONENTS_WORD=67, IDENTIFIER_WORD=68, 
		PDV_WORD=69, UniversalString_WORD=70, CONSTRAINED_WORD=71, IMPLICIT_WORD=72, 
		PLUS_INFINITY_WORD=73, UTCTime_WORD=74, CONTAINING_WORD=75, IMPLIED_WORD=76, 
		PRESENT_WORD=77, UTF8String_WORD=78, DEFAULT_WORD=79, IMPORTS_WORD=80, 
		PrintableString_WORD=81, VideotexString_WORD=82, DEFINITIONS_WORD=83, 
		INCLUDES_WORD=84, PRIVATE_WORD=85, VisibleString_WORD=86, EMBEDDED_WORD=87, 
		INSTANCE_WORD=88, REAL_WORD=89, WITH_WORD=90, ANY_WORD=91, DEFINED_WORD=92, 
		L_BRACE=93, R_BRACE=94, L_PAREN=95, R_PAREN=96, ASSIGN=97, RANGE=98, ELLIPSIS=99, 
		LV_BRACKET=100, RV_BRACKET=101, COLON=102, DOT=103, COMMA=104, MINUS=105, 
		NumberItem=106, BStringItem=107, HStringItem=108, CStringItem=109, IdentifierOrValueItem=110, 
		ReferenceItem=111, WHITESPACE=112, HYPHENS_COMMENT=113, BLOCK_COMMENT=114;
	public static final int
		RULE_moduleDefinition = 0, RULE_moduleIdentifier = 1, RULE_definitiveIdentifier = 2, 
		RULE_definitiveObjIdComponentList = 3, RULE_definitiveObjIdComponent = 4, 
		RULE_definitiveNumberForm = 5, RULE_definitiveNameAndNumberForm = 6, RULE_tagDefault = 7, 
		RULE_extensionDefault = 8, RULE_moduleBody = 9, RULE_exports = 10, RULE_symbolsExported = 11, 
		RULE_imports = 12, RULE_symbolsImported = 13, RULE_symbolsFromModuleList = 14, 
		RULE_symbolsFromModule = 15, RULE_globalModuleReference = 16, RULE_assignedIdentifier = 17, 
		RULE_symbolList = 18, RULE_symbol = 19, RULE_reference = 20, RULE_assignmentList = 21, 
		RULE_assignment = 22, RULE_definedType = 23, RULE_definedValue = 24, RULE_externalTypeReference = 25, 
		RULE_externalValueReference = 26, RULE_typeAssignment = 27, RULE_valueAssignment = 28, 
		RULE_valueSetTypeAssignment = 29, RULE_valueSet = 30, RULE_type = 31, 
		RULE_builtinType = 32, RULE_referencedType = 33, RULE_namedType = 34, 
		RULE_value = 35, RULE_builtinValue = 36, RULE_referencedValue = 37, RULE_namedValue = 38, 
		RULE_booleanType = 39, RULE_booleanValue = 40, RULE_integerType = 41, 
		RULE_namedNumberList = 42, RULE_namedNumber = 43, RULE_signedNumber = 44, 
		RULE_integerValue = 45, RULE_enumeratedType = 46, RULE_enumerations = 47, 
		RULE_rootEnumeration = 48, RULE_additionalEnumeration = 49, RULE_enumeration = 50, 
		RULE_enumerationItem = 51, RULE_enumeratedValue = 52, RULE_bitStringType = 53, 
		RULE_namedBitList = 54, RULE_namedBit = 55, RULE_bitStringValue = 56, 
		RULE_identifierList = 57, RULE_octetStringType = 58, RULE_octetStringValue = 59, 
		RULE_nullType = 60, RULE_nullValue = 61, RULE_sequenceType = 62, RULE_componentTypeLists = 63, 
		RULE_rootComponentTypeList = 64, RULE_extensionEndMarker = 65, RULE_extensionAdditions = 66, 
		RULE_extensionAdditionList = 67, RULE_extensionAddition = 68, RULE_extensionAdditionGroup = 69, 
		RULE_versionNumber = 70, RULE_componentTypeList = 71, RULE_componentType = 72, 
		RULE_sequenceValue = 73, RULE_componentValueList = 74, RULE_sequenceOfType = 75, 
		RULE_sequenceOfValue = 76, RULE_valueList = 77, RULE_namedValueList = 78, 
		RULE_setType = 79, RULE_setValue = 80, RULE_setOfType = 81, RULE_setOfValue = 82, 
		RULE_choiceType = 83, RULE_alternativeTypeLists = 84, RULE_rootAlternativeTypeList = 85, 
		RULE_extensionAdditionAlternatives = 86, RULE_extensionAdditionAlternativesList = 87, 
		RULE_extensionAdditionAlternative = 88, RULE_extensionAdditionAlternativesGroup = 89, 
		RULE_alternativeTypeList = 90, RULE_taggedType = 91, RULE_tag = 92, RULE_classNumber = 93, 
		RULE_classP = 94, RULE_objectIdentifierType = 95, RULE_objectIdentifierValue = 96, 
		RULE_objIdComponentsList = 97, RULE_objIdComponents = 98, RULE_nameForm = 99, 
		RULE_numberForm = 100, RULE_nameAndNumberForm = 101, RULE_extensionAndException = 102, 
		RULE_exceptionSpec = 103, RULE_exceptionIdentification = 104, RULE_optionalExtensionMarker = 105, 
		RULE_characterStringType = 106, RULE_characterStringValue = 107, RULE_restrictedCharacterStringType = 108, 
		RULE_restrictedCharacterStringValue = 109, RULE_characterStringList = 110, 
		RULE_charSyms = 111, RULE_charsDefn = 112, RULE_quadruple = 113, RULE_group = 114, 
		RULE_plane = 115, RULE_row = 116, RULE_cell = 117, RULE_tuple = 118, RULE_tableColumn = 119, 
		RULE_tableRow = 120, RULE_unrestrictedCharacterStringType = 121, RULE_usefulType = 122, 
		RULE_constrainedType = 123, RULE_typeWithConstraint = 124, RULE_constraint = 125, 
		RULE_constraintSpec = 126, RULE_subtypeConstraint = 127, RULE_generalConstraint = 128, 
		RULE_elementSetSpecs = 129, RULE_rootElementSetSpec = 130, RULE_additionalElementSetSpec = 131, 
		RULE_elementSetSpec = 132, RULE_unions = 133, RULE_uElems = 134, RULE_intersections = 135, 
		RULE_iElems = 136, RULE_intersectionElements = 137, RULE_elems = 138, 
		RULE_exclusions = 139, RULE_unionMark = 140, RULE_intersectionMark = 141, 
		RULE_elements = 142, RULE_subtypeElements = 143, RULE_singleValue = 144, 
		RULE_containedSubtype = 145, RULE_includes = 146, RULE_valueRange = 147, 
		RULE_lowerEndpoint = 148, RULE_upperEndpoint = 149, RULE_lowerEndValue = 150, 
		RULE_upperEndValue = 151, RULE_sizeConstraint = 152, RULE_permittedAlphabet = 153, 
		RULE_userDefinedConstraint = 154, RULE_userDefinedConstraintParameter = 155, 
		RULE_tableConstraint = 156, RULE_simpleTableConstraint = 157, RULE_componentRelationConstraint = 158, 
		RULE_atNotation = 159, RULE_level = 160, RULE_componentIdList = 161, RULE_contentsConstraint = 162, 
		RULE_definedObjectClass = 163, RULE_definedObject = 164, RULE_definedObjectSet = 165, 
		RULE_externalObjectClassReference = 166, RULE_externalObjectReference = 167, 
		RULE_externalObjectSetReference = 168, RULE_usefulObjectClassReference = 169, 
		RULE_objectClassAssignment = 170, RULE_objectClass = 171, RULE_objectClassDefn = 172, 
		RULE_withSyntaxSpec = 173, RULE_fieldSpec = 174, RULE_typeFieldSpec = 175, 
		RULE_typeOptionalitySpec = 176, RULE_fixedTypeValueFieldSpec = 177, RULE_valueOptionalitySpec = 178, 
		RULE_variableTypeValueFieldSpec = 179, RULE_fixedTypeValueSetFieldSpec = 180, 
		RULE_valueSetOptionalitySpec = 181, RULE_variableTypeValueSetFieldSpec = 182, 
		RULE_objectFieldSpec = 183, RULE_objectOptionalitySpec = 184, RULE_objectSetFieldSpec = 185, 
		RULE_objectSetOptionalitySpec = 186, RULE_primitiveFieldName = 187, RULE_fieldName = 188, 
		RULE_syntaxList = 189, RULE_tokenOrGroupSpec = 190, RULE_optionalGroup = 191, 
		RULE_requiredToken = 192, RULE_literal = 193, RULE_objectAssignment = 194, 
		RULE_object = 195, RULE_objectDefn = 196, RULE_defaultSyntax = 197, RULE_fieldSetting = 198, 
		RULE_definedSyntax = 199, RULE_definedSyntaxToken = 200, RULE_setting = 201, 
		RULE_objectSetAssignment = 202, RULE_objectSet = 203, RULE_objectSetSpec = 204, 
		RULE_objectSetElements = 205, RULE_objectClassFieldType = 206, RULE_objectClassFieldValue = 207, 
		RULE_openTypeFieldVal = 208, RULE_fixedTypeFieldVal = 209, RULE_valueFromObject = 210, 
		RULE_valueSetFromObjects = 211, RULE_typeFromObject = 212, RULE_objectFromObject = 213, 
		RULE_objectSetFromObjects = 214, RULE_referencedObjects = 215, RULE_anyType = 216, 
		RULE_objectclassreference = 217, RULE_objectreference = 218, RULE_objectsetreference = 219, 
		RULE_typefieldreference = 220, RULE_valuefieldreference = 221, RULE_valuesetfieldreference = 222, 
		RULE_objectfieldreference = 223, RULE_objectsetfieldreference = 224, RULE_word = 225, 
		RULE_parameterizedAssignment = 226, RULE_parameterizedTypeAssignment = 227, 
		RULE_parameterizedValueAssignment = 228, RULE_parameterizedValueSetTypeAssignment = 229, 
		RULE_parameterizedObjectClassAssignment = 230, RULE_parameterizedObjectAssignment = 231, 
		RULE_parameterizedObjectSetAssignment = 232, RULE_parameterList = 233, 
		RULE_parameter = 234, RULE_paramGovernor = 235, RULE_governor = 236, RULE_dummyGovernor = 237, 
		RULE_dummyReference = 238, RULE_parameterizedReference = 239, RULE_parameterizedType = 240, 
		RULE_simpleDefinedType = 241, RULE_parameterizedValue = 242, RULE_simpleDefinedValue = 243, 
		RULE_parameterizedValueSetType = 244, RULE_parameterizedObjectClass = 245, 
		RULE_parameterizedObjectSet = 246, RULE_parameterizedObject = 247, RULE_actualParameterList = 248, 
		RULE_actualParameter = 249, RULE_typereference = 250, RULE_identifier = 251, 
		RULE_valuereference = 252, RULE_modulereference = 253, RULE_number = 254, 
		RULE_bstring = 255, RULE_hstring = 256, RULE_cstring = 257;
	private static String[] makeRuleNames() {
		return new String[] {
			"moduleDefinition", "moduleIdentifier", "definitiveIdentifier", "definitiveObjIdComponentList", 
			"definitiveObjIdComponent", "definitiveNumberForm", "definitiveNameAndNumberForm", 
			"tagDefault", "extensionDefault", "moduleBody", "exports", "symbolsExported", 
			"imports", "symbolsImported", "symbolsFromModuleList", "symbolsFromModule", 
			"globalModuleReference", "assignedIdentifier", "symbolList", "symbol", 
			"reference", "assignmentList", "assignment", "definedType", "definedValue", 
			"externalTypeReference", "externalValueReference", "typeAssignment", 
			"valueAssignment", "valueSetTypeAssignment", "valueSet", "type", "builtinType", 
			"referencedType", "namedType", "value", "builtinValue", "referencedValue", 
			"namedValue", "booleanType", "booleanValue", "integerType", "namedNumberList", 
			"namedNumber", "signedNumber", "integerValue", "enumeratedType", "enumerations", 
			"rootEnumeration", "additionalEnumeration", "enumeration", "enumerationItem", 
			"enumeratedValue", "bitStringType", "namedBitList", "namedBit", "bitStringValue", 
			"identifierList", "octetStringType", "octetStringValue", "nullType", 
			"nullValue", "sequenceType", "componentTypeLists", "rootComponentTypeList", 
			"extensionEndMarker", "extensionAdditions", "extensionAdditionList", 
			"extensionAddition", "extensionAdditionGroup", "versionNumber", "componentTypeList", 
			"componentType", "sequenceValue", "componentValueList", "sequenceOfType", 
			"sequenceOfValue", "valueList", "namedValueList", "setType", "setValue", 
			"setOfType", "setOfValue", "choiceType", "alternativeTypeLists", "rootAlternativeTypeList", 
			"extensionAdditionAlternatives", "extensionAdditionAlternativesList", 
			"extensionAdditionAlternative", "extensionAdditionAlternativesGroup", 
			"alternativeTypeList", "taggedType", "tag", "classNumber", "classP", 
			"objectIdentifierType", "objectIdentifierValue", "objIdComponentsList", 
			"objIdComponents", "nameForm", "numberForm", "nameAndNumberForm", "extensionAndException", 
			"exceptionSpec", "exceptionIdentification", "optionalExtensionMarker", 
			"characterStringType", "characterStringValue", "restrictedCharacterStringType", 
			"restrictedCharacterStringValue", "characterStringList", "charSyms", 
			"charsDefn", "quadruple", "group", "plane", "row", "cell", "tuple", "tableColumn", 
			"tableRow", "unrestrictedCharacterStringType", "usefulType", "constrainedType", 
			"typeWithConstraint", "constraint", "constraintSpec", "subtypeConstraint", 
			"generalConstraint", "elementSetSpecs", "rootElementSetSpec", "additionalElementSetSpec", 
			"elementSetSpec", "unions", "uElems", "intersections", "iElems", "intersectionElements", 
			"elems", "exclusions", "unionMark", "intersectionMark", "elements", "subtypeElements", 
			"singleValue", "containedSubtype", "includes", "valueRange", "lowerEndpoint", 
			"upperEndpoint", "lowerEndValue", "upperEndValue", "sizeConstraint", 
			"permittedAlphabet", "userDefinedConstraint", "userDefinedConstraintParameter", 
			"tableConstraint", "simpleTableConstraint", "componentRelationConstraint", 
			"atNotation", "level", "componentIdList", "contentsConstraint", "definedObjectClass", 
			"definedObject", "definedObjectSet", "externalObjectClassReference", 
			"externalObjectReference", "externalObjectSetReference", "usefulObjectClassReference", 
			"objectClassAssignment", "objectClass", "objectClassDefn", "withSyntaxSpec", 
			"fieldSpec", "typeFieldSpec", "typeOptionalitySpec", "fixedTypeValueFieldSpec", 
			"valueOptionalitySpec", "variableTypeValueFieldSpec", "fixedTypeValueSetFieldSpec", 
			"valueSetOptionalitySpec", "variableTypeValueSetFieldSpec", "objectFieldSpec", 
			"objectOptionalitySpec", "objectSetFieldSpec", "objectSetOptionalitySpec", 
			"primitiveFieldName", "fieldName", "syntaxList", "tokenOrGroupSpec", 
			"optionalGroup", "requiredToken", "literal", "objectAssignment", "object", 
			"objectDefn", "defaultSyntax", "fieldSetting", "definedSyntax", "definedSyntaxToken", 
			"setting", "objectSetAssignment", "objectSet", "objectSetSpec", "objectSetElements", 
			"objectClassFieldType", "objectClassFieldValue", "openTypeFieldVal", 
			"fixedTypeFieldVal", "valueFromObject", "valueSetFromObjects", "typeFromObject", 
			"objectFromObject", "objectSetFromObjects", "referencedObjects", "anyType", 
			"objectclassreference", "objectreference", "objectsetreference", "typefieldreference", 
			"valuefieldreference", "valuesetfieldreference", "objectfieldreference", 
			"objectsetfieldreference", "word", "parameterizedAssignment", "parameterizedTypeAssignment", 
			"parameterizedValueAssignment", "parameterizedValueSetTypeAssignment", 
			"parameterizedObjectClassAssignment", "parameterizedObjectAssignment", 
			"parameterizedObjectSetAssignment", "parameterList", "parameter", "paramGovernor", 
			"governor", "dummyGovernor", "dummyReference", "parameterizedReference", 
			"parameterizedType", "simpleDefinedType", "parameterizedValue", "simpleDefinedValue", 
			"parameterizedValueSetType", "parameterizedObjectClass", "parameterizedObjectSet", 
			"parameterizedObject", "actualParameterList", "actualParameter", "typereference", 
			"identifier", "valuereference", "modulereference", "number", "bstring", 
			"hstring", "cstring"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "';'", "'['", "']'", "'!'", "'|'", "'^'", "'<'", "'@'", "'@.'", 
			"'&'", "'ABSENT'", "'ENCODED'", "'INTEGER'", "'RELATIVE-OID'", "'ABSTRACT-SYNTAX'", 
			"'END'", "'INTERSECTION'", "'SEQUENCE'", "'ALL'", "'ENUMERATED'", "'ISO646String'", 
			"'SET'", "'APPLICATION'", "'EXCEPT'", "'MAX'", "'SIZE'", "'AUTOMATIC'", 
			"'EXPLICIT'", "'MIN'", "'STRING'", "'BEGIN'", "'EXPORTS'", "'MINUS-INFINITY'", 
			"'SYNTAX'", "'BIT'", "'EXTENSIBILITY'", "'NULL'", "'T61String'", "'BMPString'", 
			"'EXTERNAL'", "'NumericString'", "'TAGS'", "'BOOLEAN'", "'FALSE'", "'OBJECT'", 
			"'TeletexString'", "'BY'", "'FROM'", "'ObjectDescriptor'", "'TRUE'", 
			"'CHARACTER'", "'GeneralizedTime'", "'OCTET'", "'TYPE-IDENTIFIER'", "'CHOICE'", 
			"'GeneralString'", "'OF'", "'UNION'", "'CLASS'", "'GraphicString'", "'OPTIONAL'", 
			"'UNIQUE'", "'COMPONENT'", "'IA5String'", "'PATTERN'", "'UNIVERSAL'", 
			"'COMPONENTS'", "'IDENTIFIER'", "'PDV'", "'UniversalString'", "'CONSTRAINED'", 
			"'IMPLICIT'", "'PLUS-INFINITY'", "'UTCTime'", "'CONTAINING'", "'IMPLIED'", 
			"'PRESENT'", "'UTF8String'", "'DEFAULT'", "'IMPORTS'", "'PrintableString'", 
			"'VideotexString'", "'DEFINITIONS'", "'INCLUDES'", "'PRIVATE'", "'VisibleString'", 
			"'EMBEDDED'", "'INSTANCE'", "'REAL'", "'WITH'", "'ANY'", "'DEFINED'", 
			"'{'", "'}'", "'('", "')'", "'::='", "'..'", "'...'", "'[['", "']]'", 
			"':'", "'.'", "','", "'-'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, "ABSENT_WORD", 
			"ENCODED_WORD", "INTEGER_WORD", "RELATIVE_OID_WORD", "ABSTRACT_SYNTAX_WORD", 
			"END_WORD", "INTERSECTION_WORD", "SEQUENCE_WORD", "ALL_WORD", "ENUMERATED_WORD", 
			"ISO646String_WORD", "SET_WORD", "APPLICATION_WORD", "EXCEPT_WORD", "MAX_WORD", 
			"SIZE_WORD", "AUTOMATIC_WORD", "EXPLICIT_WORD", "MIN_WORD", "STRING_WORD", 
			"BEGIN_WORD", "EXPORTS_WORD", "MINUS_INFINITY_WORD", "SYNTAX_WORD", "BIT_WORD", 
			"EXTENSIBILITY_WORD", "NULL_WORD", "T61String_WORD", "BMPString_WORD", 
			"EXTERNAL_WORD", "NumericString_WORD", "TAGS_WORD", "BOOLEAN_WORD", "FALSE_WORD", 
			"OBJECT_WORD", "TeletexString_WORD", "BY_WORD", "FROM_WORD", "ObjectDescriptor_WORD", 
			"TRUE_WORD", "CHARACTER_WORD", "GeneralizedTime_WORD", "OCTET_WORD", 
			"TYPE_IDENTIFIER_WORD", "CHOICE_WORD", "GeneralString_WORD", "OF_WORD", 
			"UNION_WORD", "CLASS_WORD", "GraphicString_WORD", "OPTIONAL_WORD", "UNIQUE_WORD", 
			"COMPONENT_WORD", "IA5String_WORD", "PATTERN_WORD", "UNIVERSAL_WORD", 
			"COMPONENTS_WORD", "IDENTIFIER_WORD", "PDV_WORD", "UniversalString_WORD", 
			"CONSTRAINED_WORD", "IMPLICIT_WORD", "PLUS_INFINITY_WORD", "UTCTime_WORD", 
			"CONTAINING_WORD", "IMPLIED_WORD", "PRESENT_WORD", "UTF8String_WORD", 
			"DEFAULT_WORD", "IMPORTS_WORD", "PrintableString_WORD", "VideotexString_WORD", 
			"DEFINITIONS_WORD", "INCLUDES_WORD", "PRIVATE_WORD", "VisibleString_WORD", 
			"EMBEDDED_WORD", "INSTANCE_WORD", "REAL_WORD", "WITH_WORD", "ANY_WORD", 
			"DEFINED_WORD", "L_BRACE", "R_BRACE", "L_PAREN", "R_PAREN", "ASSIGN", 
			"RANGE", "ELLIPSIS", "LV_BRACKET", "RV_BRACKET", "COLON", "DOT", "COMMA", 
			"MINUS", "NumberItem", "BStringItem", "HStringItem", "CStringItem", "IdentifierOrValueItem", 
			"ReferenceItem", "WHITESPACE", "HYPHENS_COMMENT", "BLOCK_COMMENT"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "ASN1.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public ASN1Parser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ModuleDefinitionContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(ASN1Parser.EOF, 0); }
		public List<ModuleIdentifierContext> moduleIdentifier() {
			return getRuleContexts(ModuleIdentifierContext.class);
		}
		public ModuleIdentifierContext moduleIdentifier(int i) {
			return getRuleContext(ModuleIdentifierContext.class,i);
		}
		public List<TerminalNode> DEFINITIONS_WORD() { return getTokens(ASN1Parser.DEFINITIONS_WORD); }
		public TerminalNode DEFINITIONS_WORD(int i) {
			return getToken(ASN1Parser.DEFINITIONS_WORD, i);
		}
		public List<TagDefaultContext> tagDefault() {
			return getRuleContexts(TagDefaultContext.class);
		}
		public TagDefaultContext tagDefault(int i) {
			return getRuleContext(TagDefaultContext.class,i);
		}
		public List<ExtensionDefaultContext> extensionDefault() {
			return getRuleContexts(ExtensionDefaultContext.class);
		}
		public ExtensionDefaultContext extensionDefault(int i) {
			return getRuleContext(ExtensionDefaultContext.class,i);
		}
		public List<TerminalNode> ASSIGN() { return getTokens(ASN1Parser.ASSIGN); }
		public TerminalNode ASSIGN(int i) {
			return getToken(ASN1Parser.ASSIGN, i);
		}
		public List<TerminalNode> BEGIN_WORD() { return getTokens(ASN1Parser.BEGIN_WORD); }
		public TerminalNode BEGIN_WORD(int i) {
			return getToken(ASN1Parser.BEGIN_WORD, i);
		}
		public List<ModuleBodyContext> moduleBody() {
			return getRuleContexts(ModuleBodyContext.class);
		}
		public ModuleBodyContext moduleBody(int i) {
			return getRuleContext(ModuleBodyContext.class,i);
		}
		public List<TerminalNode> END_WORD() { return getTokens(ASN1Parser.END_WORD); }
		public TerminalNode END_WORD(int i) {
			return getToken(ASN1Parser.END_WORD, i);
		}
		public ModuleDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_moduleDefinition; }
	}

	public final ModuleDefinitionContext moduleDefinition() throws RecognitionException {
		ModuleDefinitionContext _localctx = new ModuleDefinitionContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_moduleDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(525); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(516);
				moduleIdentifier();
				setState(517);
				match(DEFINITIONS_WORD);
				setState(518);
				tagDefault();
				setState(519);
				extensionDefault();
				setState(520);
				match(ASSIGN);
				setState(521);
				match(BEGIN_WORD);
				setState(522);
				moduleBody();
				setState(523);
				match(END_WORD);
				}
				}
				setState(527); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==ReferenceItem );
			setState(529);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ModuleIdentifierContext extends ParserRuleContext {
		public ModulereferenceContext modulereference() {
			return getRuleContext(ModulereferenceContext.class,0);
		}
		public DefinitiveIdentifierContext definitiveIdentifier() {
			return getRuleContext(DefinitiveIdentifierContext.class,0);
		}
		public ModuleIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_moduleIdentifier; }
	}

	public final ModuleIdentifierContext moduleIdentifier() throws RecognitionException {
		ModuleIdentifierContext _localctx = new ModuleIdentifierContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_moduleIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(531);
			modulereference();
			setState(532);
			definitiveIdentifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DefinitiveIdentifierContext extends ParserRuleContext {
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public DefinitiveObjIdComponentListContext definitiveObjIdComponentList() {
			return getRuleContext(DefinitiveObjIdComponentListContext.class,0);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public DefinitiveIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_definitiveIdentifier; }
	}

	public final DefinitiveIdentifierContext definitiveIdentifier() throws RecognitionException {
		DefinitiveIdentifierContext _localctx = new DefinitiveIdentifierContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_definitiveIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(538);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==L_BRACE) {
				{
				setState(534);
				match(L_BRACE);
				setState(535);
				definitiveObjIdComponentList();
				setState(536);
				match(R_BRACE);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DefinitiveObjIdComponentListContext extends ParserRuleContext {
		public List<DefinitiveObjIdComponentContext> definitiveObjIdComponent() {
			return getRuleContexts(DefinitiveObjIdComponentContext.class);
		}
		public DefinitiveObjIdComponentContext definitiveObjIdComponent(int i) {
			return getRuleContext(DefinitiveObjIdComponentContext.class,i);
		}
		public DefinitiveObjIdComponentListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_definitiveObjIdComponentList; }
	}

	public final DefinitiveObjIdComponentListContext definitiveObjIdComponentList() throws RecognitionException {
		DefinitiveObjIdComponentListContext _localctx = new DefinitiveObjIdComponentListContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_definitiveObjIdComponentList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(540);
			definitiveObjIdComponent();
			setState(544);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NumberItem || _la==IdentifierOrValueItem) {
				{
				{
				setState(541);
				definitiveObjIdComponent();
				}
				}
				setState(546);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DefinitiveObjIdComponentContext extends ParserRuleContext {
		public NameFormContext nameForm() {
			return getRuleContext(NameFormContext.class,0);
		}
		public DefinitiveNumberFormContext definitiveNumberForm() {
			return getRuleContext(DefinitiveNumberFormContext.class,0);
		}
		public DefinitiveNameAndNumberFormContext definitiveNameAndNumberForm() {
			return getRuleContext(DefinitiveNameAndNumberFormContext.class,0);
		}
		public DefinitiveObjIdComponentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_definitiveObjIdComponent; }
	}

	public final DefinitiveObjIdComponentContext definitiveObjIdComponent() throws RecognitionException {
		DefinitiveObjIdComponentContext _localctx = new DefinitiveObjIdComponentContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_definitiveObjIdComponent);
		try {
			setState(550);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(547);
				nameForm();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(548);
				definitiveNumberForm();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(549);
				definitiveNameAndNumberForm();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DefinitiveNumberFormContext extends ParserRuleContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public DefinitiveNumberFormContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_definitiveNumberForm; }
	}

	public final DefinitiveNumberFormContext definitiveNumberForm() throws RecognitionException {
		DefinitiveNumberFormContext _localctx = new DefinitiveNumberFormContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_definitiveNumberForm);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(552);
			number();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DefinitiveNameAndNumberFormContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode L_PAREN() { return getToken(ASN1Parser.L_PAREN, 0); }
		public DefinitiveNumberFormContext definitiveNumberForm() {
			return getRuleContext(DefinitiveNumberFormContext.class,0);
		}
		public TerminalNode R_PAREN() { return getToken(ASN1Parser.R_PAREN, 0); }
		public DefinitiveNameAndNumberFormContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_definitiveNameAndNumberForm; }
	}

	public final DefinitiveNameAndNumberFormContext definitiveNameAndNumberForm() throws RecognitionException {
		DefinitiveNameAndNumberFormContext _localctx = new DefinitiveNameAndNumberFormContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_definitiveNameAndNumberForm);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(554);
			identifier();
			setState(555);
			match(L_PAREN);
			setState(556);
			definitiveNumberForm();
			setState(557);
			match(R_PAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TagDefaultContext extends ParserRuleContext {
		public TerminalNode TAGS_WORD() { return getToken(ASN1Parser.TAGS_WORD, 0); }
		public TerminalNode EXPLICIT_WORD() { return getToken(ASN1Parser.EXPLICIT_WORD, 0); }
		public TerminalNode IMPLICIT_WORD() { return getToken(ASN1Parser.IMPLICIT_WORD, 0); }
		public TerminalNode AUTOMATIC_WORD() { return getToken(ASN1Parser.AUTOMATIC_WORD, 0); }
		public TagDefaultContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tagDefault; }
	}

	public final TagDefaultContext tagDefault() throws RecognitionException {
		TagDefaultContext _localctx = new TagDefaultContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_tagDefault);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(561);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 27)) & ~0x3f) == 0 && ((1L << (_la - 27)) & 35184372088835L) != 0)) {
				{
				setState(559);
				_la = _input.LA(1);
				if ( !(((((_la - 27)) & ~0x3f) == 0 && ((1L << (_la - 27)) & 35184372088835L) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(560);
				match(TAGS_WORD);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExtensionDefaultContext extends ParserRuleContext {
		public TerminalNode EXTENSIBILITY_WORD() { return getToken(ASN1Parser.EXTENSIBILITY_WORD, 0); }
		public TerminalNode IMPLIED_WORD() { return getToken(ASN1Parser.IMPLIED_WORD, 0); }
		public ExtensionDefaultContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extensionDefault; }
	}

	public final ExtensionDefaultContext extensionDefault() throws RecognitionException {
		ExtensionDefaultContext _localctx = new ExtensionDefaultContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_extensionDefault);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(565);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==EXTENSIBILITY_WORD) {
				{
				setState(563);
				match(EXTENSIBILITY_WORD);
				setState(564);
				match(IMPLIED_WORD);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ModuleBodyContext extends ParserRuleContext {
		public ExportsContext exports() {
			return getRuleContext(ExportsContext.class,0);
		}
		public ImportsContext imports() {
			return getRuleContext(ImportsContext.class,0);
		}
		public AssignmentListContext assignmentList() {
			return getRuleContext(AssignmentListContext.class,0);
		}
		public ModuleBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_moduleBody; }
	}

	public final ModuleBodyContext moduleBody() throws RecognitionException {
		ModuleBodyContext _localctx = new ModuleBodyContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_moduleBody);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(568);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				{
				setState(567);
				exports();
				}
				break;
			}
			setState(571);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				{
				setState(570);
				imports();
				}
				break;
			}
			setState(574);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				{
				setState(573);
				assignmentList();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExportsContext extends ParserRuleContext {
		public TerminalNode EXPORTS_WORD() { return getToken(ASN1Parser.EXPORTS_WORD, 0); }
		public SymbolsExportedContext symbolsExported() {
			return getRuleContext(SymbolsExportedContext.class,0);
		}
		public TerminalNode ALL_WORD() { return getToken(ASN1Parser.ALL_WORD, 0); }
		public ExportsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exports; }
	}

	public final ExportsContext exports() throws RecognitionException {
		ExportsContext _localctx = new ExportsContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_exports);
		try {
			setState(583);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(576);
				match(EXPORTS_WORD);
				setState(577);
				symbolsExported();
				setState(578);
				match(T__0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(580);
				match(EXPORTS_WORD);
				setState(581);
				match(ALL_WORD);
				setState(582);
				match(T__0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SymbolsExportedContext extends ParserRuleContext {
		public SymbolListContext symbolList() {
			return getRuleContext(SymbolListContext.class,0);
		}
		public SymbolsExportedContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_symbolsExported; }
	}

	public final SymbolsExportedContext symbolsExported() throws RecognitionException {
		SymbolsExportedContext _localctx = new SymbolsExportedContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_symbolsExported);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(586);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				{
				setState(585);
				symbolList();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ImportsContext extends ParserRuleContext {
		public TerminalNode IMPORTS_WORD() { return getToken(ASN1Parser.IMPORTS_WORD, 0); }
		public SymbolsImportedContext symbolsImported() {
			return getRuleContext(SymbolsImportedContext.class,0);
		}
		public ImportsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_imports; }
	}

	public final ImportsContext imports() throws RecognitionException {
		ImportsContext _localctx = new ImportsContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_imports);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(588);
			match(IMPORTS_WORD);
			setState(589);
			symbolsImported();
			setState(590);
			match(T__0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SymbolsImportedContext extends ParserRuleContext {
		public SymbolsFromModuleListContext symbolsFromModuleList() {
			return getRuleContext(SymbolsFromModuleListContext.class,0);
		}
		public SymbolsImportedContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_symbolsImported; }
	}

	public final SymbolsImportedContext symbolsImported() throws RecognitionException {
		SymbolsImportedContext _localctx = new SymbolsImportedContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_symbolsImported);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(593);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				{
				setState(592);
				symbolsFromModuleList();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SymbolsFromModuleListContext extends ParserRuleContext {
		public List<SymbolsFromModuleContext> symbolsFromModule() {
			return getRuleContexts(SymbolsFromModuleContext.class);
		}
		public SymbolsFromModuleContext symbolsFromModule(int i) {
			return getRuleContext(SymbolsFromModuleContext.class,i);
		}
		public SymbolsFromModuleListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_symbolsFromModuleList; }
	}

	public final SymbolsFromModuleListContext symbolsFromModuleList() throws RecognitionException {
		SymbolsFromModuleListContext _localctx = new SymbolsFromModuleListContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_symbolsFromModuleList);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(595);
			symbolsFromModule();
			setState(599);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(596);
					symbolsFromModule();
					}
					} 
				}
				setState(601);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SymbolsFromModuleContext extends ParserRuleContext {
		public SymbolListContext symbolList() {
			return getRuleContext(SymbolListContext.class,0);
		}
		public TerminalNode FROM_WORD() { return getToken(ASN1Parser.FROM_WORD, 0); }
		public GlobalModuleReferenceContext globalModuleReference() {
			return getRuleContext(GlobalModuleReferenceContext.class,0);
		}
		public SymbolsFromModuleContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_symbolsFromModule; }
	}

	public final SymbolsFromModuleContext symbolsFromModule() throws RecognitionException {
		SymbolsFromModuleContext _localctx = new SymbolsFromModuleContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_symbolsFromModule);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(602);
			symbolList();
			setState(603);
			match(FROM_WORD);
			setState(604);
			globalModuleReference();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class GlobalModuleReferenceContext extends ParserRuleContext {
		public ModulereferenceContext modulereference() {
			return getRuleContext(ModulereferenceContext.class,0);
		}
		public AssignedIdentifierContext assignedIdentifier() {
			return getRuleContext(AssignedIdentifierContext.class,0);
		}
		public GlobalModuleReferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_globalModuleReference; }
	}

	public final GlobalModuleReferenceContext globalModuleReference() throws RecognitionException {
		GlobalModuleReferenceContext _localctx = new GlobalModuleReferenceContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_globalModuleReference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(606);
			modulereference();
			setState(607);
			assignedIdentifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AssignedIdentifierContext extends ParserRuleContext {
		public ObjectIdentifierValueContext objectIdentifierValue() {
			return getRuleContext(ObjectIdentifierValueContext.class,0);
		}
		public DefinedValueContext definedValue() {
			return getRuleContext(DefinedValueContext.class,0);
		}
		public AssignedIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignedIdentifier; }
	}

	public final AssignedIdentifierContext assignedIdentifier() throws RecognitionException {
		AssignedIdentifierContext _localctx = new AssignedIdentifierContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_assignedIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(611);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				{
				setState(609);
				objectIdentifierValue();
				}
				break;
			case 2:
				{
				setState(610);
				definedValue();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SymbolListContext extends ParserRuleContext {
		public List<SymbolContext> symbol() {
			return getRuleContexts(SymbolContext.class);
		}
		public SymbolContext symbol(int i) {
			return getRuleContext(SymbolContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public SymbolListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_symbolList; }
	}

	public final SymbolListContext symbolList() throws RecognitionException {
		SymbolListContext _localctx = new SymbolListContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_symbolList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(613);
			symbol();
			setState(618);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(614);
				match(COMMA);
				setState(615);
				symbol();
				}
				}
				setState(620);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SymbolContext extends ParserRuleContext {
		public ReferenceContext reference() {
			return getRuleContext(ReferenceContext.class,0);
		}
		public ParameterizedReferenceContext parameterizedReference() {
			return getRuleContext(ParameterizedReferenceContext.class,0);
		}
		public SymbolContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_symbol; }
	}

	public final SymbolContext symbol() throws RecognitionException {
		SymbolContext _localctx = new SymbolContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_symbol);
		try {
			setState(623);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(621);
				reference();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(622);
				parameterizedReference();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ReferenceContext extends ParserRuleContext {
		public TypereferenceContext typereference() {
			return getRuleContext(TypereferenceContext.class,0);
		}
		public ValuereferenceContext valuereference() {
			return getRuleContext(ValuereferenceContext.class,0);
		}
		public ObjectclassreferenceContext objectclassreference() {
			return getRuleContext(ObjectclassreferenceContext.class,0);
		}
		public ObjectreferenceContext objectreference() {
			return getRuleContext(ObjectreferenceContext.class,0);
		}
		public ObjectsetreferenceContext objectsetreference() {
			return getRuleContext(ObjectsetreferenceContext.class,0);
		}
		public ReferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_reference; }
	}

	public final ReferenceContext reference() throws RecognitionException {
		ReferenceContext _localctx = new ReferenceContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_reference);
		try {
			setState(630);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(625);
				typereference();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(626);
				valuereference();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(627);
				objectclassreference();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(628);
				objectreference();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(629);
				objectsetreference();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AssignmentListContext extends ParserRuleContext {
		public List<AssignmentContext> assignment() {
			return getRuleContexts(AssignmentContext.class);
		}
		public AssignmentContext assignment(int i) {
			return getRuleContext(AssignmentContext.class,i);
		}
		public AssignmentListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignmentList; }
	}

	public final AssignmentListContext assignmentList() throws RecognitionException {
		AssignmentListContext _localctx = new AssignmentListContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_assignmentList);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(632);
			assignment();
			setState(636);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(633);
					assignment();
					}
					} 
				}
				setState(638);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AssignmentContext extends ParserRuleContext {
		public TypeAssignmentContext typeAssignment() {
			return getRuleContext(TypeAssignmentContext.class,0);
		}
		public ValueAssignmentContext valueAssignment() {
			return getRuleContext(ValueAssignmentContext.class,0);
		}
		public ValueSetTypeAssignmentContext valueSetTypeAssignment() {
			return getRuleContext(ValueSetTypeAssignmentContext.class,0);
		}
		public ObjectClassAssignmentContext objectClassAssignment() {
			return getRuleContext(ObjectClassAssignmentContext.class,0);
		}
		public ObjectAssignmentContext objectAssignment() {
			return getRuleContext(ObjectAssignmentContext.class,0);
		}
		public ObjectSetAssignmentContext objectSetAssignment() {
			return getRuleContext(ObjectSetAssignmentContext.class,0);
		}
		public ParameterizedAssignmentContext parameterizedAssignment() {
			return getRuleContext(ParameterizedAssignmentContext.class,0);
		}
		public AssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignment; }
	}

	public final AssignmentContext assignment() throws RecognitionException {
		AssignmentContext _localctx = new AssignmentContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_assignment);
		try {
			setState(646);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(639);
				typeAssignment();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(640);
				valueAssignment();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(641);
				valueSetTypeAssignment();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(642);
				objectClassAssignment();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(643);
				objectAssignment();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(644);
				objectSetAssignment();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(645);
				parameterizedAssignment();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DefinedTypeContext extends ParserRuleContext {
		public ExternalTypeReferenceContext externalTypeReference() {
			return getRuleContext(ExternalTypeReferenceContext.class,0);
		}
		public TypereferenceContext typereference() {
			return getRuleContext(TypereferenceContext.class,0);
		}
		public ParameterizedTypeContext parameterizedType() {
			return getRuleContext(ParameterizedTypeContext.class,0);
		}
		public ParameterizedValueSetTypeContext parameterizedValueSetType() {
			return getRuleContext(ParameterizedValueSetTypeContext.class,0);
		}
		public DefinedTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_definedType; }
	}

	public final DefinedTypeContext definedType() throws RecognitionException {
		DefinedTypeContext _localctx = new DefinedTypeContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_definedType);
		try {
			setState(652);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(648);
				externalTypeReference();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(649);
				typereference();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(650);
				parameterizedType();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(651);
				parameterizedValueSetType();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DefinedValueContext extends ParserRuleContext {
		public ExternalValueReferenceContext externalValueReference() {
			return getRuleContext(ExternalValueReferenceContext.class,0);
		}
		public ValuereferenceContext valuereference() {
			return getRuleContext(ValuereferenceContext.class,0);
		}
		public ParameterizedValueContext parameterizedValue() {
			return getRuleContext(ParameterizedValueContext.class,0);
		}
		public DefinedValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_definedValue; }
	}

	public final DefinedValueContext definedValue() throws RecognitionException {
		DefinedValueContext _localctx = new DefinedValueContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_definedValue);
		try {
			setState(657);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,20,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(654);
				externalValueReference();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(655);
				valuereference();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(656);
				parameterizedValue();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExternalTypeReferenceContext extends ParserRuleContext {
		public ModulereferenceContext modulereference() {
			return getRuleContext(ModulereferenceContext.class,0);
		}
		public TerminalNode DOT() { return getToken(ASN1Parser.DOT, 0); }
		public TypereferenceContext typereference() {
			return getRuleContext(TypereferenceContext.class,0);
		}
		public ExternalTypeReferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_externalTypeReference; }
	}

	public final ExternalTypeReferenceContext externalTypeReference() throws RecognitionException {
		ExternalTypeReferenceContext _localctx = new ExternalTypeReferenceContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_externalTypeReference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(659);
			modulereference();
			setState(660);
			match(DOT);
			setState(661);
			typereference();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExternalValueReferenceContext extends ParserRuleContext {
		public ModulereferenceContext modulereference() {
			return getRuleContext(ModulereferenceContext.class,0);
		}
		public TerminalNode DOT() { return getToken(ASN1Parser.DOT, 0); }
		public ValuereferenceContext valuereference() {
			return getRuleContext(ValuereferenceContext.class,0);
		}
		public ExternalValueReferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_externalValueReference; }
	}

	public final ExternalValueReferenceContext externalValueReference() throws RecognitionException {
		ExternalValueReferenceContext _localctx = new ExternalValueReferenceContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_externalValueReference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(663);
			modulereference();
			setState(664);
			match(DOT);
			setState(665);
			valuereference();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeAssignmentContext extends ParserRuleContext {
		public TypereferenceContext typereference() {
			return getRuleContext(TypereferenceContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(ASN1Parser.ASSIGN, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TypeAssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeAssignment; }
	}

	public final TypeAssignmentContext typeAssignment() throws RecognitionException {
		TypeAssignmentContext _localctx = new TypeAssignmentContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_typeAssignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(667);
			typereference();
			setState(668);
			match(ASSIGN);
			setState(669);
			type();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValueAssignmentContext extends ParserRuleContext {
		public ValuereferenceContext valuereference() {
			return getRuleContext(ValuereferenceContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(ASN1Parser.ASSIGN, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public ValueAssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valueAssignment; }
	}

	public final ValueAssignmentContext valueAssignment() throws RecognitionException {
		ValueAssignmentContext _localctx = new ValueAssignmentContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_valueAssignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(671);
			valuereference();
			setState(672);
			type();
			setState(673);
			match(ASSIGN);
			setState(674);
			value();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValueSetTypeAssignmentContext extends ParserRuleContext {
		public TypereferenceContext typereference() {
			return getRuleContext(TypereferenceContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(ASN1Parser.ASSIGN, 0); }
		public ValueSetContext valueSet() {
			return getRuleContext(ValueSetContext.class,0);
		}
		public ValueSetTypeAssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valueSetTypeAssignment; }
	}

	public final ValueSetTypeAssignmentContext valueSetTypeAssignment() throws RecognitionException {
		ValueSetTypeAssignmentContext _localctx = new ValueSetTypeAssignmentContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_valueSetTypeAssignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(676);
			typereference();
			setState(677);
			type();
			setState(678);
			match(ASSIGN);
			setState(679);
			valueSet();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValueSetContext extends ParserRuleContext {
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public ElementSetSpecsContext elementSetSpecs() {
			return getRuleContext(ElementSetSpecsContext.class,0);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public ValueSetContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valueSet; }
	}

	public final ValueSetContext valueSet() throws RecognitionException {
		ValueSetContext _localctx = new ValueSetContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_valueSet);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(681);
			match(L_BRACE);
			setState(682);
			elementSetSpecs();
			setState(683);
			match(R_BRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeContext extends ParserRuleContext {
		public BuiltinTypeContext builtinType() {
			return getRuleContext(BuiltinTypeContext.class,0);
		}
		public ReferencedTypeContext referencedType() {
			return getRuleContext(ReferencedTypeContext.class,0);
		}
		public ConstrainedTypeContext constrainedType() {
			return getRuleContext(ConstrainedTypeContext.class,0);
		}
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_type);
		try {
			setState(688);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(685);
				builtinType();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(686);
				referencedType();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(687);
				constrainedType();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BuiltinTypeContext extends ParserRuleContext {
		public BitStringTypeContext bitStringType() {
			return getRuleContext(BitStringTypeContext.class,0);
		}
		public BooleanTypeContext booleanType() {
			return getRuleContext(BooleanTypeContext.class,0);
		}
		public CharacterStringTypeContext characterStringType() {
			return getRuleContext(CharacterStringTypeContext.class,0);
		}
		public ChoiceTypeContext choiceType() {
			return getRuleContext(ChoiceTypeContext.class,0);
		}
		public EnumeratedTypeContext enumeratedType() {
			return getRuleContext(EnumeratedTypeContext.class,0);
		}
		public IntegerTypeContext integerType() {
			return getRuleContext(IntegerTypeContext.class,0);
		}
		public NullTypeContext nullType() {
			return getRuleContext(NullTypeContext.class,0);
		}
		public ObjectClassFieldTypeContext objectClassFieldType() {
			return getRuleContext(ObjectClassFieldTypeContext.class,0);
		}
		public ObjectIdentifierTypeContext objectIdentifierType() {
			return getRuleContext(ObjectIdentifierTypeContext.class,0);
		}
		public OctetStringTypeContext octetStringType() {
			return getRuleContext(OctetStringTypeContext.class,0);
		}
		public SequenceTypeContext sequenceType() {
			return getRuleContext(SequenceTypeContext.class,0);
		}
		public SequenceOfTypeContext sequenceOfType() {
			return getRuleContext(SequenceOfTypeContext.class,0);
		}
		public SetTypeContext setType() {
			return getRuleContext(SetTypeContext.class,0);
		}
		public SetOfTypeContext setOfType() {
			return getRuleContext(SetOfTypeContext.class,0);
		}
		public TaggedTypeContext taggedType() {
			return getRuleContext(TaggedTypeContext.class,0);
		}
		public AnyTypeContext anyType() {
			return getRuleContext(AnyTypeContext.class,0);
		}
		public BuiltinTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_builtinType; }
	}

	public final BuiltinTypeContext builtinType() throws RecognitionException {
		BuiltinTypeContext _localctx = new BuiltinTypeContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_builtinType);
		try {
			setState(706);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(690);
				bitStringType();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(691);
				booleanType();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(692);
				characterStringType();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(693);
				choiceType();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(694);
				enumeratedType();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(695);
				integerType();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(696);
				nullType();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(697);
				objectClassFieldType();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(698);
				objectIdentifierType();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(699);
				octetStringType();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(700);
				sequenceType();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(701);
				sequenceOfType();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(702);
				setType();
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(703);
				setOfType();
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(704);
				taggedType();
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(705);
				anyType();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ReferencedTypeContext extends ParserRuleContext {
		public DefinedTypeContext definedType() {
			return getRuleContext(DefinedTypeContext.class,0);
		}
		public UsefulTypeContext usefulType() {
			return getRuleContext(UsefulTypeContext.class,0);
		}
		public TypeFromObjectContext typeFromObject() {
			return getRuleContext(TypeFromObjectContext.class,0);
		}
		public ValueSetFromObjectsContext valueSetFromObjects() {
			return getRuleContext(ValueSetFromObjectsContext.class,0);
		}
		public ReferencedTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_referencedType; }
	}

	public final ReferencedTypeContext referencedType() throws RecognitionException {
		ReferencedTypeContext _localctx = new ReferencedTypeContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_referencedType);
		try {
			setState(712);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,23,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(708);
				definedType();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(709);
				usefulType();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(710);
				typeFromObject();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(711);
				valueSetFromObjects();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NamedTypeContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public NamedTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namedType; }
	}

	public final NamedTypeContext namedType() throws RecognitionException {
		NamedTypeContext _localctx = new NamedTypeContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_namedType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(714);
			identifier();
			setState(715);
			type();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValueContext extends ParserRuleContext {
		public BuiltinValueContext builtinValue() {
			return getRuleContext(BuiltinValueContext.class,0);
		}
		public ReferencedValueContext referencedValue() {
			return getRuleContext(ReferencedValueContext.class,0);
		}
		public ObjectClassFieldValueContext objectClassFieldValue() {
			return getRuleContext(ObjectClassFieldValueContext.class,0);
		}
		public ValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_value; }
	}

	public final ValueContext value() throws RecognitionException {
		ValueContext _localctx = new ValueContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_value);
		try {
			setState(720);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,24,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(717);
				builtinValue();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(718);
				referencedValue();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(719);
				objectClassFieldValue();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BuiltinValueContext extends ParserRuleContext {
		public BitStringValueContext bitStringValue() {
			return getRuleContext(BitStringValueContext.class,0);
		}
		public BooleanValueContext booleanValue() {
			return getRuleContext(BooleanValueContext.class,0);
		}
		public CharacterStringValueContext characterStringValue() {
			return getRuleContext(CharacterStringValueContext.class,0);
		}
		public EnumeratedValueContext enumeratedValue() {
			return getRuleContext(EnumeratedValueContext.class,0);
		}
		public IntegerValueContext integerValue() {
			return getRuleContext(IntegerValueContext.class,0);
		}
		public NullValueContext nullValue() {
			return getRuleContext(NullValueContext.class,0);
		}
		public ObjectIdentifierValueContext objectIdentifierValue() {
			return getRuleContext(ObjectIdentifierValueContext.class,0);
		}
		public OctetStringValueContext octetStringValue() {
			return getRuleContext(OctetStringValueContext.class,0);
		}
		public SequenceValueContext sequenceValue() {
			return getRuleContext(SequenceValueContext.class,0);
		}
		public SequenceOfValueContext sequenceOfValue() {
			return getRuleContext(SequenceOfValueContext.class,0);
		}
		public SetValueContext setValue() {
			return getRuleContext(SetValueContext.class,0);
		}
		public SetOfValueContext setOfValue() {
			return getRuleContext(SetOfValueContext.class,0);
		}
		public BuiltinValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_builtinValue; }
	}

	public final BuiltinValueContext builtinValue() throws RecognitionException {
		BuiltinValueContext _localctx = new BuiltinValueContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_builtinValue);
		try {
			setState(734);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(722);
				bitStringValue();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(723);
				booleanValue();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(724);
				characterStringValue();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(725);
				enumeratedValue();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(726);
				integerValue();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(727);
				nullValue();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(728);
				objectIdentifierValue();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(729);
				octetStringValue();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(730);
				sequenceValue();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(731);
				sequenceOfValue();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(732);
				setValue();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(733);
				setOfValue();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ReferencedValueContext extends ParserRuleContext {
		public DefinedValueContext definedValue() {
			return getRuleContext(DefinedValueContext.class,0);
		}
		public ValueFromObjectContext valueFromObject() {
			return getRuleContext(ValueFromObjectContext.class,0);
		}
		public ReferencedValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_referencedValue; }
	}

	public final ReferencedValueContext referencedValue() throws RecognitionException {
		ReferencedValueContext _localctx = new ReferencedValueContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_referencedValue);
		try {
			setState(738);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,26,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(736);
				definedValue();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(737);
				valueFromObject();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NamedValueContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public NamedValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namedValue; }
	}

	public final NamedValueContext namedValue() throws RecognitionException {
		NamedValueContext _localctx = new NamedValueContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_namedValue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(740);
			identifier();
			setState(741);
			value();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BooleanTypeContext extends ParserRuleContext {
		public TerminalNode BOOLEAN_WORD() { return getToken(ASN1Parser.BOOLEAN_WORD, 0); }
		public BooleanTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_booleanType; }
	}

	public final BooleanTypeContext booleanType() throws RecognitionException {
		BooleanTypeContext _localctx = new BooleanTypeContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_booleanType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(743);
			match(BOOLEAN_WORD);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BooleanValueContext extends ParserRuleContext {
		public TerminalNode TRUE_WORD() { return getToken(ASN1Parser.TRUE_WORD, 0); }
		public TerminalNode FALSE_WORD() { return getToken(ASN1Parser.FALSE_WORD, 0); }
		public BooleanValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_booleanValue; }
	}

	public final BooleanValueContext booleanValue() throws RecognitionException {
		BooleanValueContext _localctx = new BooleanValueContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_booleanValue);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(745);
			_la = _input.LA(1);
			if ( !(_la==FALSE_WORD || _la==TRUE_WORD) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IntegerTypeContext extends ParserRuleContext {
		public TerminalNode INTEGER_WORD() { return getToken(ASN1Parser.INTEGER_WORD, 0); }
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public NamedNumberListContext namedNumberList() {
			return getRuleContext(NamedNumberListContext.class,0);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public IntegerTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_integerType; }
	}

	public final IntegerTypeContext integerType() throws RecognitionException {
		IntegerTypeContext _localctx = new IntegerTypeContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_integerType);
		try {
			setState(753);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,27,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(747);
				match(INTEGER_WORD);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(748);
				match(INTEGER_WORD);
				setState(749);
				match(L_BRACE);
				setState(750);
				namedNumberList();
				setState(751);
				match(R_BRACE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NamedNumberListContext extends ParserRuleContext {
		public List<NamedNumberContext> namedNumber() {
			return getRuleContexts(NamedNumberContext.class);
		}
		public NamedNumberContext namedNumber(int i) {
			return getRuleContext(NamedNumberContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public NamedNumberListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namedNumberList; }
	}

	public final NamedNumberListContext namedNumberList() throws RecognitionException {
		NamedNumberListContext _localctx = new NamedNumberListContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_namedNumberList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(755);
			namedNumber();
			setState(760);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(756);
				match(COMMA);
				setState(757);
				namedNumber();
				}
				}
				setState(762);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NamedNumberContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode L_PAREN() { return getToken(ASN1Parser.L_PAREN, 0); }
		public SignedNumberContext signedNumber() {
			return getRuleContext(SignedNumberContext.class,0);
		}
		public TerminalNode R_PAREN() { return getToken(ASN1Parser.R_PAREN, 0); }
		public DefinedValueContext definedValue() {
			return getRuleContext(DefinedValueContext.class,0);
		}
		public NamedNumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namedNumber; }
	}

	public final NamedNumberContext namedNumber() throws RecognitionException {
		NamedNumberContext _localctx = new NamedNumberContext(_ctx, getState());
		enterRule(_localctx, 86, RULE_namedNumber);
		try {
			setState(773);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,29,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(763);
				identifier();
				setState(764);
				match(L_PAREN);
				setState(765);
				signedNumber();
				setState(766);
				match(R_PAREN);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(768);
				identifier();
				setState(769);
				match(L_PAREN);
				setState(770);
				definedValue();
				setState(771);
				match(R_PAREN);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SignedNumberContext extends ParserRuleContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public TerminalNode MINUS() { return getToken(ASN1Parser.MINUS, 0); }
		public SignedNumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_signedNumber; }
	}

	public final SignedNumberContext signedNumber() throws RecognitionException {
		SignedNumberContext _localctx = new SignedNumberContext(_ctx, getState());
		enterRule(_localctx, 88, RULE_signedNumber);
		try {
			setState(778);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NumberItem:
				enterOuterAlt(_localctx, 1);
				{
				setState(775);
				number();
				}
				break;
			case MINUS:
				enterOuterAlt(_localctx, 2);
				{
				setState(776);
				match(MINUS);
				setState(777);
				number();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IntegerValueContext extends ParserRuleContext {
		public SignedNumberContext signedNumber() {
			return getRuleContext(SignedNumberContext.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public IntegerValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_integerValue; }
	}

	public final IntegerValueContext integerValue() throws RecognitionException {
		IntegerValueContext _localctx = new IntegerValueContext(_ctx, getState());
		enterRule(_localctx, 90, RULE_integerValue);
		try {
			setState(782);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case MINUS:
			case NumberItem:
				enterOuterAlt(_localctx, 1);
				{
				setState(780);
				signedNumber();
				}
				break;
			case IdentifierOrValueItem:
				enterOuterAlt(_localctx, 2);
				{
				setState(781);
				identifier();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EnumeratedTypeContext extends ParserRuleContext {
		public TerminalNode ENUMERATED_WORD() { return getToken(ASN1Parser.ENUMERATED_WORD, 0); }
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public EnumerationsContext enumerations() {
			return getRuleContext(EnumerationsContext.class,0);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public EnumeratedTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumeratedType; }
	}

	public final EnumeratedTypeContext enumeratedType() throws RecognitionException {
		EnumeratedTypeContext _localctx = new EnumeratedTypeContext(_ctx, getState());
		enterRule(_localctx, 92, RULE_enumeratedType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(784);
			match(ENUMERATED_WORD);
			setState(785);
			match(L_BRACE);
			setState(786);
			enumerations();
			setState(787);
			match(R_BRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EnumerationsContext extends ParserRuleContext {
		public RootEnumerationContext rootEnumeration() {
			return getRuleContext(RootEnumerationContext.class,0);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public TerminalNode ELLIPSIS() { return getToken(ASN1Parser.ELLIPSIS, 0); }
		public ExceptionSpecContext exceptionSpec() {
			return getRuleContext(ExceptionSpecContext.class,0);
		}
		public AdditionalEnumerationContext additionalEnumeration() {
			return getRuleContext(AdditionalEnumerationContext.class,0);
		}
		public EnumerationsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumerations; }
	}

	public final EnumerationsContext enumerations() throws RecognitionException {
		EnumerationsContext _localctx = new EnumerationsContext(_ctx, getState());
		enterRule(_localctx, 94, RULE_enumerations);
		try {
			setState(802);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(789);
				rootEnumeration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(790);
				rootEnumeration();
				setState(791);
				match(COMMA);
				setState(792);
				match(ELLIPSIS);
				setState(793);
				exceptionSpec();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(795);
				rootEnumeration();
				setState(796);
				match(COMMA);
				setState(797);
				match(ELLIPSIS);
				setState(798);
				exceptionSpec();
				setState(799);
				match(COMMA);
				setState(800);
				additionalEnumeration();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class RootEnumerationContext extends ParserRuleContext {
		public EnumerationContext enumeration() {
			return getRuleContext(EnumerationContext.class,0);
		}
		public RootEnumerationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rootEnumeration; }
	}

	public final RootEnumerationContext rootEnumeration() throws RecognitionException {
		RootEnumerationContext _localctx = new RootEnumerationContext(_ctx, getState());
		enterRule(_localctx, 96, RULE_rootEnumeration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(804);
			enumeration();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AdditionalEnumerationContext extends ParserRuleContext {
		public EnumerationContext enumeration() {
			return getRuleContext(EnumerationContext.class,0);
		}
		public AdditionalEnumerationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_additionalEnumeration; }
	}

	public final AdditionalEnumerationContext additionalEnumeration() throws RecognitionException {
		AdditionalEnumerationContext _localctx = new AdditionalEnumerationContext(_ctx, getState());
		enterRule(_localctx, 98, RULE_additionalEnumeration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(806);
			enumeration();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EnumerationContext extends ParserRuleContext {
		public List<EnumerationItemContext> enumerationItem() {
			return getRuleContexts(EnumerationItemContext.class);
		}
		public EnumerationItemContext enumerationItem(int i) {
			return getRuleContext(EnumerationItemContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public EnumerationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumeration; }
	}

	public final EnumerationContext enumeration() throws RecognitionException {
		EnumerationContext _localctx = new EnumerationContext(_ctx, getState());
		enterRule(_localctx, 100, RULE_enumeration);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(808);
			enumerationItem();
			setState(813);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,33,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(809);
					match(COMMA);
					setState(810);
					enumerationItem();
					}
					} 
				}
				setState(815);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,33,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EnumerationItemContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public NamedNumberContext namedNumber() {
			return getRuleContext(NamedNumberContext.class,0);
		}
		public EnumerationItemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumerationItem; }
	}

	public final EnumerationItemContext enumerationItem() throws RecognitionException {
		EnumerationItemContext _localctx = new EnumerationItemContext(_ctx, getState());
		enterRule(_localctx, 102, RULE_enumerationItem);
		try {
			setState(818);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(816);
				identifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(817);
				namedNumber();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class EnumeratedValueContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public EnumeratedValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumeratedValue; }
	}

	public final EnumeratedValueContext enumeratedValue() throws RecognitionException {
		EnumeratedValueContext _localctx = new EnumeratedValueContext(_ctx, getState());
		enterRule(_localctx, 104, RULE_enumeratedValue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(820);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BitStringTypeContext extends ParserRuleContext {
		public TerminalNode BIT_WORD() { return getToken(ASN1Parser.BIT_WORD, 0); }
		public TerminalNode STRING_WORD() { return getToken(ASN1Parser.STRING_WORD, 0); }
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public NamedBitListContext namedBitList() {
			return getRuleContext(NamedBitListContext.class,0);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public BitStringTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bitStringType; }
	}

	public final BitStringTypeContext bitStringType() throws RecognitionException {
		BitStringTypeContext _localctx = new BitStringTypeContext(_ctx, getState());
		enterRule(_localctx, 106, RULE_bitStringType);
		try {
			setState(831);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,35,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(822);
				match(BIT_WORD);
				setState(823);
				match(STRING_WORD);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				{
				setState(824);
				match(BIT_WORD);
				setState(825);
				match(STRING_WORD);
				}
				setState(827);
				match(L_BRACE);
				setState(828);
				namedBitList();
				setState(829);
				match(R_BRACE);
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NamedBitListContext extends ParserRuleContext {
		public List<NamedBitContext> namedBit() {
			return getRuleContexts(NamedBitContext.class);
		}
		public NamedBitContext namedBit(int i) {
			return getRuleContext(NamedBitContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public NamedBitListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namedBitList; }
	}

	public final NamedBitListContext namedBitList() throws RecognitionException {
		NamedBitListContext _localctx = new NamedBitListContext(_ctx, getState());
		enterRule(_localctx, 108, RULE_namedBitList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(833);
			namedBit();
			setState(838);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(834);
				match(COMMA);
				setState(835);
				namedBit();
				}
				}
				setState(840);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NamedBitContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode L_PAREN() { return getToken(ASN1Parser.L_PAREN, 0); }
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public TerminalNode R_PAREN() { return getToken(ASN1Parser.R_PAREN, 0); }
		public DefinedValueContext definedValue() {
			return getRuleContext(DefinedValueContext.class,0);
		}
		public NamedBitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namedBit; }
	}

	public final NamedBitContext namedBit() throws RecognitionException {
		NamedBitContext _localctx = new NamedBitContext(_ctx, getState());
		enterRule(_localctx, 110, RULE_namedBit);
		try {
			setState(851);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,37,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(841);
				identifier();
				setState(842);
				match(L_PAREN);
				setState(843);
				number();
				setState(844);
				match(R_PAREN);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(846);
				identifier();
				setState(847);
				match(L_PAREN);
				setState(848);
				definedValue();
				setState(849);
				match(R_PAREN);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BitStringValueContext extends ParserRuleContext {
		public BstringContext bstring() {
			return getRuleContext(BstringContext.class,0);
		}
		public HstringContext hstring() {
			return getRuleContext(HstringContext.class,0);
		}
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public TerminalNode CONTAINING_WORD() { return getToken(ASN1Parser.CONTAINING_WORD, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public BitStringValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bitStringValue; }
	}

	public final BitStringValueContext bitStringValue() throws RecognitionException {
		BitStringValueContext _localctx = new BitStringValueContext(_ctx, getState());
		enterRule(_localctx, 112, RULE_bitStringValue);
		try {
			setState(863);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(853);
				bstring();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(854);
				hstring();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(855);
				match(L_BRACE);
				setState(856);
				identifierList();
				setState(857);
				match(R_BRACE);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(859);
				match(L_BRACE);
				setState(860);
				match(R_BRACE);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(861);
				match(CONTAINING_WORD);
				setState(862);
				value();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IdentifierListContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public IdentifierListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifierList; }
	}

	public final IdentifierListContext identifierList() throws RecognitionException {
		IdentifierListContext _localctx = new IdentifierListContext(_ctx, getState());
		enterRule(_localctx, 114, RULE_identifierList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(865);
			identifier();
			setState(870);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(866);
				match(COMMA);
				setState(867);
				identifier();
				}
				}
				setState(872);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OctetStringTypeContext extends ParserRuleContext {
		public TerminalNode OCTET_WORD() { return getToken(ASN1Parser.OCTET_WORD, 0); }
		public TerminalNode STRING_WORD() { return getToken(ASN1Parser.STRING_WORD, 0); }
		public OctetStringTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_octetStringType; }
	}

	public final OctetStringTypeContext octetStringType() throws RecognitionException {
		OctetStringTypeContext _localctx = new OctetStringTypeContext(_ctx, getState());
		enterRule(_localctx, 116, RULE_octetStringType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(873);
			match(OCTET_WORD);
			setState(874);
			match(STRING_WORD);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OctetStringValueContext extends ParserRuleContext {
		public BstringContext bstring() {
			return getRuleContext(BstringContext.class,0);
		}
		public HstringContext hstring() {
			return getRuleContext(HstringContext.class,0);
		}
		public TerminalNode CONTAINING_WORD() { return getToken(ASN1Parser.CONTAINING_WORD, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public OctetStringValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_octetStringValue; }
	}

	public final OctetStringValueContext octetStringValue() throws RecognitionException {
		OctetStringValueContext _localctx = new OctetStringValueContext(_ctx, getState());
		enterRule(_localctx, 118, RULE_octetStringValue);
		try {
			setState(880);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BStringItem:
				enterOuterAlt(_localctx, 1);
				{
				setState(876);
				bstring();
				}
				break;
			case HStringItem:
				enterOuterAlt(_localctx, 2);
				{
				setState(877);
				hstring();
				}
				break;
			case CONTAINING_WORD:
				enterOuterAlt(_localctx, 3);
				{
				setState(878);
				match(CONTAINING_WORD);
				setState(879);
				value();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NullTypeContext extends ParserRuleContext {
		public TerminalNode NULL_WORD() { return getToken(ASN1Parser.NULL_WORD, 0); }
		public NullTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nullType; }
	}

	public final NullTypeContext nullType() throws RecognitionException {
		NullTypeContext _localctx = new NullTypeContext(_ctx, getState());
		enterRule(_localctx, 120, RULE_nullType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(882);
			match(NULL_WORD);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NullValueContext extends ParserRuleContext {
		public TerminalNode NULL_WORD() { return getToken(ASN1Parser.NULL_WORD, 0); }
		public NullValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nullValue; }
	}

	public final NullValueContext nullValue() throws RecognitionException {
		NullValueContext _localctx = new NullValueContext(_ctx, getState());
		enterRule(_localctx, 122, RULE_nullValue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(884);
			match(NULL_WORD);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SequenceTypeContext extends ParserRuleContext {
		public TerminalNode SEQUENCE_WORD() { return getToken(ASN1Parser.SEQUENCE_WORD, 0); }
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public ExtensionAndExceptionContext extensionAndException() {
			return getRuleContext(ExtensionAndExceptionContext.class,0);
		}
		public ComponentTypeListsContext componentTypeLists() {
			return getRuleContext(ComponentTypeListsContext.class,0);
		}
		public SequenceTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sequenceType; }
	}

	public final SequenceTypeContext sequenceType() throws RecognitionException {
		SequenceTypeContext _localctx = new SequenceTypeContext(_ctx, getState());
		enterRule(_localctx, 124, RULE_sequenceType);
		try {
			setState(899);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,41,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(886);
				match(SEQUENCE_WORD);
				setState(887);
				match(L_BRACE);
				setState(888);
				match(R_BRACE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(889);
				match(SEQUENCE_WORD);
				setState(890);
				match(L_BRACE);
				setState(891);
				extensionAndException();
				setState(892);
				match(R_BRACE);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(894);
				match(SEQUENCE_WORD);
				setState(895);
				match(L_BRACE);
				setState(896);
				componentTypeLists();
				setState(897);
				match(R_BRACE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComponentTypeListsContext extends ParserRuleContext {
		public List<RootComponentTypeListContext> rootComponentTypeList() {
			return getRuleContexts(RootComponentTypeListContext.class);
		}
		public RootComponentTypeListContext rootComponentTypeList(int i) {
			return getRuleContext(RootComponentTypeListContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public ExtensionAndExceptionContext extensionAndException() {
			return getRuleContext(ExtensionAndExceptionContext.class,0);
		}
		public ExtensionAdditionsContext extensionAdditions() {
			return getRuleContext(ExtensionAdditionsContext.class,0);
		}
		public OptionalExtensionMarkerContext optionalExtensionMarker() {
			return getRuleContext(OptionalExtensionMarkerContext.class,0);
		}
		public ExtensionEndMarkerContext extensionEndMarker() {
			return getRuleContext(ExtensionEndMarkerContext.class,0);
		}
		public ComponentTypeListsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_componentTypeLists; }
	}

	public final ComponentTypeListsContext componentTypeLists() throws RecognitionException {
		ComponentTypeListsContext _localctx = new ComponentTypeListsContext(_ctx, getState());
		enterRule(_localctx, 126, RULE_componentTypeLists);
		try {
			setState(926);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,42,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(901);
				rootComponentTypeList();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(902);
				rootComponentTypeList();
				setState(903);
				match(COMMA);
				setState(904);
				extensionAndException();
				setState(905);
				extensionAdditions();
				setState(906);
				optionalExtensionMarker();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(908);
				rootComponentTypeList();
				setState(909);
				match(COMMA);
				setState(910);
				extensionAndException();
				setState(911);
				extensionAdditions();
				setState(912);
				extensionEndMarker();
				setState(913);
				match(COMMA);
				setState(914);
				rootComponentTypeList();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(916);
				extensionAndException();
				setState(917);
				extensionAdditions();
				setState(918);
				extensionEndMarker();
				setState(919);
				match(COMMA);
				setState(920);
				rootComponentTypeList();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(922);
				extensionAndException();
				setState(923);
				extensionAdditions();
				setState(924);
				optionalExtensionMarker();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class RootComponentTypeListContext extends ParserRuleContext {
		public ComponentTypeListContext componentTypeList() {
			return getRuleContext(ComponentTypeListContext.class,0);
		}
		public RootComponentTypeListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rootComponentTypeList; }
	}

	public final RootComponentTypeListContext rootComponentTypeList() throws RecognitionException {
		RootComponentTypeListContext _localctx = new RootComponentTypeListContext(_ctx, getState());
		enterRule(_localctx, 128, RULE_rootComponentTypeList);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(928);
			componentTypeList();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExtensionEndMarkerContext extends ParserRuleContext {
		public TerminalNode COMMA() { return getToken(ASN1Parser.COMMA, 0); }
		public TerminalNode ELLIPSIS() { return getToken(ASN1Parser.ELLIPSIS, 0); }
		public ExtensionEndMarkerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extensionEndMarker; }
	}

	public final ExtensionEndMarkerContext extensionEndMarker() throws RecognitionException {
		ExtensionEndMarkerContext _localctx = new ExtensionEndMarkerContext(_ctx, getState());
		enterRule(_localctx, 130, RULE_extensionEndMarker);
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(930);
			match(COMMA);
			setState(931);
			match(ELLIPSIS);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExtensionAdditionsContext extends ParserRuleContext {
		public TerminalNode COMMA() { return getToken(ASN1Parser.COMMA, 0); }
		public ExtensionAdditionListContext extensionAdditionList() {
			return getRuleContext(ExtensionAdditionListContext.class,0);
		}
		public ExtensionAdditionsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extensionAdditions; }
	}

	public final ExtensionAdditionsContext extensionAdditions() throws RecognitionException {
		ExtensionAdditionsContext _localctx = new ExtensionAdditionsContext(_ctx, getState());
		enterRule(_localctx, 132, RULE_extensionAdditions);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(935);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
			case 1:
				{
				setState(933);
				match(COMMA);
				setState(934);
				extensionAdditionList();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExtensionAdditionListContext extends ParserRuleContext {
		public List<ExtensionAdditionContext> extensionAddition() {
			return getRuleContexts(ExtensionAdditionContext.class);
		}
		public ExtensionAdditionContext extensionAddition(int i) {
			return getRuleContext(ExtensionAdditionContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public ExtensionAdditionListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extensionAdditionList; }
	}

	public final ExtensionAdditionListContext extensionAdditionList() throws RecognitionException {
		ExtensionAdditionListContext _localctx = new ExtensionAdditionListContext(_ctx, getState());
		enterRule(_localctx, 134, RULE_extensionAdditionList);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(937);
			extensionAddition();
			setState(942);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,44,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(938);
					match(COMMA);
					setState(939);
					extensionAddition();
					}
					} 
				}
				setState(944);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,44,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExtensionAdditionContext extends ParserRuleContext {
		public ComponentTypeContext componentType() {
			return getRuleContext(ComponentTypeContext.class,0);
		}
		public ExtensionAdditionGroupContext extensionAdditionGroup() {
			return getRuleContext(ExtensionAdditionGroupContext.class,0);
		}
		public ExtensionAdditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extensionAddition; }
	}

	public final ExtensionAdditionContext extensionAddition() throws RecognitionException {
		ExtensionAdditionContext _localctx = new ExtensionAdditionContext(_ctx, getState());
		enterRule(_localctx, 136, RULE_extensionAddition);
		try {
			setState(947);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COMPONENTS_WORD:
			case IdentifierOrValueItem:
				enterOuterAlt(_localctx, 1);
				{
				setState(945);
				componentType();
				}
				break;
			case LV_BRACKET:
				enterOuterAlt(_localctx, 2);
				{
				setState(946);
				extensionAdditionGroup();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExtensionAdditionGroupContext extends ParserRuleContext {
		public TerminalNode LV_BRACKET() { return getToken(ASN1Parser.LV_BRACKET, 0); }
		public VersionNumberContext versionNumber() {
			return getRuleContext(VersionNumberContext.class,0);
		}
		public ComponentTypeListContext componentTypeList() {
			return getRuleContext(ComponentTypeListContext.class,0);
		}
		public TerminalNode RV_BRACKET() { return getToken(ASN1Parser.RV_BRACKET, 0); }
		public ExtensionAdditionGroupContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extensionAdditionGroup; }
	}

	public final ExtensionAdditionGroupContext extensionAdditionGroup() throws RecognitionException {
		ExtensionAdditionGroupContext _localctx = new ExtensionAdditionGroupContext(_ctx, getState());
		enterRule(_localctx, 138, RULE_extensionAdditionGroup);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(949);
			match(LV_BRACKET);
			setState(950);
			versionNumber();
			setState(951);
			componentTypeList();
			setState(952);
			match(RV_BRACKET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VersionNumberContext extends ParserRuleContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public TerminalNode COLON() { return getToken(ASN1Parser.COLON, 0); }
		public VersionNumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_versionNumber; }
	}

	public final VersionNumberContext versionNumber() throws RecognitionException {
		VersionNumberContext _localctx = new VersionNumberContext(_ctx, getState());
		enterRule(_localctx, 140, RULE_versionNumber);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(957);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NumberItem) {
				{
				setState(954);
				number();
				setState(955);
				match(COLON);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComponentTypeListContext extends ParserRuleContext {
		public List<ComponentTypeContext> componentType() {
			return getRuleContexts(ComponentTypeContext.class);
		}
		public ComponentTypeContext componentType(int i) {
			return getRuleContext(ComponentTypeContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public ComponentTypeListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_componentTypeList; }
	}

	public final ComponentTypeListContext componentTypeList() throws RecognitionException {
		ComponentTypeListContext _localctx = new ComponentTypeListContext(_ctx, getState());
		enterRule(_localctx, 142, RULE_componentTypeList);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(959);
			componentType();
			setState(964);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,47,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(960);
					match(COMMA);
					setState(961);
					componentType();
					}
					} 
				}
				setState(966);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,47,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComponentTypeContext extends ParserRuleContext {
		public NamedTypeContext namedType() {
			return getRuleContext(NamedTypeContext.class,0);
		}
		public TerminalNode OPTIONAL_WORD() { return getToken(ASN1Parser.OPTIONAL_WORD, 0); }
		public TerminalNode DEFAULT_WORD() { return getToken(ASN1Parser.DEFAULT_WORD, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public TerminalNode COMPONENTS_WORD() { return getToken(ASN1Parser.COMPONENTS_WORD, 0); }
		public TerminalNode OF_WORD() { return getToken(ASN1Parser.OF_WORD, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public ComponentTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_componentType; }
	}

	public final ComponentTypeContext componentType() throws RecognitionException {
		ComponentTypeContext _localctx = new ComponentTypeContext(_ctx, getState());
		enterRule(_localctx, 144, RULE_componentType);
		try {
			setState(978);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,48,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(967);
				namedType();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(968);
				namedType();
				setState(969);
				match(OPTIONAL_WORD);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(971);
				namedType();
				setState(972);
				match(DEFAULT_WORD);
				setState(973);
				value();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(975);
				match(COMPONENTS_WORD);
				setState(976);
				match(OF_WORD);
				setState(977);
				type();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SequenceValueContext extends ParserRuleContext {
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public ComponentValueListContext componentValueList() {
			return getRuleContext(ComponentValueListContext.class,0);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public SequenceValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sequenceValue; }
	}

	public final SequenceValueContext sequenceValue() throws RecognitionException {
		SequenceValueContext _localctx = new SequenceValueContext(_ctx, getState());
		enterRule(_localctx, 146, RULE_sequenceValue);
		try {
			setState(986);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,49,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(980);
				match(L_BRACE);
				setState(981);
				componentValueList();
				setState(982);
				match(R_BRACE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(984);
				match(L_BRACE);
				setState(985);
				match(R_BRACE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComponentValueListContext extends ParserRuleContext {
		public List<NamedValueContext> namedValue() {
			return getRuleContexts(NamedValueContext.class);
		}
		public NamedValueContext namedValue(int i) {
			return getRuleContext(NamedValueContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public ComponentValueListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_componentValueList; }
	}

	public final ComponentValueListContext componentValueList() throws RecognitionException {
		ComponentValueListContext _localctx = new ComponentValueListContext(_ctx, getState());
		enterRule(_localctx, 148, RULE_componentValueList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(988);
			namedValue();
			setState(993);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(989);
				match(COMMA);
				setState(990);
				namedValue();
				}
				}
				setState(995);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SequenceOfTypeContext extends ParserRuleContext {
		public TerminalNode SEQUENCE_WORD() { return getToken(ASN1Parser.SEQUENCE_WORD, 0); }
		public TerminalNode OF_WORD() { return getToken(ASN1Parser.OF_WORD, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public NamedTypeContext namedType() {
			return getRuleContext(NamedTypeContext.class,0);
		}
		public SequenceOfTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sequenceOfType; }
	}

	public final SequenceOfTypeContext sequenceOfType() throws RecognitionException {
		SequenceOfTypeContext _localctx = new SequenceOfTypeContext(_ctx, getState());
		enterRule(_localctx, 150, RULE_sequenceOfType);
		try {
			setState(1002);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,51,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(996);
				match(SEQUENCE_WORD);
				setState(997);
				match(OF_WORD);
				setState(998);
				type();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(999);
				match(SEQUENCE_WORD);
				setState(1000);
				match(OF_WORD);
				setState(1001);
				namedType();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SequenceOfValueContext extends ParserRuleContext {
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public ValueListContext valueList() {
			return getRuleContext(ValueListContext.class,0);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public NamedValueListContext namedValueList() {
			return getRuleContext(NamedValueListContext.class,0);
		}
		public SequenceOfValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sequenceOfValue; }
	}

	public final SequenceOfValueContext sequenceOfValue() throws RecognitionException {
		SequenceOfValueContext _localctx = new SequenceOfValueContext(_ctx, getState());
		enterRule(_localctx, 152, RULE_sequenceOfValue);
		try {
			setState(1014);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,52,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1004);
				match(L_BRACE);
				setState(1005);
				valueList();
				setState(1006);
				match(R_BRACE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1008);
				match(L_BRACE);
				setState(1009);
				namedValueList();
				setState(1010);
				match(R_BRACE);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1012);
				match(L_BRACE);
				setState(1013);
				match(R_BRACE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValueListContext extends ParserRuleContext {
		public List<ValueContext> value() {
			return getRuleContexts(ValueContext.class);
		}
		public ValueContext value(int i) {
			return getRuleContext(ValueContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public ValueListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valueList; }
	}

	public final ValueListContext valueList() throws RecognitionException {
		ValueListContext _localctx = new ValueListContext(_ctx, getState());
		enterRule(_localctx, 154, RULE_valueList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1016);
			value();
			setState(1021);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1017);
				match(COMMA);
				setState(1018);
				value();
				}
				}
				setState(1023);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NamedValueListContext extends ParserRuleContext {
		public List<NamedValueContext> namedValue() {
			return getRuleContexts(NamedValueContext.class);
		}
		public NamedValueContext namedValue(int i) {
			return getRuleContext(NamedValueContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public NamedValueListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namedValueList; }
	}

	public final NamedValueListContext namedValueList() throws RecognitionException {
		NamedValueListContext _localctx = new NamedValueListContext(_ctx, getState());
		enterRule(_localctx, 156, RULE_namedValueList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1024);
			namedValue();
			setState(1029);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1025);
				match(COMMA);
				setState(1026);
				namedValue();
				}
				}
				setState(1031);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SetTypeContext extends ParserRuleContext {
		public TerminalNode SET_WORD() { return getToken(ASN1Parser.SET_WORD, 0); }
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public ExtensionAndExceptionContext extensionAndException() {
			return getRuleContext(ExtensionAndExceptionContext.class,0);
		}
		public OptionalExtensionMarkerContext optionalExtensionMarker() {
			return getRuleContext(OptionalExtensionMarkerContext.class,0);
		}
		public ComponentTypeListsContext componentTypeLists() {
			return getRuleContext(ComponentTypeListsContext.class,0);
		}
		public SetTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_setType; }
	}

	public final SetTypeContext setType() throws RecognitionException {
		SetTypeContext _localctx = new SetTypeContext(_ctx, getState());
		enterRule(_localctx, 158, RULE_setType);
		try {
			setState(1046);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,55,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1032);
				match(SET_WORD);
				setState(1033);
				match(L_BRACE);
				setState(1034);
				match(R_BRACE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1035);
				match(SET_WORD);
				setState(1036);
				match(L_BRACE);
				setState(1037);
				extensionAndException();
				setState(1038);
				optionalExtensionMarker();
				setState(1039);
				match(R_BRACE);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1041);
				match(SET_WORD);
				setState(1042);
				match(L_BRACE);
				setState(1043);
				componentTypeLists();
				setState(1044);
				match(R_BRACE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SetValueContext extends ParserRuleContext {
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public ComponentValueListContext componentValueList() {
			return getRuleContext(ComponentValueListContext.class,0);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public SetValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_setValue; }
	}

	public final SetValueContext setValue() throws RecognitionException {
		SetValueContext _localctx = new SetValueContext(_ctx, getState());
		enterRule(_localctx, 160, RULE_setValue);
		try {
			setState(1054);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,56,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1048);
				match(L_BRACE);
				setState(1049);
				componentValueList();
				setState(1050);
				match(R_BRACE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1052);
				match(L_BRACE);
				setState(1053);
				match(R_BRACE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SetOfTypeContext extends ParserRuleContext {
		public TerminalNode SET_WORD() { return getToken(ASN1Parser.SET_WORD, 0); }
		public TerminalNode OF_WORD() { return getToken(ASN1Parser.OF_WORD, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public NamedTypeContext namedType() {
			return getRuleContext(NamedTypeContext.class,0);
		}
		public SetOfTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_setOfType; }
	}

	public final SetOfTypeContext setOfType() throws RecognitionException {
		SetOfTypeContext _localctx = new SetOfTypeContext(_ctx, getState());
		enterRule(_localctx, 162, RULE_setOfType);
		try {
			setState(1062);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,57,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1056);
				match(SET_WORD);
				setState(1057);
				match(OF_WORD);
				setState(1058);
				type();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1059);
				match(SET_WORD);
				setState(1060);
				match(OF_WORD);
				setState(1061);
				namedType();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SetOfValueContext extends ParserRuleContext {
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public ValueListContext valueList() {
			return getRuleContext(ValueListContext.class,0);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public NamedValueListContext namedValueList() {
			return getRuleContext(NamedValueListContext.class,0);
		}
		public SetOfValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_setOfValue; }
	}

	public final SetOfValueContext setOfValue() throws RecognitionException {
		SetOfValueContext _localctx = new SetOfValueContext(_ctx, getState());
		enterRule(_localctx, 164, RULE_setOfValue);
		try {
			setState(1074);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,58,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1064);
				match(L_BRACE);
				setState(1065);
				valueList();
				setState(1066);
				match(R_BRACE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1068);
				match(L_BRACE);
				setState(1069);
				namedValueList();
				setState(1070);
				match(R_BRACE);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1072);
				match(L_BRACE);
				setState(1073);
				match(R_BRACE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ChoiceTypeContext extends ParserRuleContext {
		public TerminalNode CHOICE_WORD() { return getToken(ASN1Parser.CHOICE_WORD, 0); }
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public AlternativeTypeListsContext alternativeTypeLists() {
			return getRuleContext(AlternativeTypeListsContext.class,0);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public ChoiceTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_choiceType; }
	}

	public final ChoiceTypeContext choiceType() throws RecognitionException {
		ChoiceTypeContext _localctx = new ChoiceTypeContext(_ctx, getState());
		enterRule(_localctx, 166, RULE_choiceType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1076);
			match(CHOICE_WORD);
			setState(1077);
			match(L_BRACE);
			setState(1078);
			alternativeTypeLists();
			setState(1079);
			match(R_BRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AlternativeTypeListsContext extends ParserRuleContext {
		public RootAlternativeTypeListContext rootAlternativeTypeList() {
			return getRuleContext(RootAlternativeTypeListContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(ASN1Parser.COMMA, 0); }
		public ExtensionAndExceptionContext extensionAndException() {
			return getRuleContext(ExtensionAndExceptionContext.class,0);
		}
		public ExtensionAdditionAlternativesContext extensionAdditionAlternatives() {
			return getRuleContext(ExtensionAdditionAlternativesContext.class,0);
		}
		public OptionalExtensionMarkerContext optionalExtensionMarker() {
			return getRuleContext(OptionalExtensionMarkerContext.class,0);
		}
		public AlternativeTypeListsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_alternativeTypeLists; }
	}

	public final AlternativeTypeListsContext alternativeTypeLists() throws RecognitionException {
		AlternativeTypeListsContext _localctx = new AlternativeTypeListsContext(_ctx, getState());
		enterRule(_localctx, 168, RULE_alternativeTypeLists);
		try {
			setState(1088);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,59,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1081);
				rootAlternativeTypeList();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1082);
				rootAlternativeTypeList();
				setState(1083);
				match(COMMA);
				setState(1084);
				extensionAndException();
				setState(1085);
				extensionAdditionAlternatives();
				setState(1086);
				optionalExtensionMarker();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class RootAlternativeTypeListContext extends ParserRuleContext {
		public AlternativeTypeListContext alternativeTypeList() {
			return getRuleContext(AlternativeTypeListContext.class,0);
		}
		public RootAlternativeTypeListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rootAlternativeTypeList; }
	}

	public final RootAlternativeTypeListContext rootAlternativeTypeList() throws RecognitionException {
		RootAlternativeTypeListContext _localctx = new RootAlternativeTypeListContext(_ctx, getState());
		enterRule(_localctx, 170, RULE_rootAlternativeTypeList);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1090);
			alternativeTypeList();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExtensionAdditionAlternativesContext extends ParserRuleContext {
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public List<ExtensionAdditionAlternativesListContext> extensionAdditionAlternativesList() {
			return getRuleContexts(ExtensionAdditionAlternativesListContext.class);
		}
		public ExtensionAdditionAlternativesListContext extensionAdditionAlternativesList(int i) {
			return getRuleContext(ExtensionAdditionAlternativesListContext.class,i);
		}
		public ExtensionAdditionAlternativesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extensionAdditionAlternatives; }
	}

	public final ExtensionAdditionAlternativesContext extensionAdditionAlternatives() throws RecognitionException {
		ExtensionAdditionAlternativesContext _localctx = new ExtensionAdditionAlternativesContext(_ctx, getState());
		enterRule(_localctx, 172, RULE_extensionAdditionAlternatives);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1096);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,60,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1092);
					match(COMMA);
					setState(1093);
					extensionAdditionAlternativesList(0);
					}
					} 
				}
				setState(1098);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,60,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExtensionAdditionAlternativesListContext extends ParserRuleContext {
		public ExtensionAdditionAlternativeContext extensionAdditionAlternative() {
			return getRuleContext(ExtensionAdditionAlternativeContext.class,0);
		}
		public ExtensionAdditionAlternativesListContext extensionAdditionAlternativesList() {
			return getRuleContext(ExtensionAdditionAlternativesListContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(ASN1Parser.COMMA, 0); }
		public ExtensionAdditionAlternativesListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extensionAdditionAlternativesList; }
	}

	public final ExtensionAdditionAlternativesListContext extensionAdditionAlternativesList() throws RecognitionException {
		return extensionAdditionAlternativesList(0);
	}

	private ExtensionAdditionAlternativesListContext extensionAdditionAlternativesList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExtensionAdditionAlternativesListContext _localctx = new ExtensionAdditionAlternativesListContext(_ctx, _parentState);
		ExtensionAdditionAlternativesListContext _prevctx = _localctx;
		int _startState = 174;
		enterRecursionRule(_localctx, 174, RULE_extensionAdditionAlternativesList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1100);
			extensionAdditionAlternative();
			}
			_ctx.stop = _input.LT(-1);
			setState(1107);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,61,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ExtensionAdditionAlternativesListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_extensionAdditionAlternativesList);
					setState(1102);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1103);
					match(COMMA);
					setState(1104);
					extensionAdditionAlternative();
					}
					} 
				}
				setState(1109);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,61,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExtensionAdditionAlternativeContext extends ParserRuleContext {
		public ExtensionAdditionAlternativesGroupContext extensionAdditionAlternativesGroup() {
			return getRuleContext(ExtensionAdditionAlternativesGroupContext.class,0);
		}
		public NamedTypeContext namedType() {
			return getRuleContext(NamedTypeContext.class,0);
		}
		public ExtensionAdditionAlternativeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extensionAdditionAlternative; }
	}

	public final ExtensionAdditionAlternativeContext extensionAdditionAlternative() throws RecognitionException {
		ExtensionAdditionAlternativeContext _localctx = new ExtensionAdditionAlternativeContext(_ctx, getState());
		enterRule(_localctx, 176, RULE_extensionAdditionAlternative);
		try {
			setState(1112);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LV_BRACKET:
				enterOuterAlt(_localctx, 1);
				{
				setState(1110);
				extensionAdditionAlternativesGroup();
				}
				break;
			case IdentifierOrValueItem:
				enterOuterAlt(_localctx, 2);
				{
				setState(1111);
				namedType();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExtensionAdditionAlternativesGroupContext extends ParserRuleContext {
		public TerminalNode LV_BRACKET() { return getToken(ASN1Parser.LV_BRACKET, 0); }
		public VersionNumberContext versionNumber() {
			return getRuleContext(VersionNumberContext.class,0);
		}
		public AlternativeTypeListContext alternativeTypeList() {
			return getRuleContext(AlternativeTypeListContext.class,0);
		}
		public TerminalNode RV_BRACKET() { return getToken(ASN1Parser.RV_BRACKET, 0); }
		public ExtensionAdditionAlternativesGroupContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extensionAdditionAlternativesGroup; }
	}

	public final ExtensionAdditionAlternativesGroupContext extensionAdditionAlternativesGroup() throws RecognitionException {
		ExtensionAdditionAlternativesGroupContext _localctx = new ExtensionAdditionAlternativesGroupContext(_ctx, getState());
		enterRule(_localctx, 178, RULE_extensionAdditionAlternativesGroup);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1114);
			match(LV_BRACKET);
			setState(1115);
			versionNumber();
			setState(1116);
			alternativeTypeList();
			setState(1117);
			match(RV_BRACKET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AlternativeTypeListContext extends ParserRuleContext {
		public List<NamedTypeContext> namedType() {
			return getRuleContexts(NamedTypeContext.class);
		}
		public NamedTypeContext namedType(int i) {
			return getRuleContext(NamedTypeContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public AlternativeTypeListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_alternativeTypeList; }
	}

	public final AlternativeTypeListContext alternativeTypeList() throws RecognitionException {
		AlternativeTypeListContext _localctx = new AlternativeTypeListContext(_ctx, getState());
		enterRule(_localctx, 180, RULE_alternativeTypeList);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1119);
			namedType();
			setState(1124);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,63,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1120);
					match(COMMA);
					setState(1121);
					namedType();
					}
					} 
				}
				setState(1126);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,63,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TaggedTypeContext extends ParserRuleContext {
		public TagContext tag() {
			return getRuleContext(TagContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode IMPLICIT_WORD() { return getToken(ASN1Parser.IMPLICIT_WORD, 0); }
		public TerminalNode EXPLICIT_WORD() { return getToken(ASN1Parser.EXPLICIT_WORD, 0); }
		public TaggedTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_taggedType; }
	}

	public final TaggedTypeContext taggedType() throws RecognitionException {
		TaggedTypeContext _localctx = new TaggedTypeContext(_ctx, getState());
		enterRule(_localctx, 182, RULE_taggedType);
		try {
			setState(1138);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,64,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1127);
				tag();
				setState(1128);
				type();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1130);
				tag();
				setState(1131);
				match(IMPLICIT_WORD);
				setState(1132);
				type();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1134);
				tag();
				setState(1135);
				match(EXPLICIT_WORD);
				setState(1136);
				type();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TagContext extends ParserRuleContext {
		public ClassPContext classP() {
			return getRuleContext(ClassPContext.class,0);
		}
		public ClassNumberContext classNumber() {
			return getRuleContext(ClassNumberContext.class,0);
		}
		public TagContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tag; }
	}

	public final TagContext tag() throws RecognitionException {
		TagContext _localctx = new TagContext(_ctx, getState());
		enterRule(_localctx, 184, RULE_tag);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1140);
			match(T__1);
			setState(1141);
			classP();
			setState(1142);
			classNumber();
			setState(1143);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ClassNumberContext extends ParserRuleContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public DefinedValueContext definedValue() {
			return getRuleContext(DefinedValueContext.class,0);
		}
		public ClassNumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classNumber; }
	}

	public final ClassNumberContext classNumber() throws RecognitionException {
		ClassNumberContext _localctx = new ClassNumberContext(_ctx, getState());
		enterRule(_localctx, 186, RULE_classNumber);
		try {
			setState(1147);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NumberItem:
				enterOuterAlt(_localctx, 1);
				{
				setState(1145);
				number();
				}
				break;
			case IdentifierOrValueItem:
			case ReferenceItem:
				enterOuterAlt(_localctx, 2);
				{
				setState(1146);
				definedValue();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ClassPContext extends ParserRuleContext {
		public TerminalNode UNIVERSAL_WORD() { return getToken(ASN1Parser.UNIVERSAL_WORD, 0); }
		public TerminalNode APPLICATION_WORD() { return getToken(ASN1Parser.APPLICATION_WORD, 0); }
		public TerminalNode PRIVATE_WORD() { return getToken(ASN1Parser.PRIVATE_WORD, 0); }
		public ClassPContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classP; }
	}

	public final ClassPContext classP() throws RecognitionException {
		ClassPContext _localctx = new ClassPContext(_ctx, getState());
		enterRule(_localctx, 188, RULE_classP);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1150);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 23)) & ~0x3f) == 0 && ((1L << (_la - 23)) & 4611694814520410113L) != 0)) {
				{
				setState(1149);
				_la = _input.LA(1);
				if ( !(((((_la - 23)) & ~0x3f) == 0 && ((1L << (_la - 23)) & 4611694814520410113L) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectIdentifierTypeContext extends ParserRuleContext {
		public TerminalNode OBJECT_WORD() { return getToken(ASN1Parser.OBJECT_WORD, 0); }
		public TerminalNode IDENTIFIER_WORD() { return getToken(ASN1Parser.IDENTIFIER_WORD, 0); }
		public ObjectIdentifierTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectIdentifierType; }
	}

	public final ObjectIdentifierTypeContext objectIdentifierType() throws RecognitionException {
		ObjectIdentifierTypeContext _localctx = new ObjectIdentifierTypeContext(_ctx, getState());
		enterRule(_localctx, 190, RULE_objectIdentifierType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1152);
			match(OBJECT_WORD);
			setState(1153);
			match(IDENTIFIER_WORD);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectIdentifierValueContext extends ParserRuleContext {
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public ObjIdComponentsListContext objIdComponentsList() {
			return getRuleContext(ObjIdComponentsListContext.class,0);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public DefinedValueContext definedValue() {
			return getRuleContext(DefinedValueContext.class,0);
		}
		public ObjectIdentifierValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectIdentifierValue; }
	}

	public final ObjectIdentifierValueContext objectIdentifierValue() throws RecognitionException {
		ObjectIdentifierValueContext _localctx = new ObjectIdentifierValueContext(_ctx, getState());
		enterRule(_localctx, 192, RULE_objectIdentifierValue);
		try {
			setState(1164);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,67,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1155);
				match(L_BRACE);
				setState(1156);
				objIdComponentsList();
				setState(1157);
				match(R_BRACE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1159);
				match(L_BRACE);
				setState(1160);
				definedValue();
				setState(1161);
				objIdComponentsList();
				setState(1162);
				match(R_BRACE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjIdComponentsListContext extends ParserRuleContext {
		public ObjIdComponentsContext objIdComponents;
		public List<ObjIdComponentsContext> values = new ArrayList<ObjIdComponentsContext>();
		public List<ObjIdComponentsContext> objIdComponents() {
			return getRuleContexts(ObjIdComponentsContext.class);
		}
		public ObjIdComponentsContext objIdComponents(int i) {
			return getRuleContext(ObjIdComponentsContext.class,i);
		}
		public ObjIdComponentsListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objIdComponentsList; }
	}

	public final ObjIdComponentsListContext objIdComponentsList() throws RecognitionException {
		ObjIdComponentsListContext _localctx = new ObjIdComponentsListContext(_ctx, getState());
		enterRule(_localctx, 194, RULE_objIdComponentsList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1166);
			((ObjIdComponentsListContext)_localctx).objIdComponents = objIdComponents();
			((ObjIdComponentsListContext)_localctx).values.add(((ObjIdComponentsListContext)_localctx).objIdComponents);
			setState(1170);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 106)) & ~0x3f) == 0 && ((1L << (_la - 106)) & 49L) != 0)) {
				{
				{
				setState(1167);
				((ObjIdComponentsListContext)_localctx).objIdComponents = objIdComponents();
				((ObjIdComponentsListContext)_localctx).values.add(((ObjIdComponentsListContext)_localctx).objIdComponents);
				}
				}
				setState(1172);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjIdComponentsContext extends ParserRuleContext {
		public NameFormContext nameForm() {
			return getRuleContext(NameFormContext.class,0);
		}
		public NumberFormContext numberForm() {
			return getRuleContext(NumberFormContext.class,0);
		}
		public NameAndNumberFormContext nameAndNumberForm() {
			return getRuleContext(NameAndNumberFormContext.class,0);
		}
		public DefinedValueContext definedValue() {
			return getRuleContext(DefinedValueContext.class,0);
		}
		public ObjIdComponentsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objIdComponents; }
	}

	public final ObjIdComponentsContext objIdComponents() throws RecognitionException {
		ObjIdComponentsContext _localctx = new ObjIdComponentsContext(_ctx, getState());
		enterRule(_localctx, 196, RULE_objIdComponents);
		try {
			setState(1177);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,69,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1173);
				nameForm();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1174);
				numberForm();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1175);
				nameAndNumberForm();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1176);
				definedValue();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NameFormContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public NameFormContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nameForm; }
	}

	public final NameFormContext nameForm() throws RecognitionException {
		NameFormContext _localctx = new NameFormContext(_ctx, getState());
		enterRule(_localctx, 198, RULE_nameForm);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1179);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NumberFormContext extends ParserRuleContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public DefinedValueContext definedValue() {
			return getRuleContext(DefinedValueContext.class,0);
		}
		public NumberFormContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_numberForm; }
	}

	public final NumberFormContext numberForm() throws RecognitionException {
		NumberFormContext _localctx = new NumberFormContext(_ctx, getState());
		enterRule(_localctx, 200, RULE_numberForm);
		try {
			setState(1183);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NumberItem:
				enterOuterAlt(_localctx, 1);
				{
				setState(1181);
				number();
				}
				break;
			case IdentifierOrValueItem:
			case ReferenceItem:
				enterOuterAlt(_localctx, 2);
				{
				setState(1182);
				definedValue();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NameAndNumberFormContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode L_PAREN() { return getToken(ASN1Parser.L_PAREN, 0); }
		public NumberFormContext numberForm() {
			return getRuleContext(NumberFormContext.class,0);
		}
		public TerminalNode R_PAREN() { return getToken(ASN1Parser.R_PAREN, 0); }
		public NameAndNumberFormContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nameAndNumberForm; }
	}

	public final NameAndNumberFormContext nameAndNumberForm() throws RecognitionException {
		NameAndNumberFormContext _localctx = new NameAndNumberFormContext(_ctx, getState());
		enterRule(_localctx, 202, RULE_nameAndNumberForm);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1185);
			identifier();
			setState(1186);
			match(L_PAREN);
			setState(1187);
			numberForm();
			setState(1188);
			match(R_PAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExtensionAndExceptionContext extends ParserRuleContext {
		public TerminalNode ELLIPSIS() { return getToken(ASN1Parser.ELLIPSIS, 0); }
		public ExceptionSpecContext exceptionSpec() {
			return getRuleContext(ExceptionSpecContext.class,0);
		}
		public ExtensionAndExceptionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_extensionAndException; }
	}

	public final ExtensionAndExceptionContext extensionAndException() throws RecognitionException {
		ExtensionAndExceptionContext _localctx = new ExtensionAndExceptionContext(_ctx, getState());
		enterRule(_localctx, 204, RULE_extensionAndException);
		try {
			setState(1193);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,71,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1190);
				match(ELLIPSIS);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1191);
				match(ELLIPSIS);
				setState(1192);
				exceptionSpec();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExceptionSpecContext extends ParserRuleContext {
		public ExceptionIdentificationContext exceptionIdentification() {
			return getRuleContext(ExceptionIdentificationContext.class,0);
		}
		public ExceptionSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exceptionSpec; }
	}

	public final ExceptionSpecContext exceptionSpec() throws RecognitionException {
		ExceptionSpecContext _localctx = new ExceptionSpecContext(_ctx, getState());
		enterRule(_localctx, 206, RULE_exceptionSpec);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1197);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__3) {
				{
				setState(1195);
				match(T__3);
				setState(1196);
				exceptionIdentification();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExceptionIdentificationContext extends ParserRuleContext {
		public SignedNumberContext signedNumber() {
			return getRuleContext(SignedNumberContext.class,0);
		}
		public DefinedValueContext definedValue() {
			return getRuleContext(DefinedValueContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode COLON() { return getToken(ASN1Parser.COLON, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public ExceptionIdentificationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exceptionIdentification; }
	}

	public final ExceptionIdentificationContext exceptionIdentification() throws RecognitionException {
		ExceptionIdentificationContext _localctx = new ExceptionIdentificationContext(_ctx, getState());
		enterRule(_localctx, 208, RULE_exceptionIdentification);
		try {
			setState(1205);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,73,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1199);
				signedNumber();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1200);
				definedValue();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1201);
				type();
				setState(1202);
				match(COLON);
				setState(1203);
				value();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OptionalExtensionMarkerContext extends ParserRuleContext {
		public TerminalNode COMMA() { return getToken(ASN1Parser.COMMA, 0); }
		public TerminalNode ELLIPSIS() { return getToken(ASN1Parser.ELLIPSIS, 0); }
		public OptionalExtensionMarkerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_optionalExtensionMarker; }
	}

	public final OptionalExtensionMarkerContext optionalExtensionMarker() throws RecognitionException {
		OptionalExtensionMarkerContext _localctx = new OptionalExtensionMarkerContext(_ctx, getState());
		enterRule(_localctx, 210, RULE_optionalExtensionMarker);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1209);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(1207);
				match(COMMA);
				setState(1208);
				match(ELLIPSIS);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CharacterStringTypeContext extends ParserRuleContext {
		public RestrictedCharacterStringTypeContext restrictedCharacterStringType() {
			return getRuleContext(RestrictedCharacterStringTypeContext.class,0);
		}
		public UnrestrictedCharacterStringTypeContext unrestrictedCharacterStringType() {
			return getRuleContext(UnrestrictedCharacterStringTypeContext.class,0);
		}
		public CharacterStringTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_characterStringType; }
	}

	public final CharacterStringTypeContext characterStringType() throws RecognitionException {
		CharacterStringTypeContext _localctx = new CharacterStringTypeContext(_ctx, getState());
		enterRule(_localctx, 212, RULE_characterStringType);
		try {
			setState(1213);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ISO646String_WORD:
			case T61String_WORD:
			case BMPString_WORD:
			case NumericString_WORD:
			case TeletexString_WORD:
			case GeneralString_WORD:
			case GraphicString_WORD:
			case IA5String_WORD:
			case UniversalString_WORD:
			case UTF8String_WORD:
			case PrintableString_WORD:
			case VideotexString_WORD:
			case VisibleString_WORD:
				enterOuterAlt(_localctx, 1);
				{
				setState(1211);
				restrictedCharacterStringType();
				}
				break;
			case CHARACTER_WORD:
				enterOuterAlt(_localctx, 2);
				{
				setState(1212);
				unrestrictedCharacterStringType();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CharacterStringValueContext extends ParserRuleContext {
		public RestrictedCharacterStringValueContext restrictedCharacterStringValue() {
			return getRuleContext(RestrictedCharacterStringValueContext.class,0);
		}
		public CharacterStringValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_characterStringValue; }
	}

	public final CharacterStringValueContext characterStringValue() throws RecognitionException {
		CharacterStringValueContext _localctx = new CharacterStringValueContext(_ctx, getState());
		enterRule(_localctx, 214, RULE_characterStringValue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1215);
			restrictedCharacterStringValue();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class RestrictedCharacterStringTypeContext extends ParserRuleContext {
		public TerminalNode BMPString_WORD() { return getToken(ASN1Parser.BMPString_WORD, 0); }
		public TerminalNode GeneralString_WORD() { return getToken(ASN1Parser.GeneralString_WORD, 0); }
		public TerminalNode GraphicString_WORD() { return getToken(ASN1Parser.GraphicString_WORD, 0); }
		public TerminalNode IA5String_WORD() { return getToken(ASN1Parser.IA5String_WORD, 0); }
		public TerminalNode ISO646String_WORD() { return getToken(ASN1Parser.ISO646String_WORD, 0); }
		public TerminalNode NumericString_WORD() { return getToken(ASN1Parser.NumericString_WORD, 0); }
		public TerminalNode PrintableString_WORD() { return getToken(ASN1Parser.PrintableString_WORD, 0); }
		public TerminalNode TeletexString_WORD() { return getToken(ASN1Parser.TeletexString_WORD, 0); }
		public TerminalNode T61String_WORD() { return getToken(ASN1Parser.T61String_WORD, 0); }
		public TerminalNode UniversalString_WORD() { return getToken(ASN1Parser.UniversalString_WORD, 0); }
		public TerminalNode UTF8String_WORD() { return getToken(ASN1Parser.UTF8String_WORD, 0); }
		public TerminalNode VideotexString_WORD() { return getToken(ASN1Parser.VideotexString_WORD, 0); }
		public TerminalNode VisibleString_WORD() { return getToken(ASN1Parser.VisibleString_WORD, 0); }
		public RestrictedCharacterStringTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_restrictedCharacterStringType; }
	}

	public final RestrictedCharacterStringTypeContext restrictedCharacterStringType() throws RecognitionException {
		RestrictedCharacterStringTypeContext _localctx = new RestrictedCharacterStringTypeContext(_ctx, getState());
		enterRule(_localctx, 216, RULE_restrictedCharacterStringType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1217);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 1225052491048026112L) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & 4603969L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class RestrictedCharacterStringValueContext extends ParserRuleContext {
		public CstringContext cstring() {
			return getRuleContext(CstringContext.class,0);
		}
		public CharacterStringListContext characterStringList() {
			return getRuleContext(CharacterStringListContext.class,0);
		}
		public QuadrupleContext quadruple() {
			return getRuleContext(QuadrupleContext.class,0);
		}
		public TupleContext tuple() {
			return getRuleContext(TupleContext.class,0);
		}
		public RestrictedCharacterStringValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_restrictedCharacterStringValue; }
	}

	public final RestrictedCharacterStringValueContext restrictedCharacterStringValue() throws RecognitionException {
		RestrictedCharacterStringValueContext _localctx = new RestrictedCharacterStringValueContext(_ctx, getState());
		enterRule(_localctx, 218, RULE_restrictedCharacterStringValue);
		try {
			setState(1223);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,76,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1219);
				cstring();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1220);
				characterStringList();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1221);
				quadruple();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1222);
				tuple();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CharacterStringListContext extends ParserRuleContext {
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public CharSymsContext charSyms() {
			return getRuleContext(CharSymsContext.class,0);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public CharacterStringListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_characterStringList; }
	}

	public final CharacterStringListContext characterStringList() throws RecognitionException {
		CharacterStringListContext _localctx = new CharacterStringListContext(_ctx, getState());
		enterRule(_localctx, 220, RULE_characterStringList);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1225);
			match(L_BRACE);
			setState(1226);
			charSyms();
			setState(1227);
			match(R_BRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CharSymsContext extends ParserRuleContext {
		public List<CharsDefnContext> charsDefn() {
			return getRuleContexts(CharsDefnContext.class);
		}
		public CharsDefnContext charsDefn(int i) {
			return getRuleContext(CharsDefnContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public CharSymsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_charSyms; }
	}

	public final CharSymsContext charSyms() throws RecognitionException {
		CharSymsContext _localctx = new CharSymsContext(_ctx, getState());
		enterRule(_localctx, 222, RULE_charSyms);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1229);
			charsDefn();
			setState(1234);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1230);
				match(COMMA);
				setState(1231);
				charsDefn();
				}
				}
				setState(1236);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CharsDefnContext extends ParserRuleContext {
		public CstringContext cstring() {
			return getRuleContext(CstringContext.class,0);
		}
		public QuadrupleContext quadruple() {
			return getRuleContext(QuadrupleContext.class,0);
		}
		public TupleContext tuple() {
			return getRuleContext(TupleContext.class,0);
		}
		public DefinedValueContext definedValue() {
			return getRuleContext(DefinedValueContext.class,0);
		}
		public CharsDefnContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_charsDefn; }
	}

	public final CharsDefnContext charsDefn() throws RecognitionException {
		CharsDefnContext _localctx = new CharsDefnContext(_ctx, getState());
		enterRule(_localctx, 224, RULE_charsDefn);
		try {
			setState(1241);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,78,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1237);
				cstring();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1238);
				quadruple();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1239);
				tuple();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1240);
				definedValue();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class QuadrupleContext extends ParserRuleContext {
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public GroupContext group() {
			return getRuleContext(GroupContext.class,0);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public PlaneContext plane() {
			return getRuleContext(PlaneContext.class,0);
		}
		public RowContext row() {
			return getRuleContext(RowContext.class,0);
		}
		public CellContext cell() {
			return getRuleContext(CellContext.class,0);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public QuadrupleContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_quadruple; }
	}

	public final QuadrupleContext quadruple() throws RecognitionException {
		QuadrupleContext _localctx = new QuadrupleContext(_ctx, getState());
		enterRule(_localctx, 226, RULE_quadruple);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1243);
			match(L_BRACE);
			setState(1244);
			group();
			setState(1245);
			match(COMMA);
			setState(1246);
			plane();
			setState(1247);
			match(COMMA);
			setState(1248);
			row();
			setState(1249);
			match(COMMA);
			setState(1250);
			cell();
			setState(1251);
			match(R_BRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class GroupContext extends ParserRuleContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public GroupContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_group; }
	}

	public final GroupContext group() throws RecognitionException {
		GroupContext _localctx = new GroupContext(_ctx, getState());
		enterRule(_localctx, 228, RULE_group);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1253);
			number();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PlaneContext extends ParserRuleContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public PlaneContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_plane; }
	}

	public final PlaneContext plane() throws RecognitionException {
		PlaneContext _localctx = new PlaneContext(_ctx, getState());
		enterRule(_localctx, 230, RULE_plane);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1255);
			number();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class RowContext extends ParserRuleContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public RowContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_row; }
	}

	public final RowContext row() throws RecognitionException {
		RowContext _localctx = new RowContext(_ctx, getState());
		enterRule(_localctx, 232, RULE_row);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1257);
			number();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CellContext extends ParserRuleContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public CellContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cell; }
	}

	public final CellContext cell() throws RecognitionException {
		CellContext _localctx = new CellContext(_ctx, getState());
		enterRule(_localctx, 234, RULE_cell);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1259);
			number();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TupleContext extends ParserRuleContext {
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public TableColumnContext tableColumn() {
			return getRuleContext(TableColumnContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(ASN1Parser.COMMA, 0); }
		public TableRowContext tableRow() {
			return getRuleContext(TableRowContext.class,0);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public TupleContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tuple; }
	}

	public final TupleContext tuple() throws RecognitionException {
		TupleContext _localctx = new TupleContext(_ctx, getState());
		enterRule(_localctx, 236, RULE_tuple);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1261);
			match(L_BRACE);
			setState(1262);
			tableColumn();
			setState(1263);
			match(COMMA);
			setState(1264);
			tableRow();
			setState(1265);
			match(R_BRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TableColumnContext extends ParserRuleContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public TableColumnContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tableColumn; }
	}

	public final TableColumnContext tableColumn() throws RecognitionException {
		TableColumnContext _localctx = new TableColumnContext(_ctx, getState());
		enterRule(_localctx, 238, RULE_tableColumn);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1267);
			number();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TableRowContext extends ParserRuleContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public TableRowContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tableRow; }
	}

	public final TableRowContext tableRow() throws RecognitionException {
		TableRowContext _localctx = new TableRowContext(_ctx, getState());
		enterRule(_localctx, 240, RULE_tableRow);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1269);
			number();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UnrestrictedCharacterStringTypeContext extends ParserRuleContext {
		public TerminalNode CHARACTER_WORD() { return getToken(ASN1Parser.CHARACTER_WORD, 0); }
		public TerminalNode STRING_WORD() { return getToken(ASN1Parser.STRING_WORD, 0); }
		public UnrestrictedCharacterStringTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unrestrictedCharacterStringType; }
	}

	public final UnrestrictedCharacterStringTypeContext unrestrictedCharacterStringType() throws RecognitionException {
		UnrestrictedCharacterStringTypeContext _localctx = new UnrestrictedCharacterStringTypeContext(_ctx, getState());
		enterRule(_localctx, 242, RULE_unrestrictedCharacterStringType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1271);
			match(CHARACTER_WORD);
			setState(1272);
			match(STRING_WORD);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UsefulTypeContext extends ParserRuleContext {
		public UsefulTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_usefulType; }
	 
		public UsefulTypeContext() { }
		public void copyFrom(UsefulTypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class UTCTimeTypeContext extends UsefulTypeContext {
		public TerminalNode UTCTime_WORD() { return getToken(ASN1Parser.UTCTime_WORD, 0); }
		public UTCTimeTypeContext(UsefulTypeContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class GeneralizedTimeTypeContext extends UsefulTypeContext {
		public TerminalNode GeneralizedTime_WORD() { return getToken(ASN1Parser.GeneralizedTime_WORD, 0); }
		public GeneralizedTimeTypeContext(UsefulTypeContext ctx) { copyFrom(ctx); }
	}

	public final UsefulTypeContext usefulType() throws RecognitionException {
		UsefulTypeContext _localctx = new UsefulTypeContext(_ctx, getState());
		enterRule(_localctx, 244, RULE_usefulType);
		try {
			setState(1276);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case GeneralizedTime_WORD:
				_localctx = new GeneralizedTimeTypeContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(1274);
				match(GeneralizedTime_WORD);
				}
				break;
			case UTCTime_WORD:
				_localctx = new UTCTimeTypeContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(1275);
				match(UTCTime_WORD);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ConstrainedTypeContext extends ParserRuleContext {
		public ConstraintContext constraint() {
			return getRuleContext(ConstraintContext.class,0);
		}
		public BuiltinTypeContext builtinType() {
			return getRuleContext(BuiltinTypeContext.class,0);
		}
		public ReferencedTypeContext referencedType() {
			return getRuleContext(ReferencedTypeContext.class,0);
		}
		public TypeWithConstraintContext typeWithConstraint() {
			return getRuleContext(TypeWithConstraintContext.class,0);
		}
		public ConstrainedTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constrainedType; }
	}

	public final ConstrainedTypeContext constrainedType() throws RecognitionException {
		ConstrainedTypeContext _localctx = new ConstrainedTypeContext(_ctx, getState());
		enterRule(_localctx, 246, RULE_constrainedType);
		try {
			setState(1285);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,81,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1280);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,80,_ctx) ) {
				case 1:
					{
					setState(1278);
					builtinType();
					}
					break;
				case 2:
					{
					setState(1279);
					referencedType();
					}
					break;
				}
				setState(1282);
				constraint();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1284);
				typeWithConstraint();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeWithConstraintContext extends ParserRuleContext {
		public TerminalNode SET_WORD() { return getToken(ASN1Parser.SET_WORD, 0); }
		public ConstraintContext constraint() {
			return getRuleContext(ConstraintContext.class,0);
		}
		public TerminalNode OF_WORD() { return getToken(ASN1Parser.OF_WORD, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public SizeConstraintContext sizeConstraint() {
			return getRuleContext(SizeConstraintContext.class,0);
		}
		public TerminalNode SEQUENCE_WORD() { return getToken(ASN1Parser.SEQUENCE_WORD, 0); }
		public NamedTypeContext namedType() {
			return getRuleContext(NamedTypeContext.class,0);
		}
		public TypeWithConstraintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeWithConstraint; }
	}

	public final TypeWithConstraintContext typeWithConstraint() throws RecognitionException {
		TypeWithConstraintContext _localctx = new TypeWithConstraintContext(_ctx, getState());
		enterRule(_localctx, 248, RULE_typeWithConstraint);
		try {
			setState(1327);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,82,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1287);
				match(SET_WORD);
				setState(1288);
				constraint();
				setState(1289);
				match(OF_WORD);
				setState(1290);
				type();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1292);
				match(SET_WORD);
				setState(1293);
				sizeConstraint();
				setState(1294);
				match(OF_WORD);
				setState(1295);
				type();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1297);
				match(SEQUENCE_WORD);
				setState(1298);
				constraint();
				setState(1299);
				match(OF_WORD);
				setState(1300);
				type();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1302);
				match(SEQUENCE_WORD);
				setState(1303);
				sizeConstraint();
				setState(1304);
				match(OF_WORD);
				setState(1305);
				type();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1307);
				match(SET_WORD);
				setState(1308);
				constraint();
				setState(1309);
				match(OF_WORD);
				setState(1310);
				namedType();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1312);
				match(SET_WORD);
				setState(1313);
				sizeConstraint();
				setState(1314);
				match(OF_WORD);
				setState(1315);
				namedType();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1317);
				match(SEQUENCE_WORD);
				setState(1318);
				constraint();
				setState(1319);
				match(OF_WORD);
				setState(1320);
				namedType();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1322);
				match(SEQUENCE_WORD);
				setState(1323);
				sizeConstraint();
				setState(1324);
				match(OF_WORD);
				setState(1325);
				namedType();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ConstraintContext extends ParserRuleContext {
		public TerminalNode L_PAREN() { return getToken(ASN1Parser.L_PAREN, 0); }
		public ConstraintSpecContext constraintSpec() {
			return getRuleContext(ConstraintSpecContext.class,0);
		}
		public ExceptionSpecContext exceptionSpec() {
			return getRuleContext(ExceptionSpecContext.class,0);
		}
		public TerminalNode R_PAREN() { return getToken(ASN1Parser.R_PAREN, 0); }
		public ConstraintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constraint; }
	}

	public final ConstraintContext constraint() throws RecognitionException {
		ConstraintContext _localctx = new ConstraintContext(_ctx, getState());
		enterRule(_localctx, 250, RULE_constraint);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1329);
			match(L_PAREN);
			setState(1330);
			constraintSpec();
			setState(1331);
			exceptionSpec();
			setState(1332);
			match(R_PAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ConstraintSpecContext extends ParserRuleContext {
		public SubtypeConstraintContext subtypeConstraint() {
			return getRuleContext(SubtypeConstraintContext.class,0);
		}
		public GeneralConstraintContext generalConstraint() {
			return getRuleContext(GeneralConstraintContext.class,0);
		}
		public ConstraintSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constraintSpec; }
	}

	public final ConstraintSpecContext constraintSpec() throws RecognitionException {
		ConstraintSpecContext _localctx = new ConstraintSpecContext(_ctx, getState());
		enterRule(_localctx, 252, RULE_constraintSpec);
		try {
			setState(1336);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,83,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1334);
				subtypeConstraint();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1335);
				generalConstraint();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SubtypeConstraintContext extends ParserRuleContext {
		public ElementSetSpecsContext elementSetSpecs() {
			return getRuleContext(ElementSetSpecsContext.class,0);
		}
		public SubtypeConstraintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_subtypeConstraint; }
	}

	public final SubtypeConstraintContext subtypeConstraint() throws RecognitionException {
		SubtypeConstraintContext _localctx = new SubtypeConstraintContext(_ctx, getState());
		enterRule(_localctx, 254, RULE_subtypeConstraint);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1338);
			elementSetSpecs();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class GeneralConstraintContext extends ParserRuleContext {
		public UserDefinedConstraintContext userDefinedConstraint() {
			return getRuleContext(UserDefinedConstraintContext.class,0);
		}
		public TableConstraintContext tableConstraint() {
			return getRuleContext(TableConstraintContext.class,0);
		}
		public ContentsConstraintContext contentsConstraint() {
			return getRuleContext(ContentsConstraintContext.class,0);
		}
		public GeneralConstraintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_generalConstraint; }
	}

	public final GeneralConstraintContext generalConstraint() throws RecognitionException {
		GeneralConstraintContext _localctx = new GeneralConstraintContext(_ctx, getState());
		enterRule(_localctx, 256, RULE_generalConstraint);
		try {
			setState(1343);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CONSTRAINED_WORD:
				enterOuterAlt(_localctx, 1);
				{
				setState(1340);
				userDefinedConstraint();
				}
				break;
			case L_BRACE:
				enterOuterAlt(_localctx, 2);
				{
				setState(1341);
				tableConstraint();
				}
				break;
			case ENCODED_WORD:
			case CONTAINING_WORD:
				enterOuterAlt(_localctx, 3);
				{
				setState(1342);
				contentsConstraint();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ElementSetSpecsContext extends ParserRuleContext {
		public RootElementSetSpecContext rootElementSetSpec() {
			return getRuleContext(RootElementSetSpecContext.class,0);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public TerminalNode ELLIPSIS() { return getToken(ASN1Parser.ELLIPSIS, 0); }
		public AdditionalElementSetSpecContext additionalElementSetSpec() {
			return getRuleContext(AdditionalElementSetSpecContext.class,0);
		}
		public ElementSetSpecsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elementSetSpecs; }
	}

	public final ElementSetSpecsContext elementSetSpecs() throws RecognitionException {
		ElementSetSpecsContext _localctx = new ElementSetSpecsContext(_ctx, getState());
		enterRule(_localctx, 258, RULE_elementSetSpecs);
		try {
			setState(1356);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,85,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1345);
				rootElementSetSpec();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1346);
				rootElementSetSpec();
				setState(1347);
				match(COMMA);
				setState(1348);
				match(ELLIPSIS);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1350);
				rootElementSetSpec();
				setState(1351);
				match(COMMA);
				setState(1352);
				match(ELLIPSIS);
				setState(1353);
				match(COMMA);
				setState(1354);
				additionalElementSetSpec();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class RootElementSetSpecContext extends ParserRuleContext {
		public ElementSetSpecContext elementSetSpec() {
			return getRuleContext(ElementSetSpecContext.class,0);
		}
		public RootElementSetSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rootElementSetSpec; }
	}

	public final RootElementSetSpecContext rootElementSetSpec() throws RecognitionException {
		RootElementSetSpecContext _localctx = new RootElementSetSpecContext(_ctx, getState());
		enterRule(_localctx, 260, RULE_rootElementSetSpec);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1358);
			elementSetSpec();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AdditionalElementSetSpecContext extends ParserRuleContext {
		public ElementSetSpecContext elementSetSpec() {
			return getRuleContext(ElementSetSpecContext.class,0);
		}
		public AdditionalElementSetSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_additionalElementSetSpec; }
	}

	public final AdditionalElementSetSpecContext additionalElementSetSpec() throws RecognitionException {
		AdditionalElementSetSpecContext _localctx = new AdditionalElementSetSpecContext(_ctx, getState());
		enterRule(_localctx, 262, RULE_additionalElementSetSpec);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1360);
			elementSetSpec();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ElementSetSpecContext extends ParserRuleContext {
		public UnionsContext unions() {
			return getRuleContext(UnionsContext.class,0);
		}
		public TerminalNode ALL_WORD() { return getToken(ASN1Parser.ALL_WORD, 0); }
		public ExclusionsContext exclusions() {
			return getRuleContext(ExclusionsContext.class,0);
		}
		public ElementSetSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elementSetSpec; }
	}

	public final ElementSetSpecContext elementSetSpec() throws RecognitionException {
		ElementSetSpecContext _localctx = new ElementSetSpecContext(_ctx, getState());
		enterRule(_localctx, 264, RULE_elementSetSpec);
		try {
			setState(1365);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,86,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1362);
				unions(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1363);
				match(ALL_WORD);
				setState(1364);
				exclusions();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UnionsContext extends ParserRuleContext {
		public IntersectionsContext intersections() {
			return getRuleContext(IntersectionsContext.class,0);
		}
		public UnionsContext unions() {
			return getRuleContext(UnionsContext.class,0);
		}
		public UnionMarkContext unionMark() {
			return getRuleContext(UnionMarkContext.class,0);
		}
		public UnionsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unions; }
	}

	public final UnionsContext unions() throws RecognitionException {
		return unions(0);
	}

	private UnionsContext unions(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		UnionsContext _localctx = new UnionsContext(_ctx, _parentState);
		UnionsContext _prevctx = _localctx;
		int _startState = 266;
		enterRecursionRule(_localctx, 266, RULE_unions, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1368);
			intersections(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(1376);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,87,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new UnionsContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_unions);
					setState(1370);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1371);
					unionMark();
					setState(1372);
					intersections(0);
					}
					} 
				}
				setState(1378);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,87,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UElemsContext extends ParserRuleContext {
		public UnionsContext unions() {
			return getRuleContext(UnionsContext.class,0);
		}
		public UElemsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_uElems; }
	}

	public final UElemsContext uElems() throws RecognitionException {
		UElemsContext _localctx = new UElemsContext(_ctx, getState());
		enterRule(_localctx, 268, RULE_uElems);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1379);
			unions(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IntersectionsContext extends ParserRuleContext {
		public IntersectionElementsContext intersectionElements() {
			return getRuleContext(IntersectionElementsContext.class,0);
		}
		public IntersectionsContext intersections() {
			return getRuleContext(IntersectionsContext.class,0);
		}
		public IntersectionMarkContext intersectionMark() {
			return getRuleContext(IntersectionMarkContext.class,0);
		}
		public IntersectionsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_intersections; }
	}

	public final IntersectionsContext intersections() throws RecognitionException {
		return intersections(0);
	}

	private IntersectionsContext intersections(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		IntersectionsContext _localctx = new IntersectionsContext(_ctx, _parentState);
		IntersectionsContext _prevctx = _localctx;
		int _startState = 270;
		enterRecursionRule(_localctx, 270, RULE_intersections, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1382);
			intersectionElements();
			}
			_ctx.stop = _input.LT(-1);
			setState(1390);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,88,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new IntersectionsContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_intersections);
					setState(1384);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1385);
					intersectionMark();
					setState(1386);
					intersectionElements();
					}
					} 
				}
				setState(1392);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,88,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IElemsContext extends ParserRuleContext {
		public IntersectionsContext intersections() {
			return getRuleContext(IntersectionsContext.class,0);
		}
		public IElemsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_iElems; }
	}

	public final IElemsContext iElems() throws RecognitionException {
		IElemsContext _localctx = new IElemsContext(_ctx, getState());
		enterRule(_localctx, 272, RULE_iElems);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1393);
			intersections(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IntersectionElementsContext extends ParserRuleContext {
		public ElementsContext elements() {
			return getRuleContext(ElementsContext.class,0);
		}
		public ElemsContext elems() {
			return getRuleContext(ElemsContext.class,0);
		}
		public ExclusionsContext exclusions() {
			return getRuleContext(ExclusionsContext.class,0);
		}
		public IntersectionElementsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_intersectionElements; }
	}

	public final IntersectionElementsContext intersectionElements() throws RecognitionException {
		IntersectionElementsContext _localctx = new IntersectionElementsContext(_ctx, getState());
		enterRule(_localctx, 274, RULE_intersectionElements);
		try {
			setState(1399);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,89,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1395);
				elements();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1396);
				elems();
				setState(1397);
				exclusions();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ElemsContext extends ParserRuleContext {
		public ElementsContext elements() {
			return getRuleContext(ElementsContext.class,0);
		}
		public ElemsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elems; }
	}

	public final ElemsContext elems() throws RecognitionException {
		ElemsContext _localctx = new ElemsContext(_ctx, getState());
		enterRule(_localctx, 276, RULE_elems);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1401);
			elements();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExclusionsContext extends ParserRuleContext {
		public TerminalNode EXCEPT_WORD() { return getToken(ASN1Parser.EXCEPT_WORD, 0); }
		public ElementsContext elements() {
			return getRuleContext(ElementsContext.class,0);
		}
		public ExclusionsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exclusions; }
	}

	public final ExclusionsContext exclusions() throws RecognitionException {
		ExclusionsContext _localctx = new ExclusionsContext(_ctx, getState());
		enterRule(_localctx, 278, RULE_exclusions);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1403);
			match(EXCEPT_WORD);
			setState(1404);
			elements();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UnionMarkContext extends ParserRuleContext {
		public TerminalNode UNION_WORD() { return getToken(ASN1Parser.UNION_WORD, 0); }
		public UnionMarkContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unionMark; }
	}

	public final UnionMarkContext unionMark() throws RecognitionException {
		UnionMarkContext _localctx = new UnionMarkContext(_ctx, getState());
		enterRule(_localctx, 280, RULE_unionMark);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1406);
			_la = _input.LA(1);
			if ( !(_la==T__4 || _la==UNION_WORD) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IntersectionMarkContext extends ParserRuleContext {
		public TerminalNode INTERSECTION_WORD() { return getToken(ASN1Parser.INTERSECTION_WORD, 0); }
		public IntersectionMarkContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_intersectionMark; }
	}

	public final IntersectionMarkContext intersectionMark() throws RecognitionException {
		IntersectionMarkContext _localctx = new IntersectionMarkContext(_ctx, getState());
		enterRule(_localctx, 282, RULE_intersectionMark);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1408);
			_la = _input.LA(1);
			if ( !(_la==T__5 || _la==INTERSECTION_WORD) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ElementsContext extends ParserRuleContext {
		public SubtypeElementsContext subtypeElements() {
			return getRuleContext(SubtypeElementsContext.class,0);
		}
		public ObjectSetElementsContext objectSetElements() {
			return getRuleContext(ObjectSetElementsContext.class,0);
		}
		public TerminalNode L_PAREN() { return getToken(ASN1Parser.L_PAREN, 0); }
		public ElementSetSpecContext elementSetSpec() {
			return getRuleContext(ElementSetSpecContext.class,0);
		}
		public TerminalNode R_PAREN() { return getToken(ASN1Parser.R_PAREN, 0); }
		public ElementsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elements; }
	}

	public final ElementsContext elements() throws RecognitionException {
		ElementsContext _localctx = new ElementsContext(_ctx, getState());
		enterRule(_localctx, 284, RULE_elements);
		try {
			setState(1416);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,90,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1410);
				subtypeElements();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1411);
				objectSetElements();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1412);
				match(L_PAREN);
				setState(1413);
				elementSetSpec();
				setState(1414);
				match(R_PAREN);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SubtypeElementsContext extends ParserRuleContext {
		public SingleValueContext singleValue() {
			return getRuleContext(SingleValueContext.class,0);
		}
		public ContainedSubtypeContext containedSubtype() {
			return getRuleContext(ContainedSubtypeContext.class,0);
		}
		public ValueRangeContext valueRange() {
			return getRuleContext(ValueRangeContext.class,0);
		}
		public PermittedAlphabetContext permittedAlphabet() {
			return getRuleContext(PermittedAlphabetContext.class,0);
		}
		public SizeConstraintContext sizeConstraint() {
			return getRuleContext(SizeConstraintContext.class,0);
		}
		public SubtypeElementsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_subtypeElements; }
	}

	public final SubtypeElementsContext subtypeElements() throws RecognitionException {
		SubtypeElementsContext _localctx = new SubtypeElementsContext(_ctx, getState());
		enterRule(_localctx, 286, RULE_subtypeElements);
		try {
			setState(1423);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,91,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1418);
				singleValue();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1419);
				containedSubtype();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1420);
				valueRange();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1421);
				permittedAlphabet();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1422);
				sizeConstraint();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SingleValueContext extends ParserRuleContext {
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public SingleValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_singleValue; }
	}

	public final SingleValueContext singleValue() throws RecognitionException {
		SingleValueContext _localctx = new SingleValueContext(_ctx, getState());
		enterRule(_localctx, 288, RULE_singleValue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1425);
			value();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ContainedSubtypeContext extends ParserRuleContext {
		public IncludesContext includes() {
			return getRuleContext(IncludesContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public ContainedSubtypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_containedSubtype; }
	}

	public final ContainedSubtypeContext containedSubtype() throws RecognitionException {
		ContainedSubtypeContext _localctx = new ContainedSubtypeContext(_ctx, getState());
		enterRule(_localctx, 290, RULE_containedSubtype);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1427);
			includes();
			setState(1428);
			type();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IncludesContext extends ParserRuleContext {
		public TerminalNode INCLUDES_WORD() { return getToken(ASN1Parser.INCLUDES_WORD, 0); }
		public IncludesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_includes; }
	}

	public final IncludesContext includes() throws RecognitionException {
		IncludesContext _localctx = new IncludesContext(_ctx, getState());
		enterRule(_localctx, 292, RULE_includes);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1431);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,92,_ctx) ) {
			case 1:
				{
				setState(1430);
				match(INCLUDES_WORD);
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValueRangeContext extends ParserRuleContext {
		public LowerEndpointContext lowerEndpoint() {
			return getRuleContext(LowerEndpointContext.class,0);
		}
		public TerminalNode RANGE() { return getToken(ASN1Parser.RANGE, 0); }
		public UpperEndpointContext upperEndpoint() {
			return getRuleContext(UpperEndpointContext.class,0);
		}
		public ValueRangeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valueRange; }
	}

	public final ValueRangeContext valueRange() throws RecognitionException {
		ValueRangeContext _localctx = new ValueRangeContext(_ctx, getState());
		enterRule(_localctx, 294, RULE_valueRange);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1433);
			lowerEndpoint();
			setState(1434);
			match(RANGE);
			setState(1435);
			upperEndpoint();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LowerEndpointContext extends ParserRuleContext {
		public LowerEndValueContext lowerEndValue() {
			return getRuleContext(LowerEndValueContext.class,0);
		}
		public LowerEndpointContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lowerEndpoint; }
	}

	public final LowerEndpointContext lowerEndpoint() throws RecognitionException {
		LowerEndpointContext _localctx = new LowerEndpointContext(_ctx, getState());
		enterRule(_localctx, 296, RULE_lowerEndpoint);
		try {
			setState(1441);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,93,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1437);
				lowerEndValue();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1438);
				lowerEndValue();
				setState(1439);
				match(T__6);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UpperEndpointContext extends ParserRuleContext {
		public UpperEndValueContext upperEndValue() {
			return getRuleContext(UpperEndValueContext.class,0);
		}
		public UpperEndpointContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_upperEndpoint; }
	}

	public final UpperEndpointContext upperEndpoint() throws RecognitionException {
		UpperEndpointContext _localctx = new UpperEndpointContext(_ctx, getState());
		enterRule(_localctx, 298, RULE_upperEndpoint);
		try {
			setState(1446);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,94,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1443);
				upperEndValue();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1444);
				match(T__6);
				setState(1445);
				upperEndValue();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LowerEndValueContext extends ParserRuleContext {
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public TerminalNode MIN_WORD() { return getToken(ASN1Parser.MIN_WORD, 0); }
		public LowerEndValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lowerEndValue; }
	}

	public final LowerEndValueContext lowerEndValue() throws RecognitionException {
		LowerEndValueContext _localctx = new LowerEndValueContext(_ctx, getState());
		enterRule(_localctx, 300, RULE_lowerEndValue);
		try {
			setState(1450);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,95,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1448);
				value();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1449);
				match(MIN_WORD);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UpperEndValueContext extends ParserRuleContext {
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public TerminalNode MAX_WORD() { return getToken(ASN1Parser.MAX_WORD, 0); }
		public UpperEndValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_upperEndValue; }
	}

	public final UpperEndValueContext upperEndValue() throws RecognitionException {
		UpperEndValueContext _localctx = new UpperEndValueContext(_ctx, getState());
		enterRule(_localctx, 302, RULE_upperEndValue);
		try {
			setState(1454);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,96,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1452);
				value();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1453);
				match(MAX_WORD);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SizeConstraintContext extends ParserRuleContext {
		public TerminalNode SIZE_WORD() { return getToken(ASN1Parser.SIZE_WORD, 0); }
		public ConstraintContext constraint() {
			return getRuleContext(ConstraintContext.class,0);
		}
		public SizeConstraintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sizeConstraint; }
	}

	public final SizeConstraintContext sizeConstraint() throws RecognitionException {
		SizeConstraintContext _localctx = new SizeConstraintContext(_ctx, getState());
		enterRule(_localctx, 304, RULE_sizeConstraint);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1456);
			match(SIZE_WORD);
			setState(1457);
			constraint();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PermittedAlphabetContext extends ParserRuleContext {
		public TerminalNode FROM_WORD() { return getToken(ASN1Parser.FROM_WORD, 0); }
		public ConstraintContext constraint() {
			return getRuleContext(ConstraintContext.class,0);
		}
		public PermittedAlphabetContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_permittedAlphabet; }
	}

	public final PermittedAlphabetContext permittedAlphabet() throws RecognitionException {
		PermittedAlphabetContext _localctx = new PermittedAlphabetContext(_ctx, getState());
		enterRule(_localctx, 306, RULE_permittedAlphabet);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1459);
			match(FROM_WORD);
			setState(1460);
			constraint();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UserDefinedConstraintContext extends ParserRuleContext {
		public TerminalNode CONSTRAINED_WORD() { return getToken(ASN1Parser.CONSTRAINED_WORD, 0); }
		public TerminalNode BY_WORD() { return getToken(ASN1Parser.BY_WORD, 0); }
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public List<UserDefinedConstraintParameterContext> userDefinedConstraintParameter() {
			return getRuleContexts(UserDefinedConstraintParameterContext.class);
		}
		public UserDefinedConstraintParameterContext userDefinedConstraintParameter(int i) {
			return getRuleContext(UserDefinedConstraintParameterContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public UserDefinedConstraintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_userDefinedConstraint; }
	}

	public final UserDefinedConstraintContext userDefinedConstraint() throws RecognitionException {
		UserDefinedConstraintContext _localctx = new UserDefinedConstraintContext(_ctx, getState());
		enterRule(_localctx, 308, RULE_userDefinedConstraint);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1462);
			match(CONSTRAINED_WORD);
			setState(1463);
			match(BY_WORD);
			setState(1464);
			match(L_BRACE);
			setState(1466);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,97,_ctx) ) {
			case 1:
				{
				setState(1465);
				userDefinedConstraintParameter();
				}
				break;
			}
			setState(1472);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1468);
				match(COMMA);
				setState(1469);
				userDefinedConstraintParameter();
				}
				}
				setState(1474);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1475);
			match(R_BRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UserDefinedConstraintParameterContext extends ParserRuleContext {
		public GovernorContext governor() {
			return getRuleContext(GovernorContext.class,0);
		}
		public TerminalNode COLON() { return getToken(ASN1Parser.COLON, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public ValueSetContext valueSet() {
			return getRuleContext(ValueSetContext.class,0);
		}
		public ObjectContext object() {
			return getRuleContext(ObjectContext.class,0);
		}
		public ObjectSetContext objectSet() {
			return getRuleContext(ObjectSetContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public DefinedObjectClassContext definedObjectClass() {
			return getRuleContext(DefinedObjectClassContext.class,0);
		}
		public UserDefinedConstraintParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_userDefinedConstraintParameter; }
	}

	public final UserDefinedConstraintParameterContext userDefinedConstraintParameter() throws RecognitionException {
		UserDefinedConstraintParameterContext _localctx = new UserDefinedConstraintParameterContext(_ctx, getState());
		enterRule(_localctx, 310, RULE_userDefinedConstraintParameter);
		try {
			setState(1495);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,99,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1477);
				governor();
				setState(1478);
				match(COLON);
				setState(1479);
				value();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1481);
				governor();
				setState(1482);
				match(COLON);
				setState(1483);
				valueSet();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1485);
				governor();
				setState(1486);
				match(COLON);
				setState(1487);
				object();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1489);
				governor();
				setState(1490);
				match(COLON);
				setState(1491);
				objectSet();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1493);
				type();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1494);
				definedObjectClass();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TableConstraintContext extends ParserRuleContext {
		public SimpleTableConstraintContext simpleTableConstraint() {
			return getRuleContext(SimpleTableConstraintContext.class,0);
		}
		public ComponentRelationConstraintContext componentRelationConstraint() {
			return getRuleContext(ComponentRelationConstraintContext.class,0);
		}
		public TableConstraintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tableConstraint; }
	}

	public final TableConstraintContext tableConstraint() throws RecognitionException {
		TableConstraintContext _localctx = new TableConstraintContext(_ctx, getState());
		enterRule(_localctx, 312, RULE_tableConstraint);
		try {
			setState(1499);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,100,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1497);
				simpleTableConstraint();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1498);
				componentRelationConstraint();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SimpleTableConstraintContext extends ParserRuleContext {
		public ObjectSetContext objectSet() {
			return getRuleContext(ObjectSetContext.class,0);
		}
		public SimpleTableConstraintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simpleTableConstraint; }
	}

	public final SimpleTableConstraintContext simpleTableConstraint() throws RecognitionException {
		SimpleTableConstraintContext _localctx = new SimpleTableConstraintContext(_ctx, getState());
		enterRule(_localctx, 314, RULE_simpleTableConstraint);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1501);
			objectSet();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComponentRelationConstraintContext extends ParserRuleContext {
		public List<TerminalNode> L_BRACE() { return getTokens(ASN1Parser.L_BRACE); }
		public TerminalNode L_BRACE(int i) {
			return getToken(ASN1Parser.L_BRACE, i);
		}
		public DefinedObjectSetContext definedObjectSet() {
			return getRuleContext(DefinedObjectSetContext.class,0);
		}
		public List<TerminalNode> R_BRACE() { return getTokens(ASN1Parser.R_BRACE); }
		public TerminalNode R_BRACE(int i) {
			return getToken(ASN1Parser.R_BRACE, i);
		}
		public List<AtNotationContext> atNotation() {
			return getRuleContexts(AtNotationContext.class);
		}
		public AtNotationContext atNotation(int i) {
			return getRuleContext(AtNotationContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public ComponentRelationConstraintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_componentRelationConstraint; }
	}

	public final ComponentRelationConstraintContext componentRelationConstraint() throws RecognitionException {
		ComponentRelationConstraintContext _localctx = new ComponentRelationConstraintContext(_ctx, getState());
		enterRule(_localctx, 316, RULE_componentRelationConstraint);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1503);
			match(L_BRACE);
			setState(1504);
			definedObjectSet();
			setState(1505);
			match(R_BRACE);
			setState(1506);
			match(L_BRACE);
			setState(1507);
			atNotation();
			setState(1512);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1508);
				match(COMMA);
				setState(1509);
				atNotation();
				}
				}
				setState(1514);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1515);
			match(R_BRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AtNotationContext extends ParserRuleContext {
		public ComponentIdListContext componentIdList() {
			return getRuleContext(ComponentIdListContext.class,0);
		}
		public LevelContext level() {
			return getRuleContext(LevelContext.class,0);
		}
		public AtNotationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_atNotation; }
	}

	public final AtNotationContext atNotation() throws RecognitionException {
		AtNotationContext _localctx = new AtNotationContext(_ctx, getState());
		enterRule(_localctx, 318, RULE_atNotation);
		try {
			setState(1523);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__7:
				enterOuterAlt(_localctx, 1);
				{
				setState(1517);
				match(T__7);
				setState(1518);
				componentIdList();
				}
				break;
			case T__8:
				enterOuterAlt(_localctx, 2);
				{
				setState(1519);
				match(T__8);
				setState(1520);
				level();
				setState(1521);
				componentIdList();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LevelContext extends ParserRuleContext {
		public TerminalNode DOT() { return getToken(ASN1Parser.DOT, 0); }
		public LevelContext level() {
			return getRuleContext(LevelContext.class,0);
		}
		public LevelContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_level; }
	}

	public final LevelContext level() throws RecognitionException {
		LevelContext _localctx = new LevelContext(_ctx, getState());
		enterRule(_localctx, 320, RULE_level);
		try {
			setState(1528);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DOT:
				enterOuterAlt(_localctx, 1);
				{
				setState(1525);
				match(DOT);
				setState(1526);
				level();
				}
				break;
			case IdentifierOrValueItem:
				enterOuterAlt(_localctx, 2);
				{
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ComponentIdListContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<TerminalNode> DOT() { return getTokens(ASN1Parser.DOT); }
		public TerminalNode DOT(int i) {
			return getToken(ASN1Parser.DOT, i);
		}
		public ComponentIdListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_componentIdList; }
	}

	public final ComponentIdListContext componentIdList() throws RecognitionException {
		ComponentIdListContext _localctx = new ComponentIdListContext(_ctx, getState());
		enterRule(_localctx, 322, RULE_componentIdList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1530);
			identifier();
			setState(1535);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==DOT) {
				{
				{
				setState(1531);
				match(DOT);
				setState(1532);
				identifier();
				}
				}
				setState(1537);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ContentsConstraintContext extends ParserRuleContext {
		public TerminalNode CONTAINING_WORD() { return getToken(ASN1Parser.CONTAINING_WORD, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode ENCODED_WORD() { return getToken(ASN1Parser.ENCODED_WORD, 0); }
		public TerminalNode BY_WORD() { return getToken(ASN1Parser.BY_WORD, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public ContentsConstraintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_contentsConstraint; }
	}

	public final ContentsConstraintContext contentsConstraint() throws RecognitionException {
		ContentsConstraintContext _localctx = new ContentsConstraintContext(_ctx, getState());
		enterRule(_localctx, 324, RULE_contentsConstraint);
		try {
			setState(1549);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,105,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1538);
				match(CONTAINING_WORD);
				setState(1539);
				type();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1540);
				match(ENCODED_WORD);
				setState(1541);
				match(BY_WORD);
				setState(1542);
				value();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1543);
				match(CONTAINING_WORD);
				setState(1544);
				type();
				setState(1545);
				match(ENCODED_WORD);
				setState(1546);
				match(BY_WORD);
				setState(1547);
				value();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DefinedObjectClassContext extends ParserRuleContext {
		public ExternalObjectClassReferenceContext externalObjectClassReference() {
			return getRuleContext(ExternalObjectClassReferenceContext.class,0);
		}
		public ObjectclassreferenceContext objectclassreference() {
			return getRuleContext(ObjectclassreferenceContext.class,0);
		}
		public UsefulObjectClassReferenceContext usefulObjectClassReference() {
			return getRuleContext(UsefulObjectClassReferenceContext.class,0);
		}
		public DefinedObjectClassContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_definedObjectClass; }
	}

	public final DefinedObjectClassContext definedObjectClass() throws RecognitionException {
		DefinedObjectClassContext _localctx = new DefinedObjectClassContext(_ctx, getState());
		enterRule(_localctx, 326, RULE_definedObjectClass);
		try {
			setState(1554);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,106,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1551);
				externalObjectClassReference();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1552);
				objectclassreference();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1553);
				usefulObjectClassReference();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DefinedObjectContext extends ParserRuleContext {
		public ExternalObjectReferenceContext externalObjectReference() {
			return getRuleContext(ExternalObjectReferenceContext.class,0);
		}
		public ObjectreferenceContext objectreference() {
			return getRuleContext(ObjectreferenceContext.class,0);
		}
		public DefinedObjectContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_definedObject; }
	}

	public final DefinedObjectContext definedObject() throws RecognitionException {
		DefinedObjectContext _localctx = new DefinedObjectContext(_ctx, getState());
		enterRule(_localctx, 328, RULE_definedObject);
		try {
			setState(1558);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ReferenceItem:
				enterOuterAlt(_localctx, 1);
				{
				setState(1556);
				externalObjectReference();
				}
				break;
			case IdentifierOrValueItem:
				enterOuterAlt(_localctx, 2);
				{
				setState(1557);
				objectreference();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DefinedObjectSetContext extends ParserRuleContext {
		public ExternalObjectSetReferenceContext externalObjectSetReference() {
			return getRuleContext(ExternalObjectSetReferenceContext.class,0);
		}
		public ObjectsetreferenceContext objectsetreference() {
			return getRuleContext(ObjectsetreferenceContext.class,0);
		}
		public DefinedObjectSetContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_definedObjectSet; }
	}

	public final DefinedObjectSetContext definedObjectSet() throws RecognitionException {
		DefinedObjectSetContext _localctx = new DefinedObjectSetContext(_ctx, getState());
		enterRule(_localctx, 330, RULE_definedObjectSet);
		try {
			setState(1562);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,108,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1560);
				externalObjectSetReference();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1561);
				objectsetreference();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExternalObjectClassReferenceContext extends ParserRuleContext {
		public ModulereferenceContext modulereference() {
			return getRuleContext(ModulereferenceContext.class,0);
		}
		public TerminalNode DOT() { return getToken(ASN1Parser.DOT, 0); }
		public ObjectclassreferenceContext objectclassreference() {
			return getRuleContext(ObjectclassreferenceContext.class,0);
		}
		public ExternalObjectClassReferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_externalObjectClassReference; }
	}

	public final ExternalObjectClassReferenceContext externalObjectClassReference() throws RecognitionException {
		ExternalObjectClassReferenceContext _localctx = new ExternalObjectClassReferenceContext(_ctx, getState());
		enterRule(_localctx, 332, RULE_externalObjectClassReference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1564);
			modulereference();
			setState(1565);
			match(DOT);
			setState(1566);
			objectclassreference();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExternalObjectReferenceContext extends ParserRuleContext {
		public ModulereferenceContext modulereference() {
			return getRuleContext(ModulereferenceContext.class,0);
		}
		public TerminalNode DOT() { return getToken(ASN1Parser.DOT, 0); }
		public ObjectreferenceContext objectreference() {
			return getRuleContext(ObjectreferenceContext.class,0);
		}
		public ExternalObjectReferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_externalObjectReference; }
	}

	public final ExternalObjectReferenceContext externalObjectReference() throws RecognitionException {
		ExternalObjectReferenceContext _localctx = new ExternalObjectReferenceContext(_ctx, getState());
		enterRule(_localctx, 334, RULE_externalObjectReference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1568);
			modulereference();
			setState(1569);
			match(DOT);
			setState(1570);
			objectreference();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExternalObjectSetReferenceContext extends ParserRuleContext {
		public ModulereferenceContext modulereference() {
			return getRuleContext(ModulereferenceContext.class,0);
		}
		public TerminalNode DOT() { return getToken(ASN1Parser.DOT, 0); }
		public ObjectsetreferenceContext objectsetreference() {
			return getRuleContext(ObjectsetreferenceContext.class,0);
		}
		public ExternalObjectSetReferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_externalObjectSetReference; }
	}

	public final ExternalObjectSetReferenceContext externalObjectSetReference() throws RecognitionException {
		ExternalObjectSetReferenceContext _localctx = new ExternalObjectSetReferenceContext(_ctx, getState());
		enterRule(_localctx, 336, RULE_externalObjectSetReference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1572);
			modulereference();
			setState(1573);
			match(DOT);
			setState(1574);
			objectsetreference();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class UsefulObjectClassReferenceContext extends ParserRuleContext {
		public TerminalNode TYPE_IDENTIFIER_WORD() { return getToken(ASN1Parser.TYPE_IDENTIFIER_WORD, 0); }
		public TerminalNode ABSTRACT_SYNTAX_WORD() { return getToken(ASN1Parser.ABSTRACT_SYNTAX_WORD, 0); }
		public UsefulObjectClassReferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_usefulObjectClassReference; }
	}

	public final UsefulObjectClassReferenceContext usefulObjectClassReference() throws RecognitionException {
		UsefulObjectClassReferenceContext _localctx = new UsefulObjectClassReferenceContext(_ctx, getState());
		enterRule(_localctx, 338, RULE_usefulObjectClassReference);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1576);
			_la = _input.LA(1);
			if ( !(_la==ABSTRACT_SYNTAX_WORD || _la==TYPE_IDENTIFIER_WORD) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectClassAssignmentContext extends ParserRuleContext {
		public ObjectclassreferenceContext objectclassreference() {
			return getRuleContext(ObjectclassreferenceContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(ASN1Parser.ASSIGN, 0); }
		public ObjectClassContext objectClass() {
			return getRuleContext(ObjectClassContext.class,0);
		}
		public ObjectClassAssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectClassAssignment; }
	}

	public final ObjectClassAssignmentContext objectClassAssignment() throws RecognitionException {
		ObjectClassAssignmentContext _localctx = new ObjectClassAssignmentContext(_ctx, getState());
		enterRule(_localctx, 340, RULE_objectClassAssignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1578);
			objectclassreference();
			setState(1579);
			match(ASSIGN);
			setState(1580);
			objectClass();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectClassContext extends ParserRuleContext {
		public DefinedObjectClassContext definedObjectClass() {
			return getRuleContext(DefinedObjectClassContext.class,0);
		}
		public ObjectClassDefnContext objectClassDefn() {
			return getRuleContext(ObjectClassDefnContext.class,0);
		}
		public ParameterizedObjectClassContext parameterizedObjectClass() {
			return getRuleContext(ParameterizedObjectClassContext.class,0);
		}
		public ObjectClassContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectClass; }
	}

	public final ObjectClassContext objectClass() throws RecognitionException {
		ObjectClassContext _localctx = new ObjectClassContext(_ctx, getState());
		enterRule(_localctx, 342, RULE_objectClass);
		try {
			setState(1585);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,109,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1582);
				definedObjectClass();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1583);
				objectClassDefn();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1584);
				parameterizedObjectClass();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectClassDefnContext extends ParserRuleContext {
		public TerminalNode CLASS_WORD() { return getToken(ASN1Parser.CLASS_WORD, 0); }
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public List<FieldSpecContext> fieldSpec() {
			return getRuleContexts(FieldSpecContext.class);
		}
		public FieldSpecContext fieldSpec(int i) {
			return getRuleContext(FieldSpecContext.class,i);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public WithSyntaxSpecContext withSyntaxSpec() {
			return getRuleContext(WithSyntaxSpecContext.class,0);
		}
		public ObjectClassDefnContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectClassDefn; }
	}

	public final ObjectClassDefnContext objectClassDefn() throws RecognitionException {
		ObjectClassDefnContext _localctx = new ObjectClassDefnContext(_ctx, getState());
		enterRule(_localctx, 344, RULE_objectClassDefn);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1587);
			match(CLASS_WORD);
			setState(1588);
			match(L_BRACE);
			setState(1589);
			fieldSpec();
			setState(1594);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1590);
				match(COMMA);
				setState(1591);
				fieldSpec();
				}
				}
				setState(1596);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1597);
			match(R_BRACE);
			setState(1599);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,111,_ctx) ) {
			case 1:
				{
				setState(1598);
				withSyntaxSpec();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class WithSyntaxSpecContext extends ParserRuleContext {
		public TerminalNode WITH_WORD() { return getToken(ASN1Parser.WITH_WORD, 0); }
		public TerminalNode SYNTAX_WORD() { return getToken(ASN1Parser.SYNTAX_WORD, 0); }
		public SyntaxListContext syntaxList() {
			return getRuleContext(SyntaxListContext.class,0);
		}
		public WithSyntaxSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_withSyntaxSpec; }
	}

	public final WithSyntaxSpecContext withSyntaxSpec() throws RecognitionException {
		WithSyntaxSpecContext _localctx = new WithSyntaxSpecContext(_ctx, getState());
		enterRule(_localctx, 346, RULE_withSyntaxSpec);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1601);
			match(WITH_WORD);
			setState(1602);
			match(SYNTAX_WORD);
			setState(1603);
			syntaxList();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FieldSpecContext extends ParserRuleContext {
		public TypeFieldSpecContext typeFieldSpec() {
			return getRuleContext(TypeFieldSpecContext.class,0);
		}
		public FixedTypeValueFieldSpecContext fixedTypeValueFieldSpec() {
			return getRuleContext(FixedTypeValueFieldSpecContext.class,0);
		}
		public VariableTypeValueFieldSpecContext variableTypeValueFieldSpec() {
			return getRuleContext(VariableTypeValueFieldSpecContext.class,0);
		}
		public FixedTypeValueSetFieldSpecContext fixedTypeValueSetFieldSpec() {
			return getRuleContext(FixedTypeValueSetFieldSpecContext.class,0);
		}
		public VariableTypeValueSetFieldSpecContext variableTypeValueSetFieldSpec() {
			return getRuleContext(VariableTypeValueSetFieldSpecContext.class,0);
		}
		public ObjectFieldSpecContext objectFieldSpec() {
			return getRuleContext(ObjectFieldSpecContext.class,0);
		}
		public ObjectSetFieldSpecContext objectSetFieldSpec() {
			return getRuleContext(ObjectSetFieldSpecContext.class,0);
		}
		public FieldSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fieldSpec; }
	}

	public final FieldSpecContext fieldSpec() throws RecognitionException {
		FieldSpecContext _localctx = new FieldSpecContext(_ctx, getState());
		enterRule(_localctx, 348, RULE_fieldSpec);
		try {
			setState(1612);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,112,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1605);
				typeFieldSpec();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1606);
				fixedTypeValueFieldSpec();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1607);
				variableTypeValueFieldSpec();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1608);
				fixedTypeValueSetFieldSpec();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1609);
				variableTypeValueSetFieldSpec();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1610);
				objectFieldSpec();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1611);
				objectSetFieldSpec();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeFieldSpecContext extends ParserRuleContext {
		public TypefieldreferenceContext typefieldreference() {
			return getRuleContext(TypefieldreferenceContext.class,0);
		}
		public TypeOptionalitySpecContext typeOptionalitySpec() {
			return getRuleContext(TypeOptionalitySpecContext.class,0);
		}
		public TypeFieldSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeFieldSpec; }
	}

	public final TypeFieldSpecContext typeFieldSpec() throws RecognitionException {
		TypeFieldSpecContext _localctx = new TypeFieldSpecContext(_ctx, getState());
		enterRule(_localctx, 350, RULE_typeFieldSpec);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1614);
			typefieldreference();
			setState(1616);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OPTIONAL_WORD || _la==DEFAULT_WORD) {
				{
				setState(1615);
				typeOptionalitySpec();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeOptionalitySpecContext extends ParserRuleContext {
		public TerminalNode OPTIONAL_WORD() { return getToken(ASN1Parser.OPTIONAL_WORD, 0); }
		public TerminalNode DEFAULT_WORD() { return getToken(ASN1Parser.DEFAULT_WORD, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TypeOptionalitySpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeOptionalitySpec; }
	}

	public final TypeOptionalitySpecContext typeOptionalitySpec() throws RecognitionException {
		TypeOptionalitySpecContext _localctx = new TypeOptionalitySpecContext(_ctx, getState());
		enterRule(_localctx, 352, RULE_typeOptionalitySpec);
		try {
			setState(1621);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPTIONAL_WORD:
				enterOuterAlt(_localctx, 1);
				{
				setState(1618);
				match(OPTIONAL_WORD);
				}
				break;
			case DEFAULT_WORD:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(1619);
				match(DEFAULT_WORD);
				setState(1620);
				type();
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FixedTypeValueFieldSpecContext extends ParserRuleContext {
		public ValuefieldreferenceContext valuefieldreference() {
			return getRuleContext(ValuefieldreferenceContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode UNIQUE_WORD() { return getToken(ASN1Parser.UNIQUE_WORD, 0); }
		public ValueOptionalitySpecContext valueOptionalitySpec() {
			return getRuleContext(ValueOptionalitySpecContext.class,0);
		}
		public FixedTypeValueFieldSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fixedTypeValueFieldSpec; }
	}

	public final FixedTypeValueFieldSpecContext fixedTypeValueFieldSpec() throws RecognitionException {
		FixedTypeValueFieldSpecContext _localctx = new FixedTypeValueFieldSpecContext(_ctx, getState());
		enterRule(_localctx, 354, RULE_fixedTypeValueFieldSpec);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1623);
			valuefieldreference();
			setState(1624);
			type();
			setState(1626);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==UNIQUE_WORD) {
				{
				setState(1625);
				match(UNIQUE_WORD);
				}
			}

			setState(1629);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OPTIONAL_WORD || _la==DEFAULT_WORD) {
				{
				setState(1628);
				valueOptionalitySpec();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValueOptionalitySpecContext extends ParserRuleContext {
		public TerminalNode OPTIONAL_WORD() { return getToken(ASN1Parser.OPTIONAL_WORD, 0); }
		public TerminalNode DEFAULT_WORD() { return getToken(ASN1Parser.DEFAULT_WORD, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public ValueOptionalitySpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valueOptionalitySpec; }
	}

	public final ValueOptionalitySpecContext valueOptionalitySpec() throws RecognitionException {
		ValueOptionalitySpecContext _localctx = new ValueOptionalitySpecContext(_ctx, getState());
		enterRule(_localctx, 356, RULE_valueOptionalitySpec);
		try {
			setState(1634);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPTIONAL_WORD:
				enterOuterAlt(_localctx, 1);
				{
				setState(1631);
				match(OPTIONAL_WORD);
				}
				break;
			case DEFAULT_WORD:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(1632);
				match(DEFAULT_WORD);
				setState(1633);
				value();
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VariableTypeValueFieldSpecContext extends ParserRuleContext {
		public ValuefieldreferenceContext valuefieldreference() {
			return getRuleContext(ValuefieldreferenceContext.class,0);
		}
		public FieldNameContext fieldName() {
			return getRuleContext(FieldNameContext.class,0);
		}
		public ValueOptionalitySpecContext valueOptionalitySpec() {
			return getRuleContext(ValueOptionalitySpecContext.class,0);
		}
		public VariableTypeValueFieldSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variableTypeValueFieldSpec; }
	}

	public final VariableTypeValueFieldSpecContext variableTypeValueFieldSpec() throws RecognitionException {
		VariableTypeValueFieldSpecContext _localctx = new VariableTypeValueFieldSpecContext(_ctx, getState());
		enterRule(_localctx, 358, RULE_variableTypeValueFieldSpec);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1636);
			valuefieldreference();
			setState(1637);
			fieldName();
			setState(1639);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OPTIONAL_WORD || _la==DEFAULT_WORD) {
				{
				setState(1638);
				valueOptionalitySpec();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FixedTypeValueSetFieldSpecContext extends ParserRuleContext {
		public ValuesetfieldreferenceContext valuesetfieldreference() {
			return getRuleContext(ValuesetfieldreferenceContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public ValueSetOptionalitySpecContext valueSetOptionalitySpec() {
			return getRuleContext(ValueSetOptionalitySpecContext.class,0);
		}
		public FixedTypeValueSetFieldSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fixedTypeValueSetFieldSpec; }
	}

	public final FixedTypeValueSetFieldSpecContext fixedTypeValueSetFieldSpec() throws RecognitionException {
		FixedTypeValueSetFieldSpecContext _localctx = new FixedTypeValueSetFieldSpecContext(_ctx, getState());
		enterRule(_localctx, 360, RULE_fixedTypeValueSetFieldSpec);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1641);
			valuesetfieldreference();
			setState(1642);
			type();
			setState(1644);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OPTIONAL_WORD || _la==DEFAULT_WORD) {
				{
				setState(1643);
				valueSetOptionalitySpec();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValueSetOptionalitySpecContext extends ParserRuleContext {
		public TerminalNode OPTIONAL_WORD() { return getToken(ASN1Parser.OPTIONAL_WORD, 0); }
		public TerminalNode DEFAULT_WORD() { return getToken(ASN1Parser.DEFAULT_WORD, 0); }
		public ValueSetContext valueSet() {
			return getRuleContext(ValueSetContext.class,0);
		}
		public ValueSetOptionalitySpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valueSetOptionalitySpec; }
	}

	public final ValueSetOptionalitySpecContext valueSetOptionalitySpec() throws RecognitionException {
		ValueSetOptionalitySpecContext _localctx = new ValueSetOptionalitySpecContext(_ctx, getState());
		enterRule(_localctx, 362, RULE_valueSetOptionalitySpec);
		try {
			setState(1649);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPTIONAL_WORD:
				enterOuterAlt(_localctx, 1);
				{
				setState(1646);
				match(OPTIONAL_WORD);
				}
				break;
			case DEFAULT_WORD:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(1647);
				match(DEFAULT_WORD);
				setState(1648);
				valueSet();
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VariableTypeValueSetFieldSpecContext extends ParserRuleContext {
		public ValuesetfieldreferenceContext valuesetfieldreference() {
			return getRuleContext(ValuesetfieldreferenceContext.class,0);
		}
		public FieldNameContext fieldName() {
			return getRuleContext(FieldNameContext.class,0);
		}
		public ValueSetOptionalitySpecContext valueSetOptionalitySpec() {
			return getRuleContext(ValueSetOptionalitySpecContext.class,0);
		}
		public VariableTypeValueSetFieldSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variableTypeValueSetFieldSpec; }
	}

	public final VariableTypeValueSetFieldSpecContext variableTypeValueSetFieldSpec() throws RecognitionException {
		VariableTypeValueSetFieldSpecContext _localctx = new VariableTypeValueSetFieldSpecContext(_ctx, getState());
		enterRule(_localctx, 364, RULE_variableTypeValueSetFieldSpec);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1651);
			valuesetfieldreference();
			setState(1652);
			fieldName();
			setState(1654);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OPTIONAL_WORD || _la==DEFAULT_WORD) {
				{
				setState(1653);
				valueSetOptionalitySpec();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectFieldSpecContext extends ParserRuleContext {
		public ObjectfieldreferenceContext objectfieldreference() {
			return getRuleContext(ObjectfieldreferenceContext.class,0);
		}
		public DefinedObjectClassContext definedObjectClass() {
			return getRuleContext(DefinedObjectClassContext.class,0);
		}
		public ObjectOptionalitySpecContext objectOptionalitySpec() {
			return getRuleContext(ObjectOptionalitySpecContext.class,0);
		}
		public ObjectFieldSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectFieldSpec; }
	}

	public final ObjectFieldSpecContext objectFieldSpec() throws RecognitionException {
		ObjectFieldSpecContext _localctx = new ObjectFieldSpecContext(_ctx, getState());
		enterRule(_localctx, 366, RULE_objectFieldSpec);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1656);
			objectfieldreference();
			setState(1657);
			definedObjectClass();
			setState(1659);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OPTIONAL_WORD || _la==DEFAULT_WORD) {
				{
				setState(1658);
				objectOptionalitySpec();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectOptionalitySpecContext extends ParserRuleContext {
		public TerminalNode OPTIONAL_WORD() { return getToken(ASN1Parser.OPTIONAL_WORD, 0); }
		public TerminalNode DEFAULT_WORD() { return getToken(ASN1Parser.DEFAULT_WORD, 0); }
		public ObjectContext object() {
			return getRuleContext(ObjectContext.class,0);
		}
		public ObjectOptionalitySpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectOptionalitySpec; }
	}

	public final ObjectOptionalitySpecContext objectOptionalitySpec() throws RecognitionException {
		ObjectOptionalitySpecContext _localctx = new ObjectOptionalitySpecContext(_ctx, getState());
		enterRule(_localctx, 368, RULE_objectOptionalitySpec);
		try {
			setState(1664);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPTIONAL_WORD:
				enterOuterAlt(_localctx, 1);
				{
				setState(1661);
				match(OPTIONAL_WORD);
				}
				break;
			case DEFAULT_WORD:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(1662);
				match(DEFAULT_WORD);
				setState(1663);
				object();
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectSetFieldSpecContext extends ParserRuleContext {
		public ObjectsetfieldreferenceContext objectsetfieldreference() {
			return getRuleContext(ObjectsetfieldreferenceContext.class,0);
		}
		public DefinedObjectClassContext definedObjectClass() {
			return getRuleContext(DefinedObjectClassContext.class,0);
		}
		public ObjectSetOptionalitySpecContext objectSetOptionalitySpec() {
			return getRuleContext(ObjectSetOptionalitySpecContext.class,0);
		}
		public ObjectSetFieldSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectSetFieldSpec; }
	}

	public final ObjectSetFieldSpecContext objectSetFieldSpec() throws RecognitionException {
		ObjectSetFieldSpecContext _localctx = new ObjectSetFieldSpecContext(_ctx, getState());
		enterRule(_localctx, 370, RULE_objectSetFieldSpec);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1666);
			objectsetfieldreference();
			setState(1667);
			definedObjectClass();
			setState(1669);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OPTIONAL_WORD || _la==DEFAULT_WORD) {
				{
				setState(1668);
				objectSetOptionalitySpec();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectSetOptionalitySpecContext extends ParserRuleContext {
		public TerminalNode OPTIONAL_WORD() { return getToken(ASN1Parser.OPTIONAL_WORD, 0); }
		public TerminalNode DEFAULT_WORD() { return getToken(ASN1Parser.DEFAULT_WORD, 0); }
		public ObjectSetContext objectSet() {
			return getRuleContext(ObjectSetContext.class,0);
		}
		public ObjectSetOptionalitySpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectSetOptionalitySpec; }
	}

	public final ObjectSetOptionalitySpecContext objectSetOptionalitySpec() throws RecognitionException {
		ObjectSetOptionalitySpecContext _localctx = new ObjectSetOptionalitySpecContext(_ctx, getState());
		enterRule(_localctx, 372, RULE_objectSetOptionalitySpec);
		try {
			setState(1674);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPTIONAL_WORD:
				enterOuterAlt(_localctx, 1);
				{
				setState(1671);
				match(OPTIONAL_WORD);
				}
				break;
			case DEFAULT_WORD:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(1672);
				match(DEFAULT_WORD);
				setState(1673);
				objectSet();
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PrimitiveFieldNameContext extends ParserRuleContext {
		public TypefieldreferenceContext typefieldreference() {
			return getRuleContext(TypefieldreferenceContext.class,0);
		}
		public ValuefieldreferenceContext valuefieldreference() {
			return getRuleContext(ValuefieldreferenceContext.class,0);
		}
		public ValuesetfieldreferenceContext valuesetfieldreference() {
			return getRuleContext(ValuesetfieldreferenceContext.class,0);
		}
		public ObjectfieldreferenceContext objectfieldreference() {
			return getRuleContext(ObjectfieldreferenceContext.class,0);
		}
		public ObjectsetfieldreferenceContext objectsetfieldreference() {
			return getRuleContext(ObjectsetfieldreferenceContext.class,0);
		}
		public PrimitiveFieldNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primitiveFieldName; }
	}

	public final PrimitiveFieldNameContext primitiveFieldName() throws RecognitionException {
		PrimitiveFieldNameContext _localctx = new PrimitiveFieldNameContext(_ctx, getState());
		enterRule(_localctx, 374, RULE_primitiveFieldName);
		try {
			setState(1681);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,126,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1676);
				typefieldreference();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1677);
				valuefieldreference();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1678);
				valuesetfieldreference();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1679);
				objectfieldreference();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1680);
				objectsetfieldreference();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FieldNameContext extends ParserRuleContext {
		public List<PrimitiveFieldNameContext> primitiveFieldName() {
			return getRuleContexts(PrimitiveFieldNameContext.class);
		}
		public PrimitiveFieldNameContext primitiveFieldName(int i) {
			return getRuleContext(PrimitiveFieldNameContext.class,i);
		}
		public List<TerminalNode> DOT() { return getTokens(ASN1Parser.DOT); }
		public TerminalNode DOT(int i) {
			return getToken(ASN1Parser.DOT, i);
		}
		public FieldNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fieldName; }
	}

	public final FieldNameContext fieldName() throws RecognitionException {
		FieldNameContext _localctx = new FieldNameContext(_ctx, getState());
		enterRule(_localctx, 376, RULE_fieldName);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1683);
			primitiveFieldName();
			setState(1688);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,127,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1684);
					match(DOT);
					setState(1685);
					primitiveFieldName();
					}
					} 
				}
				setState(1690);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,127,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SyntaxListContext extends ParserRuleContext {
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public List<TokenOrGroupSpecContext> tokenOrGroupSpec() {
			return getRuleContexts(TokenOrGroupSpecContext.class);
		}
		public TokenOrGroupSpecContext tokenOrGroupSpec(int i) {
			return getRuleContext(TokenOrGroupSpecContext.class,i);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public SyntaxListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_syntaxList; }
	}

	public final SyntaxListContext syntaxList() throws RecognitionException {
		SyntaxListContext _localctx = new SyntaxListContext(_ctx, getState());
		enterRule(_localctx, 378, RULE_syntaxList);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1691);
			match(L_BRACE);
			setState(1692);
			tokenOrGroupSpec();
			setState(1696);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,128,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1693);
					tokenOrGroupSpec();
					}
					} 
				}
				setState(1698);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,128,_ctx);
			}
			setState(1699);
			match(R_BRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TokenOrGroupSpecContext extends ParserRuleContext {
		public RequiredTokenContext requiredToken() {
			return getRuleContext(RequiredTokenContext.class,0);
		}
		public OptionalGroupContext optionalGroup() {
			return getRuleContext(OptionalGroupContext.class,0);
		}
		public TokenOrGroupSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tokenOrGroupSpec; }
	}

	public final TokenOrGroupSpecContext tokenOrGroupSpec() throws RecognitionException {
		TokenOrGroupSpecContext _localctx = new TokenOrGroupSpecContext(_ctx, getState());
		enterRule(_localctx, 380, RULE_tokenOrGroupSpec);
		try {
			setState(1703);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,129,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1701);
				requiredToken();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1702);
				optionalGroup();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OptionalGroupContext extends ParserRuleContext {
		public List<TokenOrGroupSpecContext> tokenOrGroupSpec() {
			return getRuleContexts(TokenOrGroupSpecContext.class);
		}
		public TokenOrGroupSpecContext tokenOrGroupSpec(int i) {
			return getRuleContext(TokenOrGroupSpecContext.class,i);
		}
		public OptionalGroupContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_optionalGroup; }
	}

	public final OptionalGroupContext optionalGroup() throws RecognitionException {
		OptionalGroupContext _localctx = new OptionalGroupContext(_ctx, getState());
		enterRule(_localctx, 382, RULE_optionalGroup);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1705);
			match(T__1);
			setState(1706);
			tokenOrGroupSpec();
			setState(1710);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,130,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1707);
					tokenOrGroupSpec();
					}
					} 
				}
				setState(1712);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,130,_ctx);
			}
			setState(1713);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class RequiredTokenContext extends ParserRuleContext {
		public LiteralContext literal() {
			return getRuleContext(LiteralContext.class,0);
		}
		public PrimitiveFieldNameContext primitiveFieldName() {
			return getRuleContext(PrimitiveFieldNameContext.class,0);
		}
		public RequiredTokenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_requiredToken; }
	}

	public final RequiredTokenContext requiredToken() throws RecognitionException {
		RequiredTokenContext _localctx = new RequiredTokenContext(_ctx, getState());
		enterRule(_localctx, 384, RULE_requiredToken);
		try {
			setState(1717);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,131,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1715);
				literal();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1716);
				primitiveFieldName();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LiteralContext extends ParserRuleContext {
		public WordContext word() {
			return getRuleContext(WordContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(ASN1Parser.COMMA, 0); }
		public LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literal; }
	}

	public final LiteralContext literal() throws RecognitionException {
		LiteralContext _localctx = new LiteralContext(_ctx, getState());
		enterRule(_localctx, 386, RULE_literal);
		try {
			setState(1721);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,132,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1719);
				word();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1720);
				match(COMMA);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectAssignmentContext extends ParserRuleContext {
		public ObjectreferenceContext objectreference() {
			return getRuleContext(ObjectreferenceContext.class,0);
		}
		public DefinedObjectClassContext definedObjectClass() {
			return getRuleContext(DefinedObjectClassContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(ASN1Parser.ASSIGN, 0); }
		public ObjectContext object() {
			return getRuleContext(ObjectContext.class,0);
		}
		public ObjectAssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectAssignment; }
	}

	public final ObjectAssignmentContext objectAssignment() throws RecognitionException {
		ObjectAssignmentContext _localctx = new ObjectAssignmentContext(_ctx, getState());
		enterRule(_localctx, 388, RULE_objectAssignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1723);
			objectreference();
			setState(1724);
			definedObjectClass();
			setState(1725);
			match(ASSIGN);
			setState(1726);
			object();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectContext extends ParserRuleContext {
		public DefinedObjectContext definedObject() {
			return getRuleContext(DefinedObjectContext.class,0);
		}
		public ObjectDefnContext objectDefn() {
			return getRuleContext(ObjectDefnContext.class,0);
		}
		public ObjectFromObjectContext objectFromObject() {
			return getRuleContext(ObjectFromObjectContext.class,0);
		}
		public ParameterizedObjectContext parameterizedObject() {
			return getRuleContext(ParameterizedObjectContext.class,0);
		}
		public ObjectContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_object; }
	}

	public final ObjectContext object() throws RecognitionException {
		ObjectContext _localctx = new ObjectContext(_ctx, getState());
		enterRule(_localctx, 390, RULE_object);
		try {
			setState(1732);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,133,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1728);
				definedObject();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1729);
				objectDefn();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1730);
				objectFromObject();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1731);
				parameterizedObject();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectDefnContext extends ParserRuleContext {
		public DefaultSyntaxContext defaultSyntax() {
			return getRuleContext(DefaultSyntaxContext.class,0);
		}
		public DefinedSyntaxContext definedSyntax() {
			return getRuleContext(DefinedSyntaxContext.class,0);
		}
		public ObjectDefnContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectDefn; }
	}

	public final ObjectDefnContext objectDefn() throws RecognitionException {
		ObjectDefnContext _localctx = new ObjectDefnContext(_ctx, getState());
		enterRule(_localctx, 392, RULE_objectDefn);
		try {
			setState(1736);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,134,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1734);
				defaultSyntax();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1735);
				definedSyntax();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DefaultSyntaxContext extends ParserRuleContext {
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public List<FieldSettingContext> fieldSetting() {
			return getRuleContexts(FieldSettingContext.class);
		}
		public FieldSettingContext fieldSetting(int i) {
			return getRuleContext(FieldSettingContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public DefaultSyntaxContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_defaultSyntax; }
	}

	public final DefaultSyntaxContext defaultSyntax() throws RecognitionException {
		DefaultSyntaxContext _localctx = new DefaultSyntaxContext(_ctx, getState());
		enterRule(_localctx, 394, RULE_defaultSyntax);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1738);
			match(L_BRACE);
			setState(1740);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__9) {
				{
				setState(1739);
				fieldSetting();
				}
			}

			setState(1746);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1742);
				match(COMMA);
				setState(1743);
				fieldSetting();
				}
				}
				setState(1748);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1749);
			match(R_BRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FieldSettingContext extends ParserRuleContext {
		public PrimitiveFieldNameContext primitiveFieldName() {
			return getRuleContext(PrimitiveFieldNameContext.class,0);
		}
		public SettingContext setting() {
			return getRuleContext(SettingContext.class,0);
		}
		public FieldSettingContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fieldSetting; }
	}

	public final FieldSettingContext fieldSetting() throws RecognitionException {
		FieldSettingContext _localctx = new FieldSettingContext(_ctx, getState());
		enterRule(_localctx, 396, RULE_fieldSetting);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1751);
			primitiveFieldName();
			setState(1752);
			setting();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DefinedSyntaxContext extends ParserRuleContext {
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public List<DefinedSyntaxTokenContext> definedSyntaxToken() {
			return getRuleContexts(DefinedSyntaxTokenContext.class);
		}
		public DefinedSyntaxTokenContext definedSyntaxToken(int i) {
			return getRuleContext(DefinedSyntaxTokenContext.class,i);
		}
		public DefinedSyntaxContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_definedSyntax; }
	}

	public final DefinedSyntaxContext definedSyntax() throws RecognitionException {
		DefinedSyntaxContext _localctx = new DefinedSyntaxContext(_ctx, getState());
		enterRule(_localctx, 398, RULE_definedSyntax);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1754);
			match(L_BRACE);
			setState(1758);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,137,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1755);
					definedSyntaxToken();
					}
					} 
				}
				setState(1760);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,137,_ctx);
			}
			setState(1761);
			match(R_BRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DefinedSyntaxTokenContext extends ParserRuleContext {
		public LiteralContext literal() {
			return getRuleContext(LiteralContext.class,0);
		}
		public SettingContext setting() {
			return getRuleContext(SettingContext.class,0);
		}
		public DefinedSyntaxTokenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_definedSyntaxToken; }
	}

	public final DefinedSyntaxTokenContext definedSyntaxToken() throws RecognitionException {
		DefinedSyntaxTokenContext _localctx = new DefinedSyntaxTokenContext(_ctx, getState());
		enterRule(_localctx, 400, RULE_definedSyntaxToken);
		try {
			setState(1765);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,138,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1763);
				literal();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1764);
				setting();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SettingContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public ValueSetContext valueSet() {
			return getRuleContext(ValueSetContext.class,0);
		}
		public ObjectContext object() {
			return getRuleContext(ObjectContext.class,0);
		}
		public ObjectSetContext objectSet() {
			return getRuleContext(ObjectSetContext.class,0);
		}
		public SettingContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_setting; }
	}

	public final SettingContext setting() throws RecognitionException {
		SettingContext _localctx = new SettingContext(_ctx, getState());
		enterRule(_localctx, 402, RULE_setting);
		try {
			setState(1772);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,139,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1767);
				type();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1768);
				value();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1769);
				valueSet();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1770);
				object();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1771);
				objectSet();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectSetAssignmentContext extends ParserRuleContext {
		public ObjectsetreferenceContext objectsetreference() {
			return getRuleContext(ObjectsetreferenceContext.class,0);
		}
		public DefinedObjectClassContext definedObjectClass() {
			return getRuleContext(DefinedObjectClassContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(ASN1Parser.ASSIGN, 0); }
		public ObjectSetContext objectSet() {
			return getRuleContext(ObjectSetContext.class,0);
		}
		public ObjectSetAssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectSetAssignment; }
	}

	public final ObjectSetAssignmentContext objectSetAssignment() throws RecognitionException {
		ObjectSetAssignmentContext _localctx = new ObjectSetAssignmentContext(_ctx, getState());
		enterRule(_localctx, 404, RULE_objectSetAssignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1774);
			objectsetreference();
			setState(1775);
			definedObjectClass();
			setState(1776);
			match(ASSIGN);
			setState(1777);
			objectSet();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectSetContext extends ParserRuleContext {
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public ObjectSetSpecContext objectSetSpec() {
			return getRuleContext(ObjectSetSpecContext.class,0);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public ObjectSetContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectSet; }
	}

	public final ObjectSetContext objectSet() throws RecognitionException {
		ObjectSetContext _localctx = new ObjectSetContext(_ctx, getState());
		enterRule(_localctx, 406, RULE_objectSet);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1779);
			match(L_BRACE);
			setState(1780);
			objectSetSpec();
			setState(1781);
			match(R_BRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectSetSpecContext extends ParserRuleContext {
		public RootElementSetSpecContext rootElementSetSpec() {
			return getRuleContext(RootElementSetSpecContext.class,0);
		}
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public TerminalNode ELLIPSIS() { return getToken(ASN1Parser.ELLIPSIS, 0); }
		public AdditionalElementSetSpecContext additionalElementSetSpec() {
			return getRuleContext(AdditionalElementSetSpecContext.class,0);
		}
		public ObjectSetSpecContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectSetSpec; }
	}

	public final ObjectSetSpecContext objectSetSpec() throws RecognitionException {
		ObjectSetSpecContext _localctx = new ObjectSetSpecContext(_ctx, getState());
		enterRule(_localctx, 408, RULE_objectSetSpec);
		try {
			setState(1798);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,140,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1783);
				rootElementSetSpec();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1784);
				rootElementSetSpec();
				setState(1785);
				match(COMMA);
				setState(1786);
				match(ELLIPSIS);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1788);
				match(ELLIPSIS);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1789);
				match(ELLIPSIS);
				setState(1790);
				match(COMMA);
				setState(1791);
				additionalElementSetSpec();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1792);
				rootElementSetSpec();
				setState(1793);
				match(COMMA);
				setState(1794);
				match(ELLIPSIS);
				setState(1795);
				match(COMMA);
				setState(1796);
				additionalElementSetSpec();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectSetElementsContext extends ParserRuleContext {
		public ObjectContext object() {
			return getRuleContext(ObjectContext.class,0);
		}
		public DefinedObjectSetContext definedObjectSet() {
			return getRuleContext(DefinedObjectSetContext.class,0);
		}
		public ObjectSetFromObjectsContext objectSetFromObjects() {
			return getRuleContext(ObjectSetFromObjectsContext.class,0);
		}
		public ParameterizedObjectSetContext parameterizedObjectSet() {
			return getRuleContext(ParameterizedObjectSetContext.class,0);
		}
		public ObjectSetElementsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectSetElements; }
	}

	public final ObjectSetElementsContext objectSetElements() throws RecognitionException {
		ObjectSetElementsContext _localctx = new ObjectSetElementsContext(_ctx, getState());
		enterRule(_localctx, 410, RULE_objectSetElements);
		try {
			setState(1804);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,141,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1800);
				object();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1801);
				definedObjectSet();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1802);
				objectSetFromObjects();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1803);
				parameterizedObjectSet();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectClassFieldTypeContext extends ParserRuleContext {
		public DefinedObjectClassContext definedObjectClass() {
			return getRuleContext(DefinedObjectClassContext.class,0);
		}
		public TerminalNode DOT() { return getToken(ASN1Parser.DOT, 0); }
		public FieldNameContext fieldName() {
			return getRuleContext(FieldNameContext.class,0);
		}
		public ObjectClassFieldTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectClassFieldType; }
	}

	public final ObjectClassFieldTypeContext objectClassFieldType() throws RecognitionException {
		ObjectClassFieldTypeContext _localctx = new ObjectClassFieldTypeContext(_ctx, getState());
		enterRule(_localctx, 412, RULE_objectClassFieldType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1806);
			definedObjectClass();
			setState(1807);
			match(DOT);
			setState(1808);
			fieldName();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectClassFieldValueContext extends ParserRuleContext {
		public OpenTypeFieldValContext openTypeFieldVal() {
			return getRuleContext(OpenTypeFieldValContext.class,0);
		}
		public FixedTypeFieldValContext fixedTypeFieldVal() {
			return getRuleContext(FixedTypeFieldValContext.class,0);
		}
		public ObjectClassFieldValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectClassFieldValue; }
	}

	public final ObjectClassFieldValueContext objectClassFieldValue() throws RecognitionException {
		ObjectClassFieldValueContext _localctx = new ObjectClassFieldValueContext(_ctx, getState());
		enterRule(_localctx, 414, RULE_objectClassFieldValue);
		try {
			setState(1812);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,142,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1810);
				openTypeFieldVal();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1811);
				fixedTypeFieldVal();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OpenTypeFieldValContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode COLON() { return getToken(ASN1Parser.COLON, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public OpenTypeFieldValContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_openTypeFieldVal; }
	}

	public final OpenTypeFieldValContext openTypeFieldVal() throws RecognitionException {
		OpenTypeFieldValContext _localctx = new OpenTypeFieldValContext(_ctx, getState());
		enterRule(_localctx, 416, RULE_openTypeFieldVal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1814);
			type();
			setState(1815);
			match(COLON);
			setState(1816);
			value();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FixedTypeFieldValContext extends ParserRuleContext {
		public BuiltinValueContext builtinValue() {
			return getRuleContext(BuiltinValueContext.class,0);
		}
		public ReferencedValueContext referencedValue() {
			return getRuleContext(ReferencedValueContext.class,0);
		}
		public FixedTypeFieldValContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fixedTypeFieldVal; }
	}

	public final FixedTypeFieldValContext fixedTypeFieldVal() throws RecognitionException {
		FixedTypeFieldValContext _localctx = new FixedTypeFieldValContext(_ctx, getState());
		enterRule(_localctx, 418, RULE_fixedTypeFieldVal);
		try {
			setState(1820);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,143,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1818);
				builtinValue();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1819);
				referencedValue();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValueFromObjectContext extends ParserRuleContext {
		public ReferencedObjectsContext referencedObjects() {
			return getRuleContext(ReferencedObjectsContext.class,0);
		}
		public TerminalNode DOT() { return getToken(ASN1Parser.DOT, 0); }
		public FieldNameContext fieldName() {
			return getRuleContext(FieldNameContext.class,0);
		}
		public ValueFromObjectContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valueFromObject; }
	}

	public final ValueFromObjectContext valueFromObject() throws RecognitionException {
		ValueFromObjectContext _localctx = new ValueFromObjectContext(_ctx, getState());
		enterRule(_localctx, 420, RULE_valueFromObject);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1822);
			referencedObjects();
			setState(1823);
			match(DOT);
			setState(1824);
			fieldName();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValueSetFromObjectsContext extends ParserRuleContext {
		public ReferencedObjectsContext referencedObjects() {
			return getRuleContext(ReferencedObjectsContext.class,0);
		}
		public TerminalNode DOT() { return getToken(ASN1Parser.DOT, 0); }
		public FieldNameContext fieldName() {
			return getRuleContext(FieldNameContext.class,0);
		}
		public ValueSetFromObjectsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valueSetFromObjects; }
	}

	public final ValueSetFromObjectsContext valueSetFromObjects() throws RecognitionException {
		ValueSetFromObjectsContext _localctx = new ValueSetFromObjectsContext(_ctx, getState());
		enterRule(_localctx, 422, RULE_valueSetFromObjects);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1826);
			referencedObjects();
			setState(1827);
			match(DOT);
			setState(1828);
			fieldName();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeFromObjectContext extends ParserRuleContext {
		public ReferencedObjectsContext referencedObjects() {
			return getRuleContext(ReferencedObjectsContext.class,0);
		}
		public TerminalNode DOT() { return getToken(ASN1Parser.DOT, 0); }
		public FieldNameContext fieldName() {
			return getRuleContext(FieldNameContext.class,0);
		}
		public TypeFromObjectContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeFromObject; }
	}

	public final TypeFromObjectContext typeFromObject() throws RecognitionException {
		TypeFromObjectContext _localctx = new TypeFromObjectContext(_ctx, getState());
		enterRule(_localctx, 424, RULE_typeFromObject);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1830);
			referencedObjects();
			setState(1831);
			match(DOT);
			setState(1832);
			fieldName();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectFromObjectContext extends ParserRuleContext {
		public ReferencedObjectsContext referencedObjects() {
			return getRuleContext(ReferencedObjectsContext.class,0);
		}
		public TerminalNode DOT() { return getToken(ASN1Parser.DOT, 0); }
		public FieldNameContext fieldName() {
			return getRuleContext(FieldNameContext.class,0);
		}
		public ObjectFromObjectContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectFromObject; }
	}

	public final ObjectFromObjectContext objectFromObject() throws RecognitionException {
		ObjectFromObjectContext _localctx = new ObjectFromObjectContext(_ctx, getState());
		enterRule(_localctx, 426, RULE_objectFromObject);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1834);
			referencedObjects();
			setState(1835);
			match(DOT);
			setState(1836);
			fieldName();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectSetFromObjectsContext extends ParserRuleContext {
		public ReferencedObjectsContext referencedObjects() {
			return getRuleContext(ReferencedObjectsContext.class,0);
		}
		public TerminalNode DOT() { return getToken(ASN1Parser.DOT, 0); }
		public FieldNameContext fieldName() {
			return getRuleContext(FieldNameContext.class,0);
		}
		public ObjectSetFromObjectsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectSetFromObjects; }
	}

	public final ObjectSetFromObjectsContext objectSetFromObjects() throws RecognitionException {
		ObjectSetFromObjectsContext _localctx = new ObjectSetFromObjectsContext(_ctx, getState());
		enterRule(_localctx, 428, RULE_objectSetFromObjects);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1838);
			referencedObjects();
			setState(1839);
			match(DOT);
			setState(1840);
			fieldName();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ReferencedObjectsContext extends ParserRuleContext {
		public DefinedObjectContext definedObject() {
			return getRuleContext(DefinedObjectContext.class,0);
		}
		public ParameterizedObjectContext parameterizedObject() {
			return getRuleContext(ParameterizedObjectContext.class,0);
		}
		public DefinedObjectSetContext definedObjectSet() {
			return getRuleContext(DefinedObjectSetContext.class,0);
		}
		public ParameterizedObjectSetContext parameterizedObjectSet() {
			return getRuleContext(ParameterizedObjectSetContext.class,0);
		}
		public ReferencedObjectsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_referencedObjects; }
	}

	public final ReferencedObjectsContext referencedObjects() throws RecognitionException {
		ReferencedObjectsContext _localctx = new ReferencedObjectsContext(_ctx, getState());
		enterRule(_localctx, 430, RULE_referencedObjects);
		try {
			setState(1846);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,144,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1842);
				definedObject();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1843);
				parameterizedObject();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1844);
				definedObjectSet();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1845);
				parameterizedObjectSet();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AnyTypeContext extends ParserRuleContext {
		public TerminalNode ANY_WORD() { return getToken(ASN1Parser.ANY_WORD, 0); }
		public TerminalNode DEFINED_WORD() { return getToken(ASN1Parser.DEFINED_WORD, 0); }
		public TerminalNode BY_WORD() { return getToken(ASN1Parser.BY_WORD, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public AnyTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_anyType; }
	}

	public final AnyTypeContext anyType() throws RecognitionException {
		AnyTypeContext _localctx = new AnyTypeContext(_ctx, getState());
		enterRule(_localctx, 432, RULE_anyType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1848);
			match(ANY_WORD);
			setState(1851);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,145,_ctx) ) {
			case 1:
				{
				setState(1849);
				match(DEFINED_WORD);
				setState(1850);
				match(BY_WORD);
				}
				break;
			}
			setState(1854);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,146,_ctx) ) {
			case 1:
				{
				setState(1853);
				identifier();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectclassreferenceContext extends ParserRuleContext {
		public TerminalNode ReferenceItem() { return getToken(ASN1Parser.ReferenceItem, 0); }
		public ObjectclassreferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectclassreference; }
	}

	public final ObjectclassreferenceContext objectclassreference() throws RecognitionException {
		ObjectclassreferenceContext _localctx = new ObjectclassreferenceContext(_ctx, getState());
		enterRule(_localctx, 434, RULE_objectclassreference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1856);
			if (!( !_input.LT(1).getText().matches(".*[a-z]+.*") )) throw new FailedPredicateException(this, " !_input.LT(1).getText().matches(\".*[a-z]+.*\") ");
			setState(1857);
			match(ReferenceItem);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectreferenceContext extends ParserRuleContext {
		public TerminalNode IdentifierOrValueItem() { return getToken(ASN1Parser.IdentifierOrValueItem, 0); }
		public ObjectreferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectreference; }
	}

	public final ObjectreferenceContext objectreference() throws RecognitionException {
		ObjectreferenceContext _localctx = new ObjectreferenceContext(_ctx, getState());
		enterRule(_localctx, 436, RULE_objectreference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1859);
			match(IdentifierOrValueItem);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectsetreferenceContext extends ParserRuleContext {
		public TerminalNode ReferenceItem() { return getToken(ASN1Parser.ReferenceItem, 0); }
		public ObjectsetreferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectsetreference; }
	}

	public final ObjectsetreferenceContext objectsetreference() throws RecognitionException {
		ObjectsetreferenceContext _localctx = new ObjectsetreferenceContext(_ctx, getState());
		enterRule(_localctx, 438, RULE_objectsetreference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1861);
			match(ReferenceItem);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypefieldreferenceContext extends ParserRuleContext {
		public TerminalNode ReferenceItem() { return getToken(ASN1Parser.ReferenceItem, 0); }
		public TypefieldreferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typefieldreference; }
	}

	public final TypefieldreferenceContext typefieldreference() throws RecognitionException {
		TypefieldreferenceContext _localctx = new TypefieldreferenceContext(_ctx, getState());
		enterRule(_localctx, 440, RULE_typefieldreference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1863);
			match(T__9);
			setState(1864);
			match(ReferenceItem);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValuefieldreferenceContext extends ParserRuleContext {
		public TerminalNode IdentifierOrValueItem() { return getToken(ASN1Parser.IdentifierOrValueItem, 0); }
		public ValuefieldreferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuefieldreference; }
	}

	public final ValuefieldreferenceContext valuefieldreference() throws RecognitionException {
		ValuefieldreferenceContext _localctx = new ValuefieldreferenceContext(_ctx, getState());
		enterRule(_localctx, 442, RULE_valuefieldreference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1866);
			match(T__9);
			setState(1867);
			match(IdentifierOrValueItem);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValuesetfieldreferenceContext extends ParserRuleContext {
		public TerminalNode ReferenceItem() { return getToken(ASN1Parser.ReferenceItem, 0); }
		public ValuesetfieldreferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuesetfieldreference; }
	}

	public final ValuesetfieldreferenceContext valuesetfieldreference() throws RecognitionException {
		ValuesetfieldreferenceContext _localctx = new ValuesetfieldreferenceContext(_ctx, getState());
		enterRule(_localctx, 444, RULE_valuesetfieldreference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1869);
			match(T__9);
			setState(1870);
			match(ReferenceItem);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectfieldreferenceContext extends ParserRuleContext {
		public TerminalNode IdentifierOrValueItem() { return getToken(ASN1Parser.IdentifierOrValueItem, 0); }
		public ObjectfieldreferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectfieldreference; }
	}

	public final ObjectfieldreferenceContext objectfieldreference() throws RecognitionException {
		ObjectfieldreferenceContext _localctx = new ObjectfieldreferenceContext(_ctx, getState());
		enterRule(_localctx, 446, RULE_objectfieldreference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1872);
			match(T__9);
			setState(1873);
			match(IdentifierOrValueItem);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ObjectsetfieldreferenceContext extends ParserRuleContext {
		public TerminalNode ReferenceItem() { return getToken(ASN1Parser.ReferenceItem, 0); }
		public ObjectsetfieldreferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectsetfieldreference; }
	}

	public final ObjectsetfieldreferenceContext objectsetfieldreference() throws RecognitionException {
		ObjectsetfieldreferenceContext _localctx = new ObjectsetfieldreferenceContext(_ctx, getState());
		enterRule(_localctx, 448, RULE_objectsetfieldreference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1875);
			match(T__9);
			setState(1876);
			match(ReferenceItem);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class WordContext extends ParserRuleContext {
		public TerminalNode ReferenceItem() { return getToken(ASN1Parser.ReferenceItem, 0); }
		public WordContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_word; }
	}

	public final WordContext word() throws RecognitionException {
		WordContext _localctx = new WordContext(_ctx, getState());
		enterRule(_localctx, 450, RULE_word);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1878);
			if (!( !_input.LT(1).getText().matches(".*[a-z]+.*") && !_input.LT(1).getText().matches(".*[0-9]+.*") )) throw new FailedPredicateException(this, " !_input.LT(1).getText().matches(\".*[a-z]+.*\") && !_input.LT(1).getText().matches(\".*[0-9]+.*\") ");
			setState(1879);
			match(ReferenceItem);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterizedAssignmentContext extends ParserRuleContext {
		public ParameterizedTypeAssignmentContext parameterizedTypeAssignment() {
			return getRuleContext(ParameterizedTypeAssignmentContext.class,0);
		}
		public ParameterizedValueAssignmentContext parameterizedValueAssignment() {
			return getRuleContext(ParameterizedValueAssignmentContext.class,0);
		}
		public ParameterizedValueSetTypeAssignmentContext parameterizedValueSetTypeAssignment() {
			return getRuleContext(ParameterizedValueSetTypeAssignmentContext.class,0);
		}
		public ParameterizedObjectClassAssignmentContext parameterizedObjectClassAssignment() {
			return getRuleContext(ParameterizedObjectClassAssignmentContext.class,0);
		}
		public ParameterizedObjectAssignmentContext parameterizedObjectAssignment() {
			return getRuleContext(ParameterizedObjectAssignmentContext.class,0);
		}
		public ParameterizedObjectSetAssignmentContext parameterizedObjectSetAssignment() {
			return getRuleContext(ParameterizedObjectSetAssignmentContext.class,0);
		}
		public ParameterizedAssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterizedAssignment; }
	}

	public final ParameterizedAssignmentContext parameterizedAssignment() throws RecognitionException {
		ParameterizedAssignmentContext _localctx = new ParameterizedAssignmentContext(_ctx, getState());
		enterRule(_localctx, 452, RULE_parameterizedAssignment);
		try {
			setState(1887);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,147,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1881);
				parameterizedTypeAssignment();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1882);
				parameterizedValueAssignment();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1883);
				parameterizedValueSetTypeAssignment();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1884);
				parameterizedObjectClassAssignment();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1885);
				parameterizedObjectAssignment();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1886);
				parameterizedObjectSetAssignment();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterizedTypeAssignmentContext extends ParserRuleContext {
		public TypereferenceContext typereference() {
			return getRuleContext(TypereferenceContext.class,0);
		}
		public ParameterListContext parameterList() {
			return getRuleContext(ParameterListContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(ASN1Parser.ASSIGN, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public ParameterizedTypeAssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterizedTypeAssignment; }
	}

	public final ParameterizedTypeAssignmentContext parameterizedTypeAssignment() throws RecognitionException {
		ParameterizedTypeAssignmentContext _localctx = new ParameterizedTypeAssignmentContext(_ctx, getState());
		enterRule(_localctx, 454, RULE_parameterizedTypeAssignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1889);
			typereference();
			setState(1890);
			parameterList();
			setState(1891);
			match(ASSIGN);
			setState(1892);
			type();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterizedValueAssignmentContext extends ParserRuleContext {
		public ValuereferenceContext valuereference() {
			return getRuleContext(ValuereferenceContext.class,0);
		}
		public ParameterListContext parameterList() {
			return getRuleContext(ParameterListContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(ASN1Parser.ASSIGN, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public ParameterizedValueAssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterizedValueAssignment; }
	}

	public final ParameterizedValueAssignmentContext parameterizedValueAssignment() throws RecognitionException {
		ParameterizedValueAssignmentContext _localctx = new ParameterizedValueAssignmentContext(_ctx, getState());
		enterRule(_localctx, 456, RULE_parameterizedValueAssignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1894);
			valuereference();
			setState(1895);
			parameterList();
			setState(1896);
			type();
			setState(1897);
			match(ASSIGN);
			setState(1898);
			value();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterizedValueSetTypeAssignmentContext extends ParserRuleContext {
		public TypereferenceContext typereference() {
			return getRuleContext(TypereferenceContext.class,0);
		}
		public ParameterListContext parameterList() {
			return getRuleContext(ParameterListContext.class,0);
		}
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(ASN1Parser.ASSIGN, 0); }
		public ValueSetContext valueSet() {
			return getRuleContext(ValueSetContext.class,0);
		}
		public ParameterizedValueSetTypeAssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterizedValueSetTypeAssignment; }
	}

	public final ParameterizedValueSetTypeAssignmentContext parameterizedValueSetTypeAssignment() throws RecognitionException {
		ParameterizedValueSetTypeAssignmentContext _localctx = new ParameterizedValueSetTypeAssignmentContext(_ctx, getState());
		enterRule(_localctx, 458, RULE_parameterizedValueSetTypeAssignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1900);
			typereference();
			setState(1901);
			parameterList();
			setState(1902);
			type();
			setState(1903);
			match(ASSIGN);
			setState(1904);
			valueSet();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterizedObjectClassAssignmentContext extends ParserRuleContext {
		public ObjectclassreferenceContext objectclassreference() {
			return getRuleContext(ObjectclassreferenceContext.class,0);
		}
		public ParameterListContext parameterList() {
			return getRuleContext(ParameterListContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(ASN1Parser.ASSIGN, 0); }
		public ObjectClassContext objectClass() {
			return getRuleContext(ObjectClassContext.class,0);
		}
		public ParameterizedObjectClassAssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterizedObjectClassAssignment; }
	}

	public final ParameterizedObjectClassAssignmentContext parameterizedObjectClassAssignment() throws RecognitionException {
		ParameterizedObjectClassAssignmentContext _localctx = new ParameterizedObjectClassAssignmentContext(_ctx, getState());
		enterRule(_localctx, 460, RULE_parameterizedObjectClassAssignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1906);
			objectclassreference();
			setState(1907);
			parameterList();
			setState(1908);
			match(ASSIGN);
			setState(1909);
			objectClass();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterizedObjectAssignmentContext extends ParserRuleContext {
		public ObjectreferenceContext objectreference() {
			return getRuleContext(ObjectreferenceContext.class,0);
		}
		public ParameterListContext parameterList() {
			return getRuleContext(ParameterListContext.class,0);
		}
		public DefinedObjectClassContext definedObjectClass() {
			return getRuleContext(DefinedObjectClassContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(ASN1Parser.ASSIGN, 0); }
		public ObjectContext object() {
			return getRuleContext(ObjectContext.class,0);
		}
		public ParameterizedObjectAssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterizedObjectAssignment; }
	}

	public final ParameterizedObjectAssignmentContext parameterizedObjectAssignment() throws RecognitionException {
		ParameterizedObjectAssignmentContext _localctx = new ParameterizedObjectAssignmentContext(_ctx, getState());
		enterRule(_localctx, 462, RULE_parameterizedObjectAssignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1911);
			objectreference();
			setState(1912);
			parameterList();
			setState(1913);
			definedObjectClass();
			setState(1914);
			match(ASSIGN);
			setState(1915);
			object();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterizedObjectSetAssignmentContext extends ParserRuleContext {
		public ObjectsetreferenceContext objectsetreference() {
			return getRuleContext(ObjectsetreferenceContext.class,0);
		}
		public ParameterListContext parameterList() {
			return getRuleContext(ParameterListContext.class,0);
		}
		public DefinedObjectClassContext definedObjectClass() {
			return getRuleContext(DefinedObjectClassContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(ASN1Parser.ASSIGN, 0); }
		public ObjectSetContext objectSet() {
			return getRuleContext(ObjectSetContext.class,0);
		}
		public ParameterizedObjectSetAssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterizedObjectSetAssignment; }
	}

	public final ParameterizedObjectSetAssignmentContext parameterizedObjectSetAssignment() throws RecognitionException {
		ParameterizedObjectSetAssignmentContext _localctx = new ParameterizedObjectSetAssignmentContext(_ctx, getState());
		enterRule(_localctx, 464, RULE_parameterizedObjectSetAssignment);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1917);
			objectsetreference();
			setState(1918);
			parameterList();
			setState(1919);
			definedObjectClass();
			setState(1920);
			match(ASSIGN);
			setState(1921);
			objectSet();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterListContext extends ParserRuleContext {
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public List<ParameterContext> parameter() {
			return getRuleContexts(ParameterContext.class);
		}
		public ParameterContext parameter(int i) {
			return getRuleContext(ParameterContext.class,i);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public ParameterListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterList; }
	}

	public final ParameterListContext parameterList() throws RecognitionException {
		ParameterListContext _localctx = new ParameterListContext(_ctx, getState());
		enterRule(_localctx, 466, RULE_parameterList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1923);
			match(L_BRACE);
			setState(1924);
			parameter();
			setState(1929);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1925);
				match(COMMA);
				setState(1926);
				parameter();
				}
				}
				setState(1931);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1932);
			match(R_BRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterContext extends ParserRuleContext {
		public ParamGovernorContext paramGovernor() {
			return getRuleContext(ParamGovernorContext.class,0);
		}
		public TerminalNode COLON() { return getToken(ASN1Parser.COLON, 0); }
		public DummyReferenceContext dummyReference() {
			return getRuleContext(DummyReferenceContext.class,0);
		}
		public ParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameter; }
	}

	public final ParameterContext parameter() throws RecognitionException {
		ParameterContext _localctx = new ParameterContext(_ctx, getState());
		enterRule(_localctx, 468, RULE_parameter);
		try {
			setState(1939);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,149,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(1934);
				paramGovernor();
				setState(1935);
				match(COLON);
				setState(1936);
				dummyReference();
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1938);
				dummyReference();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParamGovernorContext extends ParserRuleContext {
		public GovernorContext governor() {
			return getRuleContext(GovernorContext.class,0);
		}
		public DummyGovernorContext dummyGovernor() {
			return getRuleContext(DummyGovernorContext.class,0);
		}
		public ParamGovernorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_paramGovernor; }
	}

	public final ParamGovernorContext paramGovernor() throws RecognitionException {
		ParamGovernorContext _localctx = new ParamGovernorContext(_ctx, getState());
		enterRule(_localctx, 470, RULE_paramGovernor);
		try {
			setState(1943);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,150,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1941);
				governor();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1942);
				dummyGovernor();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class GovernorContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public DefinedObjectClassContext definedObjectClass() {
			return getRuleContext(DefinedObjectClassContext.class,0);
		}
		public GovernorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_governor; }
	}

	public final GovernorContext governor() throws RecognitionException {
		GovernorContext _localctx = new GovernorContext(_ctx, getState());
		enterRule(_localctx, 472, RULE_governor);
		try {
			setState(1947);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,151,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1945);
				type();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1946);
				definedObjectClass();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DummyGovernorContext extends ParserRuleContext {
		public DummyReferenceContext dummyReference() {
			return getRuleContext(DummyReferenceContext.class,0);
		}
		public DummyGovernorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dummyGovernor; }
	}

	public final DummyGovernorContext dummyGovernor() throws RecognitionException {
		DummyGovernorContext _localctx = new DummyGovernorContext(_ctx, getState());
		enterRule(_localctx, 474, RULE_dummyGovernor);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1949);
			dummyReference();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DummyReferenceContext extends ParserRuleContext {
		public ReferenceContext reference() {
			return getRuleContext(ReferenceContext.class,0);
		}
		public DummyReferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dummyReference; }
	}

	public final DummyReferenceContext dummyReference() throws RecognitionException {
		DummyReferenceContext _localctx = new DummyReferenceContext(_ctx, getState());
		enterRule(_localctx, 476, RULE_dummyReference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1951);
			reference();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterizedReferenceContext extends ParserRuleContext {
		public ReferenceContext reference() {
			return getRuleContext(ReferenceContext.class,0);
		}
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public ParameterizedReferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterizedReference; }
	}

	public final ParameterizedReferenceContext parameterizedReference() throws RecognitionException {
		ParameterizedReferenceContext _localctx = new ParameterizedReferenceContext(_ctx, getState());
		enterRule(_localctx, 478, RULE_parameterizedReference);
		try {
			setState(1958);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,152,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1953);
				reference();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1954);
				reference();
				setState(1955);
				match(L_BRACE);
				setState(1956);
				match(R_BRACE);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterizedTypeContext extends ParserRuleContext {
		public SimpleDefinedTypeContext simpleDefinedType() {
			return getRuleContext(SimpleDefinedTypeContext.class,0);
		}
		public ActualParameterListContext actualParameterList() {
			return getRuleContext(ActualParameterListContext.class,0);
		}
		public ParameterizedTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterizedType; }
	}

	public final ParameterizedTypeContext parameterizedType() throws RecognitionException {
		ParameterizedTypeContext _localctx = new ParameterizedTypeContext(_ctx, getState());
		enterRule(_localctx, 480, RULE_parameterizedType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1960);
			simpleDefinedType();
			setState(1961);
			actualParameterList();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SimpleDefinedTypeContext extends ParserRuleContext {
		public ExternalTypeReferenceContext externalTypeReference() {
			return getRuleContext(ExternalTypeReferenceContext.class,0);
		}
		public TypereferenceContext typereference() {
			return getRuleContext(TypereferenceContext.class,0);
		}
		public SimpleDefinedTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simpleDefinedType; }
	}

	public final SimpleDefinedTypeContext simpleDefinedType() throws RecognitionException {
		SimpleDefinedTypeContext _localctx = new SimpleDefinedTypeContext(_ctx, getState());
		enterRule(_localctx, 482, RULE_simpleDefinedType);
		try {
			setState(1965);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,153,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1963);
				externalTypeReference();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1964);
				typereference();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterizedValueContext extends ParserRuleContext {
		public SimpleDefinedValueContext simpleDefinedValue() {
			return getRuleContext(SimpleDefinedValueContext.class,0);
		}
		public ActualParameterListContext actualParameterList() {
			return getRuleContext(ActualParameterListContext.class,0);
		}
		public ParameterizedValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterizedValue; }
	}

	public final ParameterizedValueContext parameterizedValue() throws RecognitionException {
		ParameterizedValueContext _localctx = new ParameterizedValueContext(_ctx, getState());
		enterRule(_localctx, 484, RULE_parameterizedValue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1967);
			simpleDefinedValue();
			setState(1968);
			actualParameterList();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SimpleDefinedValueContext extends ParserRuleContext {
		public ExternalValueReferenceContext externalValueReference() {
			return getRuleContext(ExternalValueReferenceContext.class,0);
		}
		public ValuereferenceContext valuereference() {
			return getRuleContext(ValuereferenceContext.class,0);
		}
		public SimpleDefinedValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simpleDefinedValue; }
	}

	public final SimpleDefinedValueContext simpleDefinedValue() throws RecognitionException {
		SimpleDefinedValueContext _localctx = new SimpleDefinedValueContext(_ctx, getState());
		enterRule(_localctx, 486, RULE_simpleDefinedValue);
		try {
			setState(1972);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ReferenceItem:
				enterOuterAlt(_localctx, 1);
				{
				setState(1970);
				externalValueReference();
				}
				break;
			case IdentifierOrValueItem:
				enterOuterAlt(_localctx, 2);
				{
				setState(1971);
				valuereference();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterizedValueSetTypeContext extends ParserRuleContext {
		public SimpleDefinedTypeContext simpleDefinedType() {
			return getRuleContext(SimpleDefinedTypeContext.class,0);
		}
		public ActualParameterListContext actualParameterList() {
			return getRuleContext(ActualParameterListContext.class,0);
		}
		public ParameterizedValueSetTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterizedValueSetType; }
	}

	public final ParameterizedValueSetTypeContext parameterizedValueSetType() throws RecognitionException {
		ParameterizedValueSetTypeContext _localctx = new ParameterizedValueSetTypeContext(_ctx, getState());
		enterRule(_localctx, 488, RULE_parameterizedValueSetType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1974);
			simpleDefinedType();
			setState(1975);
			actualParameterList();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterizedObjectClassContext extends ParserRuleContext {
		public DefinedObjectClassContext definedObjectClass() {
			return getRuleContext(DefinedObjectClassContext.class,0);
		}
		public ActualParameterListContext actualParameterList() {
			return getRuleContext(ActualParameterListContext.class,0);
		}
		public ParameterizedObjectClassContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterizedObjectClass; }
	}

	public final ParameterizedObjectClassContext parameterizedObjectClass() throws RecognitionException {
		ParameterizedObjectClassContext _localctx = new ParameterizedObjectClassContext(_ctx, getState());
		enterRule(_localctx, 490, RULE_parameterizedObjectClass);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1977);
			definedObjectClass();
			setState(1978);
			actualParameterList();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterizedObjectSetContext extends ParserRuleContext {
		public DefinedObjectSetContext definedObjectSet() {
			return getRuleContext(DefinedObjectSetContext.class,0);
		}
		public ActualParameterListContext actualParameterList() {
			return getRuleContext(ActualParameterListContext.class,0);
		}
		public ParameterizedObjectSetContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterizedObjectSet; }
	}

	public final ParameterizedObjectSetContext parameterizedObjectSet() throws RecognitionException {
		ParameterizedObjectSetContext _localctx = new ParameterizedObjectSetContext(_ctx, getState());
		enterRule(_localctx, 492, RULE_parameterizedObjectSet);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1980);
			definedObjectSet();
			setState(1981);
			actualParameterList();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterizedObjectContext extends ParserRuleContext {
		public DefinedObjectContext definedObject() {
			return getRuleContext(DefinedObjectContext.class,0);
		}
		public ActualParameterListContext actualParameterList() {
			return getRuleContext(ActualParameterListContext.class,0);
		}
		public ParameterizedObjectContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterizedObject; }
	}

	public final ParameterizedObjectContext parameterizedObject() throws RecognitionException {
		ParameterizedObjectContext _localctx = new ParameterizedObjectContext(_ctx, getState());
		enterRule(_localctx, 494, RULE_parameterizedObject);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1983);
			definedObject();
			setState(1984);
			actualParameterList();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ActualParameterListContext extends ParserRuleContext {
		public TerminalNode L_BRACE() { return getToken(ASN1Parser.L_BRACE, 0); }
		public List<ActualParameterContext> actualParameter() {
			return getRuleContexts(ActualParameterContext.class);
		}
		public ActualParameterContext actualParameter(int i) {
			return getRuleContext(ActualParameterContext.class,i);
		}
		public TerminalNode R_BRACE() { return getToken(ASN1Parser.R_BRACE, 0); }
		public List<TerminalNode> COMMA() { return getTokens(ASN1Parser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(ASN1Parser.COMMA, i);
		}
		public ActualParameterListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_actualParameterList; }
	}

	public final ActualParameterListContext actualParameterList() throws RecognitionException {
		ActualParameterListContext _localctx = new ActualParameterListContext(_ctx, getState());
		enterRule(_localctx, 496, RULE_actualParameterList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1986);
			match(L_BRACE);
			setState(1987);
			actualParameter();
			setState(1992);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(1988);
				match(COMMA);
				setState(1989);
				actualParameter();
				}
				}
				setState(1994);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1995);
			match(R_BRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ActualParameterContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public ValueSetContext valueSet() {
			return getRuleContext(ValueSetContext.class,0);
		}
		public DefinedObjectClassContext definedObjectClass() {
			return getRuleContext(DefinedObjectClassContext.class,0);
		}
		public ObjectContext object() {
			return getRuleContext(ObjectContext.class,0);
		}
		public ObjectSetContext objectSet() {
			return getRuleContext(ObjectSetContext.class,0);
		}
		public ActualParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_actualParameter; }
	}

	public final ActualParameterContext actualParameter() throws RecognitionException {
		ActualParameterContext _localctx = new ActualParameterContext(_ctx, getState());
		enterRule(_localctx, 498, RULE_actualParameter);
		try {
			setState(2003);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,156,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1997);
				type();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1998);
				value();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1999);
				valueSet();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2000);
				definedObjectClass();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2001);
				object();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2002);
				objectSet();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypereferenceContext extends ParserRuleContext {
		public TerminalNode ReferenceItem() { return getToken(ASN1Parser.ReferenceItem, 0); }
		public TypereferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typereference; }
	}

	public final TypereferenceContext typereference() throws RecognitionException {
		TypereferenceContext _localctx = new TypereferenceContext(_ctx, getState());
		enterRule(_localctx, 500, RULE_typereference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2005);
			match(ReferenceItem);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IdentifierContext extends ParserRuleContext {
		public TerminalNode IdentifierOrValueItem() { return getToken(ASN1Parser.IdentifierOrValueItem, 0); }
		public IdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier; }
	}

	public final IdentifierContext identifier() throws RecognitionException {
		IdentifierContext _localctx = new IdentifierContext(_ctx, getState());
		enterRule(_localctx, 502, RULE_identifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2007);
			match(IdentifierOrValueItem);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValuereferenceContext extends ParserRuleContext {
		public TerminalNode IdentifierOrValueItem() { return getToken(ASN1Parser.IdentifierOrValueItem, 0); }
		public ValuereferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuereference; }
	}

	public final ValuereferenceContext valuereference() throws RecognitionException {
		ValuereferenceContext _localctx = new ValuereferenceContext(_ctx, getState());
		enterRule(_localctx, 504, RULE_valuereference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2009);
			match(IdentifierOrValueItem);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ModulereferenceContext extends ParserRuleContext {
		public TerminalNode ReferenceItem() { return getToken(ASN1Parser.ReferenceItem, 0); }
		public ModulereferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_modulereference; }
	}

	public final ModulereferenceContext modulereference() throws RecognitionException {
		ModulereferenceContext _localctx = new ModulereferenceContext(_ctx, getState());
		enterRule(_localctx, 506, RULE_modulereference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2011);
			match(ReferenceItem);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NumberContext extends ParserRuleContext {
		public TerminalNode NumberItem() { return getToken(ASN1Parser.NumberItem, 0); }
		public NumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_number; }
	}

	public final NumberContext number() throws RecognitionException {
		NumberContext _localctx = new NumberContext(_ctx, getState());
		enterRule(_localctx, 508, RULE_number);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2013);
			match(NumberItem);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BstringContext extends ParserRuleContext {
		public TerminalNode BStringItem() { return getToken(ASN1Parser.BStringItem, 0); }
		public BstringContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bstring; }
	}

	public final BstringContext bstring() throws RecognitionException {
		BstringContext _localctx = new BstringContext(_ctx, getState());
		enterRule(_localctx, 510, RULE_bstring);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2015);
			match(BStringItem);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class HstringContext extends ParserRuleContext {
		public TerminalNode HStringItem() { return getToken(ASN1Parser.HStringItem, 0); }
		public HstringContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_hstring; }
	}

	public final HstringContext hstring() throws RecognitionException {
		HstringContext _localctx = new HstringContext(_ctx, getState());
		enterRule(_localctx, 512, RULE_hstring);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2017);
			match(HStringItem);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CstringContext extends ParserRuleContext {
		public TerminalNode CStringItem() { return getToken(ASN1Parser.CStringItem, 0); }
		public CstringContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cstring; }
	}

	public final CstringContext cstring() throws RecognitionException {
		CstringContext _localctx = new CstringContext(_ctx, getState());
		enterRule(_localctx, 514, RULE_cstring);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2019);
			match(CStringItem);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 87:
			return extensionAdditionAlternativesList_sempred((ExtensionAdditionAlternativesListContext)_localctx, predIndex);
		case 133:
			return unions_sempred((UnionsContext)_localctx, predIndex);
		case 135:
			return intersections_sempred((IntersectionsContext)_localctx, predIndex);
		case 217:
			return objectclassreference_sempred((ObjectclassreferenceContext)_localctx, predIndex);
		case 225:
			return word_sempred((WordContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean extensionAdditionAlternativesList_sempred(ExtensionAdditionAlternativesListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean unions_sempred(UnionsContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean intersections_sempred(IntersectionsContext _localctx, int predIndex) {
		switch (predIndex) {
		case 2:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean objectclassreference_sempred(ObjectclassreferenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 3:
			return  !_input.LT(1).getText().matches(".*[a-z]+.*") ;
		}
		return true;
	}
	private boolean word_sempred(WordContext _localctx, int predIndex) {
		switch (predIndex) {
		case 4:
			return  !_input.LT(1).getText().matches(".*[a-z]+.*") && !_input.LT(1).getText().matches(".*[0-9]+.*") ;
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001r\u07e6\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002\u0018\u0007\u0018"+
		"\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a\u0002\u001b\u0007\u001b"+
		"\u0002\u001c\u0007\u001c\u0002\u001d\u0007\u001d\u0002\u001e\u0007\u001e"+
		"\u0002\u001f\u0007\u001f\u0002 \u0007 \u0002!\u0007!\u0002\"\u0007\"\u0002"+
		"#\u0007#\u0002$\u0007$\u0002%\u0007%\u0002&\u0007&\u0002\'\u0007\'\u0002"+
		"(\u0007(\u0002)\u0007)\u0002*\u0007*\u0002+\u0007+\u0002,\u0007,\u0002"+
		"-\u0007-\u0002.\u0007.\u0002/\u0007/\u00020\u00070\u00021\u00071\u0002"+
		"2\u00072\u00023\u00073\u00024\u00074\u00025\u00075\u00026\u00076\u0002"+
		"7\u00077\u00028\u00078\u00029\u00079\u0002:\u0007:\u0002;\u0007;\u0002"+
		"<\u0007<\u0002=\u0007=\u0002>\u0007>\u0002?\u0007?\u0002@\u0007@\u0002"+
		"A\u0007A\u0002B\u0007B\u0002C\u0007C\u0002D\u0007D\u0002E\u0007E\u0002"+
		"F\u0007F\u0002G\u0007G\u0002H\u0007H\u0002I\u0007I\u0002J\u0007J\u0002"+
		"K\u0007K\u0002L\u0007L\u0002M\u0007M\u0002N\u0007N\u0002O\u0007O\u0002"+
		"P\u0007P\u0002Q\u0007Q\u0002R\u0007R\u0002S\u0007S\u0002T\u0007T\u0002"+
		"U\u0007U\u0002V\u0007V\u0002W\u0007W\u0002X\u0007X\u0002Y\u0007Y\u0002"+
		"Z\u0007Z\u0002[\u0007[\u0002\\\u0007\\\u0002]\u0007]\u0002^\u0007^\u0002"+
		"_\u0007_\u0002`\u0007`\u0002a\u0007a\u0002b\u0007b\u0002c\u0007c\u0002"+
		"d\u0007d\u0002e\u0007e\u0002f\u0007f\u0002g\u0007g\u0002h\u0007h\u0002"+
		"i\u0007i\u0002j\u0007j\u0002k\u0007k\u0002l\u0007l\u0002m\u0007m\u0002"+
		"n\u0007n\u0002o\u0007o\u0002p\u0007p\u0002q\u0007q\u0002r\u0007r\u0002"+
		"s\u0007s\u0002t\u0007t\u0002u\u0007u\u0002v\u0007v\u0002w\u0007w\u0002"+
		"x\u0007x\u0002y\u0007y\u0002z\u0007z\u0002{\u0007{\u0002|\u0007|\u0002"+
		"}\u0007}\u0002~\u0007~\u0002\u007f\u0007\u007f\u0002\u0080\u0007\u0080"+
		"\u0002\u0081\u0007\u0081\u0002\u0082\u0007\u0082\u0002\u0083\u0007\u0083"+
		"\u0002\u0084\u0007\u0084\u0002\u0085\u0007\u0085\u0002\u0086\u0007\u0086"+
		"\u0002\u0087\u0007\u0087\u0002\u0088\u0007\u0088\u0002\u0089\u0007\u0089"+
		"\u0002\u008a\u0007\u008a\u0002\u008b\u0007\u008b\u0002\u008c\u0007\u008c"+
		"\u0002\u008d\u0007\u008d\u0002\u008e\u0007\u008e\u0002\u008f\u0007\u008f"+
		"\u0002\u0090\u0007\u0090\u0002\u0091\u0007\u0091\u0002\u0092\u0007\u0092"+
		"\u0002\u0093\u0007\u0093\u0002\u0094\u0007\u0094\u0002\u0095\u0007\u0095"+
		"\u0002\u0096\u0007\u0096\u0002\u0097\u0007\u0097\u0002\u0098\u0007\u0098"+
		"\u0002\u0099\u0007\u0099\u0002\u009a\u0007\u009a\u0002\u009b\u0007\u009b"+
		"\u0002\u009c\u0007\u009c\u0002\u009d\u0007\u009d\u0002\u009e\u0007\u009e"+
		"\u0002\u009f\u0007\u009f\u0002\u00a0\u0007\u00a0\u0002\u00a1\u0007\u00a1"+
		"\u0002\u00a2\u0007\u00a2\u0002\u00a3\u0007\u00a3\u0002\u00a4\u0007\u00a4"+
		"\u0002\u00a5\u0007\u00a5\u0002\u00a6\u0007\u00a6\u0002\u00a7\u0007\u00a7"+
		"\u0002\u00a8\u0007\u00a8\u0002\u00a9\u0007\u00a9\u0002\u00aa\u0007\u00aa"+
		"\u0002\u00ab\u0007\u00ab\u0002\u00ac\u0007\u00ac\u0002\u00ad\u0007\u00ad"+
		"\u0002\u00ae\u0007\u00ae\u0002\u00af\u0007\u00af\u0002\u00b0\u0007\u00b0"+
		"\u0002\u00b1\u0007\u00b1\u0002\u00b2\u0007\u00b2\u0002\u00b3\u0007\u00b3"+
		"\u0002\u00b4\u0007\u00b4\u0002\u00b5\u0007\u00b5\u0002\u00b6\u0007\u00b6"+
		"\u0002\u00b7\u0007\u00b7\u0002\u00b8\u0007\u00b8\u0002\u00b9\u0007\u00b9"+
		"\u0002\u00ba\u0007\u00ba\u0002\u00bb\u0007\u00bb\u0002\u00bc\u0007\u00bc"+
		"\u0002\u00bd\u0007\u00bd\u0002\u00be\u0007\u00be\u0002\u00bf\u0007\u00bf"+
		"\u0002\u00c0\u0007\u00c0\u0002\u00c1\u0007\u00c1\u0002\u00c2\u0007\u00c2"+
		"\u0002\u00c3\u0007\u00c3\u0002\u00c4\u0007\u00c4\u0002\u00c5\u0007\u00c5"+
		"\u0002\u00c6\u0007\u00c6\u0002\u00c7\u0007\u00c7\u0002\u00c8\u0007\u00c8"+
		"\u0002\u00c9\u0007\u00c9\u0002\u00ca\u0007\u00ca\u0002\u00cb\u0007\u00cb"+
		"\u0002\u00cc\u0007\u00cc\u0002\u00cd\u0007\u00cd\u0002\u00ce\u0007\u00ce"+
		"\u0002\u00cf\u0007\u00cf\u0002\u00d0\u0007\u00d0\u0002\u00d1\u0007\u00d1"+
		"\u0002\u00d2\u0007\u00d2\u0002\u00d3\u0007\u00d3\u0002\u00d4\u0007\u00d4"+
		"\u0002\u00d5\u0007\u00d5\u0002\u00d6\u0007\u00d6\u0002\u00d7\u0007\u00d7"+
		"\u0002\u00d8\u0007\u00d8\u0002\u00d9\u0007\u00d9\u0002\u00da\u0007\u00da"+
		"\u0002\u00db\u0007\u00db\u0002\u00dc\u0007\u00dc\u0002\u00dd\u0007\u00dd"+
		"\u0002\u00de\u0007\u00de\u0002\u00df\u0007\u00df\u0002\u00e0\u0007\u00e0"+
		"\u0002\u00e1\u0007\u00e1\u0002\u00e2\u0007\u00e2\u0002\u00e3\u0007\u00e3"+
		"\u0002\u00e4\u0007\u00e4\u0002\u00e5\u0007\u00e5\u0002\u00e6\u0007\u00e6"+
		"\u0002\u00e7\u0007\u00e7\u0002\u00e8\u0007\u00e8\u0002\u00e9\u0007\u00e9"+
		"\u0002\u00ea\u0007\u00ea\u0002\u00eb\u0007\u00eb\u0002\u00ec\u0007\u00ec"+
		"\u0002\u00ed\u0007\u00ed\u0002\u00ee\u0007\u00ee\u0002\u00ef\u0007\u00ef"+
		"\u0002\u00f0\u0007\u00f0\u0002\u00f1\u0007\u00f1\u0002\u00f2\u0007\u00f2"+
		"\u0002\u00f3\u0007\u00f3\u0002\u00f4\u0007\u00f4\u0002\u00f5\u0007\u00f5"+
		"\u0002\u00f6\u0007\u00f6\u0002\u00f7\u0007\u00f7\u0002\u00f8\u0007\u00f8"+
		"\u0002\u00f9\u0007\u00f9\u0002\u00fa\u0007\u00fa\u0002\u00fb\u0007\u00fb"+
		"\u0002\u00fc\u0007\u00fc\u0002\u00fd\u0007\u00fd\u0002\u00fe\u0007\u00fe"+
		"\u0002\u00ff\u0007\u00ff\u0002\u0100\u0007\u0100\u0002\u0101\u0007\u0101"+
		"\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0000\u0001\u0000\u0004\u0000\u020e\b\u0000\u000b\u0000"+
		"\f\u0000\u020f\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0003\u0002\u021b\b\u0002"+
		"\u0001\u0003\u0001\u0003\u0005\u0003\u021f\b\u0003\n\u0003\f\u0003\u0222"+
		"\t\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0003\u0004\u0227\b\u0004"+
		"\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0001\u0006\u0001\u0007\u0001\u0007\u0003\u0007\u0232\b\u0007\u0001\b"+
		"\u0001\b\u0003\b\u0236\b\b\u0001\t\u0003\t\u0239\b\t\u0001\t\u0003\t\u023c"+
		"\b\t\u0001\t\u0003\t\u023f\b\t\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n"+
		"\u0001\n\u0001\n\u0003\n\u0248\b\n\u0001\u000b\u0003\u000b\u024b\b\u000b"+
		"\u0001\f\u0001\f\u0001\f\u0001\f\u0001\r\u0003\r\u0252\b\r\u0001\u000e"+
		"\u0001\u000e\u0005\u000e\u0256\b\u000e\n\u000e\f\u000e\u0259\t\u000e\u0001"+
		"\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u0010\u0001\u0010\u0001"+
		"\u0010\u0001\u0011\u0001\u0011\u0003\u0011\u0264\b\u0011\u0001\u0012\u0001"+
		"\u0012\u0001\u0012\u0005\u0012\u0269\b\u0012\n\u0012\f\u0012\u026c\t\u0012"+
		"\u0001\u0013\u0001\u0013\u0003\u0013\u0270\b\u0013\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001\u0014\u0001\u0014\u0003\u0014\u0277\b\u0014\u0001\u0015"+
		"\u0001\u0015\u0005\u0015\u027b\b\u0015\n\u0015\f\u0015\u027e\t\u0015\u0001"+
		"\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001"+
		"\u0016\u0003\u0016\u0287\b\u0016\u0001\u0017\u0001\u0017\u0001\u0017\u0001"+
		"\u0017\u0003\u0017\u028d\b\u0017\u0001\u0018\u0001\u0018\u0001\u0018\u0003"+
		"\u0018\u0292\b\u0018\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u0019\u0001"+
		"\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001b\u0001\u001b\u0001"+
		"\u001b\u0001\u001b\u0001\u001c\u0001\u001c\u0001\u001c\u0001\u001c\u0001"+
		"\u001c\u0001\u001d\u0001\u001d\u0001\u001d\u0001\u001d\u0001\u001d\u0001"+
		"\u001e\u0001\u001e\u0001\u001e\u0001\u001e\u0001\u001f\u0001\u001f\u0001"+
		"\u001f\u0003\u001f\u02b1\b\u001f\u0001 \u0001 \u0001 \u0001 \u0001 \u0001"+
		" \u0001 \u0001 \u0001 \u0001 \u0001 \u0001 \u0001 \u0001 \u0001 \u0001"+
		" \u0003 \u02c3\b \u0001!\u0001!\u0001!\u0001!\u0003!\u02c9\b!\u0001\""+
		"\u0001\"\u0001\"\u0001#\u0001#\u0001#\u0003#\u02d1\b#\u0001$\u0001$\u0001"+
		"$\u0001$\u0001$\u0001$\u0001$\u0001$\u0001$\u0001$\u0001$\u0001$\u0003"+
		"$\u02df\b$\u0001%\u0001%\u0003%\u02e3\b%\u0001&\u0001&\u0001&\u0001\'"+
		"\u0001\'\u0001(\u0001(\u0001)\u0001)\u0001)\u0001)\u0001)\u0001)\u0003"+
		")\u02f2\b)\u0001*\u0001*\u0001*\u0005*\u02f7\b*\n*\f*\u02fa\t*\u0001+"+
		"\u0001+\u0001+\u0001+\u0001+\u0001+\u0001+\u0001+\u0001+\u0001+\u0003"+
		"+\u0306\b+\u0001,\u0001,\u0001,\u0003,\u030b\b,\u0001-\u0001-\u0003-\u030f"+
		"\b-\u0001.\u0001.\u0001.\u0001.\u0001.\u0001/\u0001/\u0001/\u0001/\u0001"+
		"/\u0001/\u0001/\u0001/\u0001/\u0001/\u0001/\u0001/\u0001/\u0003/\u0323"+
		"\b/\u00010\u00010\u00011\u00011\u00012\u00012\u00012\u00052\u032c\b2\n"+
		"2\f2\u032f\t2\u00013\u00013\u00033\u0333\b3\u00014\u00014\u00015\u0001"+
		"5\u00015\u00015\u00015\u00015\u00015\u00015\u00015\u00035\u0340\b5\u0001"+
		"6\u00016\u00016\u00056\u0345\b6\n6\f6\u0348\t6\u00017\u00017\u00017\u0001"+
		"7\u00017\u00017\u00017\u00017\u00017\u00017\u00037\u0354\b7\u00018\u0001"+
		"8\u00018\u00018\u00018\u00018\u00018\u00018\u00018\u00018\u00038\u0360"+
		"\b8\u00019\u00019\u00019\u00059\u0365\b9\n9\f9\u0368\t9\u0001:\u0001:"+
		"\u0001:\u0001;\u0001;\u0001;\u0001;\u0003;\u0371\b;\u0001<\u0001<\u0001"+
		"=\u0001=\u0001>\u0001>\u0001>\u0001>\u0001>\u0001>\u0001>\u0001>\u0001"+
		">\u0001>\u0001>\u0001>\u0001>\u0003>\u0384\b>\u0001?\u0001?\u0001?\u0001"+
		"?\u0001?\u0001?\u0001?\u0001?\u0001?\u0001?\u0001?\u0001?\u0001?\u0001"+
		"?\u0001?\u0001?\u0001?\u0001?\u0001?\u0001?\u0001?\u0001?\u0001?\u0001"+
		"?\u0001?\u0003?\u039f\b?\u0001@\u0001@\u0001A\u0001A\u0001A\u0001B\u0001"+
		"B\u0003B\u03a8\bB\u0001C\u0001C\u0001C\u0005C\u03ad\bC\nC\fC\u03b0\tC"+
		"\u0001D\u0001D\u0003D\u03b4\bD\u0001E\u0001E\u0001E\u0001E\u0001E\u0001"+
		"F\u0001F\u0001F\u0003F\u03be\bF\u0001G\u0001G\u0001G\u0005G\u03c3\bG\n"+
		"G\fG\u03c6\tG\u0001H\u0001H\u0001H\u0001H\u0001H\u0001H\u0001H\u0001H"+
		"\u0001H\u0001H\u0001H\u0003H\u03d3\bH\u0001I\u0001I\u0001I\u0001I\u0001"+
		"I\u0001I\u0003I\u03db\bI\u0001J\u0001J\u0001J\u0005J\u03e0\bJ\nJ\fJ\u03e3"+
		"\tJ\u0001K\u0001K\u0001K\u0001K\u0001K\u0001K\u0003K\u03eb\bK\u0001L\u0001"+
		"L\u0001L\u0001L\u0001L\u0001L\u0001L\u0001L\u0001L\u0001L\u0003L\u03f7"+
		"\bL\u0001M\u0001M\u0001M\u0005M\u03fc\bM\nM\fM\u03ff\tM\u0001N\u0001N"+
		"\u0001N\u0005N\u0404\bN\nN\fN\u0407\tN\u0001O\u0001O\u0001O\u0001O\u0001"+
		"O\u0001O\u0001O\u0001O\u0001O\u0001O\u0001O\u0001O\u0001O\u0001O\u0003"+
		"O\u0417\bO\u0001P\u0001P\u0001P\u0001P\u0001P\u0001P\u0003P\u041f\bP\u0001"+
		"Q\u0001Q\u0001Q\u0001Q\u0001Q\u0001Q\u0003Q\u0427\bQ\u0001R\u0001R\u0001"+
		"R\u0001R\u0001R\u0001R\u0001R\u0001R\u0001R\u0001R\u0003R\u0433\bR\u0001"+
		"S\u0001S\u0001S\u0001S\u0001S\u0001T\u0001T\u0001T\u0001T\u0001T\u0001"+
		"T\u0001T\u0003T\u0441\bT\u0001U\u0001U\u0001V\u0001V\u0005V\u0447\bV\n"+
		"V\fV\u044a\tV\u0001W\u0001W\u0001W\u0001W\u0001W\u0001W\u0005W\u0452\b"+
		"W\nW\fW\u0455\tW\u0001X\u0001X\u0003X\u0459\bX\u0001Y\u0001Y\u0001Y\u0001"+
		"Y\u0001Y\u0001Z\u0001Z\u0001Z\u0005Z\u0463\bZ\nZ\fZ\u0466\tZ\u0001[\u0001"+
		"[\u0001[\u0001[\u0001[\u0001[\u0001[\u0001[\u0001[\u0001[\u0001[\u0003"+
		"[\u0473\b[\u0001\\\u0001\\\u0001\\\u0001\\\u0001\\\u0001]\u0001]\u0003"+
		"]\u047c\b]\u0001^\u0003^\u047f\b^\u0001_\u0001_\u0001_\u0001`\u0001`\u0001"+
		"`\u0001`\u0001`\u0001`\u0001`\u0001`\u0001`\u0003`\u048d\b`\u0001a\u0001"+
		"a\u0005a\u0491\ba\na\fa\u0494\ta\u0001b\u0001b\u0001b\u0001b\u0003b\u049a"+
		"\bb\u0001c\u0001c\u0001d\u0001d\u0003d\u04a0\bd\u0001e\u0001e\u0001e\u0001"+
		"e\u0001e\u0001f\u0001f\u0001f\u0003f\u04aa\bf\u0001g\u0001g\u0003g\u04ae"+
		"\bg\u0001h\u0001h\u0001h\u0001h\u0001h\u0001h\u0003h\u04b6\bh\u0001i\u0001"+
		"i\u0003i\u04ba\bi\u0001j\u0001j\u0003j\u04be\bj\u0001k\u0001k\u0001l\u0001"+
		"l\u0001m\u0001m\u0001m\u0001m\u0003m\u04c8\bm\u0001n\u0001n\u0001n\u0001"+
		"n\u0001o\u0001o\u0001o\u0005o\u04d1\bo\no\fo\u04d4\to\u0001p\u0001p\u0001"+
		"p\u0001p\u0003p\u04da\bp\u0001q\u0001q\u0001q\u0001q\u0001q\u0001q\u0001"+
		"q\u0001q\u0001q\u0001q\u0001r\u0001r\u0001s\u0001s\u0001t\u0001t\u0001"+
		"u\u0001u\u0001v\u0001v\u0001v\u0001v\u0001v\u0001v\u0001w\u0001w\u0001"+
		"x\u0001x\u0001y\u0001y\u0001y\u0001z\u0001z\u0003z\u04fd\bz\u0001{\u0001"+
		"{\u0003{\u0501\b{\u0001{\u0001{\u0001{\u0003{\u0506\b{\u0001|\u0001|\u0001"+
		"|\u0001|\u0001|\u0001|\u0001|\u0001|\u0001|\u0001|\u0001|\u0001|\u0001"+
		"|\u0001|\u0001|\u0001|\u0001|\u0001|\u0001|\u0001|\u0001|\u0001|\u0001"+
		"|\u0001|\u0001|\u0001|\u0001|\u0001|\u0001|\u0001|\u0001|\u0001|\u0001"+
		"|\u0001|\u0001|\u0001|\u0001|\u0001|\u0001|\u0001|\u0003|\u0530\b|\u0001"+
		"}\u0001}\u0001}\u0001}\u0001}\u0001~\u0001~\u0003~\u0539\b~\u0001\u007f"+
		"\u0001\u007f\u0001\u0080\u0001\u0080\u0001\u0080\u0003\u0080\u0540\b\u0080"+
		"\u0001\u0081\u0001\u0081\u0001\u0081\u0001\u0081\u0001\u0081\u0001\u0081"+
		"\u0001\u0081\u0001\u0081\u0001\u0081\u0001\u0081\u0001\u0081\u0003\u0081"+
		"\u054d\b\u0081\u0001\u0082\u0001\u0082\u0001\u0083\u0001\u0083\u0001\u0084"+
		"\u0001\u0084\u0001\u0084\u0003\u0084\u0556\b\u0084\u0001\u0085\u0001\u0085"+
		"\u0001\u0085\u0001\u0085\u0001\u0085\u0001\u0085\u0001\u0085\u0005\u0085"+
		"\u055f\b\u0085\n\u0085\f\u0085\u0562\t\u0085\u0001\u0086\u0001\u0086\u0001"+
		"\u0087\u0001\u0087\u0001\u0087\u0001\u0087\u0001\u0087\u0001\u0087\u0001"+
		"\u0087\u0005\u0087\u056d\b\u0087\n\u0087\f\u0087\u0570\t\u0087\u0001\u0088"+
		"\u0001\u0088\u0001\u0089\u0001\u0089\u0001\u0089\u0001\u0089\u0003\u0089"+
		"\u0578\b\u0089\u0001\u008a\u0001\u008a\u0001\u008b\u0001\u008b\u0001\u008b"+
		"\u0001\u008c\u0001\u008c\u0001\u008d\u0001\u008d\u0001\u008e\u0001\u008e"+
		"\u0001\u008e\u0001\u008e\u0001\u008e\u0001\u008e\u0003\u008e\u0589\b\u008e"+
		"\u0001\u008f\u0001\u008f\u0001\u008f\u0001\u008f\u0001\u008f\u0003\u008f"+
		"\u0590\b\u008f\u0001\u0090\u0001\u0090\u0001\u0091\u0001\u0091\u0001\u0091"+
		"\u0001\u0092\u0003\u0092\u0598\b\u0092\u0001\u0093\u0001\u0093\u0001\u0093"+
		"\u0001\u0093\u0001\u0094\u0001\u0094\u0001\u0094\u0001\u0094\u0003\u0094"+
		"\u05a2\b\u0094\u0001\u0095\u0001\u0095\u0001\u0095\u0003\u0095\u05a7\b"+
		"\u0095\u0001\u0096\u0001\u0096\u0003\u0096\u05ab\b\u0096\u0001\u0097\u0001"+
		"\u0097\u0003\u0097\u05af\b\u0097\u0001\u0098\u0001\u0098\u0001\u0098\u0001"+
		"\u0099\u0001\u0099\u0001\u0099\u0001\u009a\u0001\u009a\u0001\u009a\u0001"+
		"\u009a\u0003\u009a\u05bb\b\u009a\u0001\u009a\u0001\u009a\u0005\u009a\u05bf"+
		"\b\u009a\n\u009a\f\u009a\u05c2\t\u009a\u0001\u009a\u0001\u009a\u0001\u009b"+
		"\u0001\u009b\u0001\u009b\u0001\u009b\u0001\u009b\u0001\u009b\u0001\u009b"+
		"\u0001\u009b\u0001\u009b\u0001\u009b\u0001\u009b\u0001\u009b\u0001\u009b"+
		"\u0001\u009b\u0001\u009b\u0001\u009b\u0001\u009b\u0001\u009b\u0003\u009b"+
		"\u05d8\b\u009b\u0001\u009c\u0001\u009c\u0003\u009c\u05dc\b\u009c\u0001"+
		"\u009d\u0001\u009d\u0001\u009e\u0001\u009e\u0001\u009e\u0001\u009e\u0001"+
		"\u009e\u0001\u009e\u0001\u009e\u0005\u009e\u05e7\b\u009e\n\u009e\f\u009e"+
		"\u05ea\t\u009e\u0001\u009e\u0001\u009e\u0001\u009f\u0001\u009f\u0001\u009f"+
		"\u0001\u009f\u0001\u009f\u0001\u009f\u0003\u009f\u05f4\b\u009f\u0001\u00a0"+
		"\u0001\u00a0\u0001\u00a0\u0003\u00a0\u05f9\b\u00a0\u0001\u00a1\u0001\u00a1"+
		"\u0001\u00a1\u0005\u00a1\u05fe\b\u00a1\n\u00a1\f\u00a1\u0601\t\u00a1\u0001"+
		"\u00a2\u0001\u00a2\u0001\u00a2\u0001\u00a2\u0001\u00a2\u0001\u00a2\u0001"+
		"\u00a2\u0001\u00a2\u0001\u00a2\u0001\u00a2\u0001\u00a2\u0003\u00a2\u060e"+
		"\b\u00a2\u0001\u00a3\u0001\u00a3\u0001\u00a3\u0003\u00a3\u0613\b\u00a3"+
		"\u0001\u00a4\u0001\u00a4\u0003\u00a4\u0617\b\u00a4\u0001\u00a5\u0001\u00a5"+
		"\u0003\u00a5\u061b\b\u00a5\u0001\u00a6\u0001\u00a6\u0001\u00a6\u0001\u00a6"+
		"\u0001\u00a7\u0001\u00a7\u0001\u00a7\u0001\u00a7\u0001\u00a8\u0001\u00a8"+
		"\u0001\u00a8\u0001\u00a8\u0001\u00a9\u0001\u00a9\u0001\u00aa\u0001\u00aa"+
		"\u0001\u00aa\u0001\u00aa\u0001\u00ab\u0001\u00ab\u0001\u00ab\u0003\u00ab"+
		"\u0632\b\u00ab\u0001\u00ac\u0001\u00ac\u0001\u00ac\u0001\u00ac\u0001\u00ac"+
		"\u0005\u00ac\u0639\b\u00ac\n\u00ac\f\u00ac\u063c\t\u00ac\u0001\u00ac\u0001"+
		"\u00ac\u0003\u00ac\u0640\b\u00ac\u0001\u00ad\u0001\u00ad\u0001\u00ad\u0001"+
		"\u00ad\u0001\u00ae\u0001\u00ae\u0001\u00ae\u0001\u00ae\u0001\u00ae\u0001"+
		"\u00ae\u0001\u00ae\u0003\u00ae\u064d\b\u00ae\u0001\u00af\u0001\u00af\u0003"+
		"\u00af\u0651\b\u00af\u0001\u00b0\u0001\u00b0\u0001\u00b0\u0003\u00b0\u0656"+
		"\b\u00b0\u0001\u00b1\u0001\u00b1\u0001\u00b1\u0003\u00b1\u065b\b\u00b1"+
		"\u0001\u00b1\u0003\u00b1\u065e\b\u00b1\u0001\u00b2\u0001\u00b2\u0001\u00b2"+
		"\u0003\u00b2\u0663\b\u00b2\u0001\u00b3\u0001\u00b3\u0001\u00b3\u0003\u00b3"+
		"\u0668\b\u00b3\u0001\u00b4\u0001\u00b4\u0001\u00b4\u0003\u00b4\u066d\b"+
		"\u00b4\u0001\u00b5\u0001\u00b5\u0001\u00b5\u0003\u00b5\u0672\b\u00b5\u0001"+
		"\u00b6\u0001\u00b6\u0001\u00b6\u0003\u00b6\u0677\b\u00b6\u0001\u00b7\u0001"+
		"\u00b7\u0001\u00b7\u0003\u00b7\u067c\b\u00b7\u0001\u00b8\u0001\u00b8\u0001"+
		"\u00b8\u0003\u00b8\u0681\b\u00b8\u0001\u00b9\u0001\u00b9\u0001\u00b9\u0003"+
		"\u00b9\u0686\b\u00b9\u0001\u00ba\u0001\u00ba\u0001\u00ba\u0003\u00ba\u068b"+
		"\b\u00ba\u0001\u00bb\u0001\u00bb\u0001\u00bb\u0001\u00bb\u0001\u00bb\u0003"+
		"\u00bb\u0692\b\u00bb\u0001\u00bc\u0001\u00bc\u0001\u00bc\u0005\u00bc\u0697"+
		"\b\u00bc\n\u00bc\f\u00bc\u069a\t\u00bc\u0001\u00bd\u0001\u00bd\u0001\u00bd"+
		"\u0005\u00bd\u069f\b\u00bd\n\u00bd\f\u00bd\u06a2\t\u00bd\u0001\u00bd\u0001"+
		"\u00bd\u0001\u00be\u0001\u00be\u0003\u00be\u06a8\b\u00be\u0001\u00bf\u0001"+
		"\u00bf\u0001\u00bf\u0005\u00bf\u06ad\b\u00bf\n\u00bf\f\u00bf\u06b0\t\u00bf"+
		"\u0001\u00bf\u0001\u00bf\u0001\u00c0\u0001\u00c0\u0003\u00c0\u06b6\b\u00c0"+
		"\u0001\u00c1\u0001\u00c1\u0003\u00c1\u06ba\b\u00c1\u0001\u00c2\u0001\u00c2"+
		"\u0001\u00c2\u0001\u00c2\u0001\u00c2\u0001\u00c3\u0001\u00c3\u0001\u00c3"+
		"\u0001\u00c3\u0003\u00c3\u06c5\b\u00c3\u0001\u00c4\u0001\u00c4\u0003\u00c4"+
		"\u06c9\b\u00c4\u0001\u00c5\u0001\u00c5\u0003\u00c5\u06cd\b\u00c5\u0001"+
		"\u00c5\u0001\u00c5\u0005\u00c5\u06d1\b\u00c5\n\u00c5\f\u00c5\u06d4\t\u00c5"+
		"\u0001\u00c5\u0001\u00c5\u0001\u00c6\u0001\u00c6\u0001\u00c6\u0001\u00c7"+
		"\u0001\u00c7\u0005\u00c7\u06dd\b\u00c7\n\u00c7\f\u00c7\u06e0\t\u00c7\u0001"+
		"\u00c7\u0001\u00c7\u0001\u00c8\u0001\u00c8\u0003\u00c8\u06e6\b\u00c8\u0001"+
		"\u00c9\u0001\u00c9\u0001\u00c9\u0001\u00c9\u0001\u00c9\u0003\u00c9\u06ed"+
		"\b\u00c9\u0001\u00ca\u0001\u00ca\u0001\u00ca\u0001\u00ca\u0001\u00ca\u0001"+
		"\u00cb\u0001\u00cb\u0001\u00cb\u0001\u00cb\u0001\u00cc\u0001\u00cc\u0001"+
		"\u00cc\u0001\u00cc\u0001\u00cc\u0001\u00cc\u0001\u00cc\u0001\u00cc\u0001"+
		"\u00cc\u0001\u00cc\u0001\u00cc\u0001\u00cc\u0001\u00cc\u0001\u00cc\u0001"+
		"\u00cc\u0003\u00cc\u0707\b\u00cc\u0001\u00cd\u0001\u00cd\u0001\u00cd\u0001"+
		"\u00cd\u0003\u00cd\u070d\b\u00cd\u0001\u00ce\u0001\u00ce\u0001\u00ce\u0001"+
		"\u00ce\u0001\u00cf\u0001\u00cf\u0003\u00cf\u0715\b\u00cf\u0001\u00d0\u0001"+
		"\u00d0\u0001\u00d0\u0001\u00d0\u0001\u00d1\u0001\u00d1\u0003\u00d1\u071d"+
		"\b\u00d1\u0001\u00d2\u0001\u00d2\u0001\u00d2\u0001\u00d2\u0001\u00d3\u0001"+
		"\u00d3\u0001\u00d3\u0001\u00d3\u0001\u00d4\u0001\u00d4\u0001\u00d4\u0001"+
		"\u00d4\u0001\u00d5\u0001\u00d5\u0001\u00d5\u0001\u00d5\u0001\u00d6\u0001"+
		"\u00d6\u0001\u00d6\u0001\u00d6\u0001\u00d7\u0001\u00d7\u0001\u00d7\u0001"+
		"\u00d7\u0003\u00d7\u0737\b\u00d7\u0001\u00d8\u0001\u00d8\u0001\u00d8\u0003"+
		"\u00d8\u073c\b\u00d8\u0001\u00d8\u0003\u00d8\u073f\b\u00d8\u0001\u00d9"+
		"\u0001\u00d9\u0001\u00d9\u0001\u00da\u0001\u00da\u0001\u00db\u0001\u00db"+
		"\u0001\u00dc\u0001\u00dc\u0001\u00dc\u0001\u00dd\u0001\u00dd\u0001\u00dd"+
		"\u0001\u00de\u0001\u00de\u0001\u00de\u0001\u00df\u0001\u00df\u0001\u00df"+
		"\u0001\u00e0\u0001\u00e0\u0001\u00e0\u0001\u00e1\u0001\u00e1\u0001\u00e1"+
		"\u0001\u00e2\u0001\u00e2\u0001\u00e2\u0001\u00e2\u0001\u00e2\u0001\u00e2"+
		"\u0003\u00e2\u0760\b\u00e2\u0001\u00e3\u0001\u00e3\u0001\u00e3\u0001\u00e3"+
		"\u0001\u00e3\u0001\u00e4\u0001\u00e4\u0001\u00e4\u0001\u00e4\u0001\u00e4"+
		"\u0001\u00e4\u0001\u00e5\u0001\u00e5\u0001\u00e5\u0001\u00e5\u0001\u00e5"+
		"\u0001\u00e5\u0001\u00e6\u0001\u00e6\u0001\u00e6\u0001\u00e6\u0001\u00e6"+
		"\u0001\u00e7\u0001\u00e7\u0001\u00e7\u0001\u00e7\u0001\u00e7\u0001\u00e7"+
		"\u0001\u00e8\u0001\u00e8\u0001\u00e8\u0001\u00e8\u0001\u00e8\u0001\u00e8"+
		"\u0001\u00e9\u0001\u00e9\u0001\u00e9\u0001\u00e9\u0005\u00e9\u0788\b\u00e9"+
		"\n\u00e9\f\u00e9\u078b\t\u00e9\u0001\u00e9\u0001\u00e9\u0001\u00ea\u0001"+
		"\u00ea\u0001\u00ea\u0001\u00ea\u0001\u00ea\u0003\u00ea\u0794\b\u00ea\u0001"+
		"\u00eb\u0001\u00eb\u0003\u00eb\u0798\b\u00eb\u0001\u00ec\u0001\u00ec\u0003"+
		"\u00ec\u079c\b\u00ec\u0001\u00ed\u0001\u00ed\u0001\u00ee\u0001\u00ee\u0001"+
		"\u00ef\u0001\u00ef\u0001\u00ef\u0001\u00ef\u0001\u00ef\u0003\u00ef\u07a7"+
		"\b\u00ef\u0001\u00f0\u0001\u00f0\u0001\u00f0\u0001\u00f1\u0001\u00f1\u0003"+
		"\u00f1\u07ae\b\u00f1\u0001\u00f2\u0001\u00f2\u0001\u00f2\u0001\u00f3\u0001"+
		"\u00f3\u0003\u00f3\u07b5\b\u00f3\u0001\u00f4\u0001\u00f4\u0001\u00f4\u0001"+
		"\u00f5\u0001\u00f5\u0001\u00f5\u0001\u00f6\u0001\u00f6\u0001\u00f6\u0001"+
		"\u00f7\u0001\u00f7\u0001\u00f7\u0001\u00f8\u0001\u00f8\u0001\u00f8\u0001"+
		"\u00f8\u0005\u00f8\u07c7\b\u00f8\n\u00f8\f\u00f8\u07ca\t\u00f8\u0001\u00f8"+
		"\u0001\u00f8\u0001\u00f9\u0001\u00f9\u0001\u00f9\u0001\u00f9\u0001\u00f9"+
		"\u0001\u00f9\u0003\u00f9\u07d4\b\u00f9\u0001\u00fa\u0001\u00fa\u0001\u00fb"+
		"\u0001\u00fb\u0001\u00fc\u0001\u00fc\u0001\u00fd\u0001\u00fd\u0001\u00fe"+
		"\u0001\u00fe\u0001\u00ff\u0001\u00ff\u0001\u0100\u0001\u0100\u0001\u0101"+
		"\u0001\u0101\u0001\u0101\u0000\u0003\u00ae\u010a\u010e\u0102\u0000\u0002"+
		"\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a\u001c\u001e"+
		" \"$&(*,.02468:<>@BDFHJLNPRTVXZ\\^`bdfhjlnprtvxz|~\u0080\u0082\u0084\u0086"+
		"\u0088\u008a\u008c\u008e\u0090\u0092\u0094\u0096\u0098\u009a\u009c\u009e"+
		"\u00a0\u00a2\u00a4\u00a6\u00a8\u00aa\u00ac\u00ae\u00b0\u00b2\u00b4\u00b6"+
		"\u00b8\u00ba\u00bc\u00be\u00c0\u00c2\u00c4\u00c6\u00c8\u00ca\u00cc\u00ce"+
		"\u00d0\u00d2\u00d4\u00d6\u00d8\u00da\u00dc\u00de\u00e0\u00e2\u00e4\u00e6"+
		"\u00e8\u00ea\u00ec\u00ee\u00f0\u00f2\u00f4\u00f6\u00f8\u00fa\u00fc\u00fe"+
		"\u0100\u0102\u0104\u0106\u0108\u010a\u010c\u010e\u0110\u0112\u0114\u0116"+
		"\u0118\u011a\u011c\u011e\u0120\u0122\u0124\u0126\u0128\u012a\u012c\u012e"+
		"\u0130\u0132\u0134\u0136\u0138\u013a\u013c\u013e\u0140\u0142\u0144\u0146"+
		"\u0148\u014a\u014c\u014e\u0150\u0152\u0154\u0156\u0158\u015a\u015c\u015e"+
		"\u0160\u0162\u0164\u0166\u0168\u016a\u016c\u016e\u0170\u0172\u0174\u0176"+
		"\u0178\u017a\u017c\u017e\u0180\u0182\u0184\u0186\u0188\u018a\u018c\u018e"+
		"\u0190\u0192\u0194\u0196\u0198\u019a\u019c\u019e\u01a0\u01a2\u01a4\u01a6"+
		"\u01a8\u01aa\u01ac\u01ae\u01b0\u01b2\u01b4\u01b6\u01b8\u01ba\u01bc\u01be"+
		"\u01c0\u01c2\u01c4\u01c6\u01c8\u01ca\u01cc\u01ce\u01d0\u01d2\u01d4\u01d6"+
		"\u01d8\u01da\u01dc\u01de\u01e0\u01e2\u01e4\u01e6\u01e8\u01ea\u01ec\u01ee"+
		"\u01f0\u01f2\u01f4\u01f6\u01f8\u01fa\u01fc\u01fe\u0200\u0202\u0000\u0007"+
		"\u0002\u0000\u001b\u001cHH\u0002\u0000,,22\u0003\u0000\u0017\u0017BBU"+
		"U\u000b\u0000\u0015\u0015&\'))..88<<@@FFNNQRVV\u0002\u0000\u0005\u0005"+
		"::\u0002\u0000\u0006\u0006\u0011\u0011\u0002\u0000\u000f\u000f66\u07ee"+
		"\u0000\u020d\u0001\u0000\u0000\u0000\u0002\u0213\u0001\u0000\u0000\u0000"+
		"\u0004\u021a\u0001\u0000\u0000\u0000\u0006\u021c\u0001\u0000\u0000\u0000"+
		"\b\u0226\u0001\u0000\u0000\u0000\n\u0228\u0001\u0000\u0000\u0000\f\u022a"+
		"\u0001\u0000\u0000\u0000\u000e\u0231\u0001\u0000\u0000\u0000\u0010\u0235"+
		"\u0001\u0000\u0000\u0000\u0012\u0238\u0001\u0000\u0000\u0000\u0014\u0247"+
		"\u0001\u0000\u0000\u0000\u0016\u024a\u0001\u0000\u0000\u0000\u0018\u024c"+
		"\u0001\u0000\u0000\u0000\u001a\u0251\u0001\u0000\u0000\u0000\u001c\u0253"+
		"\u0001\u0000\u0000\u0000\u001e\u025a\u0001\u0000\u0000\u0000 \u025e\u0001"+
		"\u0000\u0000\u0000\"\u0263\u0001\u0000\u0000\u0000$\u0265\u0001\u0000"+
		"\u0000\u0000&\u026f\u0001\u0000\u0000\u0000(\u0276\u0001\u0000\u0000\u0000"+
		"*\u0278\u0001\u0000\u0000\u0000,\u0286\u0001\u0000\u0000\u0000.\u028c"+
		"\u0001\u0000\u0000\u00000\u0291\u0001\u0000\u0000\u00002\u0293\u0001\u0000"+
		"\u0000\u00004\u0297\u0001\u0000\u0000\u00006\u029b\u0001\u0000\u0000\u0000"+
		"8\u029f\u0001\u0000\u0000\u0000:\u02a4\u0001\u0000\u0000\u0000<\u02a9"+
		"\u0001\u0000\u0000\u0000>\u02b0\u0001\u0000\u0000\u0000@\u02c2\u0001\u0000"+
		"\u0000\u0000B\u02c8\u0001\u0000\u0000\u0000D\u02ca\u0001\u0000\u0000\u0000"+
		"F\u02d0\u0001\u0000\u0000\u0000H\u02de\u0001\u0000\u0000\u0000J\u02e2"+
		"\u0001\u0000\u0000\u0000L\u02e4\u0001\u0000\u0000\u0000N\u02e7\u0001\u0000"+
		"\u0000\u0000P\u02e9\u0001\u0000\u0000\u0000R\u02f1\u0001\u0000\u0000\u0000"+
		"T\u02f3\u0001\u0000\u0000\u0000V\u0305\u0001\u0000\u0000\u0000X\u030a"+
		"\u0001\u0000\u0000\u0000Z\u030e\u0001\u0000\u0000\u0000\\\u0310\u0001"+
		"\u0000\u0000\u0000^\u0322\u0001\u0000\u0000\u0000`\u0324\u0001\u0000\u0000"+
		"\u0000b\u0326\u0001\u0000\u0000\u0000d\u0328\u0001\u0000\u0000\u0000f"+
		"\u0332\u0001\u0000\u0000\u0000h\u0334\u0001\u0000\u0000\u0000j\u033f\u0001"+
		"\u0000\u0000\u0000l\u0341\u0001\u0000\u0000\u0000n\u0353\u0001\u0000\u0000"+
		"\u0000p\u035f\u0001\u0000\u0000\u0000r\u0361\u0001\u0000\u0000\u0000t"+
		"\u0369\u0001\u0000\u0000\u0000v\u0370\u0001\u0000\u0000\u0000x\u0372\u0001"+
		"\u0000\u0000\u0000z\u0374\u0001\u0000\u0000\u0000|\u0383\u0001\u0000\u0000"+
		"\u0000~\u039e\u0001\u0000\u0000\u0000\u0080\u03a0\u0001\u0000\u0000\u0000"+
		"\u0082\u03a2\u0001\u0000\u0000\u0000\u0084\u03a7\u0001\u0000\u0000\u0000"+
		"\u0086\u03a9\u0001\u0000\u0000\u0000\u0088\u03b3\u0001\u0000\u0000\u0000"+
		"\u008a\u03b5\u0001\u0000\u0000\u0000\u008c\u03bd\u0001\u0000\u0000\u0000"+
		"\u008e\u03bf\u0001\u0000\u0000\u0000\u0090\u03d2\u0001\u0000\u0000\u0000"+
		"\u0092\u03da\u0001\u0000\u0000\u0000\u0094\u03dc\u0001\u0000\u0000\u0000"+
		"\u0096\u03ea\u0001\u0000\u0000\u0000\u0098\u03f6\u0001\u0000\u0000\u0000"+
		"\u009a\u03f8\u0001\u0000\u0000\u0000\u009c\u0400\u0001\u0000\u0000\u0000"+
		"\u009e\u0416\u0001\u0000\u0000\u0000\u00a0\u041e\u0001\u0000\u0000\u0000"+
		"\u00a2\u0426\u0001\u0000\u0000\u0000\u00a4\u0432\u0001\u0000\u0000\u0000"+
		"\u00a6\u0434\u0001\u0000\u0000\u0000\u00a8\u0440\u0001\u0000\u0000\u0000"+
		"\u00aa\u0442\u0001\u0000\u0000\u0000\u00ac\u0448\u0001\u0000\u0000\u0000"+
		"\u00ae\u044b\u0001\u0000\u0000\u0000\u00b0\u0458\u0001\u0000\u0000\u0000"+
		"\u00b2\u045a\u0001\u0000\u0000\u0000\u00b4\u045f\u0001\u0000\u0000\u0000"+
		"\u00b6\u0472\u0001\u0000\u0000\u0000\u00b8\u0474\u0001\u0000\u0000\u0000"+
		"\u00ba\u047b\u0001\u0000\u0000\u0000\u00bc\u047e\u0001\u0000\u0000\u0000"+
		"\u00be\u0480\u0001\u0000\u0000\u0000\u00c0\u048c\u0001\u0000\u0000\u0000"+
		"\u00c2\u048e\u0001\u0000\u0000\u0000\u00c4\u0499\u0001\u0000\u0000\u0000"+
		"\u00c6\u049b\u0001\u0000\u0000\u0000\u00c8\u049f\u0001\u0000\u0000\u0000"+
		"\u00ca\u04a1\u0001\u0000\u0000\u0000\u00cc\u04a9\u0001\u0000\u0000\u0000"+
		"\u00ce\u04ad\u0001\u0000\u0000\u0000\u00d0\u04b5\u0001\u0000\u0000\u0000"+
		"\u00d2\u04b9\u0001\u0000\u0000\u0000\u00d4\u04bd\u0001\u0000\u0000\u0000"+
		"\u00d6\u04bf\u0001\u0000\u0000\u0000\u00d8\u04c1\u0001\u0000\u0000\u0000"+
		"\u00da\u04c7\u0001\u0000\u0000\u0000\u00dc\u04c9\u0001\u0000\u0000\u0000"+
		"\u00de\u04cd\u0001\u0000\u0000\u0000\u00e0\u04d9\u0001\u0000\u0000\u0000"+
		"\u00e2\u04db\u0001\u0000\u0000\u0000\u00e4\u04e5\u0001\u0000\u0000\u0000"+
		"\u00e6\u04e7\u0001\u0000\u0000\u0000\u00e8\u04e9\u0001\u0000\u0000\u0000"+
		"\u00ea\u04eb\u0001\u0000\u0000\u0000\u00ec\u04ed\u0001\u0000\u0000\u0000"+
		"\u00ee\u04f3\u0001\u0000\u0000\u0000\u00f0\u04f5\u0001\u0000\u0000\u0000"+
		"\u00f2\u04f7\u0001\u0000\u0000\u0000\u00f4\u04fc\u0001\u0000\u0000\u0000"+
		"\u00f6\u0505\u0001\u0000\u0000\u0000\u00f8\u052f\u0001\u0000\u0000\u0000"+
		"\u00fa\u0531\u0001\u0000\u0000\u0000\u00fc\u0538\u0001\u0000\u0000\u0000"+
		"\u00fe\u053a\u0001\u0000\u0000\u0000\u0100\u053f\u0001\u0000\u0000\u0000"+
		"\u0102\u054c\u0001\u0000\u0000\u0000\u0104\u054e\u0001\u0000\u0000\u0000"+
		"\u0106\u0550\u0001\u0000\u0000\u0000\u0108\u0555\u0001\u0000\u0000\u0000"+
		"\u010a\u0557\u0001\u0000\u0000\u0000\u010c\u0563\u0001\u0000\u0000\u0000"+
		"\u010e\u0565\u0001\u0000\u0000\u0000\u0110\u0571\u0001\u0000\u0000\u0000"+
		"\u0112\u0577\u0001\u0000\u0000\u0000\u0114\u0579\u0001\u0000\u0000\u0000"+
		"\u0116\u057b\u0001\u0000\u0000\u0000\u0118\u057e\u0001\u0000\u0000\u0000"+
		"\u011a\u0580\u0001\u0000\u0000\u0000\u011c\u0588\u0001\u0000\u0000\u0000"+
		"\u011e\u058f\u0001\u0000\u0000\u0000\u0120\u0591\u0001\u0000\u0000\u0000"+
		"\u0122\u0593\u0001\u0000\u0000\u0000\u0124\u0597\u0001\u0000\u0000\u0000"+
		"\u0126\u0599\u0001\u0000\u0000\u0000\u0128\u05a1\u0001\u0000\u0000\u0000"+
		"\u012a\u05a6\u0001\u0000\u0000\u0000\u012c\u05aa\u0001\u0000\u0000\u0000"+
		"\u012e\u05ae\u0001\u0000\u0000\u0000\u0130\u05b0\u0001\u0000\u0000\u0000"+
		"\u0132\u05b3\u0001\u0000\u0000\u0000\u0134\u05b6\u0001\u0000\u0000\u0000"+
		"\u0136\u05d7\u0001\u0000\u0000\u0000\u0138\u05db\u0001\u0000\u0000\u0000"+
		"\u013a\u05dd\u0001\u0000\u0000\u0000\u013c\u05df\u0001\u0000\u0000\u0000"+
		"\u013e\u05f3\u0001\u0000\u0000\u0000\u0140\u05f8\u0001\u0000\u0000\u0000"+
		"\u0142\u05fa\u0001\u0000\u0000\u0000\u0144\u060d\u0001\u0000\u0000\u0000"+
		"\u0146\u0612\u0001\u0000\u0000\u0000\u0148\u0616\u0001\u0000\u0000\u0000"+
		"\u014a\u061a\u0001\u0000\u0000\u0000\u014c\u061c\u0001\u0000\u0000\u0000"+
		"\u014e\u0620\u0001\u0000\u0000\u0000\u0150\u0624\u0001\u0000\u0000\u0000"+
		"\u0152\u0628\u0001\u0000\u0000\u0000\u0154\u062a\u0001\u0000\u0000\u0000"+
		"\u0156\u0631\u0001\u0000\u0000\u0000\u0158\u0633\u0001\u0000\u0000\u0000"+
		"\u015a\u0641\u0001\u0000\u0000\u0000\u015c\u064c\u0001\u0000\u0000\u0000"+
		"\u015e\u064e\u0001\u0000\u0000\u0000\u0160\u0655\u0001\u0000\u0000\u0000"+
		"\u0162\u0657\u0001\u0000\u0000\u0000\u0164\u0662\u0001\u0000\u0000\u0000"+
		"\u0166\u0664\u0001\u0000\u0000\u0000\u0168\u0669\u0001\u0000\u0000\u0000"+
		"\u016a\u0671\u0001\u0000\u0000\u0000\u016c\u0673\u0001\u0000\u0000\u0000"+
		"\u016e\u0678\u0001\u0000\u0000\u0000\u0170\u0680\u0001\u0000\u0000\u0000"+
		"\u0172\u0682\u0001\u0000\u0000\u0000\u0174\u068a\u0001\u0000\u0000\u0000"+
		"\u0176\u0691\u0001\u0000\u0000\u0000\u0178\u0693\u0001\u0000\u0000\u0000"+
		"\u017a\u069b\u0001\u0000\u0000\u0000\u017c\u06a7\u0001\u0000\u0000\u0000"+
		"\u017e\u06a9\u0001\u0000\u0000\u0000\u0180\u06b5\u0001\u0000\u0000\u0000"+
		"\u0182\u06b9\u0001\u0000\u0000\u0000\u0184\u06bb\u0001\u0000\u0000\u0000"+
		"\u0186\u06c4\u0001\u0000\u0000\u0000\u0188\u06c8\u0001\u0000\u0000\u0000"+
		"\u018a\u06ca\u0001\u0000\u0000\u0000\u018c\u06d7\u0001\u0000\u0000\u0000"+
		"\u018e\u06da\u0001\u0000\u0000\u0000\u0190\u06e5\u0001\u0000\u0000\u0000"+
		"\u0192\u06ec\u0001\u0000\u0000\u0000\u0194\u06ee\u0001\u0000\u0000\u0000"+
		"\u0196\u06f3\u0001\u0000\u0000\u0000\u0198\u0706\u0001\u0000\u0000\u0000"+
		"\u019a\u070c\u0001\u0000\u0000\u0000\u019c\u070e\u0001\u0000\u0000\u0000"+
		"\u019e\u0714\u0001\u0000\u0000\u0000\u01a0\u0716\u0001\u0000\u0000\u0000"+
		"\u01a2\u071c\u0001\u0000\u0000\u0000\u01a4\u071e\u0001\u0000\u0000\u0000"+
		"\u01a6\u0722\u0001\u0000\u0000\u0000\u01a8\u0726\u0001\u0000\u0000\u0000"+
		"\u01aa\u072a\u0001\u0000\u0000\u0000\u01ac\u072e\u0001\u0000\u0000\u0000"+
		"\u01ae\u0736\u0001\u0000\u0000\u0000\u01b0\u0738\u0001\u0000\u0000\u0000"+
		"\u01b2\u0740\u0001\u0000\u0000\u0000\u01b4\u0743\u0001\u0000\u0000\u0000"+
		"\u01b6\u0745\u0001\u0000\u0000\u0000\u01b8\u0747\u0001\u0000\u0000\u0000"+
		"\u01ba\u074a\u0001\u0000\u0000\u0000\u01bc\u074d\u0001\u0000\u0000\u0000"+
		"\u01be\u0750\u0001\u0000\u0000\u0000\u01c0\u0753\u0001\u0000\u0000\u0000"+
		"\u01c2\u0756\u0001\u0000\u0000\u0000\u01c4\u075f\u0001\u0000\u0000\u0000"+
		"\u01c6\u0761\u0001\u0000\u0000\u0000\u01c8\u0766\u0001\u0000\u0000\u0000"+
		"\u01ca\u076c\u0001\u0000\u0000\u0000\u01cc\u0772\u0001\u0000\u0000\u0000"+
		"\u01ce\u0777\u0001\u0000\u0000\u0000\u01d0\u077d\u0001\u0000\u0000\u0000"+
		"\u01d2\u0783\u0001\u0000\u0000\u0000\u01d4\u0793\u0001\u0000\u0000\u0000"+
		"\u01d6\u0797\u0001\u0000\u0000\u0000\u01d8\u079b\u0001\u0000\u0000\u0000"+
		"\u01da\u079d\u0001\u0000\u0000\u0000\u01dc\u079f\u0001\u0000\u0000\u0000"+
		"\u01de\u07a6\u0001\u0000\u0000\u0000\u01e0\u07a8\u0001\u0000\u0000\u0000"+
		"\u01e2\u07ad\u0001\u0000\u0000\u0000\u01e4\u07af\u0001\u0000\u0000\u0000"+
		"\u01e6\u07b4\u0001\u0000\u0000\u0000\u01e8\u07b6\u0001\u0000\u0000\u0000"+
		"\u01ea\u07b9\u0001\u0000\u0000\u0000\u01ec\u07bc\u0001\u0000\u0000\u0000"+
		"\u01ee\u07bf\u0001\u0000\u0000\u0000\u01f0\u07c2\u0001\u0000\u0000\u0000"+
		"\u01f2\u07d3\u0001\u0000\u0000\u0000\u01f4\u07d5\u0001\u0000\u0000\u0000"+
		"\u01f6\u07d7\u0001\u0000\u0000\u0000\u01f8\u07d9\u0001\u0000\u0000\u0000"+
		"\u01fa\u07db\u0001\u0000\u0000\u0000\u01fc\u07dd\u0001\u0000\u0000\u0000"+
		"\u01fe\u07df\u0001\u0000\u0000\u0000\u0200\u07e1\u0001\u0000\u0000\u0000"+
		"\u0202\u07e3\u0001\u0000\u0000\u0000\u0204\u0205\u0003\u0002\u0001\u0000"+
		"\u0205\u0206\u0005S\u0000\u0000\u0206\u0207\u0003\u000e\u0007\u0000\u0207"+
		"\u0208\u0003\u0010\b\u0000\u0208\u0209\u0005a\u0000\u0000\u0209\u020a"+
		"\u0005\u001f\u0000\u0000\u020a\u020b\u0003\u0012\t\u0000\u020b\u020c\u0005"+
		"\u0010\u0000\u0000\u020c\u020e\u0001\u0000\u0000\u0000\u020d\u0204\u0001"+
		"\u0000\u0000\u0000\u020e\u020f\u0001\u0000\u0000\u0000\u020f\u020d\u0001"+
		"\u0000\u0000\u0000\u020f\u0210\u0001\u0000\u0000\u0000\u0210\u0211\u0001"+
		"\u0000\u0000\u0000\u0211\u0212\u0005\u0000\u0000\u0001\u0212\u0001\u0001"+
		"\u0000\u0000\u0000\u0213\u0214\u0003\u01fa\u00fd\u0000\u0214\u0215\u0003"+
		"\u0004\u0002\u0000\u0215\u0003\u0001\u0000\u0000\u0000\u0216\u0217\u0005"+
		"]\u0000\u0000\u0217\u0218\u0003\u0006\u0003\u0000\u0218\u0219\u0005^\u0000"+
		"\u0000\u0219\u021b\u0001\u0000\u0000\u0000\u021a\u0216\u0001\u0000\u0000"+
		"\u0000\u021a\u021b\u0001\u0000\u0000\u0000\u021b\u0005\u0001\u0000\u0000"+
		"\u0000\u021c\u0220\u0003\b\u0004\u0000\u021d\u021f\u0003\b\u0004\u0000"+
		"\u021e\u021d\u0001\u0000\u0000\u0000\u021f\u0222\u0001\u0000\u0000\u0000"+
		"\u0220\u021e\u0001\u0000\u0000\u0000\u0220\u0221\u0001\u0000\u0000\u0000"+
		"\u0221\u0007\u0001\u0000\u0000\u0000\u0222\u0220\u0001\u0000\u0000\u0000"+
		"\u0223\u0227\u0003\u00c6c\u0000\u0224\u0227\u0003\n\u0005\u0000\u0225"+
		"\u0227\u0003\f\u0006\u0000\u0226\u0223\u0001\u0000\u0000\u0000\u0226\u0224"+
		"\u0001\u0000\u0000\u0000\u0226\u0225\u0001\u0000\u0000\u0000\u0227\t\u0001"+
		"\u0000\u0000\u0000\u0228\u0229\u0003\u01fc\u00fe\u0000\u0229\u000b\u0001"+
		"\u0000\u0000\u0000\u022a\u022b\u0003\u01f6\u00fb\u0000\u022b\u022c\u0005"+
		"_\u0000\u0000\u022c\u022d\u0003\n\u0005\u0000\u022d\u022e\u0005`\u0000"+
		"\u0000\u022e\r\u0001\u0000\u0000\u0000\u022f\u0230\u0007\u0000\u0000\u0000"+
		"\u0230\u0232\u0005*\u0000\u0000\u0231\u022f\u0001\u0000\u0000\u0000\u0231"+
		"\u0232\u0001\u0000\u0000\u0000\u0232\u000f\u0001\u0000\u0000\u0000\u0233"+
		"\u0234\u0005$\u0000\u0000\u0234\u0236\u0005L\u0000\u0000\u0235\u0233\u0001"+
		"\u0000\u0000\u0000\u0235\u0236\u0001\u0000\u0000\u0000\u0236\u0011\u0001"+
		"\u0000\u0000\u0000\u0237\u0239\u0003\u0014\n\u0000\u0238\u0237\u0001\u0000"+
		"\u0000\u0000\u0238\u0239\u0001\u0000\u0000\u0000\u0239\u023b\u0001\u0000"+
		"\u0000\u0000\u023a\u023c\u0003\u0018\f\u0000\u023b\u023a\u0001\u0000\u0000"+
		"\u0000\u023b\u023c\u0001\u0000\u0000\u0000\u023c\u023e\u0001\u0000\u0000"+
		"\u0000\u023d\u023f\u0003*\u0015\u0000\u023e\u023d\u0001\u0000\u0000\u0000"+
		"\u023e\u023f\u0001\u0000\u0000\u0000\u023f\u0013\u0001\u0000\u0000\u0000"+
		"\u0240\u0241\u0005 \u0000\u0000\u0241\u0242\u0003\u0016\u000b\u0000\u0242"+
		"\u0243\u0005\u0001\u0000\u0000\u0243\u0248\u0001\u0000\u0000\u0000\u0244"+
		"\u0245\u0005 \u0000\u0000\u0245\u0246\u0005\u0013\u0000\u0000\u0246\u0248"+
		"\u0005\u0001\u0000\u0000\u0247\u0240\u0001\u0000\u0000\u0000\u0247\u0244"+
		"\u0001\u0000\u0000\u0000\u0248\u0015\u0001\u0000\u0000\u0000\u0249\u024b"+
		"\u0003$\u0012\u0000\u024a\u0249\u0001\u0000\u0000\u0000\u024a\u024b\u0001"+
		"\u0000\u0000\u0000\u024b\u0017\u0001\u0000\u0000\u0000\u024c\u024d\u0005"+
		"P\u0000\u0000\u024d\u024e\u0003\u001a\r\u0000\u024e\u024f\u0005\u0001"+
		"\u0000\u0000\u024f\u0019\u0001\u0000\u0000\u0000\u0250\u0252\u0003\u001c"+
		"\u000e\u0000\u0251\u0250\u0001\u0000\u0000\u0000\u0251\u0252\u0001\u0000"+
		"\u0000\u0000\u0252\u001b\u0001\u0000\u0000\u0000\u0253\u0257\u0003\u001e"+
		"\u000f\u0000\u0254\u0256\u0003\u001e\u000f\u0000\u0255\u0254\u0001\u0000"+
		"\u0000\u0000\u0256\u0259\u0001\u0000\u0000\u0000\u0257\u0255\u0001\u0000"+
		"\u0000\u0000\u0257\u0258\u0001\u0000\u0000\u0000\u0258\u001d\u0001\u0000"+
		"\u0000\u0000\u0259\u0257\u0001\u0000\u0000\u0000\u025a\u025b\u0003$\u0012"+
		"\u0000\u025b\u025c\u00050\u0000\u0000\u025c\u025d\u0003 \u0010\u0000\u025d"+
		"\u001f\u0001\u0000\u0000\u0000\u025e\u025f\u0003\u01fa\u00fd\u0000\u025f"+
		"\u0260\u0003\"\u0011\u0000\u0260!\u0001\u0000\u0000\u0000\u0261\u0264"+
		"\u0003\u00c0`\u0000\u0262\u0264\u00030\u0018\u0000\u0263\u0261\u0001\u0000"+
		"\u0000\u0000\u0263\u0262\u0001\u0000\u0000\u0000\u0263\u0264\u0001\u0000"+
		"\u0000\u0000\u0264#\u0001\u0000\u0000\u0000\u0265\u026a\u0003&\u0013\u0000"+
		"\u0266\u0267\u0005h\u0000\u0000\u0267\u0269\u0003&\u0013\u0000\u0268\u0266"+
		"\u0001\u0000\u0000\u0000\u0269\u026c\u0001\u0000\u0000\u0000\u026a\u0268"+
		"\u0001\u0000\u0000\u0000\u026a\u026b\u0001\u0000\u0000\u0000\u026b%\u0001"+
		"\u0000\u0000\u0000\u026c\u026a\u0001\u0000\u0000\u0000\u026d\u0270\u0003"+
		"(\u0014\u0000\u026e\u0270\u0003\u01de\u00ef\u0000\u026f\u026d\u0001\u0000"+
		"\u0000\u0000\u026f\u026e\u0001\u0000\u0000\u0000\u0270\'\u0001\u0000\u0000"+
		"\u0000\u0271\u0277\u0003\u01f4\u00fa\u0000\u0272\u0277\u0003\u01f8\u00fc"+
		"\u0000\u0273\u0277\u0003\u01b2\u00d9\u0000\u0274\u0277\u0003\u01b4\u00da"+
		"\u0000\u0275\u0277\u0003\u01b6\u00db\u0000\u0276\u0271\u0001\u0000\u0000"+
		"\u0000\u0276\u0272\u0001\u0000\u0000\u0000\u0276\u0273\u0001\u0000\u0000"+
		"\u0000\u0276\u0274\u0001\u0000\u0000\u0000\u0276\u0275\u0001\u0000\u0000"+
		"\u0000\u0277)\u0001\u0000\u0000\u0000\u0278\u027c\u0003,\u0016\u0000\u0279"+
		"\u027b\u0003,\u0016\u0000\u027a\u0279\u0001\u0000\u0000\u0000\u027b\u027e"+
		"\u0001\u0000\u0000\u0000\u027c\u027a\u0001\u0000\u0000\u0000\u027c\u027d"+
		"\u0001\u0000\u0000\u0000\u027d+\u0001\u0000\u0000\u0000\u027e\u027c\u0001"+
		"\u0000\u0000\u0000\u027f\u0287\u00036\u001b\u0000\u0280\u0287\u00038\u001c"+
		"\u0000\u0281\u0287\u0003:\u001d\u0000\u0282\u0287\u0003\u0154\u00aa\u0000"+
		"\u0283\u0287\u0003\u0184\u00c2\u0000\u0284\u0287\u0003\u0194\u00ca\u0000"+
		"\u0285\u0287\u0003\u01c4\u00e2\u0000\u0286\u027f\u0001\u0000\u0000\u0000"+
		"\u0286\u0280\u0001\u0000\u0000\u0000\u0286\u0281\u0001\u0000\u0000\u0000"+
		"\u0286\u0282\u0001\u0000\u0000\u0000\u0286\u0283\u0001\u0000\u0000\u0000"+
		"\u0286\u0284\u0001\u0000\u0000\u0000\u0286\u0285\u0001\u0000\u0000\u0000"+
		"\u0287-\u0001\u0000\u0000\u0000\u0288\u028d\u00032\u0019\u0000\u0289\u028d"+
		"\u0003\u01f4\u00fa\u0000\u028a\u028d\u0003\u01e0\u00f0\u0000\u028b\u028d"+
		"\u0003\u01e8\u00f4\u0000\u028c\u0288\u0001\u0000\u0000\u0000\u028c\u0289"+
		"\u0001\u0000\u0000\u0000\u028c\u028a\u0001\u0000\u0000\u0000\u028c\u028b"+
		"\u0001\u0000\u0000\u0000\u028d/\u0001\u0000\u0000\u0000\u028e\u0292\u0003"+
		"4\u001a\u0000\u028f\u0292\u0003\u01f8\u00fc\u0000\u0290\u0292\u0003\u01e4"+
		"\u00f2\u0000\u0291\u028e\u0001\u0000\u0000\u0000\u0291\u028f\u0001\u0000"+
		"\u0000\u0000\u0291\u0290\u0001\u0000\u0000\u0000\u02921\u0001\u0000\u0000"+
		"\u0000\u0293\u0294\u0003\u01fa\u00fd\u0000\u0294\u0295\u0005g\u0000\u0000"+
		"\u0295\u0296\u0003\u01f4\u00fa\u0000\u02963\u0001\u0000\u0000\u0000\u0297"+
		"\u0298\u0003\u01fa\u00fd\u0000\u0298\u0299\u0005g\u0000\u0000\u0299\u029a"+
		"\u0003\u01f8\u00fc\u0000\u029a5\u0001\u0000\u0000\u0000\u029b\u029c\u0003"+
		"\u01f4\u00fa\u0000\u029c\u029d\u0005a\u0000\u0000\u029d\u029e\u0003>\u001f"+
		"\u0000\u029e7\u0001\u0000\u0000\u0000\u029f\u02a0\u0003\u01f8\u00fc\u0000"+
		"\u02a0\u02a1\u0003>\u001f\u0000\u02a1\u02a2\u0005a\u0000\u0000\u02a2\u02a3"+
		"\u0003F#\u0000\u02a39\u0001\u0000\u0000\u0000\u02a4\u02a5\u0003\u01f4"+
		"\u00fa\u0000\u02a5\u02a6\u0003>\u001f\u0000\u02a6\u02a7\u0005a\u0000\u0000"+
		"\u02a7\u02a8\u0003<\u001e\u0000\u02a8;\u0001\u0000\u0000\u0000\u02a9\u02aa"+
		"\u0005]\u0000\u0000\u02aa\u02ab\u0003\u0102\u0081\u0000\u02ab\u02ac\u0005"+
		"^\u0000\u0000\u02ac=\u0001\u0000\u0000\u0000\u02ad\u02b1\u0003@ \u0000"+
		"\u02ae\u02b1\u0003B!\u0000\u02af\u02b1\u0003\u00f6{\u0000\u02b0\u02ad"+
		"\u0001\u0000\u0000\u0000\u02b0\u02ae\u0001\u0000\u0000\u0000\u02b0\u02af"+
		"\u0001\u0000\u0000\u0000\u02b1?\u0001\u0000\u0000\u0000\u02b2\u02c3\u0003"+
		"j5\u0000\u02b3\u02c3\u0003N\'\u0000\u02b4\u02c3\u0003\u00d4j\u0000\u02b5"+
		"\u02c3\u0003\u00a6S\u0000\u02b6\u02c3\u0003\\.\u0000\u02b7\u02c3\u0003"+
		"R)\u0000\u02b8\u02c3\u0003x<\u0000\u02b9\u02c3\u0003\u019c\u00ce\u0000"+
		"\u02ba\u02c3\u0003\u00be_\u0000\u02bb\u02c3\u0003t:\u0000\u02bc\u02c3"+
		"\u0003|>\u0000\u02bd\u02c3\u0003\u0096K\u0000\u02be\u02c3\u0003\u009e"+
		"O\u0000\u02bf\u02c3\u0003\u00a2Q\u0000\u02c0\u02c3\u0003\u00b6[\u0000"+
		"\u02c1\u02c3\u0003\u01b0\u00d8\u0000\u02c2\u02b2\u0001\u0000\u0000\u0000"+
		"\u02c2\u02b3\u0001\u0000\u0000\u0000\u02c2\u02b4\u0001\u0000\u0000\u0000"+
		"\u02c2\u02b5\u0001\u0000\u0000\u0000\u02c2\u02b6\u0001\u0000\u0000\u0000"+
		"\u02c2\u02b7\u0001\u0000\u0000\u0000\u02c2\u02b8\u0001\u0000\u0000\u0000"+
		"\u02c2\u02b9\u0001\u0000\u0000\u0000\u02c2\u02ba\u0001\u0000\u0000\u0000"+
		"\u02c2\u02bb\u0001\u0000\u0000\u0000\u02c2\u02bc\u0001\u0000\u0000\u0000"+
		"\u02c2\u02bd\u0001\u0000\u0000\u0000\u02c2\u02be\u0001\u0000\u0000\u0000"+
		"\u02c2\u02bf\u0001\u0000\u0000\u0000\u02c2\u02c0\u0001\u0000\u0000\u0000"+
		"\u02c2\u02c1\u0001\u0000\u0000\u0000\u02c3A\u0001\u0000\u0000\u0000\u02c4"+
		"\u02c9\u0003.\u0017\u0000\u02c5\u02c9\u0003\u00f4z\u0000\u02c6\u02c9\u0003"+
		"\u01a8\u00d4\u0000\u02c7\u02c9\u0003\u01a6\u00d3\u0000\u02c8\u02c4\u0001"+
		"\u0000\u0000\u0000\u02c8\u02c5\u0001\u0000\u0000\u0000\u02c8\u02c6\u0001"+
		"\u0000\u0000\u0000\u02c8\u02c7\u0001\u0000\u0000\u0000\u02c9C\u0001\u0000"+
		"\u0000\u0000\u02ca\u02cb\u0003\u01f6\u00fb\u0000\u02cb\u02cc\u0003>\u001f"+
		"\u0000\u02ccE\u0001\u0000\u0000\u0000\u02cd\u02d1\u0003H$\u0000\u02ce"+
		"\u02d1\u0003J%\u0000\u02cf\u02d1\u0003\u019e\u00cf\u0000\u02d0\u02cd\u0001"+
		"\u0000\u0000\u0000\u02d0\u02ce\u0001\u0000\u0000\u0000\u02d0\u02cf\u0001"+
		"\u0000\u0000\u0000\u02d1G\u0001\u0000\u0000\u0000\u02d2\u02df\u0003p8"+
		"\u0000\u02d3\u02df\u0003P(\u0000\u02d4\u02df\u0003\u00d6k\u0000\u02d5"+
		"\u02df\u0003h4\u0000\u02d6\u02df\u0003Z-\u0000\u02d7\u02df\u0003z=\u0000"+
		"\u02d8\u02df\u0003\u00c0`\u0000\u02d9\u02df\u0003v;\u0000\u02da\u02df"+
		"\u0003\u0092I\u0000\u02db\u02df\u0003\u0098L\u0000\u02dc\u02df\u0003\u00a0"+
		"P\u0000\u02dd\u02df\u0003\u00a4R\u0000\u02de\u02d2\u0001\u0000\u0000\u0000"+
		"\u02de\u02d3\u0001\u0000\u0000\u0000\u02de\u02d4\u0001\u0000\u0000\u0000"+
		"\u02de\u02d5\u0001\u0000\u0000\u0000\u02de\u02d6\u0001\u0000\u0000\u0000"+
		"\u02de\u02d7\u0001\u0000\u0000\u0000\u02de\u02d8\u0001\u0000\u0000\u0000"+
		"\u02de\u02d9\u0001\u0000\u0000\u0000\u02de\u02da\u0001\u0000\u0000\u0000"+
		"\u02de\u02db\u0001\u0000\u0000\u0000\u02de\u02dc\u0001\u0000\u0000\u0000"+
		"\u02de\u02dd\u0001\u0000\u0000\u0000\u02dfI\u0001\u0000\u0000\u0000\u02e0"+
		"\u02e3\u00030\u0018\u0000\u02e1\u02e3\u0003\u01a4\u00d2\u0000\u02e2\u02e0"+
		"\u0001\u0000\u0000\u0000\u02e2\u02e1\u0001\u0000\u0000\u0000\u02e3K\u0001"+
		"\u0000\u0000\u0000\u02e4\u02e5\u0003\u01f6\u00fb\u0000\u02e5\u02e6\u0003"+
		"F#\u0000\u02e6M\u0001\u0000\u0000\u0000\u02e7\u02e8\u0005+\u0000\u0000"+
		"\u02e8O\u0001\u0000\u0000\u0000\u02e9\u02ea\u0007\u0001\u0000\u0000\u02ea"+
		"Q\u0001\u0000\u0000\u0000\u02eb\u02f2\u0005\r\u0000\u0000\u02ec\u02ed"+
		"\u0005\r\u0000\u0000\u02ed\u02ee\u0005]\u0000\u0000\u02ee\u02ef\u0003"+
		"T*\u0000\u02ef\u02f0\u0005^\u0000\u0000\u02f0\u02f2\u0001\u0000\u0000"+
		"\u0000\u02f1\u02eb\u0001\u0000\u0000\u0000\u02f1\u02ec\u0001\u0000\u0000"+
		"\u0000\u02f2S\u0001\u0000\u0000\u0000\u02f3\u02f8\u0003V+\u0000\u02f4"+
		"\u02f5\u0005h\u0000\u0000\u02f5\u02f7\u0003V+\u0000\u02f6\u02f4\u0001"+
		"\u0000\u0000\u0000\u02f7\u02fa\u0001\u0000\u0000\u0000\u02f8\u02f6\u0001"+
		"\u0000\u0000\u0000\u02f8\u02f9\u0001\u0000\u0000\u0000\u02f9U\u0001\u0000"+
		"\u0000\u0000\u02fa\u02f8\u0001\u0000\u0000\u0000\u02fb\u02fc\u0003\u01f6"+
		"\u00fb\u0000\u02fc\u02fd\u0005_\u0000\u0000\u02fd\u02fe\u0003X,\u0000"+
		"\u02fe\u02ff\u0005`\u0000\u0000\u02ff\u0306\u0001\u0000\u0000\u0000\u0300"+
		"\u0301\u0003\u01f6\u00fb\u0000\u0301\u0302\u0005_\u0000\u0000\u0302\u0303"+
		"\u00030\u0018\u0000\u0303\u0304\u0005`\u0000\u0000\u0304\u0306\u0001\u0000"+
		"\u0000\u0000\u0305\u02fb\u0001\u0000\u0000\u0000\u0305\u0300\u0001\u0000"+
		"\u0000\u0000\u0306W\u0001\u0000\u0000\u0000\u0307\u030b\u0003\u01fc\u00fe"+
		"\u0000\u0308\u0309\u0005i\u0000\u0000\u0309\u030b\u0003\u01fc\u00fe\u0000"+
		"\u030a\u0307\u0001\u0000\u0000\u0000\u030a\u0308\u0001\u0000\u0000\u0000"+
		"\u030bY\u0001\u0000\u0000\u0000\u030c\u030f\u0003X,\u0000\u030d\u030f"+
		"\u0003\u01f6\u00fb\u0000\u030e\u030c\u0001\u0000\u0000\u0000\u030e\u030d"+
		"\u0001\u0000\u0000\u0000\u030f[\u0001\u0000\u0000\u0000\u0310\u0311\u0005"+
		"\u0014\u0000\u0000\u0311\u0312\u0005]\u0000\u0000\u0312\u0313\u0003^/"+
		"\u0000\u0313\u0314\u0005^\u0000\u0000\u0314]\u0001\u0000\u0000\u0000\u0315"+
		"\u0323\u0003`0\u0000\u0316\u0317\u0003`0\u0000\u0317\u0318\u0005h\u0000"+
		"\u0000\u0318\u0319\u0005c\u0000\u0000\u0319\u031a\u0003\u00ceg\u0000\u031a"+
		"\u0323\u0001\u0000\u0000\u0000\u031b\u031c\u0003`0\u0000\u031c\u031d\u0005"+
		"h\u0000\u0000\u031d\u031e\u0005c\u0000\u0000\u031e\u031f\u0003\u00ceg"+
		"\u0000\u031f\u0320\u0005h\u0000\u0000\u0320\u0321\u0003b1\u0000\u0321"+
		"\u0323\u0001\u0000\u0000\u0000\u0322\u0315\u0001\u0000\u0000\u0000\u0322"+
		"\u0316\u0001\u0000\u0000\u0000\u0322\u031b\u0001\u0000\u0000\u0000\u0323"+
		"_\u0001\u0000\u0000\u0000\u0324\u0325\u0003d2\u0000\u0325a\u0001\u0000"+
		"\u0000\u0000\u0326\u0327\u0003d2\u0000\u0327c\u0001\u0000\u0000\u0000"+
		"\u0328\u032d\u0003f3\u0000\u0329\u032a\u0005h\u0000\u0000\u032a\u032c"+
		"\u0003f3\u0000\u032b\u0329\u0001\u0000\u0000\u0000\u032c\u032f\u0001\u0000"+
		"\u0000\u0000\u032d\u032b\u0001\u0000\u0000\u0000\u032d\u032e\u0001\u0000"+
		"\u0000\u0000\u032ee\u0001\u0000\u0000\u0000\u032f\u032d\u0001\u0000\u0000"+
		"\u0000\u0330\u0333\u0003\u01f6\u00fb\u0000\u0331\u0333\u0003V+\u0000\u0332"+
		"\u0330\u0001\u0000\u0000\u0000\u0332\u0331\u0001\u0000\u0000\u0000\u0333"+
		"g\u0001\u0000\u0000\u0000\u0334\u0335\u0003\u01f6\u00fb\u0000\u0335i\u0001"+
		"\u0000\u0000\u0000\u0336\u0337\u0005#\u0000\u0000\u0337\u0340\u0005\u001e"+
		"\u0000\u0000\u0338\u0339\u0005#\u0000\u0000\u0339\u033a\u0005\u001e\u0000"+
		"\u0000\u033a\u033b\u0001\u0000\u0000\u0000\u033b\u033c\u0005]\u0000\u0000"+
		"\u033c\u033d\u0003l6\u0000\u033d\u033e\u0005^\u0000\u0000\u033e\u0340"+
		"\u0001\u0000\u0000\u0000\u033f\u0336\u0001\u0000\u0000\u0000\u033f\u0338"+
		"\u0001\u0000\u0000\u0000\u0340k\u0001\u0000\u0000\u0000\u0341\u0346\u0003"+
		"n7\u0000\u0342\u0343\u0005h\u0000\u0000\u0343\u0345\u0003n7\u0000\u0344"+
		"\u0342\u0001\u0000\u0000\u0000\u0345\u0348\u0001\u0000\u0000\u0000\u0346"+
		"\u0344\u0001\u0000\u0000\u0000\u0346\u0347\u0001\u0000\u0000\u0000\u0347"+
		"m\u0001\u0000\u0000\u0000\u0348\u0346\u0001\u0000\u0000\u0000\u0349\u034a"+
		"\u0003\u01f6\u00fb\u0000\u034a\u034b\u0005_\u0000\u0000\u034b\u034c\u0003"+
		"\u01fc\u00fe\u0000\u034c\u034d\u0005`\u0000\u0000\u034d\u0354\u0001\u0000"+
		"\u0000\u0000\u034e\u034f\u0003\u01f6\u00fb\u0000\u034f\u0350\u0005_\u0000"+
		"\u0000\u0350\u0351\u00030\u0018\u0000\u0351\u0352\u0005`\u0000\u0000\u0352"+
		"\u0354\u0001\u0000\u0000\u0000\u0353\u0349\u0001\u0000\u0000\u0000\u0353"+
		"\u034e\u0001\u0000\u0000\u0000\u0354o\u0001\u0000\u0000\u0000\u0355\u0360"+
		"\u0003\u01fe\u00ff\u0000\u0356\u0360\u0003\u0200\u0100\u0000\u0357\u0358"+
		"\u0005]\u0000\u0000\u0358\u0359\u0003r9\u0000\u0359\u035a\u0005^\u0000"+
		"\u0000\u035a\u0360\u0001\u0000\u0000\u0000\u035b\u035c\u0005]\u0000\u0000"+
		"\u035c\u0360\u0005^\u0000\u0000\u035d\u035e\u0005K\u0000\u0000\u035e\u0360"+
		"\u0003F#\u0000\u035f\u0355\u0001\u0000\u0000\u0000\u035f\u0356\u0001\u0000"+
		"\u0000\u0000\u035f\u0357\u0001\u0000\u0000\u0000\u035f\u035b\u0001\u0000"+
		"\u0000\u0000\u035f\u035d\u0001\u0000\u0000\u0000\u0360q\u0001\u0000\u0000"+
		"\u0000\u0361\u0366\u0003\u01f6\u00fb\u0000\u0362\u0363\u0005h\u0000\u0000"+
		"\u0363\u0365\u0003\u01f6\u00fb\u0000\u0364\u0362\u0001\u0000\u0000\u0000"+
		"\u0365\u0368\u0001\u0000\u0000\u0000\u0366\u0364\u0001\u0000\u0000\u0000"+
		"\u0366\u0367\u0001\u0000\u0000\u0000\u0367s\u0001\u0000\u0000\u0000\u0368"+
		"\u0366\u0001\u0000\u0000\u0000\u0369\u036a\u00055\u0000\u0000\u036a\u036b"+
		"\u0005\u001e\u0000\u0000\u036bu\u0001\u0000\u0000\u0000\u036c\u0371\u0003"+
		"\u01fe\u00ff\u0000\u036d\u0371\u0003\u0200\u0100\u0000\u036e\u036f\u0005"+
		"K\u0000\u0000\u036f\u0371\u0003F#\u0000\u0370\u036c\u0001\u0000\u0000"+
		"\u0000\u0370\u036d\u0001\u0000\u0000\u0000\u0370\u036e\u0001\u0000\u0000"+
		"\u0000\u0371w\u0001\u0000\u0000\u0000\u0372\u0373\u0005%\u0000\u0000\u0373"+
		"y\u0001\u0000\u0000\u0000\u0374\u0375\u0005%\u0000\u0000\u0375{\u0001"+
		"\u0000\u0000\u0000\u0376\u0377\u0005\u0012\u0000\u0000\u0377\u0378\u0005"+
		"]\u0000\u0000\u0378\u0384\u0005^\u0000\u0000\u0379\u037a\u0005\u0012\u0000"+
		"\u0000\u037a\u037b\u0005]\u0000\u0000\u037b\u037c\u0003\u00ccf\u0000\u037c"+
		"\u037d\u0005^\u0000\u0000\u037d\u0384\u0001\u0000\u0000\u0000\u037e\u037f"+
		"\u0005\u0012\u0000\u0000\u037f\u0380\u0005]\u0000\u0000\u0380\u0381\u0003"+
		"~?\u0000\u0381\u0382\u0005^\u0000\u0000\u0382\u0384\u0001\u0000\u0000"+
		"\u0000\u0383\u0376\u0001\u0000\u0000\u0000\u0383\u0379\u0001\u0000\u0000"+
		"\u0000\u0383\u037e\u0001\u0000\u0000\u0000\u0384}\u0001\u0000\u0000\u0000"+
		"\u0385\u039f\u0003\u0080@\u0000\u0386\u0387\u0003\u0080@\u0000\u0387\u0388"+
		"\u0005h\u0000\u0000\u0388\u0389\u0003\u00ccf\u0000\u0389\u038a\u0003\u0084"+
		"B\u0000\u038a\u038b\u0003\u00d2i\u0000\u038b\u039f\u0001\u0000\u0000\u0000"+
		"\u038c\u038d\u0003\u0080@\u0000\u038d\u038e\u0005h\u0000\u0000\u038e\u038f"+
		"\u0003\u00ccf\u0000\u038f\u0390\u0003\u0084B\u0000\u0390\u0391\u0003\u0082"+
		"A\u0000\u0391\u0392\u0005h\u0000\u0000\u0392\u0393\u0003\u0080@\u0000"+
		"\u0393\u039f\u0001\u0000\u0000\u0000\u0394\u0395\u0003\u00ccf\u0000\u0395"+
		"\u0396\u0003\u0084B\u0000\u0396\u0397\u0003\u0082A\u0000\u0397\u0398\u0005"+
		"h\u0000\u0000\u0398\u0399\u0003\u0080@\u0000\u0399\u039f\u0001\u0000\u0000"+
		"\u0000\u039a\u039b\u0003\u00ccf\u0000\u039b\u039c\u0003\u0084B\u0000\u039c"+
		"\u039d\u0003\u00d2i\u0000\u039d\u039f\u0001\u0000\u0000\u0000\u039e\u0385"+
		"\u0001\u0000\u0000\u0000\u039e\u0386\u0001\u0000\u0000\u0000\u039e\u038c"+
		"\u0001\u0000\u0000\u0000\u039e\u0394\u0001\u0000\u0000\u0000\u039e\u039a"+
		"\u0001\u0000\u0000\u0000\u039f\u007f\u0001\u0000\u0000\u0000\u03a0\u03a1"+
		"\u0003\u008eG\u0000\u03a1\u0081\u0001\u0000\u0000\u0000\u03a2\u03a3\u0005"+
		"h\u0000\u0000\u03a3\u03a4\u0005c\u0000\u0000\u03a4\u0083\u0001\u0000\u0000"+
		"\u0000\u03a5\u03a6\u0005h\u0000\u0000\u03a6\u03a8\u0003\u0086C\u0000\u03a7"+
		"\u03a5\u0001\u0000\u0000\u0000\u03a7\u03a8\u0001\u0000\u0000\u0000\u03a8"+
		"\u0085\u0001\u0000\u0000\u0000\u03a9\u03ae\u0003\u0088D\u0000\u03aa\u03ab"+
		"\u0005h\u0000\u0000\u03ab\u03ad\u0003\u0088D\u0000\u03ac\u03aa\u0001\u0000"+
		"\u0000\u0000\u03ad\u03b0\u0001\u0000\u0000\u0000\u03ae\u03ac\u0001\u0000"+
		"\u0000\u0000\u03ae\u03af\u0001\u0000\u0000\u0000\u03af\u0087\u0001\u0000"+
		"\u0000\u0000\u03b0\u03ae\u0001\u0000\u0000\u0000\u03b1\u03b4\u0003\u0090"+
		"H\u0000\u03b2\u03b4\u0003\u008aE\u0000\u03b3\u03b1\u0001\u0000\u0000\u0000"+
		"\u03b3\u03b2\u0001\u0000\u0000\u0000\u03b4\u0089\u0001\u0000\u0000\u0000"+
		"\u03b5\u03b6\u0005d\u0000\u0000\u03b6\u03b7\u0003\u008cF\u0000\u03b7\u03b8"+
		"\u0003\u008eG\u0000\u03b8\u03b9\u0005e\u0000\u0000\u03b9\u008b\u0001\u0000"+
		"\u0000\u0000\u03ba\u03bb\u0003\u01fc\u00fe\u0000\u03bb\u03bc\u0005f\u0000"+
		"\u0000\u03bc\u03be\u0001\u0000\u0000\u0000\u03bd\u03ba\u0001\u0000\u0000"+
		"\u0000\u03bd\u03be\u0001\u0000\u0000\u0000\u03be\u008d\u0001\u0000\u0000"+
		"\u0000\u03bf\u03c4\u0003\u0090H\u0000\u03c0\u03c1\u0005h\u0000\u0000\u03c1"+
		"\u03c3\u0003\u0090H\u0000\u03c2\u03c0\u0001\u0000\u0000\u0000\u03c3\u03c6"+
		"\u0001\u0000\u0000\u0000\u03c4\u03c2\u0001\u0000\u0000\u0000\u03c4\u03c5"+
		"\u0001\u0000\u0000\u0000\u03c5\u008f\u0001\u0000\u0000\u0000\u03c6\u03c4"+
		"\u0001\u0000\u0000\u0000\u03c7\u03d3\u0003D\"\u0000\u03c8\u03c9\u0003"+
		"D\"\u0000\u03c9\u03ca\u0005=\u0000\u0000\u03ca\u03d3\u0001\u0000\u0000"+
		"\u0000\u03cb\u03cc\u0003D\"\u0000\u03cc\u03cd\u0005O\u0000\u0000\u03cd"+
		"\u03ce\u0003F#\u0000\u03ce\u03d3\u0001\u0000\u0000\u0000\u03cf\u03d0\u0005"+
		"C\u0000\u0000\u03d0\u03d1\u00059\u0000\u0000\u03d1\u03d3\u0003>\u001f"+
		"\u0000\u03d2\u03c7\u0001\u0000\u0000\u0000\u03d2\u03c8\u0001\u0000\u0000"+
		"\u0000\u03d2\u03cb\u0001\u0000\u0000\u0000\u03d2\u03cf\u0001\u0000\u0000"+
		"\u0000\u03d3\u0091\u0001\u0000\u0000\u0000\u03d4\u03d5\u0005]\u0000\u0000"+
		"\u03d5\u03d6\u0003\u0094J\u0000\u03d6\u03d7\u0005^\u0000\u0000\u03d7\u03db"+
		"\u0001\u0000\u0000\u0000\u03d8\u03d9\u0005]\u0000\u0000\u03d9\u03db\u0005"+
		"^\u0000\u0000\u03da\u03d4\u0001\u0000\u0000\u0000\u03da\u03d8\u0001\u0000"+
		"\u0000\u0000\u03db\u0093\u0001\u0000\u0000\u0000\u03dc\u03e1\u0003L&\u0000"+
		"\u03dd\u03de\u0005h\u0000\u0000\u03de\u03e0\u0003L&\u0000\u03df\u03dd"+
		"\u0001\u0000\u0000\u0000\u03e0\u03e3\u0001\u0000\u0000\u0000\u03e1\u03df"+
		"\u0001\u0000\u0000\u0000\u03e1\u03e2\u0001\u0000\u0000\u0000\u03e2\u0095"+
		"\u0001\u0000\u0000\u0000\u03e3\u03e1\u0001\u0000\u0000\u0000\u03e4\u03e5"+
		"\u0005\u0012\u0000\u0000\u03e5\u03e6\u00059\u0000\u0000\u03e6\u03eb\u0003"+
		">\u001f\u0000\u03e7\u03e8\u0005\u0012\u0000\u0000\u03e8\u03e9\u00059\u0000"+
		"\u0000\u03e9\u03eb\u0003D\"\u0000\u03ea\u03e4\u0001\u0000\u0000\u0000"+
		"\u03ea\u03e7\u0001\u0000\u0000\u0000\u03eb\u0097\u0001\u0000\u0000\u0000"+
		"\u03ec\u03ed\u0005]\u0000\u0000\u03ed\u03ee\u0003\u009aM\u0000\u03ee\u03ef"+
		"\u0005^\u0000\u0000\u03ef\u03f7\u0001\u0000\u0000\u0000\u03f0\u03f1\u0005"+
		"]\u0000\u0000\u03f1\u03f2\u0003\u009cN\u0000\u03f2\u03f3\u0005^\u0000"+
		"\u0000\u03f3\u03f7\u0001\u0000\u0000\u0000\u03f4\u03f5\u0005]\u0000\u0000"+
		"\u03f5\u03f7\u0005^\u0000\u0000\u03f6\u03ec\u0001\u0000\u0000\u0000\u03f6"+
		"\u03f0\u0001\u0000\u0000\u0000\u03f6\u03f4\u0001\u0000\u0000\u0000\u03f7"+
		"\u0099\u0001\u0000\u0000\u0000\u03f8\u03fd\u0003F#\u0000\u03f9\u03fa\u0005"+
		"h\u0000\u0000\u03fa\u03fc\u0003F#\u0000\u03fb\u03f9\u0001\u0000\u0000"+
		"\u0000\u03fc\u03ff\u0001\u0000\u0000\u0000\u03fd\u03fb\u0001\u0000\u0000"+
		"\u0000\u03fd\u03fe\u0001\u0000\u0000\u0000\u03fe\u009b\u0001\u0000\u0000"+
		"\u0000\u03ff\u03fd\u0001\u0000\u0000\u0000\u0400\u0405\u0003L&\u0000\u0401"+
		"\u0402\u0005h\u0000\u0000\u0402\u0404\u0003L&\u0000\u0403\u0401\u0001"+
		"\u0000\u0000\u0000\u0404\u0407\u0001\u0000\u0000\u0000\u0405\u0403\u0001"+
		"\u0000\u0000\u0000\u0405\u0406\u0001\u0000\u0000\u0000\u0406\u009d\u0001"+
		"\u0000\u0000\u0000\u0407\u0405\u0001\u0000\u0000\u0000\u0408\u0409\u0005"+
		"\u0016\u0000\u0000\u0409\u040a\u0005]\u0000\u0000\u040a\u0417\u0005^\u0000"+
		"\u0000\u040b\u040c\u0005\u0016\u0000\u0000\u040c\u040d\u0005]\u0000\u0000"+
		"\u040d\u040e\u0003\u00ccf\u0000\u040e\u040f\u0003\u00d2i\u0000\u040f\u0410"+
		"\u0005^\u0000\u0000\u0410\u0417\u0001\u0000\u0000\u0000\u0411\u0412\u0005"+
		"\u0016\u0000\u0000\u0412\u0413\u0005]\u0000\u0000\u0413\u0414\u0003~?"+
		"\u0000\u0414\u0415\u0005^\u0000\u0000\u0415\u0417\u0001\u0000\u0000\u0000"+
		"\u0416\u0408\u0001\u0000\u0000\u0000\u0416\u040b\u0001\u0000\u0000\u0000"+
		"\u0416\u0411\u0001\u0000\u0000\u0000\u0417\u009f\u0001\u0000\u0000\u0000"+
		"\u0418\u0419\u0005]\u0000\u0000\u0419\u041a\u0003\u0094J\u0000\u041a\u041b"+
		"\u0005^\u0000\u0000\u041b\u041f\u0001\u0000\u0000\u0000\u041c\u041d\u0005"+
		"]\u0000\u0000\u041d\u041f\u0005^\u0000\u0000\u041e\u0418\u0001\u0000\u0000"+
		"\u0000\u041e\u041c\u0001\u0000\u0000\u0000\u041f\u00a1\u0001\u0000\u0000"+
		"\u0000\u0420\u0421\u0005\u0016\u0000\u0000\u0421\u0422\u00059\u0000\u0000"+
		"\u0422\u0427\u0003>\u001f\u0000\u0423\u0424\u0005\u0016\u0000\u0000\u0424"+
		"\u0425\u00059\u0000\u0000\u0425\u0427\u0003D\"\u0000\u0426\u0420\u0001"+
		"\u0000\u0000\u0000\u0426\u0423\u0001\u0000\u0000\u0000\u0427\u00a3\u0001"+
		"\u0000\u0000\u0000\u0428\u0429\u0005]\u0000\u0000\u0429\u042a\u0003\u009a"+
		"M\u0000\u042a\u042b\u0005^\u0000\u0000\u042b\u0433\u0001\u0000\u0000\u0000"+
		"\u042c\u042d\u0005]\u0000\u0000\u042d\u042e\u0003\u009cN\u0000\u042e\u042f"+
		"\u0005^\u0000\u0000\u042f\u0433\u0001\u0000\u0000\u0000\u0430\u0431\u0005"+
		"]\u0000\u0000\u0431\u0433\u0005^\u0000\u0000\u0432\u0428\u0001\u0000\u0000"+
		"\u0000\u0432\u042c\u0001\u0000\u0000\u0000\u0432\u0430\u0001\u0000\u0000"+
		"\u0000\u0433\u00a5\u0001\u0000\u0000\u0000\u0434\u0435\u00057\u0000\u0000"+
		"\u0435\u0436\u0005]\u0000\u0000\u0436\u0437\u0003\u00a8T\u0000\u0437\u0438"+
		"\u0005^\u0000\u0000\u0438\u00a7\u0001\u0000\u0000\u0000\u0439\u0441\u0003"+
		"\u00aaU\u0000\u043a\u043b\u0003\u00aaU\u0000\u043b\u043c\u0005h\u0000"+
		"\u0000\u043c\u043d\u0003\u00ccf\u0000\u043d\u043e\u0003\u00acV\u0000\u043e"+
		"\u043f\u0003\u00d2i\u0000\u043f\u0441\u0001\u0000\u0000\u0000\u0440\u0439"+
		"\u0001\u0000\u0000\u0000\u0440\u043a\u0001\u0000\u0000\u0000\u0441\u00a9"+
		"\u0001\u0000\u0000\u0000\u0442\u0443\u0003\u00b4Z\u0000\u0443\u00ab\u0001"+
		"\u0000\u0000\u0000\u0444\u0445\u0005h\u0000\u0000\u0445\u0447\u0003\u00ae"+
		"W\u0000\u0446\u0444\u0001\u0000\u0000\u0000\u0447\u044a\u0001\u0000\u0000"+
		"\u0000\u0448\u0446\u0001\u0000\u0000\u0000\u0448\u0449\u0001\u0000\u0000"+
		"\u0000\u0449\u00ad\u0001\u0000\u0000\u0000\u044a\u0448\u0001\u0000\u0000"+
		"\u0000\u044b\u044c\u0006W\uffff\uffff\u0000\u044c\u044d\u0003\u00b0X\u0000"+
		"\u044d\u0453\u0001\u0000\u0000\u0000\u044e\u044f\n\u0001\u0000\u0000\u044f"+
		"\u0450\u0005h\u0000\u0000\u0450\u0452\u0003\u00b0X\u0000\u0451\u044e\u0001"+
		"\u0000\u0000\u0000\u0452\u0455\u0001\u0000\u0000\u0000\u0453\u0451\u0001"+
		"\u0000\u0000\u0000\u0453\u0454\u0001\u0000\u0000\u0000\u0454\u00af\u0001"+
		"\u0000\u0000\u0000\u0455\u0453\u0001\u0000\u0000\u0000\u0456\u0459\u0003"+
		"\u00b2Y\u0000\u0457\u0459\u0003D\"\u0000\u0458\u0456\u0001\u0000\u0000"+
		"\u0000\u0458\u0457\u0001\u0000\u0000\u0000\u0459\u00b1\u0001\u0000\u0000"+
		"\u0000\u045a\u045b\u0005d\u0000\u0000\u045b\u045c\u0003\u008cF\u0000\u045c"+
		"\u045d\u0003\u00b4Z\u0000\u045d\u045e\u0005e\u0000\u0000\u045e\u00b3\u0001"+
		"\u0000\u0000\u0000\u045f\u0464\u0003D\"\u0000\u0460\u0461\u0005h\u0000"+
		"\u0000\u0461\u0463\u0003D\"\u0000\u0462\u0460\u0001\u0000\u0000\u0000"+
		"\u0463\u0466\u0001\u0000\u0000\u0000\u0464\u0462\u0001\u0000\u0000\u0000"+
		"\u0464\u0465\u0001\u0000\u0000\u0000\u0465\u00b5\u0001\u0000\u0000\u0000"+
		"\u0466\u0464\u0001\u0000\u0000\u0000\u0467\u0468\u0003\u00b8\\\u0000\u0468"+
		"\u0469\u0003>\u001f\u0000\u0469\u0473\u0001\u0000\u0000\u0000\u046a\u046b"+
		"\u0003\u00b8\\\u0000\u046b\u046c\u0005H\u0000\u0000\u046c\u046d\u0003"+
		">\u001f\u0000\u046d\u0473\u0001\u0000\u0000\u0000\u046e\u046f\u0003\u00b8"+
		"\\\u0000\u046f\u0470\u0005\u001c\u0000\u0000\u0470\u0471\u0003>\u001f"+
		"\u0000\u0471\u0473\u0001\u0000\u0000\u0000\u0472\u0467\u0001\u0000\u0000"+
		"\u0000\u0472\u046a\u0001\u0000\u0000\u0000\u0472\u046e\u0001\u0000\u0000"+
		"\u0000\u0473\u00b7\u0001\u0000\u0000\u0000\u0474\u0475\u0005\u0002\u0000"+
		"\u0000\u0475\u0476\u0003\u00bc^\u0000\u0476\u0477\u0003\u00ba]\u0000\u0477"+
		"\u0478\u0005\u0003\u0000\u0000\u0478\u00b9\u0001\u0000\u0000\u0000\u0479"+
		"\u047c\u0003\u01fc\u00fe\u0000\u047a\u047c\u00030\u0018\u0000\u047b\u0479"+
		"\u0001\u0000\u0000\u0000\u047b\u047a\u0001\u0000\u0000\u0000\u047c\u00bb"+
		"\u0001\u0000\u0000\u0000\u047d\u047f\u0007\u0002\u0000\u0000\u047e\u047d"+
		"\u0001\u0000\u0000\u0000\u047e\u047f\u0001\u0000\u0000\u0000\u047f\u00bd"+
		"\u0001\u0000\u0000\u0000\u0480\u0481\u0005-\u0000\u0000\u0481\u0482\u0005"+
		"D\u0000\u0000\u0482\u00bf\u0001\u0000\u0000\u0000\u0483\u0484\u0005]\u0000"+
		"\u0000\u0484\u0485\u0003\u00c2a\u0000\u0485\u0486\u0005^\u0000\u0000\u0486"+
		"\u048d\u0001\u0000\u0000\u0000\u0487\u0488\u0005]\u0000\u0000\u0488\u0489"+
		"\u00030\u0018\u0000\u0489\u048a\u0003\u00c2a\u0000\u048a\u048b\u0005^"+
		"\u0000\u0000\u048b\u048d\u0001\u0000\u0000\u0000\u048c\u0483\u0001\u0000"+
		"\u0000\u0000\u048c\u0487\u0001\u0000\u0000\u0000\u048d\u00c1\u0001\u0000"+
		"\u0000\u0000\u048e\u0492\u0003\u00c4b\u0000\u048f\u0491\u0003\u00c4b\u0000"+
		"\u0490\u048f\u0001\u0000\u0000\u0000\u0491\u0494\u0001\u0000\u0000\u0000"+
		"\u0492\u0490\u0001\u0000\u0000\u0000\u0492\u0493\u0001\u0000\u0000\u0000"+
		"\u0493\u00c3\u0001\u0000\u0000\u0000\u0494\u0492\u0001\u0000\u0000\u0000"+
		"\u0495\u049a\u0003\u00c6c\u0000\u0496\u049a\u0003\u00c8d\u0000\u0497\u049a"+
		"\u0003\u00cae\u0000\u0498\u049a\u00030\u0018\u0000\u0499\u0495\u0001\u0000"+
		"\u0000\u0000\u0499\u0496\u0001\u0000\u0000\u0000\u0499\u0497\u0001\u0000"+
		"\u0000\u0000\u0499\u0498\u0001\u0000\u0000\u0000\u049a\u00c5\u0001\u0000"+
		"\u0000\u0000\u049b\u049c\u0003\u01f6\u00fb\u0000\u049c\u00c7\u0001\u0000"+
		"\u0000\u0000\u049d\u04a0\u0003\u01fc\u00fe\u0000\u049e\u04a0\u00030\u0018"+
		"\u0000\u049f\u049d\u0001\u0000\u0000\u0000\u049f\u049e\u0001\u0000\u0000"+
		"\u0000\u04a0\u00c9\u0001\u0000\u0000\u0000\u04a1\u04a2\u0003\u01f6\u00fb"+
		"\u0000\u04a2\u04a3\u0005_\u0000\u0000\u04a3\u04a4\u0003\u00c8d\u0000\u04a4"+
		"\u04a5\u0005`\u0000\u0000\u04a5\u00cb\u0001\u0000\u0000\u0000\u04a6\u04aa"+
		"\u0005c\u0000\u0000\u04a7\u04a8\u0005c\u0000\u0000\u04a8\u04aa\u0003\u00ce"+
		"g\u0000\u04a9\u04a6\u0001\u0000\u0000\u0000\u04a9\u04a7\u0001\u0000\u0000"+
		"\u0000\u04aa\u00cd\u0001\u0000\u0000\u0000\u04ab\u04ac\u0005\u0004\u0000"+
		"\u0000\u04ac\u04ae\u0003\u00d0h\u0000\u04ad\u04ab\u0001\u0000\u0000\u0000"+
		"\u04ad\u04ae\u0001\u0000\u0000\u0000\u04ae\u00cf\u0001\u0000\u0000\u0000"+
		"\u04af\u04b6\u0003X,\u0000\u04b0\u04b6\u00030\u0018\u0000\u04b1\u04b2"+
		"\u0003>\u001f\u0000\u04b2\u04b3\u0005f\u0000\u0000\u04b3\u04b4\u0003F"+
		"#\u0000\u04b4\u04b6\u0001\u0000\u0000\u0000\u04b5\u04af\u0001\u0000\u0000"+
		"\u0000\u04b5\u04b0\u0001\u0000\u0000\u0000\u04b5\u04b1\u0001\u0000\u0000"+
		"\u0000\u04b6\u00d1\u0001\u0000\u0000\u0000\u04b7\u04b8\u0005h\u0000\u0000"+
		"\u04b8\u04ba\u0005c\u0000\u0000\u04b9\u04b7\u0001\u0000\u0000\u0000\u04b9"+
		"\u04ba\u0001\u0000\u0000\u0000\u04ba\u00d3\u0001\u0000\u0000\u0000\u04bb"+
		"\u04be\u0003\u00d8l\u0000\u04bc\u04be\u0003\u00f2y\u0000\u04bd\u04bb\u0001"+
		"\u0000\u0000\u0000\u04bd\u04bc\u0001\u0000\u0000\u0000\u04be\u00d5\u0001"+
		"\u0000\u0000\u0000\u04bf\u04c0\u0003\u00dam\u0000\u04c0\u00d7\u0001\u0000"+
		"\u0000\u0000\u04c1\u04c2\u0007\u0003\u0000\u0000\u04c2\u00d9\u0001\u0000"+
		"\u0000\u0000\u04c3\u04c8\u0003\u0202\u0101\u0000\u04c4\u04c8\u0003\u00dc"+
		"n\u0000\u04c5\u04c8\u0003\u00e2q\u0000\u04c6\u04c8\u0003\u00ecv\u0000"+
		"\u04c7\u04c3\u0001\u0000\u0000\u0000\u04c7\u04c4\u0001\u0000\u0000\u0000"+
		"\u04c7\u04c5\u0001\u0000\u0000\u0000\u04c7\u04c6\u0001\u0000\u0000\u0000"+
		"\u04c8\u00db\u0001\u0000\u0000\u0000\u04c9\u04ca\u0005]\u0000\u0000\u04ca"+
		"\u04cb\u0003\u00deo\u0000\u04cb\u04cc\u0005^\u0000\u0000\u04cc\u00dd\u0001"+
		"\u0000\u0000\u0000\u04cd\u04d2\u0003\u00e0p\u0000\u04ce\u04cf\u0005h\u0000"+
		"\u0000\u04cf\u04d1\u0003\u00e0p\u0000\u04d0\u04ce\u0001\u0000\u0000\u0000"+
		"\u04d1\u04d4\u0001\u0000\u0000\u0000\u04d2\u04d0\u0001\u0000\u0000\u0000"+
		"\u04d2\u04d3\u0001\u0000\u0000\u0000\u04d3\u00df\u0001\u0000\u0000\u0000"+
		"\u04d4\u04d2\u0001\u0000\u0000\u0000\u04d5\u04da\u0003\u0202\u0101\u0000"+
		"\u04d6\u04da\u0003\u00e2q\u0000\u04d7\u04da\u0003\u00ecv\u0000\u04d8\u04da"+
		"\u00030\u0018\u0000\u04d9\u04d5\u0001\u0000\u0000\u0000\u04d9\u04d6\u0001"+
		"\u0000\u0000\u0000\u04d9\u04d7\u0001\u0000\u0000\u0000\u04d9\u04d8\u0001"+
		"\u0000\u0000\u0000\u04da\u00e1\u0001\u0000\u0000\u0000\u04db\u04dc\u0005"+
		"]\u0000\u0000\u04dc\u04dd\u0003\u00e4r\u0000\u04dd\u04de\u0005h\u0000"+
		"\u0000\u04de\u04df\u0003\u00e6s\u0000\u04df\u04e0\u0005h\u0000\u0000\u04e0"+
		"\u04e1\u0003\u00e8t\u0000\u04e1\u04e2\u0005h\u0000\u0000\u04e2\u04e3\u0003"+
		"\u00eau\u0000\u04e3\u04e4\u0005^\u0000\u0000\u04e4\u00e3\u0001\u0000\u0000"+
		"\u0000\u04e5\u04e6\u0003\u01fc\u00fe\u0000\u04e6\u00e5\u0001\u0000\u0000"+
		"\u0000\u04e7\u04e8\u0003\u01fc\u00fe\u0000\u04e8\u00e7\u0001\u0000\u0000"+
		"\u0000\u04e9\u04ea\u0003\u01fc\u00fe\u0000\u04ea\u00e9\u0001\u0000\u0000"+
		"\u0000\u04eb\u04ec\u0003\u01fc\u00fe\u0000\u04ec\u00eb\u0001\u0000\u0000"+
		"\u0000\u04ed\u04ee\u0005]\u0000\u0000\u04ee\u04ef\u0003\u00eew\u0000\u04ef"+
		"\u04f0\u0005h\u0000\u0000\u04f0\u04f1\u0003\u00f0x\u0000\u04f1\u04f2\u0005"+
		"^\u0000\u0000\u04f2\u00ed\u0001\u0000\u0000\u0000\u04f3\u04f4\u0003\u01fc"+
		"\u00fe\u0000\u04f4\u00ef\u0001\u0000\u0000\u0000\u04f5\u04f6\u0003\u01fc"+
		"\u00fe\u0000\u04f6\u00f1\u0001\u0000\u0000\u0000\u04f7\u04f8\u00053\u0000"+
		"\u0000\u04f8\u04f9\u0005\u001e\u0000\u0000\u04f9\u00f3\u0001\u0000\u0000"+
		"\u0000\u04fa\u04fd\u00054\u0000\u0000\u04fb\u04fd\u0005J\u0000\u0000\u04fc"+
		"\u04fa\u0001\u0000\u0000\u0000\u04fc\u04fb\u0001\u0000\u0000\u0000\u04fd"+
		"\u00f5\u0001\u0000\u0000\u0000\u04fe\u0501\u0003@ \u0000\u04ff\u0501\u0003"+
		"B!\u0000\u0500\u04fe\u0001\u0000\u0000\u0000\u0500\u04ff\u0001\u0000\u0000"+
		"\u0000\u0501\u0502\u0001\u0000\u0000\u0000\u0502\u0503\u0003\u00fa}\u0000"+
		"\u0503\u0506\u0001\u0000\u0000\u0000\u0504\u0506\u0003\u00f8|\u0000\u0505"+
		"\u0500\u0001\u0000\u0000\u0000\u0505\u0504\u0001\u0000\u0000\u0000\u0506"+
		"\u00f7\u0001\u0000\u0000\u0000\u0507\u0508\u0005\u0016\u0000\u0000\u0508"+
		"\u0509\u0003\u00fa}\u0000\u0509\u050a\u00059\u0000\u0000\u050a\u050b\u0003"+
		">\u001f\u0000\u050b\u0530\u0001\u0000\u0000\u0000\u050c\u050d\u0005\u0016"+
		"\u0000\u0000\u050d\u050e\u0003\u0130\u0098\u0000\u050e\u050f\u00059\u0000"+
		"\u0000\u050f\u0510\u0003>\u001f\u0000\u0510\u0530\u0001\u0000\u0000\u0000"+
		"\u0511\u0512\u0005\u0012\u0000\u0000\u0512\u0513\u0003\u00fa}\u0000\u0513"+
		"\u0514\u00059\u0000\u0000\u0514\u0515\u0003>\u001f\u0000\u0515\u0530\u0001"+
		"\u0000\u0000\u0000\u0516\u0517\u0005\u0012\u0000\u0000\u0517\u0518\u0003"+
		"\u0130\u0098\u0000\u0518\u0519\u00059\u0000\u0000\u0519\u051a\u0003>\u001f"+
		"\u0000\u051a\u0530\u0001\u0000\u0000\u0000\u051b\u051c\u0005\u0016\u0000"+
		"\u0000\u051c\u051d\u0003\u00fa}\u0000\u051d\u051e\u00059\u0000\u0000\u051e"+
		"\u051f\u0003D\"\u0000\u051f\u0530\u0001\u0000\u0000\u0000\u0520\u0521"+
		"\u0005\u0016\u0000\u0000\u0521\u0522\u0003\u0130\u0098\u0000\u0522\u0523"+
		"\u00059\u0000\u0000\u0523\u0524\u0003D\"\u0000\u0524\u0530\u0001\u0000"+
		"\u0000\u0000\u0525\u0526\u0005\u0012\u0000\u0000\u0526\u0527\u0003\u00fa"+
		"}\u0000\u0527\u0528\u00059\u0000\u0000\u0528\u0529\u0003D\"\u0000\u0529"+
		"\u0530\u0001\u0000\u0000\u0000\u052a\u052b\u0005\u0012\u0000\u0000\u052b"+
		"\u052c\u0003\u0130\u0098\u0000\u052c\u052d\u00059\u0000\u0000\u052d\u052e"+
		"\u0003D\"\u0000\u052e\u0530\u0001\u0000\u0000\u0000\u052f\u0507\u0001"+
		"\u0000\u0000\u0000\u052f\u050c\u0001\u0000\u0000\u0000\u052f\u0511\u0001"+
		"\u0000\u0000\u0000\u052f\u0516\u0001\u0000\u0000\u0000\u052f\u051b\u0001"+
		"\u0000\u0000\u0000\u052f\u0520\u0001\u0000\u0000\u0000\u052f\u0525\u0001"+
		"\u0000\u0000\u0000\u052f\u052a\u0001\u0000\u0000\u0000\u0530\u00f9\u0001"+
		"\u0000\u0000\u0000\u0531\u0532\u0005_\u0000\u0000\u0532\u0533\u0003\u00fc"+
		"~\u0000\u0533\u0534\u0003\u00ceg\u0000\u0534\u0535\u0005`\u0000\u0000"+
		"\u0535\u00fb\u0001\u0000\u0000\u0000\u0536\u0539\u0003\u00fe\u007f\u0000"+
		"\u0537\u0539\u0003\u0100\u0080\u0000\u0538\u0536\u0001\u0000\u0000\u0000"+
		"\u0538\u0537\u0001\u0000\u0000\u0000\u0539\u00fd\u0001\u0000\u0000\u0000"+
		"\u053a\u053b\u0003\u0102\u0081\u0000\u053b\u00ff\u0001\u0000\u0000\u0000"+
		"\u053c\u0540\u0003\u0134\u009a\u0000\u053d\u0540\u0003\u0138\u009c\u0000"+
		"\u053e\u0540\u0003\u0144\u00a2\u0000\u053f\u053c\u0001\u0000\u0000\u0000"+
		"\u053f\u053d\u0001\u0000\u0000\u0000\u053f\u053e\u0001\u0000\u0000\u0000"+
		"\u0540\u0101\u0001\u0000\u0000\u0000\u0541\u054d\u0003\u0104\u0082\u0000"+
		"\u0542\u0543\u0003\u0104\u0082\u0000\u0543\u0544\u0005h\u0000\u0000\u0544"+
		"\u0545\u0005c\u0000\u0000\u0545\u054d\u0001\u0000\u0000\u0000\u0546\u0547"+
		"\u0003\u0104\u0082\u0000\u0547\u0548\u0005h\u0000\u0000\u0548\u0549\u0005"+
		"c\u0000\u0000\u0549\u054a\u0005h\u0000\u0000\u054a\u054b\u0003\u0106\u0083"+
		"\u0000\u054b\u054d\u0001\u0000\u0000\u0000\u054c\u0541\u0001\u0000\u0000"+
		"\u0000\u054c\u0542\u0001\u0000\u0000\u0000\u054c\u0546\u0001\u0000\u0000"+
		"\u0000\u054d\u0103\u0001\u0000\u0000\u0000\u054e\u054f\u0003\u0108\u0084"+
		"\u0000\u054f\u0105\u0001\u0000\u0000\u0000\u0550\u0551\u0003\u0108\u0084"+
		"\u0000\u0551\u0107\u0001\u0000\u0000\u0000\u0552\u0556\u0003\u010a\u0085"+
		"\u0000\u0553\u0554\u0005\u0013\u0000\u0000\u0554\u0556\u0003\u0116\u008b"+
		"\u0000\u0555\u0552\u0001\u0000\u0000\u0000\u0555\u0553\u0001\u0000\u0000"+
		"\u0000\u0556\u0109\u0001\u0000\u0000\u0000\u0557\u0558\u0006\u0085\uffff"+
		"\uffff\u0000\u0558\u0559\u0003\u010e\u0087\u0000\u0559\u0560\u0001\u0000"+
		"\u0000\u0000\u055a\u055b\n\u0001\u0000\u0000\u055b\u055c\u0003\u0118\u008c"+
		"\u0000\u055c\u055d\u0003\u010e\u0087\u0000\u055d\u055f\u0001\u0000\u0000"+
		"\u0000\u055e\u055a\u0001\u0000\u0000\u0000\u055f\u0562\u0001\u0000\u0000"+
		"\u0000\u0560\u055e\u0001\u0000\u0000\u0000\u0560\u0561\u0001\u0000\u0000"+
		"\u0000\u0561\u010b\u0001\u0000\u0000\u0000\u0562\u0560\u0001\u0000\u0000"+
		"\u0000\u0563\u0564\u0003\u010a\u0085\u0000\u0564\u010d\u0001\u0000\u0000"+
		"\u0000\u0565\u0566\u0006\u0087\uffff\uffff\u0000\u0566\u0567\u0003\u0112"+
		"\u0089\u0000\u0567\u056e\u0001\u0000\u0000\u0000\u0568\u0569\n\u0001\u0000"+
		"\u0000\u0569\u056a\u0003\u011a\u008d\u0000\u056a\u056b\u0003\u0112\u0089"+
		"\u0000\u056b\u056d\u0001\u0000\u0000\u0000\u056c\u0568\u0001\u0000\u0000"+
		"\u0000\u056d\u0570\u0001\u0000\u0000\u0000\u056e\u056c\u0001\u0000\u0000"+
		"\u0000\u056e\u056f\u0001\u0000\u0000\u0000\u056f\u010f\u0001\u0000\u0000"+
		"\u0000\u0570\u056e\u0001\u0000\u0000\u0000\u0571\u0572\u0003\u010e\u0087"+
		"\u0000\u0572\u0111\u0001\u0000\u0000\u0000\u0573\u0578\u0003\u011c\u008e"+
		"\u0000\u0574\u0575\u0003\u0114\u008a\u0000\u0575\u0576\u0003\u0116\u008b"+
		"\u0000\u0576\u0578\u0001\u0000\u0000\u0000\u0577\u0573\u0001\u0000\u0000"+
		"\u0000\u0577\u0574\u0001\u0000\u0000\u0000\u0578\u0113\u0001\u0000\u0000"+
		"\u0000\u0579\u057a\u0003\u011c\u008e\u0000\u057a\u0115\u0001\u0000\u0000"+
		"\u0000\u057b\u057c\u0005\u0018\u0000\u0000\u057c\u057d\u0003\u011c\u008e"+
		"\u0000\u057d\u0117\u0001\u0000\u0000\u0000\u057e\u057f\u0007\u0004\u0000"+
		"\u0000\u057f\u0119\u0001\u0000\u0000\u0000\u0580\u0581\u0007\u0005\u0000"+
		"\u0000\u0581\u011b\u0001\u0000\u0000\u0000\u0582\u0589\u0003\u011e\u008f"+
		"\u0000\u0583\u0589\u0003\u019a\u00cd\u0000\u0584\u0585\u0005_\u0000\u0000"+
		"\u0585\u0586\u0003\u0108\u0084\u0000\u0586\u0587\u0005`\u0000\u0000\u0587"+
		"\u0589\u0001\u0000\u0000\u0000\u0588\u0582\u0001\u0000\u0000\u0000\u0588"+
		"\u0583\u0001\u0000\u0000\u0000\u0588\u0584\u0001\u0000\u0000\u0000\u0589"+
		"\u011d\u0001\u0000\u0000\u0000\u058a\u0590\u0003\u0120\u0090\u0000\u058b"+
		"\u0590\u0003\u0122\u0091\u0000\u058c\u0590\u0003\u0126\u0093\u0000\u058d"+
		"\u0590\u0003\u0132\u0099\u0000\u058e\u0590\u0003\u0130\u0098\u0000\u058f"+
		"\u058a\u0001\u0000\u0000\u0000\u058f\u058b\u0001\u0000\u0000\u0000\u058f"+
		"\u058c\u0001\u0000\u0000\u0000\u058f\u058d\u0001\u0000\u0000\u0000\u058f"+
		"\u058e\u0001\u0000\u0000\u0000\u0590\u011f\u0001\u0000\u0000\u0000\u0591"+
		"\u0592\u0003F#\u0000\u0592\u0121\u0001\u0000\u0000\u0000\u0593\u0594\u0003"+
		"\u0124\u0092\u0000\u0594\u0595\u0003>\u001f\u0000\u0595\u0123\u0001\u0000"+
		"\u0000\u0000\u0596\u0598\u0005T\u0000\u0000\u0597\u0596\u0001\u0000\u0000"+
		"\u0000\u0597\u0598\u0001\u0000\u0000\u0000\u0598\u0125\u0001\u0000\u0000"+
		"\u0000\u0599\u059a\u0003\u0128\u0094\u0000\u059a\u059b\u0005b\u0000\u0000"+
		"\u059b\u059c\u0003\u012a\u0095\u0000\u059c\u0127\u0001\u0000\u0000\u0000"+
		"\u059d\u05a2\u0003\u012c\u0096\u0000\u059e\u059f\u0003\u012c\u0096\u0000"+
		"\u059f\u05a0\u0005\u0007\u0000\u0000\u05a0\u05a2\u0001\u0000\u0000\u0000"+
		"\u05a1\u059d\u0001\u0000\u0000\u0000\u05a1\u059e\u0001\u0000\u0000\u0000"+
		"\u05a2\u0129\u0001\u0000\u0000\u0000\u05a3\u05a7\u0003\u012e\u0097\u0000"+
		"\u05a4\u05a5\u0005\u0007\u0000\u0000\u05a5\u05a7\u0003\u012e\u0097\u0000"+
		"\u05a6\u05a3\u0001\u0000\u0000\u0000\u05a6\u05a4\u0001\u0000\u0000\u0000"+
		"\u05a7\u012b\u0001\u0000\u0000\u0000\u05a8\u05ab\u0003F#\u0000\u05a9\u05ab"+
		"\u0005\u001d\u0000\u0000\u05aa\u05a8\u0001\u0000\u0000\u0000\u05aa\u05a9"+
		"\u0001\u0000\u0000\u0000\u05ab\u012d\u0001\u0000\u0000\u0000\u05ac\u05af"+
		"\u0003F#\u0000\u05ad\u05af\u0005\u0019\u0000\u0000\u05ae\u05ac\u0001\u0000"+
		"\u0000\u0000\u05ae\u05ad\u0001\u0000\u0000\u0000\u05af\u012f\u0001\u0000"+
		"\u0000\u0000\u05b0\u05b1\u0005\u001a\u0000\u0000\u05b1\u05b2\u0003\u00fa"+
		"}\u0000\u05b2\u0131\u0001\u0000\u0000\u0000\u05b3\u05b4\u00050\u0000\u0000"+
		"\u05b4\u05b5\u0003\u00fa}\u0000\u05b5\u0133\u0001\u0000\u0000\u0000\u05b6"+
		"\u05b7\u0005G\u0000\u0000\u05b7\u05b8\u0005/\u0000\u0000\u05b8\u05ba\u0005"+
		"]\u0000\u0000\u05b9\u05bb\u0003\u0136\u009b\u0000\u05ba\u05b9\u0001\u0000"+
		"\u0000\u0000\u05ba\u05bb\u0001\u0000\u0000\u0000\u05bb\u05c0\u0001\u0000"+
		"\u0000\u0000\u05bc\u05bd\u0005h\u0000\u0000\u05bd\u05bf\u0003\u0136\u009b"+
		"\u0000\u05be\u05bc\u0001\u0000\u0000\u0000\u05bf\u05c2\u0001\u0000\u0000"+
		"\u0000\u05c0\u05be\u0001\u0000\u0000\u0000\u05c0\u05c1\u0001\u0000\u0000"+
		"\u0000\u05c1\u05c3\u0001\u0000\u0000\u0000\u05c2\u05c0\u0001\u0000\u0000"+
		"\u0000\u05c3\u05c4\u0005^\u0000\u0000\u05c4\u0135\u0001\u0000\u0000\u0000"+
		"\u05c5\u05c6\u0003\u01d8\u00ec\u0000\u05c6\u05c7\u0005f\u0000\u0000\u05c7"+
		"\u05c8\u0003F#\u0000\u05c8\u05d8\u0001\u0000\u0000\u0000\u05c9\u05ca\u0003"+
		"\u01d8\u00ec\u0000\u05ca\u05cb\u0005f\u0000\u0000\u05cb\u05cc\u0003<\u001e"+
		"\u0000\u05cc\u05d8\u0001\u0000\u0000\u0000\u05cd\u05ce\u0003\u01d8\u00ec"+
		"\u0000\u05ce\u05cf\u0005f\u0000\u0000\u05cf\u05d0\u0003\u0186\u00c3\u0000"+
		"\u05d0\u05d8\u0001\u0000\u0000\u0000\u05d1\u05d2\u0003\u01d8\u00ec\u0000"+
		"\u05d2\u05d3\u0005f\u0000\u0000\u05d3\u05d4\u0003\u0196\u00cb\u0000\u05d4"+
		"\u05d8\u0001\u0000\u0000\u0000\u05d5\u05d8\u0003>\u001f\u0000\u05d6\u05d8"+
		"\u0003\u0146\u00a3\u0000\u05d7\u05c5\u0001\u0000\u0000\u0000\u05d7\u05c9"+
		"\u0001\u0000\u0000\u0000\u05d7\u05cd\u0001\u0000\u0000\u0000\u05d7\u05d1"+
		"\u0001\u0000\u0000\u0000\u05d7\u05d5\u0001\u0000\u0000\u0000\u05d7\u05d6"+
		"\u0001\u0000\u0000\u0000\u05d8\u0137\u0001\u0000\u0000\u0000\u05d9\u05dc"+
		"\u0003\u013a\u009d\u0000\u05da\u05dc\u0003\u013c\u009e\u0000\u05db\u05d9"+
		"\u0001\u0000\u0000\u0000\u05db\u05da\u0001\u0000\u0000\u0000\u05dc\u0139"+
		"\u0001\u0000\u0000\u0000\u05dd\u05de\u0003\u0196\u00cb\u0000\u05de\u013b"+
		"\u0001\u0000\u0000\u0000\u05df\u05e0\u0005]\u0000\u0000\u05e0\u05e1\u0003"+
		"\u014a\u00a5\u0000\u05e1\u05e2\u0005^\u0000\u0000\u05e2\u05e3\u0005]\u0000"+
		"\u0000\u05e3\u05e8\u0003\u013e\u009f\u0000\u05e4\u05e5\u0005h\u0000\u0000"+
		"\u05e5\u05e7\u0003\u013e\u009f\u0000\u05e6\u05e4\u0001\u0000\u0000\u0000"+
		"\u05e7\u05ea\u0001\u0000\u0000\u0000\u05e8\u05e6\u0001\u0000\u0000\u0000"+
		"\u05e8\u05e9\u0001\u0000\u0000\u0000\u05e9\u05eb\u0001\u0000\u0000\u0000"+
		"\u05ea\u05e8\u0001\u0000\u0000\u0000\u05eb\u05ec\u0005^\u0000\u0000\u05ec"+
		"\u013d\u0001\u0000\u0000\u0000\u05ed\u05ee\u0005\b\u0000\u0000\u05ee\u05f4"+
		"\u0003\u0142\u00a1\u0000\u05ef\u05f0\u0005\t\u0000\u0000\u05f0\u05f1\u0003"+
		"\u0140\u00a0\u0000\u05f1\u05f2\u0003\u0142\u00a1\u0000\u05f2\u05f4\u0001"+
		"\u0000\u0000\u0000\u05f3\u05ed\u0001\u0000\u0000\u0000\u05f3\u05ef\u0001"+
		"\u0000\u0000\u0000\u05f4\u013f\u0001\u0000\u0000\u0000\u05f5\u05f6\u0005"+
		"g\u0000\u0000\u05f6\u05f9\u0003\u0140\u00a0\u0000\u05f7\u05f9\u0001\u0000"+
		"\u0000\u0000\u05f8\u05f5\u0001\u0000\u0000\u0000\u05f8\u05f7\u0001\u0000"+
		"\u0000\u0000\u05f9\u0141\u0001\u0000\u0000\u0000\u05fa\u05ff\u0003\u01f6"+
		"\u00fb\u0000\u05fb\u05fc\u0005g\u0000\u0000\u05fc\u05fe\u0003\u01f6\u00fb"+
		"\u0000\u05fd\u05fb\u0001\u0000\u0000\u0000\u05fe\u0601\u0001\u0000\u0000"+
		"\u0000\u05ff\u05fd\u0001\u0000\u0000\u0000\u05ff\u0600\u0001\u0000\u0000"+
		"\u0000\u0600\u0143\u0001\u0000\u0000\u0000\u0601\u05ff\u0001\u0000\u0000"+
		"\u0000\u0602\u0603\u0005K\u0000\u0000\u0603\u060e\u0003>\u001f\u0000\u0604"+
		"\u0605\u0005\f\u0000\u0000\u0605\u0606\u0005/\u0000\u0000\u0606\u060e"+
		"\u0003F#\u0000\u0607\u0608\u0005K\u0000\u0000\u0608\u0609\u0003>\u001f"+
		"\u0000\u0609\u060a\u0005\f\u0000\u0000\u060a\u060b\u0005/\u0000\u0000"+
		"\u060b\u060c\u0003F#\u0000\u060c\u060e\u0001\u0000\u0000\u0000\u060d\u0602"+
		"\u0001\u0000\u0000\u0000\u060d\u0604\u0001\u0000\u0000\u0000\u060d\u0607"+
		"\u0001\u0000\u0000\u0000\u060e\u0145\u0001\u0000\u0000\u0000\u060f\u0613"+
		"\u0003\u014c\u00a6\u0000\u0610\u0613\u0003\u01b2\u00d9\u0000\u0611\u0613"+
		"\u0003\u0152\u00a9\u0000\u0612\u060f\u0001\u0000\u0000\u0000\u0612\u0610"+
		"\u0001\u0000\u0000\u0000\u0612\u0611\u0001\u0000\u0000\u0000\u0613\u0147"+
		"\u0001\u0000\u0000\u0000\u0614\u0617\u0003\u014e\u00a7\u0000\u0615\u0617"+
		"\u0003\u01b4\u00da\u0000\u0616\u0614\u0001\u0000\u0000\u0000\u0616\u0615"+
		"\u0001\u0000\u0000\u0000\u0617\u0149\u0001\u0000\u0000\u0000\u0618\u061b"+
		"\u0003\u0150\u00a8\u0000\u0619\u061b\u0003\u01b6\u00db\u0000\u061a\u0618"+
		"\u0001\u0000\u0000\u0000\u061a\u0619\u0001\u0000\u0000\u0000\u061b\u014b"+
		"\u0001\u0000\u0000\u0000\u061c\u061d\u0003\u01fa\u00fd\u0000\u061d\u061e"+
		"\u0005g\u0000\u0000\u061e\u061f\u0003\u01b2\u00d9\u0000\u061f\u014d\u0001"+
		"\u0000\u0000\u0000\u0620\u0621\u0003\u01fa\u00fd\u0000\u0621\u0622\u0005"+
		"g\u0000\u0000\u0622\u0623\u0003\u01b4\u00da\u0000\u0623\u014f\u0001\u0000"+
		"\u0000\u0000\u0624\u0625\u0003\u01fa\u00fd\u0000\u0625\u0626\u0005g\u0000"+
		"\u0000\u0626\u0627\u0003\u01b6\u00db\u0000\u0627\u0151\u0001\u0000\u0000"+
		"\u0000\u0628\u0629\u0007\u0006\u0000\u0000\u0629\u0153\u0001\u0000\u0000"+
		"\u0000\u062a\u062b\u0003\u01b2\u00d9\u0000\u062b\u062c\u0005a\u0000\u0000"+
		"\u062c\u062d\u0003\u0156\u00ab\u0000\u062d\u0155\u0001\u0000\u0000\u0000"+
		"\u062e\u0632\u0003\u0146\u00a3\u0000\u062f\u0632\u0003\u0158\u00ac\u0000"+
		"\u0630\u0632\u0003\u01ea\u00f5\u0000\u0631\u062e\u0001\u0000\u0000\u0000"+
		"\u0631\u062f\u0001\u0000\u0000\u0000\u0631\u0630\u0001\u0000\u0000\u0000"+
		"\u0632\u0157\u0001\u0000\u0000\u0000\u0633\u0634\u0005;\u0000\u0000\u0634"+
		"\u0635\u0005]\u0000\u0000\u0635\u063a\u0003\u015c\u00ae\u0000\u0636\u0637"+
		"\u0005h\u0000\u0000\u0637\u0639\u0003\u015c\u00ae\u0000\u0638\u0636\u0001"+
		"\u0000\u0000\u0000\u0639\u063c\u0001\u0000\u0000\u0000\u063a\u0638\u0001"+
		"\u0000\u0000\u0000\u063a\u063b\u0001\u0000\u0000\u0000\u063b\u063d\u0001"+
		"\u0000\u0000\u0000\u063c\u063a\u0001\u0000\u0000\u0000\u063d\u063f\u0005"+
		"^\u0000\u0000\u063e\u0640\u0003\u015a\u00ad\u0000\u063f\u063e\u0001\u0000"+
		"\u0000\u0000\u063f\u0640\u0001\u0000\u0000\u0000\u0640\u0159\u0001\u0000"+
		"\u0000\u0000\u0641\u0642\u0005Z\u0000\u0000\u0642\u0643\u0005\"\u0000"+
		"\u0000\u0643\u0644\u0003\u017a\u00bd\u0000\u0644\u015b\u0001\u0000\u0000"+
		"\u0000\u0645\u064d\u0003\u015e\u00af\u0000\u0646\u064d\u0003\u0162\u00b1"+
		"\u0000\u0647\u064d\u0003\u0166\u00b3\u0000\u0648\u064d\u0003\u0168\u00b4"+
		"\u0000\u0649\u064d\u0003\u016c\u00b6\u0000\u064a\u064d\u0003\u016e\u00b7"+
		"\u0000\u064b\u064d\u0003\u0172\u00b9\u0000\u064c\u0645\u0001\u0000\u0000"+
		"\u0000\u064c\u0646\u0001\u0000\u0000\u0000\u064c\u0647\u0001\u0000\u0000"+
		"\u0000\u064c\u0648\u0001\u0000\u0000\u0000\u064c\u0649\u0001\u0000\u0000"+
		"\u0000\u064c\u064a\u0001\u0000\u0000\u0000\u064c\u064b\u0001\u0000\u0000"+
		"\u0000\u064d\u015d\u0001\u0000\u0000\u0000\u064e\u0650\u0003\u01b8\u00dc"+
		"\u0000\u064f\u0651\u0003\u0160\u00b0\u0000\u0650\u064f\u0001\u0000\u0000"+
		"\u0000\u0650\u0651\u0001\u0000\u0000\u0000\u0651\u015f\u0001\u0000\u0000"+
		"\u0000\u0652\u0656\u0005=\u0000\u0000\u0653\u0654\u0005O\u0000\u0000\u0654"+
		"\u0656\u0003>\u001f\u0000\u0655\u0652\u0001\u0000\u0000\u0000\u0655\u0653"+
		"\u0001\u0000\u0000\u0000\u0656\u0161\u0001\u0000\u0000\u0000\u0657\u0658"+
		"\u0003\u01ba\u00dd\u0000\u0658\u065a\u0003>\u001f\u0000\u0659\u065b\u0005"+
		">\u0000\u0000\u065a\u0659\u0001\u0000\u0000\u0000\u065a\u065b\u0001\u0000"+
		"\u0000\u0000\u065b\u065d\u0001\u0000\u0000\u0000\u065c\u065e\u0003\u0164"+
		"\u00b2\u0000\u065d\u065c\u0001\u0000\u0000\u0000\u065d\u065e\u0001\u0000"+
		"\u0000\u0000\u065e\u0163\u0001\u0000\u0000\u0000\u065f\u0663\u0005=\u0000"+
		"\u0000\u0660\u0661\u0005O\u0000\u0000\u0661\u0663\u0003F#\u0000\u0662"+
		"\u065f\u0001\u0000\u0000\u0000\u0662\u0660\u0001\u0000\u0000\u0000\u0663"+
		"\u0165\u0001\u0000\u0000\u0000\u0664\u0665\u0003\u01ba\u00dd\u0000\u0665"+
		"\u0667\u0003\u0178\u00bc\u0000\u0666\u0668\u0003\u0164\u00b2\u0000\u0667"+
		"\u0666\u0001\u0000\u0000\u0000\u0667\u0668\u0001\u0000\u0000\u0000\u0668"+
		"\u0167\u0001\u0000\u0000\u0000\u0669\u066a\u0003\u01bc\u00de\u0000\u066a"+
		"\u066c\u0003>\u001f\u0000\u066b\u066d\u0003\u016a\u00b5\u0000\u066c\u066b"+
		"\u0001\u0000\u0000\u0000\u066c\u066d\u0001\u0000\u0000\u0000\u066d\u0169"+
		"\u0001\u0000\u0000\u0000\u066e\u0672\u0005=\u0000\u0000\u066f\u0670\u0005"+
		"O\u0000\u0000\u0670\u0672\u0003<\u001e\u0000\u0671\u066e\u0001\u0000\u0000"+
		"\u0000\u0671\u066f\u0001\u0000\u0000\u0000\u0672\u016b\u0001\u0000\u0000"+
		"\u0000\u0673\u0674\u0003\u01bc\u00de\u0000\u0674\u0676\u0003\u0178\u00bc"+
		"\u0000\u0675\u0677\u0003\u016a\u00b5\u0000\u0676\u0675\u0001\u0000\u0000"+
		"\u0000\u0676\u0677\u0001\u0000\u0000\u0000\u0677\u016d\u0001\u0000\u0000"+
		"\u0000\u0678\u0679\u0003\u01be\u00df\u0000\u0679\u067b\u0003\u0146\u00a3"+
		"\u0000\u067a\u067c\u0003\u0170\u00b8\u0000\u067b\u067a\u0001\u0000\u0000"+
		"\u0000\u067b\u067c\u0001\u0000\u0000\u0000\u067c\u016f\u0001\u0000\u0000"+
		"\u0000\u067d\u0681\u0005=\u0000\u0000\u067e\u067f\u0005O\u0000\u0000\u067f"+
		"\u0681\u0003\u0186\u00c3\u0000\u0680\u067d\u0001\u0000\u0000\u0000\u0680"+
		"\u067e\u0001\u0000\u0000\u0000\u0681\u0171\u0001\u0000\u0000\u0000\u0682"+
		"\u0683\u0003\u01c0\u00e0\u0000\u0683\u0685\u0003\u0146\u00a3\u0000\u0684"+
		"\u0686\u0003\u0174\u00ba\u0000\u0685\u0684\u0001\u0000\u0000\u0000\u0685"+
		"\u0686\u0001\u0000\u0000\u0000\u0686\u0173\u0001\u0000\u0000\u0000\u0687"+
		"\u068b\u0005=\u0000\u0000\u0688\u0689\u0005O\u0000\u0000\u0689\u068b\u0003"+
		"\u0196\u00cb\u0000\u068a\u0687\u0001\u0000\u0000\u0000\u068a\u0688\u0001"+
		"\u0000\u0000\u0000\u068b\u0175\u0001\u0000\u0000\u0000\u068c\u0692\u0003"+
		"\u01b8\u00dc\u0000\u068d\u0692\u0003\u01ba\u00dd\u0000\u068e\u0692\u0003"+
		"\u01bc\u00de\u0000\u068f\u0692\u0003\u01be\u00df\u0000\u0690\u0692\u0003"+
		"\u01c0\u00e0\u0000\u0691\u068c\u0001\u0000\u0000\u0000\u0691\u068d\u0001"+
		"\u0000\u0000\u0000\u0691\u068e\u0001\u0000\u0000\u0000\u0691\u068f\u0001"+
		"\u0000\u0000\u0000\u0691\u0690\u0001\u0000\u0000\u0000\u0692\u0177\u0001"+
		"\u0000\u0000\u0000\u0693\u0698\u0003\u0176\u00bb\u0000\u0694\u0695\u0005"+
		"g\u0000\u0000\u0695\u0697\u0003\u0176\u00bb\u0000\u0696\u0694\u0001\u0000"+
		"\u0000\u0000\u0697\u069a\u0001\u0000\u0000\u0000\u0698\u0696\u0001\u0000"+
		"\u0000\u0000\u0698\u0699\u0001\u0000\u0000\u0000\u0699\u0179\u0001\u0000"+
		"\u0000\u0000\u069a\u0698\u0001\u0000\u0000\u0000\u069b\u069c\u0005]\u0000"+
		"\u0000\u069c\u06a0\u0003\u017c\u00be\u0000\u069d\u069f\u0003\u017c\u00be"+
		"\u0000\u069e\u069d\u0001\u0000\u0000\u0000\u069f\u06a2\u0001\u0000\u0000"+
		"\u0000\u06a0\u069e\u0001\u0000\u0000\u0000\u06a0\u06a1\u0001\u0000\u0000"+
		"\u0000\u06a1\u06a3\u0001\u0000\u0000\u0000\u06a2\u06a0\u0001\u0000\u0000"+
		"\u0000\u06a3\u06a4\u0005^\u0000\u0000\u06a4\u017b\u0001\u0000\u0000\u0000"+
		"\u06a5\u06a8\u0003\u0180\u00c0\u0000\u06a6\u06a8\u0003\u017e\u00bf\u0000"+
		"\u06a7\u06a5\u0001\u0000\u0000\u0000\u06a7\u06a6\u0001\u0000\u0000\u0000"+
		"\u06a8\u017d\u0001\u0000\u0000\u0000\u06a9\u06aa\u0005\u0002\u0000\u0000"+
		"\u06aa\u06ae\u0003\u017c\u00be\u0000\u06ab\u06ad\u0003\u017c\u00be\u0000"+
		"\u06ac\u06ab\u0001\u0000\u0000\u0000\u06ad\u06b0\u0001\u0000\u0000\u0000"+
		"\u06ae\u06ac\u0001\u0000\u0000\u0000\u06ae\u06af\u0001\u0000\u0000\u0000"+
		"\u06af\u06b1\u0001\u0000\u0000\u0000\u06b0\u06ae\u0001\u0000\u0000\u0000"+
		"\u06b1\u06b2\u0005\u0003\u0000\u0000\u06b2\u017f\u0001\u0000\u0000\u0000"+
		"\u06b3\u06b6\u0003\u0182\u00c1\u0000\u06b4\u06b6\u0003\u0176\u00bb\u0000"+
		"\u06b5\u06b3\u0001\u0000\u0000\u0000\u06b5\u06b4\u0001\u0000\u0000\u0000"+
		"\u06b6\u0181\u0001\u0000\u0000\u0000\u06b7\u06ba\u0003\u01c2\u00e1\u0000"+
		"\u06b8\u06ba\u0005h\u0000\u0000\u06b9\u06b7\u0001\u0000\u0000\u0000\u06b9"+
		"\u06b8\u0001\u0000\u0000\u0000\u06ba\u0183\u0001\u0000\u0000\u0000\u06bb"+
		"\u06bc\u0003\u01b4\u00da\u0000\u06bc\u06bd\u0003\u0146\u00a3\u0000\u06bd"+
		"\u06be\u0005a\u0000\u0000\u06be\u06bf\u0003\u0186\u00c3\u0000\u06bf\u0185"+
		"\u0001\u0000\u0000\u0000\u06c0\u06c5\u0003\u0148\u00a4\u0000\u06c1\u06c5"+
		"\u0003\u0188\u00c4\u0000\u06c2\u06c5\u0003\u01aa\u00d5\u0000\u06c3\u06c5"+
		"\u0003\u01ee\u00f7\u0000\u06c4\u06c0\u0001\u0000\u0000\u0000\u06c4\u06c1"+
		"\u0001\u0000\u0000\u0000\u06c4\u06c2\u0001\u0000\u0000\u0000\u06c4\u06c3"+
		"\u0001\u0000\u0000\u0000\u06c5\u0187\u0001\u0000\u0000\u0000\u06c6\u06c9"+
		"\u0003\u018a\u00c5\u0000\u06c7\u06c9\u0003\u018e\u00c7\u0000\u06c8\u06c6"+
		"\u0001\u0000\u0000\u0000\u06c8\u06c7\u0001\u0000\u0000\u0000\u06c9\u0189"+
		"\u0001\u0000\u0000\u0000\u06ca\u06cc\u0005]\u0000\u0000\u06cb\u06cd\u0003"+
		"\u018c\u00c6\u0000\u06cc\u06cb\u0001\u0000\u0000\u0000\u06cc\u06cd\u0001"+
		"\u0000\u0000\u0000\u06cd\u06d2\u0001\u0000\u0000\u0000\u06ce\u06cf\u0005"+
		"h\u0000\u0000\u06cf\u06d1\u0003\u018c\u00c6\u0000\u06d0\u06ce\u0001\u0000"+
		"\u0000\u0000\u06d1\u06d4\u0001\u0000\u0000\u0000\u06d2\u06d0\u0001\u0000"+
		"\u0000\u0000\u06d2\u06d3\u0001\u0000\u0000\u0000\u06d3\u06d5\u0001\u0000"+
		"\u0000\u0000\u06d4\u06d2\u0001\u0000\u0000\u0000\u06d5\u06d6\u0005^\u0000"+
		"\u0000\u06d6\u018b\u0001\u0000\u0000\u0000\u06d7\u06d8\u0003\u0176\u00bb"+
		"\u0000\u06d8\u06d9\u0003\u0192\u00c9\u0000\u06d9\u018d\u0001\u0000\u0000"+
		"\u0000\u06da\u06de\u0005]\u0000\u0000\u06db\u06dd\u0003\u0190\u00c8\u0000"+
		"\u06dc\u06db\u0001\u0000\u0000\u0000\u06dd\u06e0\u0001\u0000\u0000\u0000"+
		"\u06de\u06dc\u0001\u0000\u0000\u0000\u06de\u06df\u0001\u0000\u0000\u0000"+
		"\u06df\u06e1\u0001\u0000\u0000\u0000\u06e0\u06de\u0001\u0000\u0000\u0000"+
		"\u06e1\u06e2\u0005^\u0000\u0000\u06e2\u018f\u0001\u0000\u0000\u0000\u06e3"+
		"\u06e6\u0003\u0182\u00c1\u0000\u06e4\u06e6\u0003\u0192\u00c9\u0000\u06e5"+
		"\u06e3\u0001\u0000\u0000\u0000\u06e5\u06e4\u0001\u0000\u0000\u0000\u06e6"+
		"\u0191\u0001\u0000\u0000\u0000\u06e7\u06ed\u0003>\u001f\u0000\u06e8\u06ed"+
		"\u0003F#\u0000\u06e9\u06ed\u0003<\u001e\u0000\u06ea\u06ed\u0003\u0186"+
		"\u00c3\u0000\u06eb\u06ed\u0003\u0196\u00cb\u0000\u06ec\u06e7\u0001\u0000"+
		"\u0000\u0000\u06ec\u06e8\u0001\u0000\u0000\u0000\u06ec\u06e9\u0001\u0000"+
		"\u0000\u0000\u06ec\u06ea\u0001\u0000\u0000\u0000\u06ec\u06eb\u0001\u0000"+
		"\u0000\u0000\u06ed\u0193\u0001\u0000\u0000\u0000\u06ee\u06ef\u0003\u01b6"+
		"\u00db\u0000\u06ef\u06f0\u0003\u0146\u00a3\u0000\u06f0\u06f1\u0005a\u0000"+
		"\u0000\u06f1\u06f2\u0003\u0196\u00cb\u0000\u06f2\u0195\u0001\u0000\u0000"+
		"\u0000\u06f3\u06f4\u0005]\u0000\u0000\u06f4\u06f5\u0003\u0198\u00cc\u0000"+
		"\u06f5\u06f6\u0005^\u0000\u0000\u06f6\u0197\u0001\u0000\u0000\u0000\u06f7"+
		"\u0707\u0003\u0104\u0082\u0000\u06f8\u06f9\u0003\u0104\u0082\u0000\u06f9"+
		"\u06fa\u0005h\u0000\u0000\u06fa\u06fb\u0005c\u0000\u0000\u06fb\u0707\u0001"+
		"\u0000\u0000\u0000\u06fc\u0707\u0005c\u0000\u0000\u06fd\u06fe\u0005c\u0000"+
		"\u0000\u06fe\u06ff\u0005h\u0000\u0000\u06ff\u0707\u0003\u0106\u0083\u0000"+
		"\u0700\u0701\u0003\u0104\u0082\u0000\u0701\u0702\u0005h\u0000\u0000\u0702"+
		"\u0703\u0005c\u0000\u0000\u0703\u0704\u0005h\u0000\u0000\u0704\u0705\u0003"+
		"\u0106\u0083\u0000\u0705\u0707\u0001\u0000\u0000\u0000\u0706\u06f7\u0001"+
		"\u0000\u0000\u0000\u0706\u06f8\u0001\u0000\u0000\u0000\u0706\u06fc\u0001"+
		"\u0000\u0000\u0000\u0706\u06fd\u0001\u0000\u0000\u0000\u0706\u0700\u0001"+
		"\u0000\u0000\u0000\u0707\u0199\u0001\u0000\u0000\u0000\u0708\u070d\u0003"+
		"\u0186\u00c3\u0000\u0709\u070d\u0003\u014a\u00a5\u0000\u070a\u070d\u0003"+
		"\u01ac\u00d6\u0000\u070b\u070d\u0003\u01ec\u00f6\u0000\u070c\u0708\u0001"+
		"\u0000\u0000\u0000\u070c\u0709\u0001\u0000\u0000\u0000\u070c\u070a\u0001"+
		"\u0000\u0000\u0000\u070c\u070b\u0001\u0000\u0000\u0000\u070d\u019b\u0001"+
		"\u0000\u0000\u0000\u070e\u070f\u0003\u0146\u00a3\u0000\u070f\u0710\u0005"+
		"g\u0000\u0000\u0710\u0711\u0003\u0178\u00bc\u0000\u0711\u019d\u0001\u0000"+
		"\u0000\u0000\u0712\u0715\u0003\u01a0\u00d0\u0000\u0713\u0715\u0003\u01a2"+
		"\u00d1\u0000\u0714\u0712\u0001\u0000\u0000\u0000\u0714\u0713\u0001\u0000"+
		"\u0000\u0000\u0715\u019f\u0001\u0000\u0000\u0000\u0716\u0717\u0003>\u001f"+
		"\u0000\u0717\u0718\u0005f\u0000\u0000\u0718\u0719\u0003F#\u0000\u0719"+
		"\u01a1\u0001\u0000\u0000\u0000\u071a\u071d\u0003H$\u0000\u071b\u071d\u0003"+
		"J%\u0000\u071c\u071a\u0001\u0000\u0000\u0000\u071c\u071b\u0001\u0000\u0000"+
		"\u0000\u071d\u01a3\u0001\u0000\u0000\u0000\u071e\u071f\u0003\u01ae\u00d7"+
		"\u0000\u071f\u0720\u0005g\u0000\u0000\u0720\u0721\u0003\u0178\u00bc\u0000"+
		"\u0721\u01a5\u0001\u0000\u0000\u0000\u0722\u0723\u0003\u01ae\u00d7\u0000"+
		"\u0723\u0724\u0005g\u0000\u0000\u0724\u0725\u0003\u0178\u00bc\u0000\u0725"+
		"\u01a7\u0001\u0000\u0000\u0000\u0726\u0727\u0003\u01ae\u00d7\u0000\u0727"+
		"\u0728\u0005g\u0000\u0000\u0728\u0729\u0003\u0178\u00bc\u0000\u0729\u01a9"+
		"\u0001\u0000\u0000\u0000\u072a\u072b\u0003\u01ae\u00d7\u0000\u072b\u072c"+
		"\u0005g\u0000\u0000\u072c\u072d\u0003\u0178\u00bc\u0000\u072d\u01ab\u0001"+
		"\u0000\u0000\u0000\u072e\u072f\u0003\u01ae\u00d7\u0000\u072f\u0730\u0005"+
		"g\u0000\u0000\u0730\u0731\u0003\u0178\u00bc\u0000\u0731\u01ad\u0001\u0000"+
		"\u0000\u0000\u0732\u0737\u0003\u0148\u00a4\u0000\u0733\u0737\u0003\u01ee"+
		"\u00f7\u0000\u0734\u0737\u0003\u014a\u00a5\u0000\u0735\u0737\u0003\u01ec"+
		"\u00f6\u0000\u0736\u0732\u0001\u0000\u0000\u0000\u0736\u0733\u0001\u0000"+
		"\u0000\u0000\u0736\u0734\u0001\u0000\u0000\u0000\u0736\u0735\u0001\u0000"+
		"\u0000\u0000\u0737\u01af\u0001\u0000\u0000\u0000\u0738\u073b\u0005[\u0000"+
		"\u0000\u0739\u073a\u0005\\\u0000\u0000\u073a\u073c\u0005/\u0000\u0000"+
		"\u073b\u0739\u0001\u0000\u0000\u0000\u073b\u073c\u0001\u0000\u0000\u0000"+
		"\u073c\u073e\u0001\u0000\u0000\u0000\u073d\u073f\u0003\u01f6\u00fb\u0000"+
		"\u073e\u073d\u0001\u0000\u0000\u0000\u073e\u073f\u0001\u0000\u0000\u0000"+
		"\u073f\u01b1\u0001\u0000\u0000\u0000\u0740\u0741\u0004\u00d9\u0003\u0000"+
		"\u0741\u0742\u0005o\u0000\u0000\u0742\u01b3\u0001\u0000\u0000\u0000\u0743"+
		"\u0744\u0005n\u0000\u0000\u0744\u01b5\u0001\u0000\u0000\u0000\u0745\u0746"+
		"\u0005o\u0000\u0000\u0746\u01b7\u0001\u0000\u0000\u0000\u0747\u0748\u0005"+
		"\n\u0000\u0000\u0748\u0749\u0005o\u0000\u0000\u0749\u01b9\u0001\u0000"+
		"\u0000\u0000\u074a\u074b\u0005\n\u0000\u0000\u074b\u074c\u0005n\u0000"+
		"\u0000\u074c\u01bb\u0001\u0000\u0000\u0000\u074d\u074e\u0005\n\u0000\u0000"+
		"\u074e\u074f\u0005o\u0000\u0000\u074f\u01bd\u0001\u0000\u0000\u0000\u0750"+
		"\u0751\u0005\n\u0000\u0000\u0751\u0752\u0005n\u0000\u0000\u0752\u01bf"+
		"\u0001\u0000\u0000\u0000\u0753\u0754\u0005\n\u0000\u0000\u0754\u0755\u0005"+
		"o\u0000\u0000\u0755\u01c1\u0001\u0000\u0000\u0000\u0756\u0757\u0004\u00e1"+
		"\u0004\u0000\u0757\u0758\u0005o\u0000\u0000\u0758\u01c3\u0001\u0000\u0000"+
		"\u0000\u0759\u0760\u0003\u01c6\u00e3\u0000\u075a\u0760\u0003\u01c8\u00e4"+
		"\u0000\u075b\u0760\u0003\u01ca\u00e5\u0000\u075c\u0760\u0003\u01cc\u00e6"+
		"\u0000\u075d\u0760\u0003\u01ce\u00e7\u0000\u075e\u0760\u0003\u01d0\u00e8"+
		"\u0000\u075f\u0759\u0001\u0000\u0000\u0000\u075f\u075a\u0001\u0000\u0000"+
		"\u0000\u075f\u075b\u0001\u0000\u0000\u0000\u075f\u075c\u0001\u0000\u0000"+
		"\u0000\u075f\u075d\u0001\u0000\u0000\u0000\u075f\u075e\u0001\u0000\u0000"+
		"\u0000\u0760\u01c5\u0001\u0000\u0000\u0000\u0761\u0762\u0003\u01f4\u00fa"+
		"\u0000\u0762\u0763\u0003\u01d2\u00e9\u0000\u0763\u0764\u0005a\u0000\u0000"+
		"\u0764\u0765\u0003>\u001f\u0000\u0765\u01c7\u0001\u0000\u0000\u0000\u0766"+
		"\u0767\u0003\u01f8\u00fc\u0000\u0767\u0768\u0003\u01d2\u00e9\u0000\u0768"+
		"\u0769\u0003>\u001f\u0000\u0769\u076a\u0005a\u0000\u0000\u076a\u076b\u0003"+
		"F#\u0000\u076b\u01c9\u0001\u0000\u0000\u0000\u076c\u076d\u0003\u01f4\u00fa"+
		"\u0000\u076d\u076e\u0003\u01d2\u00e9\u0000\u076e\u076f\u0003>\u001f\u0000"+
		"\u076f\u0770\u0005a\u0000\u0000\u0770\u0771\u0003<\u001e\u0000\u0771\u01cb"+
		"\u0001\u0000\u0000\u0000\u0772\u0773\u0003\u01b2\u00d9\u0000\u0773\u0774"+
		"\u0003\u01d2\u00e9\u0000\u0774\u0775\u0005a\u0000\u0000\u0775\u0776\u0003"+
		"\u0156\u00ab\u0000\u0776\u01cd\u0001\u0000\u0000\u0000\u0777\u0778\u0003"+
		"\u01b4\u00da\u0000\u0778\u0779\u0003\u01d2\u00e9\u0000\u0779\u077a\u0003"+
		"\u0146\u00a3\u0000\u077a\u077b\u0005a\u0000\u0000\u077b\u077c\u0003\u0186"+
		"\u00c3\u0000\u077c\u01cf\u0001\u0000\u0000\u0000\u077d\u077e\u0003\u01b6"+
		"\u00db\u0000\u077e\u077f\u0003\u01d2\u00e9\u0000\u077f\u0780\u0003\u0146"+
		"\u00a3\u0000\u0780\u0781\u0005a\u0000\u0000\u0781\u0782\u0003\u0196\u00cb"+
		"\u0000\u0782\u01d1\u0001\u0000\u0000\u0000\u0783\u0784\u0005]\u0000\u0000"+
		"\u0784\u0789\u0003\u01d4\u00ea\u0000\u0785\u0786\u0005h\u0000\u0000\u0786"+
		"\u0788\u0003\u01d4\u00ea\u0000\u0787\u0785\u0001\u0000\u0000\u0000\u0788"+
		"\u078b\u0001\u0000\u0000\u0000\u0789\u0787\u0001\u0000\u0000\u0000\u0789"+
		"\u078a\u0001\u0000\u0000\u0000\u078a\u078c\u0001\u0000\u0000\u0000\u078b"+
		"\u0789\u0001\u0000\u0000\u0000\u078c\u078d\u0005^\u0000\u0000\u078d\u01d3"+
		"\u0001\u0000\u0000\u0000\u078e\u078f\u0003\u01d6\u00eb\u0000\u078f\u0790"+
		"\u0005f\u0000\u0000\u0790\u0791\u0003\u01dc\u00ee\u0000\u0791\u0794\u0001"+
		"\u0000\u0000\u0000\u0792\u0794\u0003\u01dc\u00ee\u0000\u0793\u078e\u0001"+
		"\u0000\u0000\u0000\u0793\u0792\u0001\u0000\u0000\u0000\u0794\u01d5\u0001"+
		"\u0000\u0000\u0000\u0795\u0798\u0003\u01d8\u00ec\u0000\u0796\u0798\u0003"+
		"\u01da\u00ed\u0000\u0797\u0795\u0001\u0000\u0000\u0000\u0797\u0796\u0001"+
		"\u0000\u0000\u0000\u0798\u01d7\u0001\u0000\u0000\u0000\u0799\u079c\u0003"+
		">\u001f\u0000\u079a\u079c\u0003\u0146\u00a3\u0000\u079b\u0799\u0001\u0000"+
		"\u0000\u0000\u079b\u079a\u0001\u0000\u0000\u0000\u079c\u01d9\u0001\u0000"+
		"\u0000\u0000\u079d\u079e\u0003\u01dc\u00ee\u0000\u079e\u01db\u0001\u0000"+
		"\u0000\u0000\u079f\u07a0\u0003(\u0014\u0000\u07a0\u01dd\u0001\u0000\u0000"+
		"\u0000\u07a1\u07a7\u0003(\u0014\u0000\u07a2\u07a3\u0003(\u0014\u0000\u07a3"+
		"\u07a4\u0005]\u0000\u0000\u07a4\u07a5\u0005^\u0000\u0000\u07a5\u07a7\u0001"+
		"\u0000\u0000\u0000\u07a6\u07a1\u0001\u0000\u0000\u0000\u07a6\u07a2\u0001"+
		"\u0000\u0000\u0000\u07a7\u01df\u0001\u0000\u0000\u0000\u07a8\u07a9\u0003"+
		"\u01e2\u00f1\u0000\u07a9\u07aa\u0003\u01f0\u00f8\u0000\u07aa\u01e1\u0001"+
		"\u0000\u0000\u0000\u07ab\u07ae\u00032\u0019\u0000\u07ac\u07ae\u0003\u01f4"+
		"\u00fa\u0000\u07ad\u07ab\u0001\u0000\u0000\u0000\u07ad\u07ac\u0001\u0000"+
		"\u0000\u0000\u07ae\u01e3\u0001\u0000\u0000\u0000\u07af\u07b0\u0003\u01e6"+
		"\u00f3\u0000\u07b0\u07b1\u0003\u01f0\u00f8\u0000\u07b1\u01e5\u0001\u0000"+
		"\u0000\u0000\u07b2\u07b5\u00034\u001a\u0000\u07b3\u07b5\u0003\u01f8\u00fc"+
		"\u0000\u07b4\u07b2\u0001\u0000\u0000\u0000\u07b4\u07b3\u0001\u0000\u0000"+
		"\u0000\u07b5\u01e7\u0001\u0000\u0000\u0000\u07b6\u07b7\u0003\u01e2\u00f1"+
		"\u0000\u07b7\u07b8\u0003\u01f0\u00f8\u0000\u07b8\u01e9\u0001\u0000\u0000"+
		"\u0000\u07b9\u07ba\u0003\u0146\u00a3\u0000\u07ba\u07bb\u0003\u01f0\u00f8"+
		"\u0000\u07bb\u01eb\u0001\u0000\u0000\u0000\u07bc\u07bd\u0003\u014a\u00a5"+
		"\u0000\u07bd\u07be\u0003\u01f0\u00f8\u0000\u07be\u01ed\u0001\u0000\u0000"+
		"\u0000\u07bf\u07c0\u0003\u0148\u00a4\u0000\u07c0\u07c1\u0003\u01f0\u00f8"+
		"\u0000\u07c1\u01ef\u0001\u0000\u0000\u0000\u07c2\u07c3\u0005]\u0000\u0000"+
		"\u07c3\u07c8\u0003\u01f2\u00f9\u0000\u07c4\u07c5\u0005h\u0000\u0000\u07c5"+
		"\u07c7\u0003\u01f2\u00f9\u0000\u07c6\u07c4\u0001\u0000\u0000\u0000\u07c7"+
		"\u07ca\u0001\u0000\u0000\u0000\u07c8\u07c6\u0001\u0000\u0000\u0000\u07c8"+
		"\u07c9\u0001\u0000\u0000\u0000\u07c9\u07cb\u0001\u0000\u0000\u0000\u07ca"+
		"\u07c8\u0001\u0000\u0000\u0000\u07cb\u07cc\u0005^\u0000\u0000\u07cc\u01f1"+
		"\u0001\u0000\u0000\u0000\u07cd\u07d4\u0003>\u001f\u0000\u07ce\u07d4\u0003"+
		"F#\u0000\u07cf\u07d4\u0003<\u001e\u0000\u07d0\u07d4\u0003\u0146\u00a3"+
		"\u0000\u07d1\u07d4\u0003\u0186\u00c3\u0000\u07d2\u07d4\u0003\u0196\u00cb"+
		"\u0000\u07d3\u07cd\u0001\u0000\u0000\u0000\u07d3\u07ce\u0001\u0000\u0000"+
		"\u0000\u07d3\u07cf\u0001\u0000\u0000\u0000\u07d3\u07d0\u0001\u0000\u0000"+
		"\u0000\u07d3\u07d1\u0001\u0000\u0000\u0000\u07d3\u07d2\u0001\u0000\u0000"+
		"\u0000\u07d4\u01f3\u0001\u0000\u0000\u0000\u07d5\u07d6\u0005o\u0000\u0000"+
		"\u07d6\u01f5\u0001\u0000\u0000\u0000\u07d7\u07d8\u0005n\u0000\u0000\u07d8"+
		"\u01f7\u0001\u0000\u0000\u0000\u07d9\u07da\u0005n\u0000\u0000\u07da\u01f9"+
		"\u0001\u0000\u0000\u0000\u07db\u07dc\u0005o\u0000\u0000\u07dc\u01fb\u0001"+
		"\u0000\u0000\u0000\u07dd\u07de\u0005j\u0000\u0000\u07de\u01fd\u0001\u0000"+
		"\u0000\u0000\u07df\u07e0\u0005k\u0000\u0000\u07e0\u01ff\u0001\u0000\u0000"+
		"\u0000\u07e1\u07e2\u0005l\u0000\u0000\u07e2\u0201\u0001\u0000\u0000\u0000"+
		"\u07e3\u07e4\u0005m\u0000\u0000\u07e4\u0203\u0001\u0000\u0000\u0000\u009d"+
		"\u020f\u021a\u0220\u0226\u0231\u0235\u0238\u023b\u023e\u0247\u024a\u0251"+
		"\u0257\u0263\u026a\u026f\u0276\u027c\u0286\u028c\u0291\u02b0\u02c2\u02c8"+
		"\u02d0\u02de\u02e2\u02f1\u02f8\u0305\u030a\u030e\u0322\u032d\u0332\u033f"+
		"\u0346\u0353\u035f\u0366\u0370\u0383\u039e\u03a7\u03ae\u03b3\u03bd\u03c4"+
		"\u03d2\u03da\u03e1\u03ea\u03f6\u03fd\u0405\u0416\u041e\u0426\u0432\u0440"+
		"\u0448\u0453\u0458\u0464\u0472\u047b\u047e\u048c\u0492\u0499\u049f\u04a9"+
		"\u04ad\u04b5\u04b9\u04bd\u04c7\u04d2\u04d9\u04fc\u0500\u0505\u052f\u0538"+
		"\u053f\u054c\u0555\u0560\u056e\u0577\u0588\u058f\u0597\u05a1\u05a6\u05aa"+
		"\u05ae\u05ba\u05c0\u05d7\u05db\u05e8\u05f3\u05f8\u05ff\u060d\u0612\u0616"+
		"\u061a\u0631\u063a\u063f\u064c\u0650\u0655\u065a\u065d\u0662\u0667\u066c"+
		"\u0671\u0676\u067b\u0680\u0685\u068a\u0691\u0698\u06a0\u06a7\u06ae\u06b5"+
		"\u06b9\u06c4\u06c8\u06cc\u06d2\u06de\u06e5\u06ec\u0706\u070c\u0714\u071c"+
		"\u0736\u073b\u073e\u075f\u0789\u0793\u0797\u079b\u07a6\u07ad\u07b4\u07c8"+
		"\u07d3";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}