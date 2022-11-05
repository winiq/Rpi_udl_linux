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
	{ 0xf038e45, "devm_led_classdev_register_ext" },
	{ 0x40061ad3, "input_register_device" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0x28343fb6, "hid_hw_stop" },
	{ 0xdcb764ad, "memset" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0xb85da197, "devm_input_allocate_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xda39556f, "hid_open_report" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x2b27adba, "hid_hw_close" },
	{ 0xcc1fe040, "hid_hw_open" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C225");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C222");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C227");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C22D");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C22E");
MODULE_ALIAS("hid:b0003g*v0000046Dp00000A07");

MODULE_INFO(srcversion, "B18E2535E9751BB6DA9388B");
