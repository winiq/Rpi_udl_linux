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
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x73053428, "dev_err_probe" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x484d38c, "pps_register_source" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc47fa31d, "gpiod_to_irq" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xdf240d2f, "device_property_present" },
	{ 0xdcb4af72, "devm_gpiod_get" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb9f24b2e, "pps_event" },
	{ 0x3bd45e34, "gpiod_get_value" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x4cb27100, "ktime_get_snapshot" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3f8885d0, "pps_unregister_source" },
	{ 0xa55f0824, "gpiod_set_value" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpps-gpio");
MODULE_ALIAS("of:N*T*Cpps-gpioC*");

MODULE_INFO(srcversion, "F819621FD7009AA57B6E27F");
