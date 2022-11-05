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
	{ 0xda1a0029, "_dev_warn" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x398a25a9, "of_prop_next_u32" },
	{ 0xe536ac87, "of_find_property" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xbdf1d0d2, "devm_thermal_of_cooling_device_register" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xc47fa31d, "gpiod_to_irq" },
	{ 0xf2560f6a, "devm_hwmon_device_register_with_groups" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0xa07bbbe8, "gpiod_direction_output" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x30511fdf, "devm_gpiod_get_index" },
	{ 0xe7be9eba, "gpiod_count" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0x3e8e0bc0, "kobject_uevent" },
	{ 0x5b0600d, "sysfs_notify" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3a760923, "gpiod_get_value_cansleep" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-fan");
MODULE_ALIAS("of:N*T*Cgpio-fanC*");

MODULE_INFO(srcversion, "4C6A56DC90897ECDAE4E3B8");
