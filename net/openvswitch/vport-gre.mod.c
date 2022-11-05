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
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0xb8ca9a82, "ovs_netdev_tunnel_destroy" },
	{ 0x9bc0bd8f, "ovs_vport_ops_unregister" },
	{ 0xa9acd6aa, "__ovs_vport_ops_register" },
	{ 0xf41dbf3f, "ovs_vport_free" },
	{ 0x970394c5, "rtnl_delete_link" },
	{ 0x85d48649, "ovs_netdev_link" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x50e03afe, "dev_change_flags" },
	{ 0xaeb32778, "gretap_fb_dev_create" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x77fe56f5, "ovs_vport_alloc" },
};

MODULE_INFO(depends, "openvswitch,ip_gre");


MODULE_INFO(srcversion, "B62E520D2C4516FC37B1E5C");
