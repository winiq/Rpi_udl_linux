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
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0x821159a, "__pm_runtime_set_status" },
	{ 0x24a741fd, "__pm_runtime_use_autosuspend" },
	{ 0xc20cc8d8, "pm_runtime_set_autosuspend_delay" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x803a39ab, "devm_rc_register_device" },
	{ 0xb22f8129, "of_get_property" },
	{ 0x44a05a39, "devm_rc_allocate_device" },
	{ 0xc47fa31d, "gpiod_to_irq" },
	{ 0xdcb4af72, "devm_gpiod_get" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x321a87a7, "ir_raw_event_store_edge" },
	{ 0xd929e5d5, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x3bd45e34, "gpiod_get_value" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-ir-receiver");
MODULE_ALIAS("of:N*T*Cgpio-ir-receiverC*");

MODULE_INFO(srcversion, "5DDEB234BED17634DA37C0C");
