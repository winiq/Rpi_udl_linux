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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdc7f230e, "v4l2_async_register_subdev" },
	{ 0xd5dd6c33, "fwnode_graph_get_remote_port_parent" },
	{ 0xc1ae1034, "fwnode_handle_put" },
	{ 0xbbb462ee, "v4l2_async_subdev_notifier_register" },
	{ 0xd838aa66, "v4l2_async_notifier_cleanup" },
	{ 0xa67a1b7c, "v4l2_async_notifier_init" },
	{ 0xa3c918eb, "fwnode_device_is_available" },
	{ 0x93681f59, "fwnode_property_present" },
	{ 0xa3bc5fda, "fwnode_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x282be85c, "__v4l2_async_notifier_add_fwnode_subdev" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x26f5f694, "__v4l2_async_notifier_add_subdev" },
	{ 0xdca50f2c, "is_acpi_data_node" },
	{ 0x436f535d, "fwnode_property_read_u64_array" },
	{ 0x111f4d94, "fwnode_get_name" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0xd8eb9296, "fwnode_property_read_u32_array" },
	{ 0xeb7c9dbf, "fwnode_graph_parse_endpoint" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x3d2005b7, "fwnode_property_get_reference_args" },
	{ 0xf9bf45f9, "fwnode_get_next_child_node" },
	{ 0xc197395f, "fwnode_graph_get_port_parent" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb2b41b8, "fwnode_graph_get_next_endpoint" },
	{ 0xef48ca0f, "dev_fwnode" },
	{ 0x9b186360, "fwnode_graph_get_remote_endpoint" },
	{ 0x164192b7, "v4l2_async_notifier_unregister" },
	{ 0xa81e214c, "is_acpi_device_node" },
};

MODULE_INFO(depends, "v4l2-async");


MODULE_INFO(srcversion, "79ABDABB7C3E3D8B433F0B3");
