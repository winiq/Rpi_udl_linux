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
	{ 0xa6c96402, "_dev_err" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xc47fa31d, "gpiod_to_irq" },
	{ 0x19ae336a, "gpiod_direction_input" },
	{ 0x40061ad3, "input_register_device" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e518b1f, "input_allocate_device" },
	{ 0xb9991b68, "rpisense_get_dev" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x69f2daa0, "rpisense_reg_read" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5933243, "input_free_device" },
	{ 0x34fa48c2, "input_unregister_device" },
};

MODULE_INFO(depends, "rpisense-core");

MODULE_ALIAS("platform:rpi-sense-js");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-js");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-jsC*");

MODULE_INFO(srcversion, "3A1020FD8FE11A5D677800E");
