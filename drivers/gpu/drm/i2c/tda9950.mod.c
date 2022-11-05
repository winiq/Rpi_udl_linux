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
	{ 0x42a8b785, "cec_received_msg_ts" },
	{ 0x773a145d, "cec_transmit_done_ts" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x435f0f05, "devm_remove_action" },
	{ 0xa8c3c1cf, "cec_register_adapter" },
	{ 0x2d5ff02c, "cec_notifier_cec_adap_register" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0x54306ad7, "cec_allocate_adapter" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0x4580431, "cec_delete_adapter" },
	{ 0xd09ca92f, "cec_unregister_adapter" },
	{ 0x8e3988fc, "cec_notifier_cec_adap_unregister" },
};

MODULE_INFO(depends, "cec");

MODULE_ALIAS("i2c:tda9950");

MODULE_INFO(srcversion, "61ADD718A2DCD16A1CD1C7A");
