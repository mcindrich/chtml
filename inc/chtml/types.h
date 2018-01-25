#ifndef __CHTML_TYPES_H__
#define __CHTML_TYPES_H__

typedef char* string;

enum {
	NormalParsingSignal,
	ElementTagParsingSignal,
	ElementAttributeParsingSignal,
	CommentParsingSignal,
	ScriptParsingSignal, // will be treated as a comment
	ContentParsingSignal,
	DoctypeParsingSignal,
	XmlEncodingParsingSignal
} CurrentParsingSignal;

#endif
