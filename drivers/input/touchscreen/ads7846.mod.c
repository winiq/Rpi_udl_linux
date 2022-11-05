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
	{ 0xb2351ad2, "devm_kfree" },
	{ 0x40061ad3, "input_register_device" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xb289750f, "of_get_named_gpio_flags" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x3913d2e8, "of_property_read_variable_u16_array" },
	{ 0x6ad73e27, "of_match_device" },
	{ 0x2d0ba65f, "gpiod_set_debounce" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x6df8f89f, "sysfs_create_group" },
	{ 0x562575e7, "hwmon_device_register_with_groups" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xc5933243, "input_free_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfaf760d9, "regulator_get" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xaac9e1ca, "touchscreen_parse_properties" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2e518b1f, "input_allocate_device" },
	{ 0x62e9350e, "spi_setup" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9e61da5, "touchscreen_report_pos" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x52829b9d, "spi_sync" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x5b325ed6, "regulator_put" },
	{ 0xcdc984a, "hwmon_device_unregister" },
	{ 0x34fa48c2, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x195226fb, "sysfs_remove_group" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd769d20f, "regulator_enable" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x3967f406, "regulator_disable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xc3300fd8, "gpiod_get_raw_value" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,tsc2046");
MODULE_ALIAS("of:N*T*Cti,tsc2046C*");
MODULE_ALIAS("of:N*T*Cti,ads7843");
MODULE_ALIAS("of:N*T*Cti,ads7843C*");
MODULE_ALIAS("of:N*T*Cti,ads7845");
MODULE_ALIAS("of:N*T*Cti,ads7845C*");
MODULE_ALIAS("of:N*T*Cti,ads7846");
MODULE_ALIAS("of:N*T*Cti,ads7846C*");
MODULE_ALIAS("of:N*T*Cti,ads7873");
MODULE_ALIAS("of:N*T*Cti,ads7873C*");

MODULE_INFO(srcversion, "CECB56E0787B73088C5DCCD");
