---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLSheet

---The XLAbstractSheet is a generalized sheet class, which functions as superclass for specialized classes,
---such as XLWorksheet. It implements functionality common to all sheet types. This is a pure abstract class,
---so it cannot be instantiated.
---@class openxlsx.XLSheet : openxlsx.XLXmlFile
---@field chartsheet openxlsx.XLChartsheet  \tparam T \return
---@field selected boolean Determine whether the sheet is selected \return
---@field worksheet openxlsx.XLWorksheet  \tparam T \return
local XLSheet = {}

---Method for cloning the sheet.
---@param newName string # A std::string with the name of the clone
---\return A pointer to the cloned object.
---\note This is a pure abstract method. I.e. it is implemented in subclasses.
function XLSheet:clone(newName) end

---
---@return openxlsx.XLColor # 
function XLSheet:color() end

---
---\tparam T
---@return openxlsx.XLChartsheet # 
function XLSheet:getChartsheet() end

---
---\tparam T
---@return openxlsx.XLWorksheet # 
function XLSheet:getWorksheet() end

---Method for getting the index of the sheet.
---@return integer # An int with the index of the sheet.
function XLSheet:index() end

---Determine whether the sheet is selected
---@return boolean # 
function XLSheet:isSelected() end

---Method to retrieve the name of the sheet.
---@return string # A std::string with the sheet name.
function XLSheet:name() end

---The constructor. There are no default constructor, so all parameters must be provided for
---constructing an XLAbstractSheet object. Since this is a pure abstract class, instantiation is only
---possible via one of the derived classes.
---@param xmlData openxlsx.XLXmlData # 
---@return openxlsx.XLSheet
function XLSheet.new(xmlData) end

---
---@param color openxlsx.XLColor # 
function XLSheet:setColor(color) end

---Method for setting the index of the sheet. This effectively moves the sheet to a different position.
---@param index integer
function XLSheet:setIndex(index) end

---Method for renaming the sheet.
---@param name string # A std::string with the new name.
function XLSheet:setName(name) end

---
---@param selected boolean # 
function XLSheet:setSelected(selected) end

---Method for setting the state of the sheet.
---@param state openxlsx.XLSheetState # An XLSheetState enum object with the new state.
---\bug For some reason, this method doesn't work. The data is written correctly to the xml file, but the sheet
---is not hidden when opening the file in Excel.
function XLSheet:setVisibility(state) end

---Method for getting the current visibility state of the sheet.
---@return openxlsx.XLSheetState # An XLSheetState enum object, with the current sheet state.
function XLSheet:visibility() end

return XLSheet