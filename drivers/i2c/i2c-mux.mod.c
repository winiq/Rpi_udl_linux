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
	{ 0x5d9dd37d, "rt_mutex_lock" },
	{ 0xe6e270eb, "set_primary_fwnode" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8806be4, "i2c_add_adapter" },
	{ 0x43f8da11, "__i2c_smbus_xfer" },
	{ 0x72d884a3, "rt_mutex_trylock" },
	{ 0x349ff37, "rt_mutex_unlock" },
	{ 0x1b46242a, "sysfs_remove_link" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xbcb3aa08, "of_get_child_by_name" },
	{ 0x89e05f28, "i2c_adapter_type" },
	{ 0x7d2a0e1c, "sysfs_create_link" },
	{ 0xe37d4b98, "i2c_del_adapter" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xfad5ad9, "i2c_smbus_xfer" },
	{ 0xbd820064, "i2c_add_numbered_adapter" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf1c848, "acpi_find_child_device" },
	{ 0x83eb276e, "of_get_next_child" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xf2b157ac, "of_node_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x108c8b14, "__i2c_transfer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xa81e214c, "is_acpi_device_node" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7BED06BCD5A3F14A81CCD58");
