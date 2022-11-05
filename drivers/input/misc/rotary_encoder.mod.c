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
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xc47fa31d, "gpiod_to_irq" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0xb85da197, "devm_input_allocate_device" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x99e32c58, "devm_gpiod_get_array" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8522d8a0, "device_property_match_string" },
	{ 0xdf240d2f, "device_property_present" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x3a760923, "gpiod_get_value_cansleep" },
	{ 0x5dae8ffa, "input_event" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crotary-encoder");
MODULE_ALIAS("of:N*T*Crotary-encoderC*");

MODULE_INFO(srcversion, "341AD564B293E1EEFB9394E");
