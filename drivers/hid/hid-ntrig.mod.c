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
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x719251e9, "hid_unregister_driver" },
	{ 0xf9ce2f6b, "__hid_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x9bbfb761, "__hid_request" },
	{ 0x6df8f89f, "sysfs_create_group" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0xda39556f, "hid_open_report" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x37a0cba, "kfree" },
	{ 0x28343fb6, "hid_hw_stop" },
	{ 0x195226fb, "sysfs_remove_group" },
	{ 0x5dae8ffa, "input_event" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00001B96p00000001");
MODULE_ALIAS("hid:b0003g*v00001B96p00000003");
MODULE_ALIAS("hid:b0003g*v00001B96p00000004");
MODULE_ALIAS("hid:b0003g*v00001B96p00000005");
MODULE_ALIAS("hid:b0003g*v00001B96p00000006");
MODULE_ALIAS("hid:b0003g*v00001B96p00000007");
MODULE_ALIAS("hid:b0003g*v00001B96p00000008");
MODULE_ALIAS("hid:b0003g*v00001B96p00000009");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000A");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000B");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000C");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000D");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000E");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000F");
MODULE_ALIAS("hid:b0003g*v00001B96p00000010");
MODULE_ALIAS("hid:b0003g*v00001B96p00000011");
MODULE_ALIAS("hid:b0003g*v00001B96p00000012");
MODULE_ALIAS("hid:b0003g*v00001B96p00000013");
MODULE_ALIAS("hid:b0003g*v00001B96p00000014");

MODULE_INFO(srcversion, "39CEB4106634C736F5BD305");
