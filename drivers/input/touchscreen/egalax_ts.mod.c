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
	{ 0xa6c96402, "_dev_err" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x3966fdae, "input_mt_init_slots" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0xfe990052, "gpio_free" },
	{ 0x19ae336a, "gpiod_direction_input" },
	{ 0x6968fb56, "gpiod_set_raw_value" },
	{ 0x54298c33, "gpiod_direction_output_raw" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xb289750f, "of_get_named_gpio_flags" },
	{ 0xb85da197, "devm_input_allocate_device" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x10b1e3a8, "input_mt_report_pointer_emulation" },
	{ 0x18503203, "input_mt_report_slot_state" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ceeti,egalax_ts");
MODULE_ALIAS("of:N*T*Ceeti,egalax_tsC*");
MODULE_ALIAS("i2c:egalax_ts");

MODULE_INFO(srcversion, "C757A10FF0D460470DAE851");
