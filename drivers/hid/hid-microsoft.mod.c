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
	{ 0xae102ed8, "_dev_info" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x4492ff0e, "input_ff_create_memless" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0xda39556f, "hid_open_report" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x28343fb6, "hid_hw_stop" },
	{ 0x5dae8ffa, "input_event" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v0000045Ep0000003B");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000048");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000DB");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000DC");
MODULE_ALIAS("hid:b0003g*v0000045Ep0000071D");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000F9");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000713");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000730");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000B4");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000750");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000732");
MODULE_ALIAS("hid:b0003g*v0000045Ep0000009D");
MODULE_ALIAS("hid:b0003g*v0000045Ep0000076C");
MODULE_ALIAS("hid:b0003g*v0000045Ep000007DA");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000E3");
MODULE_ALIAS("hid:b0005g*v0000045Ep00000701");
MODULE_ALIAS("hid:b0005g*v0000045Ep0000091B");
MODULE_ALIAS("hid:b0005g*v0000045Ep000002FD");
MODULE_ALIAS("hid:b0005g*v0000045Ep000002E0");

MODULE_INFO(srcversion, "54B3DD8899272B00B7DAFC2");
