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
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdcb4af72, "devm_gpiod_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x5b7371e3, "snd_soc_register_component" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xf6d0e8bb, "snd_soc_unregister_component" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa55f0824, "gpiod_set_value" },
	{ 0xc6f3cca5, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cgoogle,voicehat");
MODULE_ALIAS("of:N*T*Cgoogle,voicehatC*");

MODULE_INFO(srcversion, "BB12B6EEC82BDC279BF90EF");
