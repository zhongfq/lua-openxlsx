---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLXmlData

---The XLXmlData class encapsulates the properties and behaviour of the .xml files in an .xlsx file zip
---package. Objects of the XLXmlData type are intended to be stored centrally in an XLDocument object, from where
---they can be retrieved by other objects that encapsulates the behaviour of Excel elements, such as XLWorkbook
---and XLWorksheet.
---@class openxlsx.XLXmlData 
---@field parentDoc openxlsx.XLDocument Access the parent XLDocument object. \return A pointer to the parent XLDocument object.
---@field rawData string Get the raw data for the underlying XML document. This function will retrieve the raw XML text data from the underlying XMLDocument object. This will mainly be used when saving data to the .xlsx package using the save function in the XLDocument class. \return A std::string with the raw XML text data.
---@field xmlID string Retrieve the relationship ID of the XML file. \return A std::string with the relationship ID.
---@field xmlPath string Retrieve the path of the XML data in the .xlsx zip archive. \return A std::string with the path.
---@field xmlType openxlsx.XLContentType Retrieve the type represented by the XML data. \return A XLContentType getValue representing the type.
local XLXmlData = {}

---@return any
function XLXmlData:__gc() end

---Access the parent XLDocument object.
---@return openxlsx.XLDocument # A pointer to the parent XLDocument object.
function XLXmlData:getParentDoc() end

---Get the raw data for the underlying XML document. This function will retrieve the raw XML text data
---from the underlying XMLDocument object. This will mainly be used when saving data to the .xlsx package
---using the save function in the XLDocument class.
---@return string # A std::string with the raw XML text data.
function XLXmlData:getRawData() end

---Retrieve the relationship ID of the XML file.
---@return string # A std::string with the relationship ID.
function XLXmlData:getXmlID() end

---Retrieve the path of the XML data in the .xlsx zip archive.
---@return string # A std::string with the path.
function XLXmlData:getXmlPath() end

---Retrieve the type represented by the XML data.
---@return openxlsx.XLContentType # A XLContentType getValue representing the type.
function XLXmlData:getXmlType() end

---Default constructor. All member variables are default constructed. Except for
---the raw XML data, none of the member variables can be modified after construction. Hence, objects created
---using the default constructor can only serve as null objects and targets for the move assignemnt operator.
---@return openxlsx.XLXmlData
---
---Constructor. This constructor creates objects with the given parameters. the xmlId and the xmlType
---parameters have default values. These are only useful for relationship (.rels) files and the
---[Content_Types].xml file located in the root directory of the zip package.
---\param parentDoc A pointer to the parent XLDocument object.
---\param xmlPath A std::string with the file path in zip package.
---\param xmlId A std::string with the relationship ID of the file (used in the XLRelationships class)
---\param xmlType The type of object the XML file represents, e.g. XLWorkbook or XLWorksheet.
---@overload fun(parentDoc: openxlsx.XLDocument, xmlPath: string, xmlId: string, xmlType: openxlsx.XLContentType): openxlsx.XLXmlData
---
---Constructor. This constructor creates objects with the given parameters. the xmlId and the xmlType
---parameters have default values. These are only useful for relationship (.rels) files and the
---[Content_Types].xml file located in the root directory of the zip package.
---\param parentDoc A pointer to the parent XLDocument object.
---\param xmlPath A std::string with the file path in zip package.
---\param xmlId A std::string with the relationship ID of the file (used in the XLRelationships class)
---\param xmlType The type of object the XML file represents, e.g. XLWorkbook or XLWorksheet.
---@overload fun(parentDoc: openxlsx.XLDocument, xmlPath: string): openxlsx.XLXmlData
---
---Constructor. This constructor creates objects with the given parameters. the xmlId and the xmlType
---parameters have default values. These are only useful for relationship (.rels) files and the
---[Content_Types].xml file located in the root directory of the zip package.
---\param parentDoc A pointer to the parent XLDocument object.
---\param xmlPath A std::string with the file path in zip package.
---\param xmlId A std::string with the relationship ID of the file (used in the XLRelationships class)
---\param xmlType The type of object the XML file represents, e.g. XLWorkbook or XLWorksheet.
---@overload fun(parentDoc: openxlsx.XLDocument, xmlPath: string, xmlId: string): openxlsx.XLXmlData
function XLXmlData.new() end

---Set the raw data for the underlying XML document. Being able to set the XML data directly is useful
---when creating a new file using a XML file template. E.g., when creating a new worksheet, the XML code for
---a minimum viable XLWorksheet object can be added using this function.
---@param data string # A std::string with the raw XML text.
function XLXmlData:setRawData(data) end

return XLXmlData