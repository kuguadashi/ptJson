#ifndef PTJSON_H
#define PTJSON_H

#ifndef MAX_PATH
#define MAX_PATH 255
#endif

typedef enum
{
	JSON_NULL,
	JSON_BOOL,
	JSON_NUMBER,
	JSON_STRING,
	JSON_ARRAY,
	JSON_OBJECT
}JsonType;

enum 
{
	JSON_PARSE_OK,
	JSON_PARSE_EXPECT_VALUE
};



class ptJson
{
public:
	ptJson();
	ptJson(char *fileName);
	~ptJson();

private:
	char m_fileName[MAX_PATH];

};


#endif