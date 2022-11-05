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
	{ 0xa8c3c1cf, "cec_register_adapter" },
	{ 0x2d5ff02c, "cec_notifier_cec_adap_register" },
	{ 0x4580431, "cec_delete_adapter" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xaae25023, "cec_pin_allocate_adapter" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xc47fa31d, "gpiod_to_irq" },
	{ 0xdcb4af72, "devm_gpiod_get" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x5e1b89f2, "cec_notifier_parse_hdmi_phandle" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xa55f0824, "gpiod_set_value" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xef467ef4, "cec_pin_changed" },
	{ 0xdb1482e9, "cec_queue_pin_hpd_event" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3bd45e34, "gpiod_get_value" },
	{ 0x6f622189, "cec_queue_pin_5v_event" },
	{ 0xd09ca92f, "cec_unregister_adapter" },
	{ 0x8e3988fc, "cec_notifier_cec_adap_unregister" },
};

MODULE_INFO(depends, "cec");

MODULE_ALIAS("of:N*T*Ccec-gpio");
MODULE_ALIAS("of:N*T*Ccec-gpioC*");

MODULE_INFO(srcversion, "D6C4F4C856F25003384E030");
