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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf8e3d882, "iio_buffer_init" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x93c1e1f1, "__devres_alloc_node" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x28b2fc55, "iio_device_attach_buffer" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7ba780fd, "devres_add" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x99f1f5fb, "iio_buffer_put" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "BD9A7A5A5747F79D7CBDE6B");
