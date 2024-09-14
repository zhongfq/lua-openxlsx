---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLChartsheet

---Class representing the an Excel chartsheet.
---\todo This class is largely unimplemented and works just as a placeholder.
---@class openxlsx.XLChartsheet 
---@field selected boolean  \return
local XLChartsheet = {}

---@return any
function XLChartsheet:__gc() end

---Method for cloning the sheet.
---@param newName string # A std::string with the name of the clone
---\return A pointer to the cloned object.
---\note This is a pure abstract method. I.e. it is implemented in subclasses.
function XLChartsheet:clone(newName) end

---
---@return openxlsx.XLColor # 
---\todo To be implemented.
function XLChartsheet:color() end

---
---@return integer # 
function XLChartsheet:index() end

---
---@return boolean # 
function XLChartsheet:isSelected() end

---Method to retrieve the name of the sheet.
---@return string # A std::string with the sheet name.
function XLChartsheet:name() end

---Default constructor
---@return openxlsx.XLChartsheet
---
---
---\param xmlData
---@overload fun(xmlData: openxlsx.XLXmlData): openxlsx.XLChartsheet
function XLChartsheet.new() end

---
---@param color openxlsx.XLColor # 
function XLChartsheet:setColor(color) end

---
---@param index integer # 
function XLChartsheet:setIndex(index) end

---Method for renaming the sheet.
---@param sheetName string # A std::string with the new name.
function XLChartsheet:setName(sheetName) end

---
---@param selected boolean # 
function XLChartsheet:setSelected(selected) end

---
---@param state openxlsx.XLSheetState # 
function XLChartsheet:setVisibility(state) end

---
---@return openxlsx.XLSheetState # 
function XLChartsheet:visibility() end

return XLChartsheet