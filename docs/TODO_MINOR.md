# TODOs for minor versions
Minor versions (x.1.0, x.2.0 ...) released when one or more new feature is addded without changing the API. New features can be added with major versions (1.0.0, 2.0.0 ...) too. 

## Contributing
Please create an issue to suggest a new feature instead of adding pull request to this file.

## Ideas
Here are ideas which are not assigned to a minor version yet:
- label: add a horzintal line (e.g. underline or line through).
- GUI remote control
- automatically build GUI from file (e.g. XML, JSON or HTML)

## v4.3 (in progress)
- [x] UTF-8 support
- [ ] lv_split: new object type, a hor. or ver. line for decoration purpose
- [ ] lv_valset: new object type, a label with "+" and "-" buttons
- [ ] lv_tabview: new object type to organise content with tabs
- [x] lv_sw: new object type, switch, turn on/off by tap (a little slider)
- [ ] lv_roller: new object type, a roller to select a value (like on smartphones) 
- [x] lv_kb: new object type, Keyboard
- [x] lv_btnm: lv_btnm_set_tgl() to toggle last button
- [x] lv_ta: cursor types

## v4.2 (released at: 17.08.2017)
- [x] Double VDB support: one for rendering, another to transfer former rendered image to frame buffer in the background (e.g. with DMA) [#15](https://github.com/littlevgl/lvgl/issues/15)
- [x] lv_group: to control without touch pad. Issue [#14](https://github.com/littlevgl/lvgl/issues/14)
- [x] lv_page: scrl def fit modification: hor:false, ver:true, and always set width to parent width
- [x] lv_btn: add lv_btn_get_..._action
- [x] lv_list: add lv_list_get_element_label/img
- [x] lv_ta: lv_ta_set_one_line to configure the Text area to one lined input field
- [x] style animations add
- [x] lv_btnm:  besides 0. byte (width dsc) 1. byte: hidden (\177, 0x7F, delete)