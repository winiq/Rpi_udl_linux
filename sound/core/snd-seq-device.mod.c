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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xed33f52c, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x26a7300c, "driver_register" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc80ea389, "snd_device_new" },
	{ 0xb341ba23, "device_del" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x753af3ce, "device_add" },
	{ 0xea9dab3c, "bus_unregister" },
	{ 0x1af4ad21, "bus_for_each_dev" },
	{ 0x81822a88, "put_device" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x37a0cba, "kfree" },
	{ 0x65219496, "snd_seq_root" },
	{ 0x9a2e62da, "snd_info_free_entry" },
	{ 0xc0346142, "device_initialize" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2f214be5, "snd_info_create_module_entry" },
	{ 0x9770d1d5, "snd_info_register" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "3F6B140A67AC583E7537AB2");
