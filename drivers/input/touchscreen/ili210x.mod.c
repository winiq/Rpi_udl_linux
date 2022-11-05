#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x40061ad3, "input_register_device" },
	{ 0xb55ffa6f, "devm_device_add_group" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x3966fdae, "input_mt_init_slots" },
	{ 0xaac9e1ca, "touchscreen_parse_properties" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0xb85da197, "devm_input_allocate_device" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0x3409bde9, "device_get_match_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9e61da5, "touchscreen_report_pos" },
	{ 0x10b1e3a8, "input_mt_report_pointer_emulation" },
	{ 0x18503203, "input_mt_report_slot_state" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cilitek,ili210x");
MODULE_ALIAS("of:N*T*Cilitek,ili210xC*");
MODULE_ALIAS("of:N*T*Cilitek,ili2117");
MODULE_ALIAS("of:N*T*Cilitek,ili2117C*");
MODULE_ALIAS("of:N*T*Cilitek,ili2120");
MODULE_ALIAS("of:N*T*Cilitek,ili2120C*");
MODULE_ALIAS("of:N*T*Cilitek,ili251x");
MODULE_ALIAS("of:N*T*Cilitek,ili251xC*");
MODULE_ALIAS("i2c:ili210x");
MODULE_ALIAS("i2c:ili2117");
MODULE_ALIAS("i2c:ili2120");
MODULE_ALIAS("i2c:ili251x");

MODULE_INFO(srcversion, "E122F132C713A60C06AB2B7");
