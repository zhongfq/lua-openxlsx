---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLXmlSavingDeclaration

---The XLXmlSavingDeclaration class encapsulates the properties of an XML saving declaration,
---that can be used in calls to XLXmlData::getRawData to enforce specific settings
---@class openxlsx.XLXmlSavingDeclaration 
local XLXmlSavingDeclaration = {}

---@return any
function XLXmlSavingDeclaration:__gc() end

---@return string
function XLXmlSavingDeclaration:encoding() end

---@return openxlsx.XLXmlSavingDeclaration
---@overload fun(version: string, encoding: string, standalone: boolean): openxlsx.XLXmlSavingDeclaration
---@overload fun(version: string, encoding: string): openxlsx.XLXmlSavingDeclaration
function XLXmlSavingDeclaration.new() end

---@return string
function XLXmlSavingDeclaration:standalone() end

---@return boolean
function XLXmlSavingDeclaration:standalone_as_bool() end

---: getter functions: version, encoding, standalone
---@return string
function XLXmlSavingDeclaration:version() end

return XLXmlSavingDeclaration