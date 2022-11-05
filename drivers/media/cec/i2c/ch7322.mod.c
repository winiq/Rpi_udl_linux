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
	{ 0xa8c3c1cf, "cec_register_adapter" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x4580431, "cec_delete_adapter" },
	{ 0x8e3988fc, "cec_notifier_cec_adap_unregister" },
	{ 0x2d5ff02c, "cec_notifier_cec_adap_register" },
	{ 0x54306ad7, "cec_allocate_adapter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x81822a88, "put_device" },
	{ 0x6182a04c, "bus_find_device" },
	{ 0x86215fcd, "pci_bus_type" },
	{ 0x9fc068b0, "device_match_name" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xde6e9836, "cec_transmit_attempt_done_ts" },
	{ 0x42a8b785, "cec_received_msg_ts" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x80bb0a12, "cec_s_phys_addr" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xd09ca92f, "cec_unregister_adapter" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x45a55acd, "regmap_write" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "cec");

MODULE_ALIAS("of:N*T*Cchrontel,ch7322");
MODULE_ALIAS("of:N*T*Cchrontel,ch7322C*");

MODULE_INFO(srcversion, "F18088B66754A458897A5D3");
