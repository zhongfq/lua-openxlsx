---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLXmlFile

---The XLXmlFile class provides an interface for derived classes to use.
---It functions as an ancestor to all classes which are represented by an .xml file in an .xlsx package.
---\warning The XLXmlFile class is not intended to be instantiated on it's own, but to provide an interface for
---derived classes. Also, it should not be used polymorphically. For that reason, the destructor is not declared virtual.
---@class openxlsx.XLXmlFile 
local XLXmlFile = {}

---@return any
function XLXmlFile:__gc() end

---@return any
function XLXmlFile:__olua_move() end

---Default constructor.
---@return openxlsx.XLXmlFile
---
---Constructor. Creates an object based on the xmlData input.
---\param xmlData An XLXmlData object with the XML data to be represented by the object.
---@overload fun(xmlData: openxlsx.XLXmlData): openxlsx.XLXmlFile
function XLXmlFile.new() end

return XLXmlFile