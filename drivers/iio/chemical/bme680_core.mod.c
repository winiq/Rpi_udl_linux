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
	{ 0x6698e9dd, "iio_read_const_attr" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0xff56896e, "regmap_bulk_read" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x6d0b9e10, "acpi_match_device" },
	{ 0x461afb72, "devm_iio_device_alloc" },
	{ 0x6ae24660, "__devm_iio_device_register" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd4b28893, "regmap_get_device" },
	{ 0x45a55acd, "regmap_write" },
	{ 0xa81e214c, "is_acpi_device_node" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "BA284B9CA3AF6A23E1D4C89");
