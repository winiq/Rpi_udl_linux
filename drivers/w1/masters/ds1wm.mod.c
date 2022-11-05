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
	{ 0x92997ed8, "_printk" },
	{ 0xa6257a2f, "complete" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x44d8ff71, "w1_add_master_device" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xc06d3edc, "devm_ioremap" },
	{ 0x93fde103, "platform_get_resource" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1cf2bd98, "w1_remove_master_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "DE9D860A7F2FC5EE87D5B60");
