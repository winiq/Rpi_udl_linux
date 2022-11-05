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
	{ 0x6e30e2ed, "net_ns_type_operations" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x23b4cb1a, "macvlan_link_register" },
	{ 0xf0feddb6, "tap_destroy_cdev" },
	{ 0xe0fe63f4, "class_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3f1ea64d, "__class_register" },
	{ 0xb0d91e7, "tap_create_cdev" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x8629e093, "macvlan_common_newlink" },
	{ 0x58442460, "netdev_rx_handler_register" },
	{ 0xb64bee78, "tap_handle_frame" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7d2a0e1c, "sysfs_create_link" },
	{ 0xe38b0aff, "device_create" },
	{ 0xe036e808, "tap_free_minor" },
	{ 0x2bce416, "device_destroy" },
	{ 0x1b46242a, "sysfs_remove_link" },
	{ 0x5c0758de, "tap_queue_resize" },
	{ 0x5931d1be, "tap_get_minor" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x873124b3, "macvlan_common_setup" },
	{ 0xea100baf, "netdev_update_features" },
	{ 0xbc489f23, "macvlan_dellink" },
	{ 0xe20e37f, "tap_del_queues" },
	{ 0x6776b9eb, "netdev_rx_handler_unregister" },
};

MODULE_INFO(depends, "macvlan,tap");


MODULE_INFO(srcversion, "6E52C7C353220FDBFAA8908");
