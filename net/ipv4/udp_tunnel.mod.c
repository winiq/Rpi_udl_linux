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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0xef4346d9, "sock_bindtoindex" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf8d5f58c, "sock_release" },
	{ 0xb9f769d3, "metadata_dst_alloc" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5b4cffec, "call_netdevice_notifiers" },
	{ 0xe742e84a, "sock_create_kern" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xdcb764ad, "memset" },
	{ 0x1f003f7a, "kernel_connect" },
	{ 0xd367601c, "nla_put" },
	{ 0xcd35276f, "iptunnel_xmit" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x41b6b2ef, "kernel_sock_shutdown" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x5da070b7, "ipv6_stub" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xacee0d82, "udp_tunnel_nic_ops" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x3a84a08e, "udp_set_csum" },
	{ 0x106c9f0d, "kernel_bind" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "550AAA91F9BC5970D875C0C");
