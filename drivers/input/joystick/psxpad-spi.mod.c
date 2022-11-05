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
	{ 0xadcac529, "driver_unregister" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x52829b9d, "spi_sync" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0x40061ad3, "input_register_device" },
	{ 0xc176a392, "input_set_max_poll_interval" },
	{ 0x5184b446, "input_set_min_poll_interval" },
	{ 0x8b74d0eb, "input_set_poll_interval" },
	{ 0xaba6152e, "input_setup_polling" },
	{ 0x62e9350e, "spi_setup" },
	{ 0x4492ff0e, "input_ff_create_memless" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb85da197, "devm_input_allocate_device" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0x49ba01b3, "__pm_runtime_idle" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("spi:psxpad-spi");

MODULE_INFO(srcversion, "D4C9AF2175BA95E846753B9");
