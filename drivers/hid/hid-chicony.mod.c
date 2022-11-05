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
	{ 0x719251e9, "hid_unregister_driver" },
	{ 0xf9ce2f6b, "__hid_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0xda39556f, "hid_open_report" },
	{ 0x7b3ae27f, "usb_hid_driver" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000004F2p00000418");
MODULE_ALIAS("hid:b0003g*v000004F2p00001123");
MODULE_ALIAS("hid:b0003g*v000004F2p00001236");
MODULE_ALIAS("hid:b0003g*v000004F2p00001421");

MODULE_INFO(srcversion, "0C13CD33BBB8BAE04352A7C");
