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
	{ 0xbf1e05d4, "iio_kfifo_allocate" },
	{ 0x28b2fc55, "iio_device_attach_buffer" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0xd87bd415, "iio_kfifo_free" },
	{ 0x8851bdc9, "iio_device_id" },
	{ 0x9369b0a1, "iio_alloc_pollfunc" },
	{ 0xec88724f, "iio_dealloc_pollfunc" },
};

MODULE_INFO(depends, "kfifo_buf,industrialio");


MODULE_INFO(srcversion, "7AEF01B9B03EBA8C74E2DE9");
